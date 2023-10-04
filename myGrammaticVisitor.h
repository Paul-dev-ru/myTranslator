
// Generated from myGrammatic.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "myGrammaticParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by myGrammaticParser.
 */
class  myGrammaticVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by myGrammaticParser.
   */
    virtual antlrcpp::Any visitProgram(myGrammaticParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitStatement(myGrammaticParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(myGrammaticParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitExpression(myGrammaticParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAtom(myGrammaticParser::AtomContext *context) = 0;

    virtual antlrcpp::Any visitVariable(myGrammaticParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitNum(myGrammaticParser::NumContext *context) = 0;

    virtual antlrcpp::Any visitConstant(myGrammaticParser::ConstantContext *context) = 0;


};

