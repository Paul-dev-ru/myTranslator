#pragma once

#include "myGrammaticBaseVisitor.h"
#include <iostream>
#include <cmath>

class MyVisitor : public myGrammaticBaseVisitor
{
public:
    antlrcpp::Any visitProgram(myGrammaticParser::ProgramContext *context) override
    {
        auto statements = context->statement();

        // Перебираем все операторы
        for (auto statement : statements)
        {
            visit(statement);
        }

        // Программа завершается при достижении EOF, так что ничего не возвращаем
        return nullptr;
    }

    antlrcpp::Any visitStatement(myGrammaticParser::StatementContext *context) override
    {
        if (context->assignment())
        {
            return visit(context->assignment());
        }
        else if(context->expression())
        {
            return visit(context->expression());
        }
        else
        {
            std::cerr << "Ошибка: данное утверждение не является присваиванием или выражением" << std::endl;
            return antlrcpp::Any();
        }
    }

    antlrcpp::Any visitAssignment(myGrammaticParser::AssignmentContext *context) override
    {
        std::string variable = context->variable()->getText();
        antlrcpp::Any value = visit(context->expression());
        // Здесь выполняем действие для присваивания переменной
        std::cout << "Assignment: " << variable << " = " << value.as<std::string>() << std::endl;
        return value;
    }

    antlrcpp::Any visitExpression(myGrammaticParser::ExpressionContext *context) override
    {
        //можно сделать гораздо короче обработку контроля возвращаемого типа, но для начала будет так
        if (context->ADD())
        {
            antlrcpp::Any left = visit(context->expression(0));
            antlrcpp::Any right = visit(context->expression(1));

            if (left.is<int>() && right.is<int>())
            {
                int leftValue = left.as<int>();
                int rightValue = right.as<int>();

                return leftValue + rightValue;
            }
            else if (left.is<double>() || right.is<double>())
            {
                // Если хотя бы один операнд является вещественным числом,
                // преобразуем оба операнда к типу double и выполняем сложение
                double leftValue = left.is<int>() ? static_cast<double>(left.as<int>()) : left.as<double>();
                double rightValue = right.is<int>() ? static_cast<double>(right.as<int>()) : right.as<double>();

                return leftValue + rightValue;
            }
            else
            {
                std::cerr << "Ошибка: операнды сложения имеют несовместимые типы." << std::endl;
                return antlrcpp::Any();
            }
        }
        else if (context->SUB())
        {
            antlrcpp::Any left = visit(context->expression(0));
            antlrcpp::Any right = visit(context->expression(1));

            if (left.is<int>() && right.is<int>())
            {
                int leftValue = left.as<int>();
                int rightValue = right.as<int>();

                return leftValue - rightValue;
            }
            else if (left.is<double>() || right.is<double>())
            {
                double leftValue = left.is<int>() ? static_cast<double>(left.as<int>()) : left.as<double>();
                double rightValue = right.is<int>() ? static_cast<double>(right.as<int>()) : right.as<double>();

                return leftValue - rightValue;
            }
            else
            {
                std::cerr << "Ошибка: операнды сложения имеют несовместимые типы." << std::endl;
                return antlrcpp::Any();
            }
        }
        else
        {
            // Если нет операции, просто посещаем атом, выясняя, константа у нас или число
            return visit(context->atom());
        }

    }

    antlrcpp::Any visitAtom(myGrammaticParser::AtomContext *context) override
    {
        if (context->num())
        {
            return visit(context->num());
        }
        else if (context->constant())
        {
            return visit(context->constant());
        }
        else
        {
            std::cerr << "Ошибка: число не является числом или константой, доступной для использования" << std::endl;
            return antlrcpp::Any();
        }
    }

    antlrcpp::Any visitVariable(myGrammaticParser::VariableContext *context) override
    {
        std::string variableName = context->getText();

        // Проверяем, начинается ли имя переменной с буквы или символа подчеркивания
        char firstChar = variableName[0];
        if (!((firstChar >= 'a' && firstChar <= 'z') || (firstChar >= 'A' && firstChar <= 'Z') || (firstChar == '_'))) {
            std::cerr << "Ошибка: Имя переменной должно начинаться с буквы или символа подчеркивания." << std::endl;
            return antlrcpp::Any();
        }

        // Теперь проверяем остальные символы в имени переменной
        for (size_t i = 1; i < variableName.length(); ++i) {
            char ch = variableName[i];
            if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || (ch == '_'))) {
                std::cerr << "Ошибка: Имя переменной может содержать только буквы, цифры и символ подчеркивания." << std::endl;
                return antlrcpp::Any();
            }
        }

        // Если мы добрались сюда, это означает, что имя переменной корректно
        // Здесь вы можете выполнить какие-либо действия с этой переменной, если это необходимо.

        return variableName;
    }

    antlrcpp::Any visitNum(myGrammaticParser::NumContext *context) override
    {
        if (context->INTEGER())
        {
            std::string integerValue = context->INTEGER()->getText();
            // Обработка целого числа integerValue << std::endl;
            return std::stoi(integerValue);
        }
        else if (context->REAL())
        {
            std::string realValue = context->REAL()->getText();
            std::cout << "Real: " << realValue << std::endl;
            return std::stod(realValue);;
        }
        else
        {
            std::cerr << "Ошибка: число не является целым или вещественным" << std::endl;
            return antlrcpp::Any();
        }
    }
    antlrcpp::Any visitConstant(myGrammaticParser::ConstantContext *context) override
    {
        if (context->PI())
        {
            std::cout << "Constant: PI" << std::endl;
            return M_PI;
        }
        else if (context->EULER())
        {
            std::cout << "Constant: EULER" << std::endl;
            return M_E;
        }
        else
        {
            std::cerr << "Ошибка: некорректное указание константы pi или e" << std::endl;
            return antlrcpp::Any();
        }
    }
};
