
// Generated from myGrammatic.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "myGrammaticVisitor.h"


/**
 * This class provides an empty implementation of myGrammaticVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  myGrammaticBaseVisitor : public myGrammaticVisitor {
public:

  virtual antlrcpp::Any visitProgram(myGrammaticParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(myGrammaticParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(myGrammaticParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(myGrammaticParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAtom(myGrammaticParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(myGrammaticParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNum(myGrammaticParser::NumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(myGrammaticParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }


};

