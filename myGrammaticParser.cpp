
// Generated from myGrammatic.g4 by ANTLR 4.7.2


#include "myGrammaticVisitor.h"

#include "myGrammaticParser.h"


using namespace antlrcpp;
using namespace antlr4;

myGrammaticParser::myGrammaticParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

myGrammaticParser::~myGrammaticParser() {
  delete _interpreter;
}

std::string myGrammaticParser::getGrammarFileName() const {
  return "myGrammatic.g4";
}

const std::vector<std::string>& myGrammaticParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& myGrammaticParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

myGrammaticParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myGrammaticParser::ProgramContext::EOF() {
  return getToken(myGrammaticParser::EOF, 0);
}

std::vector<myGrammaticParser::StatementContext *> myGrammaticParser::ProgramContext::statement() {
  return getRuleContexts<myGrammaticParser::StatementContext>();
}

myGrammaticParser::StatementContext* myGrammaticParser::ProgramContext::statement(size_t i) {
  return getRuleContext<myGrammaticParser::StatementContext>(i);
}


size_t myGrammaticParser::ProgramContext::getRuleIndex() const {
  return myGrammaticParser::RuleProgram;
}


antlrcpp::Any myGrammaticParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammaticVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

myGrammaticParser::ProgramContext* myGrammaticParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, myGrammaticParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(19);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << myGrammaticParser::SYMBOL_NUMBER_FOR_ID)
      | (1ULL << myGrammaticParser::INTEGER)
      | (1ULL << myGrammaticParser::REAL)
      | (1ULL << myGrammaticParser::PI)
      | (1ULL << myGrammaticParser::EULER))) != 0)) {
      setState(16);
      statement();
      setState(21);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(22);
    match(myGrammaticParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

myGrammaticParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

myGrammaticParser::AssignmentContext* myGrammaticParser::StatementContext::assignment() {
  return getRuleContext<myGrammaticParser::AssignmentContext>(0);
}

myGrammaticParser::ExpressionContext* myGrammaticParser::StatementContext::expression() {
  return getRuleContext<myGrammaticParser::ExpressionContext>(0);
}


size_t myGrammaticParser::StatementContext::getRuleIndex() const {
  return myGrammaticParser::RuleStatement;
}


antlrcpp::Any myGrammaticParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammaticVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

myGrammaticParser::StatementContext* myGrammaticParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, myGrammaticParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(26);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myGrammaticParser::SYMBOL_NUMBER_FOR_ID: {
        enterOuterAlt(_localctx, 1);
        setState(24);
        assignment();
        break;
      }

      case myGrammaticParser::INTEGER:
      case myGrammaticParser::REAL:
      case myGrammaticParser::PI:
      case myGrammaticParser::EULER: {
        enterOuterAlt(_localctx, 2);
        setState(25);
        expression(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

myGrammaticParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

myGrammaticParser::VariableContext* myGrammaticParser::AssignmentContext::variable() {
  return getRuleContext<myGrammaticParser::VariableContext>(0);
}

tree::TerminalNode* myGrammaticParser::AssignmentContext::ASSIGN() {
  return getToken(myGrammaticParser::ASSIGN, 0);
}

myGrammaticParser::ExpressionContext* myGrammaticParser::AssignmentContext::expression() {
  return getRuleContext<myGrammaticParser::ExpressionContext>(0);
}


size_t myGrammaticParser::AssignmentContext::getRuleIndex() const {
  return myGrammaticParser::RuleAssignment;
}


antlrcpp::Any myGrammaticParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammaticVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

myGrammaticParser::AssignmentContext* myGrammaticParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 4, myGrammaticParser::RuleAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    variable();
    setState(29);
    match(myGrammaticParser::ASSIGN);
    setState(30);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

myGrammaticParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

myGrammaticParser::AtomContext* myGrammaticParser::ExpressionContext::atom() {
  return getRuleContext<myGrammaticParser::AtomContext>(0);
}

std::vector<myGrammaticParser::ExpressionContext *> myGrammaticParser::ExpressionContext::expression() {
  return getRuleContexts<myGrammaticParser::ExpressionContext>();
}

myGrammaticParser::ExpressionContext* myGrammaticParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<myGrammaticParser::ExpressionContext>(i);
}

tree::TerminalNode* myGrammaticParser::ExpressionContext::ADD() {
  return getToken(myGrammaticParser::ADD, 0);
}

tree::TerminalNode* myGrammaticParser::ExpressionContext::SUB() {
  return getToken(myGrammaticParser::SUB, 0);
}


size_t myGrammaticParser::ExpressionContext::getRuleIndex() const {
  return myGrammaticParser::RuleExpression;
}


antlrcpp::Any myGrammaticParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammaticVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


myGrammaticParser::ExpressionContext* myGrammaticParser::expression() {
   return expression(0);
}

myGrammaticParser::ExpressionContext* myGrammaticParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  myGrammaticParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  myGrammaticParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, myGrammaticParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(33);
    atom();
    _ctx->stop = _input->LT(-1);
    setState(43);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(41);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(35);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(36);
          match(myGrammaticParser::ADD);
          setState(37);
          expression(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(38);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(39);
          match(myGrammaticParser::SUB);
          setState(40);
          expression(3);
          break;
        }

        } 
      }
      setState(45);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

myGrammaticParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

myGrammaticParser::NumContext* myGrammaticParser::AtomContext::num() {
  return getRuleContext<myGrammaticParser::NumContext>(0);
}

myGrammaticParser::ConstantContext* myGrammaticParser::AtomContext::constant() {
  return getRuleContext<myGrammaticParser::ConstantContext>(0);
}


size_t myGrammaticParser::AtomContext::getRuleIndex() const {
  return myGrammaticParser::RuleAtom;
}


antlrcpp::Any myGrammaticParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammaticVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

myGrammaticParser::AtomContext* myGrammaticParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 8, myGrammaticParser::RuleAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(48);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case myGrammaticParser::INTEGER:
      case myGrammaticParser::REAL: {
        enterOuterAlt(_localctx, 1);
        setState(46);
        num();
        break;
      }

      case myGrammaticParser::PI:
      case myGrammaticParser::EULER: {
        enterOuterAlt(_localctx, 2);
        setState(47);
        constant();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

myGrammaticParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myGrammaticParser::VariableContext::SYMBOL_NUMBER_FOR_ID() {
  return getToken(myGrammaticParser::SYMBOL_NUMBER_FOR_ID, 0);
}


size_t myGrammaticParser::VariableContext::getRuleIndex() const {
  return myGrammaticParser::RuleVariable;
}


antlrcpp::Any myGrammaticParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammaticVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

myGrammaticParser::VariableContext* myGrammaticParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 10, myGrammaticParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(myGrammaticParser::SYMBOL_NUMBER_FOR_ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumContext ------------------------------------------------------------------

myGrammaticParser::NumContext::NumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myGrammaticParser::NumContext::INTEGER() {
  return getToken(myGrammaticParser::INTEGER, 0);
}

tree::TerminalNode* myGrammaticParser::NumContext::REAL() {
  return getToken(myGrammaticParser::REAL, 0);
}


size_t myGrammaticParser::NumContext::getRuleIndex() const {
  return myGrammaticParser::RuleNum;
}


antlrcpp::Any myGrammaticParser::NumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammaticVisitor*>(visitor))
    return parserVisitor->visitNum(this);
  else
    return visitor->visitChildren(this);
}

myGrammaticParser::NumContext* myGrammaticParser::num() {
  NumContext *_localctx = _tracker.createInstance<NumContext>(_ctx, getState());
  enterRule(_localctx, 12, myGrammaticParser::RuleNum);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    _la = _input->LA(1);
    if (!(_la == myGrammaticParser::INTEGER

    || _la == myGrammaticParser::REAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

myGrammaticParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myGrammaticParser::ConstantContext::PI() {
  return getToken(myGrammaticParser::PI, 0);
}

tree::TerminalNode* myGrammaticParser::ConstantContext::EULER() {
  return getToken(myGrammaticParser::EULER, 0);
}


size_t myGrammaticParser::ConstantContext::getRuleIndex() const {
  return myGrammaticParser::RuleConstant;
}


antlrcpp::Any myGrammaticParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammaticVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

myGrammaticParser::ConstantContext* myGrammaticParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 14, myGrammaticParser::RuleConstant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    _la = _input->LA(1);
    if (!(_la == myGrammaticParser::PI

    || _la == myGrammaticParser::EULER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool myGrammaticParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool myGrammaticParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> myGrammaticParser::_decisionToDFA;
atn::PredictionContextCache myGrammaticParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN myGrammaticParser::_atn;
std::vector<uint16_t> myGrammaticParser::_serializedATN;

std::vector<std::string> myGrammaticParser::_ruleNames = {
  "program", "statement", "assignment", "expression", "atom", "variable", 
  "num", "constant"
};

std::vector<std::string> myGrammaticParser::_literalNames = {
  "", "", "", "", "'pi'", "'e'", "'+'", "'-'", "'='"
};

std::vector<std::string> myGrammaticParser::_symbolicNames = {
  "", "SYMBOL_NUMBER_FOR_ID", "INTEGER", "REAL", "PI", "EULER", "ADD", "SUB", 
  "ASSIGN", "WS"
};

dfa::Vocabulary myGrammaticParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> myGrammaticParser::_tokenNames;

myGrammaticParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xb, 0x3b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x3, 0x2, 0x7, 0x2, 0x14, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0x17, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0x1d, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x2c, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x2f, 
    0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x33, 0xa, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x2, 0x3, 0x8, 
    0xa, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x2, 0x4, 0x3, 0x2, 0x4, 
    0x5, 0x3, 0x2, 0x6, 0x7, 0x2, 0x37, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x1c, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x22, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x32, 0x3, 0x2, 0x2, 0x2, 0xc, 0x34, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x36, 0x3, 0x2, 0x2, 0x2, 0x10, 0x38, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x14, 0x5, 0x4, 0x3, 0x2, 0x13, 0x12, 0x3, 0x2, 0x2, 0x2, 
    0x14, 0x17, 0x3, 0x2, 0x2, 0x2, 0x15, 0x13, 0x3, 0x2, 0x2, 0x2, 0x15, 
    0x16, 0x3, 0x2, 0x2, 0x2, 0x16, 0x18, 0x3, 0x2, 0x2, 0x2, 0x17, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x19, 0x7, 0x2, 0x2, 0x3, 0x19, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x1d, 0x5, 0x6, 0x4, 0x2, 0x1b, 0x1d, 0x5, 0x8, 
    0x5, 0x2, 0x1c, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x1d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x5, 0xc, 0x7, 0x2, 
    0x1f, 0x20, 0x7, 0xa, 0x2, 0x2, 0x20, 0x21, 0x5, 0x8, 0x5, 0x2, 0x21, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x8, 0x5, 0x1, 0x2, 0x23, 0x24, 
    0x5, 0xa, 0x6, 0x2, 0x24, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0xc, 
    0x5, 0x2, 0x2, 0x26, 0x27, 0x7, 0x8, 0x2, 0x2, 0x27, 0x2c, 0x5, 0x8, 
    0x5, 0x6, 0x28, 0x29, 0xc, 0x4, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x9, 0x2, 
    0x2, 0x2a, 0x2c, 0x5, 0x8, 0x5, 0x5, 0x2b, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x2b, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2d, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x30, 0x33, 0x5, 
    0xe, 0x8, 0x2, 0x31, 0x33, 0x5, 0x10, 0x9, 0x2, 0x32, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x35, 0x7, 0x3, 0x2, 0x2, 0x35, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x37, 0x9, 0x2, 0x2, 0x2, 0x37, 0xf, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x39, 0x9, 0x3, 0x2, 0x2, 0x39, 0x11, 0x3, 0x2, 0x2, 0x2, 0x7, 0x15, 
    0x1c, 0x2b, 0x2d, 0x32, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

myGrammaticParser::Initializer myGrammaticParser::_init;
