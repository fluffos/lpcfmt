
// Generated from D:/src/lpcfmt\lpc.g4 by ANTLR 4.9.1


#include "lpcListener.h"
#include "lpcVisitor.h"

#include "lpcParser.h"


using namespace antlrcpp;
using namespace antlr4;

lpcParser::lpcParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

lpcParser::~lpcParser() {
  delete _interpreter;
}

std::string lpcParser::getGrammarFileName() const {
  return "lpc.g4";
}

const std::vector<std::string>& lpcParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& lpcParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

lpcParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::ProgramContext::EOF() {
  return getToken(lpcParser::EOF, 0);
}

std::vector<lpcParser::Preprocessor_invokeContext *> lpcParser::ProgramContext::preprocessor_invoke() {
  return getRuleContexts<lpcParser::Preprocessor_invokeContext>();
}

lpcParser::Preprocessor_invokeContext* lpcParser::ProgramContext::preprocessor_invoke(size_t i) {
  return getRuleContext<lpcParser::Preprocessor_invokeContext>(i);
}

std::vector<lpcParser::DefContext *> lpcParser::ProgramContext::def() {
  return getRuleContexts<lpcParser::DefContext>();
}

lpcParser::DefContext* lpcParser::ProgramContext::def(size_t i) {
  return getRuleContext<lpcParser::DefContext>(i);
}


size_t lpcParser::ProgramContext::getRuleIndex() const {
  return lpcParser::RuleProgram;
}

void lpcParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void lpcParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any lpcParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::ProgramContext* lpcParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, lpcParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 1) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 1)) & ((1ULL << (lpcParser::T__0 - 1))
      | (1ULL << (lpcParser::T__4 - 1))
      | (1ULL << (lpcParser::T__5 - 1))
      | (1ULL << (lpcParser::L_CLASS - 1))
      | (1ULL << (lpcParser::L_BASIC_TYPE - 1))
      | (1ULL << (lpcParser::L_INHERIT - 1))
      | (1ULL << (lpcParser::L_TYPE_MODIFIER - 1))
      | (1ULL << (lpcParser::L_IDENTIFIER - 1))
      | (1ULL << (lpcParser::L_ARRAY - 1)))) != 0)) {
      setState(159);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(156);
        preprocessor_invoke();
        break;
      }

      case 2: {
        setState(157);
        def();
        break;
      }

      case 3: {
        setState(158);
        match(lpcParser::T__0);
        break;
      }

      default:
        break;
      }
      setState(163);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(164);
    match(lpcParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Preprocessor_invoke_arglistContext ------------------------------------------------------------------

lpcParser::Preprocessor_invoke_arglistContext::Preprocessor_invoke_arglistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Preprocessor_invokeContext* lpcParser::Preprocessor_invoke_arglistContext::preprocessor_invoke() {
  return getRuleContext<lpcParser::Preprocessor_invokeContext>(0);
}

tree::TerminalNode* lpcParser::Preprocessor_invoke_arglistContext::L_STRING() {
  return getToken(lpcParser::L_STRING, 0);
}

std::vector<lpcParser::Preprocessor_invoke_arglistContext *> lpcParser::Preprocessor_invoke_arglistContext::preprocessor_invoke_arglist() {
  return getRuleContexts<lpcParser::Preprocessor_invoke_arglistContext>();
}

lpcParser::Preprocessor_invoke_arglistContext* lpcParser::Preprocessor_invoke_arglistContext::preprocessor_invoke_arglist(size_t i) {
  return getRuleContext<lpcParser::Preprocessor_invoke_arglistContext>(i);
}


size_t lpcParser::Preprocessor_invoke_arglistContext::getRuleIndex() const {
  return lpcParser::RulePreprocessor_invoke_arglist;
}

void lpcParser::Preprocessor_invoke_arglistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessor_invoke_arglist(this);
}

void lpcParser::Preprocessor_invoke_arglistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessor_invoke_arglist(this);
}


antlrcpp::Any lpcParser::Preprocessor_invoke_arglistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitPreprocessor_invoke_arglist(this);
  else
    return visitor->visitChildren(this);
}


lpcParser::Preprocessor_invoke_arglistContext* lpcParser::preprocessor_invoke_arglist() {
   return preprocessor_invoke_arglist(0);
}

lpcParser::Preprocessor_invoke_arglistContext* lpcParser::preprocessor_invoke_arglist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  lpcParser::Preprocessor_invoke_arglistContext *_localctx = _tracker.createInstance<Preprocessor_invoke_arglistContext>(_ctx, parentState);
  lpcParser::Preprocessor_invoke_arglistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, lpcParser::RulePreprocessor_invoke_arglist, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(169);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lpcParser::L_IDENTIFIER: {
        setState(167);
        preprocessor_invoke();
        break;
      }

      case lpcParser::L_STRING: {
        setState(168);
        match(lpcParser::L_STRING);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(176);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Preprocessor_invoke_arglistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePreprocessor_invoke_arglist);
        setState(171);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(172);
        match(lpcParser::T__1);
        setState(173);
        preprocessor_invoke_arglist(3); 
      }
      setState(178);
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

//----------------- Preprocessor_invokeContext ------------------------------------------------------------------

lpcParser::Preprocessor_invokeContext::Preprocessor_invokeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::Preprocessor_invokeContext::L_IDENTIFIER() {
  return getToken(lpcParser::L_IDENTIFIER, 0);
}

lpcParser::Preprocessor_invoke_arglistContext* lpcParser::Preprocessor_invokeContext::preprocessor_invoke_arglist() {
  return getRuleContext<lpcParser::Preprocessor_invoke_arglistContext>(0);
}


size_t lpcParser::Preprocessor_invokeContext::getRuleIndex() const {
  return lpcParser::RulePreprocessor_invoke;
}

void lpcParser::Preprocessor_invokeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessor_invoke(this);
}

void lpcParser::Preprocessor_invokeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessor_invoke(this);
}


antlrcpp::Any lpcParser::Preprocessor_invokeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitPreprocessor_invoke(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Preprocessor_invokeContext* lpcParser::preprocessor_invoke() {
  Preprocessor_invokeContext *_localctx = _tracker.createInstance<Preprocessor_invokeContext>(_ctx, getState());
  enterRule(_localctx, 4, lpcParser::RulePreprocessor_invoke);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(185);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(179);
      match(lpcParser::L_IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(180);
      match(lpcParser::L_IDENTIFIER);
      setState(181);
      match(lpcParser::T__2);

      setState(182);
      preprocessor_invoke_arglist(0);
      setState(183);
      match(lpcParser::T__3);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InheritanceContext ------------------------------------------------------------------

lpcParser::InheritanceContext::InheritanceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Type_modifier_listContext* lpcParser::InheritanceContext::type_modifier_list() {
  return getRuleContext<lpcParser::Type_modifier_listContext>(0);
}

tree::TerminalNode* lpcParser::InheritanceContext::L_INHERIT() {
  return getToken(lpcParser::L_INHERIT, 0);
}

lpcParser::String_con1Context* lpcParser::InheritanceContext::string_con1() {
  return getRuleContext<lpcParser::String_con1Context>(0);
}


size_t lpcParser::InheritanceContext::getRuleIndex() const {
  return lpcParser::RuleInheritance;
}

void lpcParser::InheritanceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInheritance(this);
}

void lpcParser::InheritanceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInheritance(this);
}


antlrcpp::Any lpcParser::InheritanceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitInheritance(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::InheritanceContext* lpcParser::inheritance() {
  InheritanceContext *_localctx = _tracker.createInstance<InheritanceContext>(_ctx, getState());
  enterRule(_localctx, 6, lpcParser::RuleInheritance);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    type_modifier_list();
    setState(188);
    match(lpcParser::L_INHERIT);
    setState(189);
    string_con1(0);
    setState(190);
    match(lpcParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RealContext ------------------------------------------------------------------

lpcParser::RealContext::RealContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::RealContext::L_REAL() {
  return getToken(lpcParser::L_REAL, 0);
}


size_t lpcParser::RealContext::getRuleIndex() const {
  return lpcParser::RuleReal;
}

void lpcParser::RealContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReal(this);
}

void lpcParser::RealContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReal(this);
}


antlrcpp::Any lpcParser::RealContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitReal(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::RealContext* lpcParser::real() {
  RealContext *_localctx = _tracker.createInstance<RealContext>(_ctx, getState());
  enterRule(_localctx, 8, lpcParser::RuleReal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(lpcParser::L_REAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

lpcParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::NumberContext::L_NUMBER() {
  return getToken(lpcParser::L_NUMBER, 0);
}


size_t lpcParser::NumberContext::getRuleIndex() const {
  return lpcParser::RuleNumber;
}

void lpcParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void lpcParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}


antlrcpp::Any lpcParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::NumberContext* lpcParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 10, lpcParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(lpcParser::L_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Optional_starContext ------------------------------------------------------------------

lpcParser::Optional_starContext::Optional_starContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t lpcParser::Optional_starContext::getRuleIndex() const {
  return lpcParser::RuleOptional_star;
}

void lpcParser::Optional_starContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptional_star(this);
}

void lpcParser::Optional_starContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptional_star(this);
}


antlrcpp::Any lpcParser::Optional_starContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitOptional_star(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Optional_starContext* lpcParser::optional_star() {
  Optional_starContext *_localctx = _tracker.createInstance<Optional_starContext>(_ctx, getState());
  enterRule(_localctx, 12, lpcParser::RuleOptional_star);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == lpcParser::T__4) {
      setState(196);
      match(lpcParser::T__4);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Block_or_semiContext ------------------------------------------------------------------

lpcParser::Block_or_semiContext::Block_or_semiContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::BlockContext* lpcParser::Block_or_semiContext::block() {
  return getRuleContext<lpcParser::BlockContext>(0);
}

lpcParser::ErrorContext* lpcParser::Block_or_semiContext::error() {
  return getRuleContext<lpcParser::ErrorContext>(0);
}


size_t lpcParser::Block_or_semiContext::getRuleIndex() const {
  return lpcParser::RuleBlock_or_semi;
}

void lpcParser::Block_or_semiContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock_or_semi(this);
}

void lpcParser::Block_or_semiContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock_or_semi(this);
}


antlrcpp::Any lpcParser::Block_or_semiContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitBlock_or_semi(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Block_or_semiContext* lpcParser::block_or_semi() {
  Block_or_semiContext *_localctx = _tracker.createInstance<Block_or_semiContext>(_ctx, getState());
  enterRule(_localctx, 14, lpcParser::RuleBlock_or_semi);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(202);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lpcParser::T__6: {
        enterOuterAlt(_localctx, 1);
        setState(199);
        block();
        break;
      }

      case lpcParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(200);
        match(lpcParser::T__0);
        break;
      }

      case lpcParser::L_ERROR: {
        enterOuterAlt(_localctx, 3);
        setState(201);
        error();
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

//----------------- IdentifierContext ------------------------------------------------------------------

lpcParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::IdentifierContext::L_IDENTIFIER() {
  return getToken(lpcParser::L_IDENTIFIER, 0);
}


size_t lpcParser::IdentifierContext::getRuleIndex() const {
  return lpcParser::RuleIdentifier;
}

void lpcParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void lpcParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any lpcParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::IdentifierContext* lpcParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 16, lpcParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(lpcParser::L_IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

lpcParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::TypeContext* lpcParser::FunctionContext::type() {
  return getRuleContext<lpcParser::TypeContext>(0);
}

lpcParser::Optional_starContext* lpcParser::FunctionContext::optional_star() {
  return getRuleContext<lpcParser::Optional_starContext>(0);
}

lpcParser::IdentifierContext* lpcParser::FunctionContext::identifier() {
  return getRuleContext<lpcParser::IdentifierContext>(0);
}

lpcParser::ArgumentContext* lpcParser::FunctionContext::argument() {
  return getRuleContext<lpcParser::ArgumentContext>(0);
}

lpcParser::Block_or_semiContext* lpcParser::FunctionContext::block_or_semi() {
  return getRuleContext<lpcParser::Block_or_semiContext>(0);
}


size_t lpcParser::FunctionContext::getRuleIndex() const {
  return lpcParser::RuleFunction;
}

void lpcParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void lpcParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}


antlrcpp::Any lpcParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::FunctionContext* lpcParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 18, lpcParser::RuleFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    type();
    setState(207);
    optional_star();
    setState(208);
    identifier();
    setState(209);
    match(lpcParser::T__2);
    setState(210);
    argument();
    setState(211);
    match(lpcParser::T__3);
    setState(212);
    block_or_semi();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefContext ------------------------------------------------------------------

lpcParser::DefContext::DefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::FunctionContext* lpcParser::DefContext::function() {
  return getRuleContext<lpcParser::FunctionContext>(0);
}

lpcParser::VarContext* lpcParser::DefContext::var() {
  return getRuleContext<lpcParser::VarContext>(0);
}

lpcParser::InheritanceContext* lpcParser::DefContext::inheritance() {
  return getRuleContext<lpcParser::InheritanceContext>(0);
}

lpcParser::Type_declContext* lpcParser::DefContext::type_decl() {
  return getRuleContext<lpcParser::Type_declContext>(0);
}

lpcParser::Modifier_changeContext* lpcParser::DefContext::modifier_change() {
  return getRuleContext<lpcParser::Modifier_changeContext>(0);
}


size_t lpcParser::DefContext::getRuleIndex() const {
  return lpcParser::RuleDef;
}

void lpcParser::DefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDef(this);
}

void lpcParser::DefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDef(this);
}


antlrcpp::Any lpcParser::DefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitDef(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::DefContext* lpcParser::def() {
  DefContext *_localctx = _tracker.createInstance<DefContext>(_ctx, getState());
  enterRule(_localctx, 20, lpcParser::RuleDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(219);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(214);
      function();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(215);
      var();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(216);
      inheritance();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(217);
      type_decl();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(218);
      modifier_change();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarContext ------------------------------------------------------------------

lpcParser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::TypeContext* lpcParser::VarContext::type() {
  return getRuleContext<lpcParser::TypeContext>(0);
}

std::vector<lpcParser::New_nameContext *> lpcParser::VarContext::new_name() {
  return getRuleContexts<lpcParser::New_nameContext>();
}

lpcParser::New_nameContext* lpcParser::VarContext::new_name(size_t i) {
  return getRuleContext<lpcParser::New_nameContext>(i);
}


size_t lpcParser::VarContext::getRuleIndex() const {
  return lpcParser::RuleVar;
}

void lpcParser::VarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar(this);
}

void lpcParser::VarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar(this);
}


antlrcpp::Any lpcParser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::VarContext* lpcParser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 22, lpcParser::RuleVar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    type();
    setState(222);
    new_name();
    setState(227);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lpcParser::T__1) {
      setState(223);
      match(lpcParser::T__1);
      setState(224);
      new_name();
      setState(229);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(230);
    match(lpcParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Modifier_changeContext ------------------------------------------------------------------

lpcParser::Modifier_changeContext::Modifier_changeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Type_modifier_listContext* lpcParser::Modifier_changeContext::type_modifier_list() {
  return getRuleContext<lpcParser::Type_modifier_listContext>(0);
}


size_t lpcParser::Modifier_changeContext::getRuleIndex() const {
  return lpcParser::RuleModifier_change;
}

void lpcParser::Modifier_changeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModifier_change(this);
}

void lpcParser::Modifier_changeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModifier_change(this);
}


antlrcpp::Any lpcParser::Modifier_changeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitModifier_change(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Modifier_changeContext* lpcParser::modifier_change() {
  Modifier_changeContext *_localctx = _tracker.createInstance<Modifier_changeContext>(_ctx, getState());
  enterRule(_localctx, 24, lpcParser::RuleModifier_change);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    type_modifier_list();
    setState(233);
    match(lpcParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Member_nameContext ------------------------------------------------------------------

lpcParser::Member_nameContext::Member_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Optional_starContext* lpcParser::Member_nameContext::optional_star() {
  return getRuleContext<lpcParser::Optional_starContext>(0);
}

lpcParser::IdentifierContext* lpcParser::Member_nameContext::identifier() {
  return getRuleContext<lpcParser::IdentifierContext>(0);
}


size_t lpcParser::Member_nameContext::getRuleIndex() const {
  return lpcParser::RuleMember_name;
}

void lpcParser::Member_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember_name(this);
}

void lpcParser::Member_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember_name(this);
}


antlrcpp::Any lpcParser::Member_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitMember_name(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Member_nameContext* lpcParser::member_name() {
  Member_nameContext *_localctx = _tracker.createInstance<Member_nameContext>(_ctx, getState());
  enterRule(_localctx, 26, lpcParser::RuleMember_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    optional_star();
    setState(236);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_declContext ------------------------------------------------------------------

lpcParser::Type_declContext::Type_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Type_modifier_listContext* lpcParser::Type_declContext::type_modifier_list() {
  return getRuleContext<lpcParser::Type_modifier_listContext>(0);
}

tree::TerminalNode* lpcParser::Type_declContext::L_CLASS() {
  return getToken(lpcParser::L_CLASS, 0);
}

lpcParser::IdentifierContext* lpcParser::Type_declContext::identifier() {
  return getRuleContext<lpcParser::IdentifierContext>(0);
}

std::vector<lpcParser::Basic_typeContext *> lpcParser::Type_declContext::basic_type() {
  return getRuleContexts<lpcParser::Basic_typeContext>();
}

lpcParser::Basic_typeContext* lpcParser::Type_declContext::basic_type(size_t i) {
  return getRuleContext<lpcParser::Basic_typeContext>(i);
}

std::vector<lpcParser::Member_nameContext *> lpcParser::Type_declContext::member_name() {
  return getRuleContexts<lpcParser::Member_nameContext>();
}

lpcParser::Member_nameContext* lpcParser::Type_declContext::member_name(size_t i) {
  return getRuleContext<lpcParser::Member_nameContext>(i);
}


size_t lpcParser::Type_declContext::getRuleIndex() const {
  return lpcParser::RuleType_decl;
}

void lpcParser::Type_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_decl(this);
}

void lpcParser::Type_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_decl(this);
}


antlrcpp::Any lpcParser::Type_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitType_decl(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Type_declContext* lpcParser::type_decl() {
  Type_declContext *_localctx = _tracker.createInstance<Type_declContext>(_ctx, getState());
  enterRule(_localctx, 28, lpcParser::RuleType_decl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(238);
    type_modifier_list();
    setState(239);
    match(lpcParser::L_CLASS);
    setState(240);
    identifier();
    setState(241);
    match(lpcParser::T__6);
    setState(256);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 32) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 32)) & ((1ULL << (lpcParser::L_CLASS - 32))
      | (1ULL << (lpcParser::L_BASIC_TYPE - 32))
      | (1ULL << (lpcParser::L_ARRAY - 32)))) != 0)) {
      setState(242);
      basic_type();
      setState(248);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(243);
          member_name();
          setState(244);
          match(lpcParser::T__1); 
        }
        setState(250);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
      }
      setState(251);
      member_name();
      setState(252);
      match(lpcParser::T__0);
      setState(258);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(259);
    match(lpcParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- New_local_nameContext ------------------------------------------------------------------

lpcParser::New_local_nameContext::New_local_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::New_local_nameContext::L_IDENTIFIER() {
  return getToken(lpcParser::L_IDENTIFIER, 0);
}


size_t lpcParser::New_local_nameContext::getRuleIndex() const {
  return lpcParser::RuleNew_local_name;
}

void lpcParser::New_local_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNew_local_name(this);
}

void lpcParser::New_local_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNew_local_name(this);
}


antlrcpp::Any lpcParser::New_local_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitNew_local_name(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::New_local_nameContext* lpcParser::new_local_name() {
  New_local_nameContext *_localctx = _tracker.createInstance<New_local_nameContext>(_ctx, getState());
  enterRule(_localctx, 30, lpcParser::RuleNew_local_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    match(lpcParser::L_IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atomic_typeContext ------------------------------------------------------------------

lpcParser::Atomic_typeContext::Atomic_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::Atomic_typeContext::L_BASIC_TYPE() {
  return getToken(lpcParser::L_BASIC_TYPE, 0);
}

tree::TerminalNode* lpcParser::Atomic_typeContext::L_CLASS() {
  return getToken(lpcParser::L_CLASS, 0);
}

tree::TerminalNode* lpcParser::Atomic_typeContext::L_IDENTIFIER() {
  return getToken(lpcParser::L_IDENTIFIER, 0);
}


size_t lpcParser::Atomic_typeContext::getRuleIndex() const {
  return lpcParser::RuleAtomic_type;
}

void lpcParser::Atomic_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomic_type(this);
}

void lpcParser::Atomic_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomic_type(this);
}


antlrcpp::Any lpcParser::Atomic_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitAtomic_type(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Atomic_typeContext* lpcParser::atomic_type() {
  Atomic_typeContext *_localctx = _tracker.createInstance<Atomic_typeContext>(_ctx, getState());
  enterRule(_localctx, 32, lpcParser::RuleAtomic_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(266);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lpcParser::L_BASIC_TYPE: {
        enterOuterAlt(_localctx, 1);
        setState(263);
        match(lpcParser::L_BASIC_TYPE);
        break;
      }

      case lpcParser::L_CLASS: {
        enterOuterAlt(_localctx, 2);
        setState(264);
        match(lpcParser::L_CLASS);
        setState(265);
        match(lpcParser::L_IDENTIFIER);
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

//----------------- Opt_atomic_typeContext ------------------------------------------------------------------

lpcParser::Opt_atomic_typeContext::Opt_atomic_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Atomic_typeContext* lpcParser::Opt_atomic_typeContext::atomic_type() {
  return getRuleContext<lpcParser::Atomic_typeContext>(0);
}


size_t lpcParser::Opt_atomic_typeContext::getRuleIndex() const {
  return lpcParser::RuleOpt_atomic_type;
}

void lpcParser::Opt_atomic_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpt_atomic_type(this);
}

void lpcParser::Opt_atomic_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpt_atomic_type(this);
}


antlrcpp::Any lpcParser::Opt_atomic_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitOpt_atomic_type(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Opt_atomic_typeContext* lpcParser::opt_atomic_type() {
  Opt_atomic_typeContext *_localctx = _tracker.createInstance<Opt_atomic_typeContext>(_ctx, getState());
  enterRule(_localctx, 34, lpcParser::RuleOpt_atomic_type);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == lpcParser::L_CLASS

    || _la == lpcParser::L_BASIC_TYPE) {
      setState(268);
      atomic_type();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Basic_typeContext ------------------------------------------------------------------

lpcParser::Basic_typeContext::Basic_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Atomic_typeContext* lpcParser::Basic_typeContext::atomic_type() {
  return getRuleContext<lpcParser::Atomic_typeContext>(0);
}

lpcParser::Opt_atomic_typeContext* lpcParser::Basic_typeContext::opt_atomic_type() {
  return getRuleContext<lpcParser::Opt_atomic_typeContext>(0);
}

tree::TerminalNode* lpcParser::Basic_typeContext::L_ARRAY() {
  return getToken(lpcParser::L_ARRAY, 0);
}


size_t lpcParser::Basic_typeContext::getRuleIndex() const {
  return lpcParser::RuleBasic_type;
}

void lpcParser::Basic_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasic_type(this);
}

void lpcParser::Basic_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasic_type(this);
}


antlrcpp::Any lpcParser::Basic_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitBasic_type(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Basic_typeContext* lpcParser::basic_type() {
  Basic_typeContext *_localctx = _tracker.createInstance<Basic_typeContext>(_ctx, getState());
  enterRule(_localctx, 36, lpcParser::RuleBasic_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(275);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(271);
      atomic_type();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(272);
      opt_atomic_type();
      setState(273);
      match(lpcParser::L_ARRAY);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arg_typeContext ------------------------------------------------------------------

lpcParser::Arg_typeContext::Arg_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Basic_typeContext* lpcParser::Arg_typeContext::basic_type() {
  return getRuleContext<lpcParser::Basic_typeContext>(0);
}

lpcParser::RefContext* lpcParser::Arg_typeContext::ref() {
  return getRuleContext<lpcParser::RefContext>(0);
}


size_t lpcParser::Arg_typeContext::getRuleIndex() const {
  return lpcParser::RuleArg_type;
}

void lpcParser::Arg_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg_type(this);
}

void lpcParser::Arg_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg_type(this);
}


antlrcpp::Any lpcParser::Arg_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitArg_type(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Arg_typeContext* lpcParser::arg_type() {
  Arg_typeContext *_localctx = _tracker.createInstance<Arg_typeContext>(_ctx, getState());
  enterRule(_localctx, 38, lpcParser::RuleArg_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(281);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(277);
      basic_type();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(278);
      basic_type();
      setState(279);
      ref();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- New_argContext ------------------------------------------------------------------

lpcParser::New_argContext::New_argContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Arg_typeContext* lpcParser::New_argContext::arg_type() {
  return getRuleContext<lpcParser::Arg_typeContext>(0);
}

lpcParser::Optional_starContext* lpcParser::New_argContext::optional_star() {
  return getRuleContext<lpcParser::Optional_starContext>(0);
}

lpcParser::New_local_nameContext* lpcParser::New_argContext::new_local_name() {
  return getRuleContext<lpcParser::New_local_nameContext>(0);
}


size_t lpcParser::New_argContext::getRuleIndex() const {
  return lpcParser::RuleNew_arg;
}

void lpcParser::New_argContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNew_arg(this);
}

void lpcParser::New_argContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNew_arg(this);
}


antlrcpp::Any lpcParser::New_argContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitNew_arg(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::New_argContext* lpcParser::new_arg() {
  New_argContext *_localctx = _tracker.createInstance<New_argContext>(_ctx, getState());
  enterRule(_localctx, 40, lpcParser::RuleNew_arg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(291);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(283);
      arg_type();
      setState(284);
      optional_star();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(286);
      arg_type();
      setState(287);
      optional_star();
      setState(288);
      new_local_name();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(290);
      new_local_name();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

lpcParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Argument_listContext* lpcParser::ArgumentContext::argument_list() {
  return getRuleContext<lpcParser::Argument_listContext>(0);
}

tree::TerminalNode* lpcParser::ArgumentContext::L_DOT_DOT_DOT() {
  return getToken(lpcParser::L_DOT_DOT_DOT, 0);
}


size_t lpcParser::ArgumentContext::getRuleIndex() const {
  return lpcParser::RuleArgument;
}

void lpcParser::ArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument(this);
}

void lpcParser::ArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument(this);
}


antlrcpp::Any lpcParser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::ArgumentContext* lpcParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 42, lpcParser::RuleArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(293);
      argument_list();
      break;
    }

    case 2: {
      setState(294);
      argument_list();
      setState(295);
      match(lpcParser::L_DOT_DOT_DOT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Argument_listContext ------------------------------------------------------------------

lpcParser::Argument_listContext::Argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<lpcParser::New_argContext *> lpcParser::Argument_listContext::new_arg() {
  return getRuleContexts<lpcParser::New_argContext>();
}

lpcParser::New_argContext* lpcParser::Argument_listContext::new_arg(size_t i) {
  return getRuleContext<lpcParser::New_argContext>(i);
}


size_t lpcParser::Argument_listContext::getRuleIndex() const {
  return lpcParser::RuleArgument_list;
}

void lpcParser::Argument_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument_list(this);
}

void lpcParser::Argument_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument_list(this);
}


antlrcpp::Any lpcParser::Argument_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitArgument_list(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Argument_listContext* lpcParser::argument_list() {
  Argument_listContext *_localctx = _tracker.createInstance<Argument_listContext>(_ctx, getState());
  enterRule(_localctx, 44, lpcParser::RuleArgument_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(299);
    new_arg();
    setState(304);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lpcParser::T__1) {
      setState(300);
      match(lpcParser::T__1);
      setState(301);
      new_arg();
      setState(306);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_modifier_listContext ------------------------------------------------------------------

lpcParser::Type_modifier_listContext::Type_modifier_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> lpcParser::Type_modifier_listContext::L_TYPE_MODIFIER() {
  return getTokens(lpcParser::L_TYPE_MODIFIER);
}

tree::TerminalNode* lpcParser::Type_modifier_listContext::L_TYPE_MODIFIER(size_t i) {
  return getToken(lpcParser::L_TYPE_MODIFIER, i);
}


size_t lpcParser::Type_modifier_listContext::getRuleIndex() const {
  return lpcParser::RuleType_modifier_list;
}

void lpcParser::Type_modifier_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_modifier_list(this);
}

void lpcParser::Type_modifier_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_modifier_list(this);
}


antlrcpp::Any lpcParser::Type_modifier_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitType_modifier_list(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Type_modifier_listContext* lpcParser::type_modifier_list() {
  Type_modifier_listContext *_localctx = _tracker.createInstance<Type_modifier_listContext>(_ctx, getState());
  enterRule(_localctx, 46, lpcParser::RuleType_modifier_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(310);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lpcParser::L_TYPE_MODIFIER) {
      setState(307);
      match(lpcParser::L_TYPE_MODIFIER);
      setState(312);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

lpcParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Type_modifier_listContext* lpcParser::TypeContext::type_modifier_list() {
  return getRuleContext<lpcParser::Type_modifier_listContext>(0);
}

lpcParser::Opt_basic_typeContext* lpcParser::TypeContext::opt_basic_type() {
  return getRuleContext<lpcParser::Opt_basic_typeContext>(0);
}


size_t lpcParser::TypeContext::getRuleIndex() const {
  return lpcParser::RuleType;
}

void lpcParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void lpcParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


antlrcpp::Any lpcParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::TypeContext* lpcParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 48, lpcParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    type_modifier_list();
    setState(314);
    opt_basic_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastContext ------------------------------------------------------------------

lpcParser::CastContext::CastContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Basic_typeContext* lpcParser::CastContext::basic_type() {
  return getRuleContext<lpcParser::Basic_typeContext>(0);
}

lpcParser::Optional_starContext* lpcParser::CastContext::optional_star() {
  return getRuleContext<lpcParser::Optional_starContext>(0);
}


size_t lpcParser::CastContext::getRuleIndex() const {
  return lpcParser::RuleCast;
}

void lpcParser::CastContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCast(this);
}

void lpcParser::CastContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCast(this);
}


antlrcpp::Any lpcParser::CastContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitCast(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::CastContext* lpcParser::cast() {
  CastContext *_localctx = _tracker.createInstance<CastContext>(_ctx, getState());
  enterRule(_localctx, 50, lpcParser::RuleCast);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    match(lpcParser::T__2);
    setState(317);
    basic_type();
    setState(318);
    optional_star();
    setState(319);
    match(lpcParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Opt_basic_typeContext ------------------------------------------------------------------

lpcParser::Opt_basic_typeContext::Opt_basic_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Basic_typeContext* lpcParser::Opt_basic_typeContext::basic_type() {
  return getRuleContext<lpcParser::Basic_typeContext>(0);
}


size_t lpcParser::Opt_basic_typeContext::getRuleIndex() const {
  return lpcParser::RuleOpt_basic_type;
}

void lpcParser::Opt_basic_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpt_basic_type(this);
}

void lpcParser::Opt_basic_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpt_basic_type(this);
}


antlrcpp::Any lpcParser::Opt_basic_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitOpt_basic_type(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Opt_basic_typeContext* lpcParser::opt_basic_type() {
  Opt_basic_typeContext *_localctx = _tracker.createInstance<Opt_basic_typeContext>(_ctx, getState());
  enterRule(_localctx, 52, lpcParser::RuleOpt_basic_type);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 32) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 32)) & ((1ULL << (lpcParser::L_CLASS - 32))
      | (1ULL << (lpcParser::L_BASIC_TYPE - 32))
      | (1ULL << (lpcParser::L_ARRAY - 32)))) != 0)) {
      setState(321);
      basic_type();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- New_nameContext ------------------------------------------------------------------

lpcParser::New_nameContext::New_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Optional_starContext* lpcParser::New_nameContext::optional_star() {
  return getRuleContext<lpcParser::Optional_starContext>(0);
}

lpcParser::IdentifierContext* lpcParser::New_nameContext::identifier() {
  return getRuleContext<lpcParser::IdentifierContext>(0);
}

tree::TerminalNode* lpcParser::New_nameContext::L_ASSIGN() {
  return getToken(lpcParser::L_ASSIGN, 0);
}

lpcParser::Expr0Context* lpcParser::New_nameContext::expr0() {
  return getRuleContext<lpcParser::Expr0Context>(0);
}


size_t lpcParser::New_nameContext::getRuleIndex() const {
  return lpcParser::RuleNew_name;
}

void lpcParser::New_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNew_name(this);
}

void lpcParser::New_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNew_name(this);
}


antlrcpp::Any lpcParser::New_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitNew_name(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::New_nameContext* lpcParser::new_name() {
  New_nameContext *_localctx = _tracker.createInstance<New_nameContext>(_ctx, getState());
  enterRule(_localctx, 54, lpcParser::RuleNew_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(332);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(324);
      optional_star();
      setState(325);
      identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(327);
      optional_star();
      setState(328);
      identifier();
      setState(329);
      match(lpcParser::L_ASSIGN);
      setState(330);
      expr0(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

lpcParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Local_declarationsContext* lpcParser::BlockContext::local_declarations() {
  return getRuleContext<lpcParser::Local_declarationsContext>(0);
}

std::vector<lpcParser::StatementContext *> lpcParser::BlockContext::statement() {
  return getRuleContexts<lpcParser::StatementContext>();
}

lpcParser::StatementContext* lpcParser::BlockContext::statement(size_t i) {
  return getRuleContext<lpcParser::StatementContext>(i);
}

lpcParser::ErrorContext* lpcParser::BlockContext::error() {
  return getRuleContext<lpcParser::ErrorContext>(0);
}


size_t lpcParser::BlockContext::getRuleIndex() const {
  return lpcParser::RuleBlock;
}

void lpcParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void lpcParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any lpcParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::BlockContext* lpcParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 56, lpcParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(334);
    match(lpcParser::T__6);
    setState(335);
    local_declarations();
    setState(339);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(336);
        statement(); 
      }
      setState(341);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
    setState(345);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == lpcParser::L_ERROR) {
      setState(342);
      error();
      setState(343);
      match(lpcParser::T__0);
    }
    setState(347);
    match(lpcParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Decl_blockContext ------------------------------------------------------------------

lpcParser::Decl_blockContext::Decl_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::BlockContext* lpcParser::Decl_blockContext::block() {
  return getRuleContext<lpcParser::BlockContext>(0);
}

lpcParser::For_stmtContext* lpcParser::Decl_blockContext::for_stmt() {
  return getRuleContext<lpcParser::For_stmtContext>(0);
}

lpcParser::ForeachContext* lpcParser::Decl_blockContext::foreach() {
  return getRuleContext<lpcParser::ForeachContext>(0);
}


size_t lpcParser::Decl_blockContext::getRuleIndex() const {
  return lpcParser::RuleDecl_block;
}

void lpcParser::Decl_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl_block(this);
}

void lpcParser::Decl_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl_block(this);
}


antlrcpp::Any lpcParser::Decl_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitDecl_block(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Decl_blockContext* lpcParser::decl_block() {
  Decl_blockContext *_localctx = _tracker.createInstance<Decl_blockContext>(_ctx, getState());
  enterRule(_localctx, 58, lpcParser::RuleDecl_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(352);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lpcParser::T__6: {
        enterOuterAlt(_localctx, 1);
        setState(349);
        block();
        break;
      }

      case lpcParser::L_FOR: {
        enterOuterAlt(_localctx, 2);
        setState(350);
        for_stmt();
        break;
      }

      case lpcParser::L_FOREACH: {
        enterOuterAlt(_localctx, 3);
        setState(351);
        foreach();
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

//----------------- Local_declarationsContext ------------------------------------------------------------------

lpcParser::Local_declarationsContext::Local_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<lpcParser::Basic_typeContext *> lpcParser::Local_declarationsContext::basic_type() {
  return getRuleContexts<lpcParser::Basic_typeContext>();
}

lpcParser::Basic_typeContext* lpcParser::Local_declarationsContext::basic_type(size_t i) {
  return getRuleContext<lpcParser::Basic_typeContext>(i);
}

std::vector<lpcParser::New_local_defContext *> lpcParser::Local_declarationsContext::new_local_def() {
  return getRuleContexts<lpcParser::New_local_defContext>();
}

lpcParser::New_local_defContext* lpcParser::Local_declarationsContext::new_local_def(size_t i) {
  return getRuleContext<lpcParser::New_local_defContext>(i);
}


size_t lpcParser::Local_declarationsContext::getRuleIndex() const {
  return lpcParser::RuleLocal_declarations;
}

void lpcParser::Local_declarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_declarations(this);
}

void lpcParser::Local_declarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_declarations(this);
}


antlrcpp::Any lpcParser::Local_declarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitLocal_declarations(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Local_declarationsContext* lpcParser::local_declarations() {
  Local_declarationsContext *_localctx = _tracker.createInstance<Local_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 60, lpcParser::RuleLocal_declarations);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(368);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(354);
        basic_type();
        setState(360);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(355);
            new_local_def();
            setState(356);
            match(lpcParser::T__1); 
          }
          setState(362);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
        }
        setState(363);
        new_local_def();
        setState(364);
        match(lpcParser::T__0); 
      }
      setState(370);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- New_local_defContext ------------------------------------------------------------------

lpcParser::New_local_defContext::New_local_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Optional_starContext* lpcParser::New_local_defContext::optional_star() {
  return getRuleContext<lpcParser::Optional_starContext>(0);
}

lpcParser::New_local_nameContext* lpcParser::New_local_defContext::new_local_name() {
  return getRuleContext<lpcParser::New_local_nameContext>(0);
}

tree::TerminalNode* lpcParser::New_local_defContext::L_ASSIGN() {
  return getToken(lpcParser::L_ASSIGN, 0);
}

lpcParser::Expr0Context* lpcParser::New_local_defContext::expr0() {
  return getRuleContext<lpcParser::Expr0Context>(0);
}


size_t lpcParser::New_local_defContext::getRuleIndex() const {
  return lpcParser::RuleNew_local_def;
}

void lpcParser::New_local_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNew_local_def(this);
}

void lpcParser::New_local_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNew_local_def(this);
}


antlrcpp::Any lpcParser::New_local_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitNew_local_def(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::New_local_defContext* lpcParser::new_local_def() {
  New_local_defContext *_localctx = _tracker.createInstance<New_local_defContext>(_ctx, getState());
  enterRule(_localctx, 62, lpcParser::RuleNew_local_def);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(379);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(371);
      optional_star();
      setState(372);
      new_local_name();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(374);
      optional_star();
      setState(375);
      new_local_name();
      setState(376);
      match(lpcParser::L_ASSIGN);
      setState(377);
      expr0(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Single_new_local_defContext ------------------------------------------------------------------

lpcParser::Single_new_local_defContext::Single_new_local_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Arg_typeContext* lpcParser::Single_new_local_defContext::arg_type() {
  return getRuleContext<lpcParser::Arg_typeContext>(0);
}

lpcParser::Optional_starContext* lpcParser::Single_new_local_defContext::optional_star() {
  return getRuleContext<lpcParser::Optional_starContext>(0);
}

lpcParser::New_local_nameContext* lpcParser::Single_new_local_defContext::new_local_name() {
  return getRuleContext<lpcParser::New_local_nameContext>(0);
}


size_t lpcParser::Single_new_local_defContext::getRuleIndex() const {
  return lpcParser::RuleSingle_new_local_def;
}

void lpcParser::Single_new_local_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingle_new_local_def(this);
}

void lpcParser::Single_new_local_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingle_new_local_def(this);
}


antlrcpp::Any lpcParser::Single_new_local_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitSingle_new_local_def(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Single_new_local_defContext* lpcParser::single_new_local_def() {
  Single_new_local_defContext *_localctx = _tracker.createInstance<Single_new_local_defContext>(_ctx, getState());
  enterRule(_localctx, 64, lpcParser::RuleSingle_new_local_def);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(381);
    arg_type();
    setState(382);
    optional_star();
    setState(383);
    new_local_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Single_new_local_def_with_initContext ------------------------------------------------------------------

lpcParser::Single_new_local_def_with_initContext::Single_new_local_def_with_initContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Single_new_local_defContext* lpcParser::Single_new_local_def_with_initContext::single_new_local_def() {
  return getRuleContext<lpcParser::Single_new_local_defContext>(0);
}

tree::TerminalNode* lpcParser::Single_new_local_def_with_initContext::L_ASSIGN() {
  return getToken(lpcParser::L_ASSIGN, 0);
}

lpcParser::Expr0Context* lpcParser::Single_new_local_def_with_initContext::expr0() {
  return getRuleContext<lpcParser::Expr0Context>(0);
}


size_t lpcParser::Single_new_local_def_with_initContext::getRuleIndex() const {
  return lpcParser::RuleSingle_new_local_def_with_init;
}

void lpcParser::Single_new_local_def_with_initContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingle_new_local_def_with_init(this);
}

void lpcParser::Single_new_local_def_with_initContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingle_new_local_def_with_init(this);
}


antlrcpp::Any lpcParser::Single_new_local_def_with_initContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitSingle_new_local_def_with_init(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Single_new_local_def_with_initContext* lpcParser::single_new_local_def_with_init() {
  Single_new_local_def_with_initContext *_localctx = _tracker.createInstance<Single_new_local_def_with_initContext>(_ctx, getState());
  enterRule(_localctx, 66, lpcParser::RuleSingle_new_local_def_with_init);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(385);
    single_new_local_def();
    setState(386);
    match(lpcParser::L_ASSIGN);
    setState(387);
    expr0(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

lpcParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Comma_exprContext* lpcParser::StatementContext::comma_expr() {
  return getRuleContext<lpcParser::Comma_exprContext>(0);
}

lpcParser::CondContext* lpcParser::StatementContext::cond() {
  return getRuleContext<lpcParser::CondContext>(0);
}

lpcParser::While_stmtContext* lpcParser::StatementContext::while_stmt() {
  return getRuleContext<lpcParser::While_stmtContext>(0);
}

lpcParser::Do_stmtContext* lpcParser::StatementContext::do_stmt() {
  return getRuleContext<lpcParser::Do_stmtContext>(0);
}

lpcParser::Switch_stmtContext* lpcParser::StatementContext::switch_stmt() {
  return getRuleContext<lpcParser::Switch_stmtContext>(0);
}

lpcParser::Return_stmtContext* lpcParser::StatementContext::return_stmt() {
  return getRuleContext<lpcParser::Return_stmtContext>(0);
}

lpcParser::Decl_blockContext* lpcParser::StatementContext::decl_block() {
  return getRuleContext<lpcParser::Decl_blockContext>(0);
}

tree::TerminalNode* lpcParser::StatementContext::L_BREAK() {
  return getToken(lpcParser::L_BREAK, 0);
}

tree::TerminalNode* lpcParser::StatementContext::L_CONTINUE() {
  return getToken(lpcParser::L_CONTINUE, 0);
}


size_t lpcParser::StatementContext::getRuleIndex() const {
  return lpcParser::RuleStatement;
}

void lpcParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void lpcParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any lpcParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::StatementContext* lpcParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 68, lpcParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(403);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lpcParser::T__2:
      case lpcParser::T__13:
      case lpcParser::T__16:
      case lpcParser::T__18:
      case lpcParser::T__19:
      case lpcParser::L_TREE:
      case lpcParser::L_CATCH:
      case lpcParser::L_EFUN:
      case lpcParser::L_BASIC_TYPE:
      case lpcParser::L_NEW:
      case lpcParser::L_PARSE_COMMAND:
      case lpcParser::L_REF:
      case lpcParser::L_SSCANF:
      case lpcParser::L_TIME_EXPRESSION:
      case lpcParser::L_STRING:
      case lpcParser::L_NUMBER:
      case lpcParser::L_REAL:
      case lpcParser::L_IDENTIFIER:
      case lpcParser::L_NOT:
      case lpcParser::L_PARAMETER:
      case lpcParser::L_INC:
      case lpcParser::L_DEC:
      case lpcParser::L_COLON_COLON:
      case lpcParser::L_ARRAY_OPEN:
      case lpcParser::L_MAPPING_OPEN:
      case lpcParser::L_ERROR: {
        enterOuterAlt(_localctx, 1);
        setState(389);
        comma_expr();
        setState(390);
        match(lpcParser::T__0);
        break;
      }

      case lpcParser::L_IF: {
        enterOuterAlt(_localctx, 2);
        setState(392);
        cond();
        break;
      }

      case lpcParser::L_WHILE: {
        enterOuterAlt(_localctx, 3);
        setState(393);
        while_stmt();
        break;
      }

      case lpcParser::L_DO: {
        enterOuterAlt(_localctx, 4);
        setState(394);
        do_stmt();
        break;
      }

      case lpcParser::L_SWITCH: {
        enterOuterAlt(_localctx, 5);
        setState(395);
        switch_stmt();
        break;
      }

      case lpcParser::L_RETURN: {
        enterOuterAlt(_localctx, 6);
        setState(396);
        return_stmt();
        break;
      }

      case lpcParser::T__6:
      case lpcParser::L_FOR:
      case lpcParser::L_FOREACH: {
        enterOuterAlt(_localctx, 7);
        setState(397);
        decl_block();
        break;
      }

      case lpcParser::T__0: {
        enterOuterAlt(_localctx, 8);
        setState(398);
        match(lpcParser::T__0);
        break;
      }

      case lpcParser::L_BREAK: {
        enterOuterAlt(_localctx, 9);
        setState(399);
        match(lpcParser::L_BREAK);
        setState(400);
        match(lpcParser::T__0);
        break;
      }

      case lpcParser::L_CONTINUE: {
        enterOuterAlt(_localctx, 10);
        setState(401);
        match(lpcParser::L_CONTINUE);
        setState(402);
        match(lpcParser::T__0);
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

//----------------- While_stmtContext ------------------------------------------------------------------

lpcParser::While_stmtContext::While_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::While_stmtContext::L_WHILE() {
  return getToken(lpcParser::L_WHILE, 0);
}

lpcParser::Comma_exprContext* lpcParser::While_stmtContext::comma_expr() {
  return getRuleContext<lpcParser::Comma_exprContext>(0);
}

lpcParser::StatementContext* lpcParser::While_stmtContext::statement() {
  return getRuleContext<lpcParser::StatementContext>(0);
}


size_t lpcParser::While_stmtContext::getRuleIndex() const {
  return lpcParser::RuleWhile_stmt;
}

void lpcParser::While_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_stmt(this);
}

void lpcParser::While_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_stmt(this);
}


antlrcpp::Any lpcParser::While_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitWhile_stmt(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::While_stmtContext* lpcParser::while_stmt() {
  While_stmtContext *_localctx = _tracker.createInstance<While_stmtContext>(_ctx, getState());
  enterRule(_localctx, 70, lpcParser::RuleWhile_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    match(lpcParser::L_WHILE);
    setState(406);
    match(lpcParser::T__2);
    setState(407);
    comma_expr();
    setState(408);
    match(lpcParser::T__3);
    setState(409);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_stmtContext ------------------------------------------------------------------

lpcParser::Do_stmtContext::Do_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::Do_stmtContext::L_DO() {
  return getToken(lpcParser::L_DO, 0);
}

lpcParser::StatementContext* lpcParser::Do_stmtContext::statement() {
  return getRuleContext<lpcParser::StatementContext>(0);
}

tree::TerminalNode* lpcParser::Do_stmtContext::L_WHILE() {
  return getToken(lpcParser::L_WHILE, 0);
}

lpcParser::Comma_exprContext* lpcParser::Do_stmtContext::comma_expr() {
  return getRuleContext<lpcParser::Comma_exprContext>(0);
}


size_t lpcParser::Do_stmtContext::getRuleIndex() const {
  return lpcParser::RuleDo_stmt;
}

void lpcParser::Do_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_stmt(this);
}

void lpcParser::Do_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_stmt(this);
}


antlrcpp::Any lpcParser::Do_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitDo_stmt(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Do_stmtContext* lpcParser::do_stmt() {
  Do_stmtContext *_localctx = _tracker.createInstance<Do_stmtContext>(_ctx, getState());
  enterRule(_localctx, 72, lpcParser::RuleDo_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(411);
    match(lpcParser::L_DO);
    setState(412);
    statement();
    setState(413);
    match(lpcParser::L_WHILE);
    setState(414);
    match(lpcParser::T__2);
    setState(415);
    comma_expr();
    setState(416);
    match(lpcParser::T__3);
    setState(417);
    match(lpcParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_stmtContext ------------------------------------------------------------------

lpcParser::For_stmtContext::For_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::For_stmtContext::L_FOR() {
  return getToken(lpcParser::L_FOR, 0);
}

lpcParser::First_for_exprContext* lpcParser::For_stmtContext::first_for_expr() {
  return getRuleContext<lpcParser::First_for_exprContext>(0);
}

std::vector<lpcParser::For_exprContext *> lpcParser::For_stmtContext::for_expr() {
  return getRuleContexts<lpcParser::For_exprContext>();
}

lpcParser::For_exprContext* lpcParser::For_stmtContext::for_expr(size_t i) {
  return getRuleContext<lpcParser::For_exprContext>(i);
}

lpcParser::StatementContext* lpcParser::For_stmtContext::statement() {
  return getRuleContext<lpcParser::StatementContext>(0);
}


size_t lpcParser::For_stmtContext::getRuleIndex() const {
  return lpcParser::RuleFor_stmt;
}

void lpcParser::For_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_stmt(this);
}

void lpcParser::For_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_stmt(this);
}


antlrcpp::Any lpcParser::For_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitFor_stmt(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::For_stmtContext* lpcParser::for_stmt() {
  For_stmtContext *_localctx = _tracker.createInstance<For_stmtContext>(_ctx, getState());
  enterRule(_localctx, 74, lpcParser::RuleFor_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419);
    match(lpcParser::L_FOR);
    setState(420);
    match(lpcParser::T__2);
    setState(421);
    first_for_expr();
    setState(422);
    match(lpcParser::T__0);
    setState(423);
    for_expr();
    setState(424);
    match(lpcParser::T__0);
    setState(425);
    for_expr();
    setState(426);
    match(lpcParser::T__3);
    setState(427);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Foreach_varContext ------------------------------------------------------------------

lpcParser::Foreach_varContext::Foreach_varContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::Foreach_varContext::L_IDENTIFIER() {
  return getToken(lpcParser::L_IDENTIFIER, 0);
}

lpcParser::Single_new_local_defContext* lpcParser::Foreach_varContext::single_new_local_def() {
  return getRuleContext<lpcParser::Single_new_local_defContext>(0);
}


size_t lpcParser::Foreach_varContext::getRuleIndex() const {
  return lpcParser::RuleForeach_var;
}

void lpcParser::Foreach_varContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForeach_var(this);
}

void lpcParser::Foreach_varContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForeach_var(this);
}


antlrcpp::Any lpcParser::Foreach_varContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitForeach_var(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Foreach_varContext* lpcParser::foreach_var() {
  Foreach_varContext *_localctx = _tracker.createInstance<Foreach_varContext>(_ctx, getState());
  enterRule(_localctx, 76, lpcParser::RuleForeach_var);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(431);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lpcParser::L_IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(429);
        match(lpcParser::L_IDENTIFIER);
        break;
      }

      case lpcParser::L_CLASS:
      case lpcParser::L_BASIC_TYPE:
      case lpcParser::L_ARRAY: {
        enterOuterAlt(_localctx, 2);
        setState(430);
        single_new_local_def();
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

//----------------- Foreach_varsContext ------------------------------------------------------------------

lpcParser::Foreach_varsContext::Foreach_varsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<lpcParser::Foreach_varContext *> lpcParser::Foreach_varsContext::foreach_var() {
  return getRuleContexts<lpcParser::Foreach_varContext>();
}

lpcParser::Foreach_varContext* lpcParser::Foreach_varsContext::foreach_var(size_t i) {
  return getRuleContext<lpcParser::Foreach_varContext>(i);
}


size_t lpcParser::Foreach_varsContext::getRuleIndex() const {
  return lpcParser::RuleForeach_vars;
}

void lpcParser::Foreach_varsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForeach_vars(this);
}

void lpcParser::Foreach_varsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForeach_vars(this);
}


antlrcpp::Any lpcParser::Foreach_varsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitForeach_vars(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Foreach_varsContext* lpcParser::foreach_vars() {
  Foreach_varsContext *_localctx = _tracker.createInstance<Foreach_varsContext>(_ctx, getState());
  enterRule(_localctx, 78, lpcParser::RuleForeach_vars);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(438);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(433);
      foreach_var();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(434);
      foreach_var();
      setState(435);
      match(lpcParser::T__1);
      setState(436);
      foreach_var();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForeachContext ------------------------------------------------------------------

lpcParser::ForeachContext::ForeachContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::ForeachContext::L_FOREACH() {
  return getToken(lpcParser::L_FOREACH, 0);
}

lpcParser::Foreach_varsContext* lpcParser::ForeachContext::foreach_vars() {
  return getRuleContext<lpcParser::Foreach_varsContext>(0);
}

tree::TerminalNode* lpcParser::ForeachContext::L_IN() {
  return getToken(lpcParser::L_IN, 0);
}

lpcParser::Expr0Context* lpcParser::ForeachContext::expr0() {
  return getRuleContext<lpcParser::Expr0Context>(0);
}

lpcParser::StatementContext* lpcParser::ForeachContext::statement() {
  return getRuleContext<lpcParser::StatementContext>(0);
}


size_t lpcParser::ForeachContext::getRuleIndex() const {
  return lpcParser::RuleForeach;
}

void lpcParser::ForeachContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForeach(this);
}

void lpcParser::ForeachContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForeach(this);
}


antlrcpp::Any lpcParser::ForeachContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitForeach(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::ForeachContext* lpcParser::foreach() {
  ForeachContext *_localctx = _tracker.createInstance<ForeachContext>(_ctx, getState());
  enterRule(_localctx, 80, lpcParser::RuleForeach);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(440);
    match(lpcParser::L_FOREACH);
    setState(441);
    match(lpcParser::T__2);
    setState(442);
    foreach_vars();
    setState(443);
    match(lpcParser::L_IN);
    setState(444);
    expr0(0);
    setState(445);
    match(lpcParser::T__3);
    setState(446);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_exprContext ------------------------------------------------------------------

lpcParser::For_exprContext::For_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Comma_exprContext* lpcParser::For_exprContext::comma_expr() {
  return getRuleContext<lpcParser::Comma_exprContext>(0);
}


size_t lpcParser::For_exprContext::getRuleIndex() const {
  return lpcParser::RuleFor_expr;
}

void lpcParser::For_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_expr(this);
}

void lpcParser::For_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_expr(this);
}


antlrcpp::Any lpcParser::For_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitFor_expr(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::For_exprContext* lpcParser::for_expr() {
  For_exprContext *_localctx = _tracker.createInstance<For_exprContext>(_ctx, getState());
  enterRule(_localctx, 82, lpcParser::RuleFor_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(449);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << lpcParser::T__2)
      | (1ULL << lpcParser::T__13)
      | (1ULL << lpcParser::T__16)
      | (1ULL << lpcParser::T__18)
      | (1ULL << lpcParser::T__19)
      | (1ULL << lpcParser::L_TREE)
      | (1ULL << lpcParser::L_CATCH)
      | (1ULL << lpcParser::L_EFUN)
      | (1ULL << lpcParser::L_BASIC_TYPE)
      | (1ULL << lpcParser::L_NEW)
      | (1ULL << lpcParser::L_PARSE_COMMAND)
      | (1ULL << lpcParser::L_REF)
      | (1ULL << lpcParser::L_SSCANF)
      | (1ULL << lpcParser::L_TIME_EXPRESSION)
      | (1ULL << lpcParser::L_STRING)
      | (1ULL << lpcParser::L_NUMBER)
      | (1ULL << lpcParser::L_REAL)
      | (1ULL << lpcParser::L_IDENTIFIER)
      | (1ULL << lpcParser::L_NOT))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (lpcParser::L_PARAMETER - 65))
      | (1ULL << (lpcParser::L_INC - 65))
      | (1ULL << (lpcParser::L_DEC - 65))
      | (1ULL << (lpcParser::L_COLON_COLON - 65))
      | (1ULL << (lpcParser::L_ARRAY_OPEN - 65))
      | (1ULL << (lpcParser::L_MAPPING_OPEN - 65))
      | (1ULL << (lpcParser::L_ERROR - 65)))) != 0)) {
      setState(448);
      comma_expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- First_for_exprContext ------------------------------------------------------------------

lpcParser::First_for_exprContext::First_for_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::For_exprContext* lpcParser::First_for_exprContext::for_expr() {
  return getRuleContext<lpcParser::For_exprContext>(0);
}

lpcParser::Single_new_local_def_with_initContext* lpcParser::First_for_exprContext::single_new_local_def_with_init() {
  return getRuleContext<lpcParser::Single_new_local_def_with_initContext>(0);
}


size_t lpcParser::First_for_exprContext::getRuleIndex() const {
  return lpcParser::RuleFirst_for_expr;
}

void lpcParser::First_for_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFirst_for_expr(this);
}

void lpcParser::First_for_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFirst_for_expr(this);
}


antlrcpp::Any lpcParser::First_for_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitFirst_for_expr(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::First_for_exprContext* lpcParser::first_for_expr() {
  First_for_exprContext *_localctx = _tracker.createInstance<First_for_exprContext>(_ctx, getState());
  enterRule(_localctx, 84, lpcParser::RuleFirst_for_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(453);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(451);
      for_expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(452);
      single_new_local_def_with_init();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Switch_stmtContext ------------------------------------------------------------------

lpcParser::Switch_stmtContext::Switch_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::Switch_stmtContext::L_SWITCH() {
  return getToken(lpcParser::L_SWITCH, 0);
}

lpcParser::Comma_exprContext* lpcParser::Switch_stmtContext::comma_expr() {
  return getRuleContext<lpcParser::Comma_exprContext>(0);
}

lpcParser::Local_declarationsContext* lpcParser::Switch_stmtContext::local_declarations() {
  return getRuleContext<lpcParser::Local_declarationsContext>(0);
}

std::vector<lpcParser::Case_stmtContext *> lpcParser::Switch_stmtContext::case_stmt() {
  return getRuleContexts<lpcParser::Case_stmtContext>();
}

lpcParser::Case_stmtContext* lpcParser::Switch_stmtContext::case_stmt(size_t i) {
  return getRuleContext<lpcParser::Case_stmtContext>(i);
}

std::vector<lpcParser::StatementContext *> lpcParser::Switch_stmtContext::statement() {
  return getRuleContexts<lpcParser::StatementContext>();
}

lpcParser::StatementContext* lpcParser::Switch_stmtContext::statement(size_t i) {
  return getRuleContext<lpcParser::StatementContext>(i);
}


size_t lpcParser::Switch_stmtContext::getRuleIndex() const {
  return lpcParser::RuleSwitch_stmt;
}

void lpcParser::Switch_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitch_stmt(this);
}

void lpcParser::Switch_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitch_stmt(this);
}


antlrcpp::Any lpcParser::Switch_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitSwitch_stmt(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Switch_stmtContext* lpcParser::switch_stmt() {
  Switch_stmtContext *_localctx = _tracker.createInstance<Switch_stmtContext>(_ctx, getState());
  enterRule(_localctx, 86, lpcParser::RuleSwitch_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    match(lpcParser::L_SWITCH);
    setState(456);
    match(lpcParser::T__2);
    setState(457);
    comma_expr();
    setState(458);
    match(lpcParser::T__3);
    setState(459);
    match(lpcParser::T__6);
    setState(460);
    local_declarations();
    setState(461);
    case_stmt();
    setState(466);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << lpcParser::T__0)
      | (1ULL << lpcParser::T__2)
      | (1ULL << lpcParser::T__6)
      | (1ULL << lpcParser::T__13)
      | (1ULL << lpcParser::T__16)
      | (1ULL << lpcParser::T__18)
      | (1ULL << lpcParser::T__19)
      | (1ULL << lpcParser::L_TREE)
      | (1ULL << lpcParser::L_BREAK)
      | (1ULL << lpcParser::L_CASE)
      | (1ULL << lpcParser::L_CATCH)
      | (1ULL << lpcParser::L_CONTINUE)
      | (1ULL << lpcParser::L_DEFAULT)
      | (1ULL << lpcParser::L_DO)
      | (1ULL << lpcParser::L_EFUN)
      | (1ULL << lpcParser::L_BASIC_TYPE)
      | (1ULL << lpcParser::L_FOR)
      | (1ULL << lpcParser::L_FOREACH)
      | (1ULL << lpcParser::L_IF)
      | (1ULL << lpcParser::L_NEW)
      | (1ULL << lpcParser::L_PARSE_COMMAND)
      | (1ULL << lpcParser::L_REF)
      | (1ULL << lpcParser::L_RETURN)
      | (1ULL << lpcParser::L_SSCANF)
      | (1ULL << lpcParser::L_SWITCH)
      | (1ULL << lpcParser::L_TIME_EXPRESSION)
      | (1ULL << lpcParser::L_WHILE)
      | (1ULL << lpcParser::L_STRING)
      | (1ULL << lpcParser::L_NUMBER)
      | (1ULL << lpcParser::L_REAL)
      | (1ULL << lpcParser::L_IDENTIFIER)
      | (1ULL << lpcParser::L_NOT))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (lpcParser::L_PARAMETER - 65))
      | (1ULL << (lpcParser::L_INC - 65))
      | (1ULL << (lpcParser::L_DEC - 65))
      | (1ULL << (lpcParser::L_COLON_COLON - 65))
      | (1ULL << (lpcParser::L_ARRAY_OPEN - 65))
      | (1ULL << (lpcParser::L_MAPPING_OPEN - 65))
      | (1ULL << (lpcParser::L_ERROR - 65)))) != 0)) {
      setState(464);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case lpcParser::L_CASE:
        case lpcParser::L_DEFAULT: {
          setState(462);
          case_stmt();
          break;
        }

        case lpcParser::T__0:
        case lpcParser::T__2:
        case lpcParser::T__6:
        case lpcParser::T__13:
        case lpcParser::T__16:
        case lpcParser::T__18:
        case lpcParser::T__19:
        case lpcParser::L_TREE:
        case lpcParser::L_BREAK:
        case lpcParser::L_CATCH:
        case lpcParser::L_CONTINUE:
        case lpcParser::L_DO:
        case lpcParser::L_EFUN:
        case lpcParser::L_BASIC_TYPE:
        case lpcParser::L_FOR:
        case lpcParser::L_FOREACH:
        case lpcParser::L_IF:
        case lpcParser::L_NEW:
        case lpcParser::L_PARSE_COMMAND:
        case lpcParser::L_REF:
        case lpcParser::L_RETURN:
        case lpcParser::L_SSCANF:
        case lpcParser::L_SWITCH:
        case lpcParser::L_TIME_EXPRESSION:
        case lpcParser::L_WHILE:
        case lpcParser::L_STRING:
        case lpcParser::L_NUMBER:
        case lpcParser::L_REAL:
        case lpcParser::L_IDENTIFIER:
        case lpcParser::L_NOT:
        case lpcParser::L_PARAMETER:
        case lpcParser::L_INC:
        case lpcParser::L_DEC:
        case lpcParser::L_COLON_COLON:
        case lpcParser::L_ARRAY_OPEN:
        case lpcParser::L_MAPPING_OPEN:
        case lpcParser::L_ERROR: {
          setState(463);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(468);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(469);
    match(lpcParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_stmtContext ------------------------------------------------------------------

lpcParser::Case_stmtContext::Case_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::Case_stmtContext::L_CASE() {
  return getToken(lpcParser::L_CASE, 0);
}

std::vector<lpcParser::Case_labelContext *> lpcParser::Case_stmtContext::case_label() {
  return getRuleContexts<lpcParser::Case_labelContext>();
}

lpcParser::Case_labelContext* lpcParser::Case_stmtContext::case_label(size_t i) {
  return getRuleContext<lpcParser::Case_labelContext>(i);
}

tree::TerminalNode* lpcParser::Case_stmtContext::L_RANGE() {
  return getToken(lpcParser::L_RANGE, 0);
}

tree::TerminalNode* lpcParser::Case_stmtContext::L_DEFAULT() {
  return getToken(lpcParser::L_DEFAULT, 0);
}


size_t lpcParser::Case_stmtContext::getRuleIndex() const {
  return lpcParser::RuleCase_stmt;
}

void lpcParser::Case_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCase_stmt(this);
}

void lpcParser::Case_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCase_stmt(this);
}


antlrcpp::Any lpcParser::Case_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitCase_stmt(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Case_stmtContext* lpcParser::case_stmt() {
  Case_stmtContext *_localctx = _tracker.createInstance<Case_stmtContext>(_ctx, getState());
  enterRule(_localctx, 88, lpcParser::RuleCase_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(493);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(471);
      match(lpcParser::L_CASE);
      setState(472);
      case_label();
      setState(473);
      match(lpcParser::T__5);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(475);
      match(lpcParser::L_CASE);
      setState(476);
      case_label();
      setState(477);
      match(lpcParser::L_RANGE);
      setState(478);
      case_label();
      setState(479);
      match(lpcParser::T__5);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(481);
      match(lpcParser::L_CASE);
      setState(482);
      case_label();
      setState(483);
      match(lpcParser::L_RANGE);
      setState(484);
      match(lpcParser::T__5);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(486);
      match(lpcParser::L_CASE);
      setState(487);
      match(lpcParser::L_RANGE);
      setState(488);
      case_label();
      setState(489);
      match(lpcParser::T__5);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(491);
      match(lpcParser::L_DEFAULT);
      setState(492);
      match(lpcParser::T__5);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_labelContext ------------------------------------------------------------------

lpcParser::Case_labelContext::Case_labelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::ConstantContext* lpcParser::Case_labelContext::constant() {
  return getRuleContext<lpcParser::ConstantContext>(0);
}

lpcParser::String_con1Context* lpcParser::Case_labelContext::string_con1() {
  return getRuleContext<lpcParser::String_con1Context>(0);
}


size_t lpcParser::Case_labelContext::getRuleIndex() const {
  return lpcParser::RuleCase_label;
}

void lpcParser::Case_labelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCase_label(this);
}

void lpcParser::Case_labelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCase_label(this);
}


antlrcpp::Any lpcParser::Case_labelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitCase_label(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Case_labelContext* lpcParser::case_label() {
  Case_labelContext *_localctx = _tracker.createInstance<Case_labelContext>(_ctx, getState());
  enterRule(_localctx, 90, lpcParser::RuleCase_label);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(497);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(495);
      constant(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(496);
      string_con1(0);
      break;
    }

    default:
      break;
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

lpcParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<lpcParser::ConstantContext *> lpcParser::ConstantContext::constant() {
  return getRuleContexts<lpcParser::ConstantContext>();
}

lpcParser::ConstantContext* lpcParser::ConstantContext::constant(size_t i) {
  return getRuleContext<lpcParser::ConstantContext>(i);
}

tree::TerminalNode* lpcParser::ConstantContext::L_NUMBER() {
  return getToken(lpcParser::L_NUMBER, 0);
}

tree::TerminalNode* lpcParser::ConstantContext::L_NOT() {
  return getToken(lpcParser::L_NOT, 0);
}

tree::TerminalNode* lpcParser::ConstantContext::L_EQ() {
  return getToken(lpcParser::L_EQ, 0);
}

tree::TerminalNode* lpcParser::ConstantContext::L_NE() {
  return getToken(lpcParser::L_NE, 0);
}

tree::TerminalNode* lpcParser::ConstantContext::L_ORDER() {
  return getToken(lpcParser::L_ORDER, 0);
}

tree::TerminalNode* lpcParser::ConstantContext::L_LSH() {
  return getToken(lpcParser::L_LSH, 0);
}

tree::TerminalNode* lpcParser::ConstantContext::L_RSH() {
  return getToken(lpcParser::L_RSH, 0);
}


size_t lpcParser::ConstantContext::getRuleIndex() const {
  return lpcParser::RuleConstant;
}

void lpcParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void lpcParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


antlrcpp::Any lpcParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}


lpcParser::ConstantContext* lpcParser::constant() {
   return constant(0);
}

lpcParser::ConstantContext* lpcParser::constant(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  lpcParser::ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, parentState);
  lpcParser::ConstantContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 92;
  enterRecursionRule(_localctx, 92, lpcParser::RuleConstant, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(511);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lpcParser::T__2: {
        setState(500);
        match(lpcParser::T__2);
        setState(501);
        constant(0);
        setState(502);
        match(lpcParser::T__3);
        break;
      }

      case lpcParser::L_NUMBER: {
        setState(504);
        match(lpcParser::L_NUMBER);
        break;
      }

      case lpcParser::T__13: {
        setState(505);
        match(lpcParser::T__13);
        setState(506);
        match(lpcParser::L_NUMBER);
        break;
      }

      case lpcParser::L_NOT: {
        setState(507);
        match(lpcParser::L_NOT);
        setState(508);
        match(lpcParser::L_NUMBER);
        break;
      }

      case lpcParser::T__16: {
        setState(509);
        match(lpcParser::T__16);
        setState(510);
        match(lpcParser::L_NUMBER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(557);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(555);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ConstantContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleConstant);
          setState(513);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(514);
          match(lpcParser::T__8);
          setState(515);
          constant(20);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ConstantContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleConstant);
          setState(516);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(517);
          match(lpcParser::T__9);
          setState(518);
          constant(19);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ConstantContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleConstant);
          setState(519);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(520);
          match(lpcParser::T__10);
          setState(521);
          constant(18);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ConstantContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleConstant);
          setState(522);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(523);
          match(lpcParser::L_EQ);
          setState(524);
          constant(17);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ConstantContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleConstant);
          setState(525);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(526);
          match(lpcParser::L_NE);
          setState(527);
          constant(16);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ConstantContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleConstant);
          setState(528);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(529);
          match(lpcParser::L_ORDER);
          setState(530);
          constant(15);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ConstantContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleConstant);
          setState(531);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(532);
          match(lpcParser::T__11);
          setState(533);
          constant(14);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ConstantContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleConstant);
          setState(534);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(535);
          match(lpcParser::L_LSH);
          setState(536);
          constant(13);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ConstantContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleConstant);
          setState(537);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(538);
          match(lpcParser::L_RSH);
          setState(539);
          constant(12);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ConstantContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleConstant);
          setState(540);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(541);
          match(lpcParser::T__12);
          setState(542);
          constant(11);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ConstantContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleConstant);
          setState(543);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(544);
          match(lpcParser::T__13);
          setState(545);
          constant(10);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ConstantContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleConstant);
          setState(546);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(547);
          match(lpcParser::T__4);
          setState(548);
          constant(9);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ConstantContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleConstant);
          setState(549);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(550);
          match(lpcParser::T__14);
          setState(551);
          constant(8);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ConstantContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleConstant);
          setState(552);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(553);
          match(lpcParser::T__15);
          setState(554);
          constant(7);
          break;
        }

        default:
          break;
        } 
      }
      setState(559);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Comma_exprContext ------------------------------------------------------------------

lpcParser::Comma_exprContext::Comma_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<lpcParser::Expr0Context *> lpcParser::Comma_exprContext::expr0() {
  return getRuleContexts<lpcParser::Expr0Context>();
}

lpcParser::Expr0Context* lpcParser::Comma_exprContext::expr0(size_t i) {
  return getRuleContext<lpcParser::Expr0Context>(i);
}


size_t lpcParser::Comma_exprContext::getRuleIndex() const {
  return lpcParser::RuleComma_expr;
}

void lpcParser::Comma_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComma_expr(this);
}

void lpcParser::Comma_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComma_expr(this);
}


antlrcpp::Any lpcParser::Comma_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitComma_expr(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Comma_exprContext* lpcParser::comma_expr() {
  Comma_exprContext *_localctx = _tracker.createInstance<Comma_exprContext>(_ctx, getState());
  enterRule(_localctx, 94, lpcParser::RuleComma_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(560);
    expr0(0);
    setState(565);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lpcParser::T__1) {
      setState(561);
      match(lpcParser::T__1);
      setState(562);
      expr0(0);
      setState(567);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RefContext ------------------------------------------------------------------

lpcParser::RefContext::RefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::RefContext::L_REF() {
  return getToken(lpcParser::L_REF, 0);
}


size_t lpcParser::RefContext::getRuleIndex() const {
  return lpcParser::RuleRef;
}

void lpcParser::RefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRef(this);
}

void lpcParser::RefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRef(this);
}


antlrcpp::Any lpcParser::RefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitRef(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::RefContext* lpcParser::ref() {
  RefContext *_localctx = _tracker.createInstance<RefContext>(_ctx, getState());
  enterRule(_localctx, 96, lpcParser::RuleRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(568);
    match(lpcParser::L_REF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr0Context ------------------------------------------------------------------

lpcParser::Expr0Context::Expr0Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::RefContext* lpcParser::Expr0Context::ref() {
  return getRuleContext<lpcParser::RefContext>(0);
}

lpcParser::LvalueContext* lpcParser::Expr0Context::lvalue() {
  return getRuleContext<lpcParser::LvalueContext>(0);
}

tree::TerminalNode* lpcParser::Expr0Context::L_ASSIGN() {
  return getToken(lpcParser::L_ASSIGN, 0);
}

std::vector<lpcParser::Expr0Context *> lpcParser::Expr0Context::expr0() {
  return getRuleContexts<lpcParser::Expr0Context>();
}

lpcParser::Expr0Context* lpcParser::Expr0Context::expr0(size_t i) {
  return getRuleContext<lpcParser::Expr0Context>(i);
}

lpcParser::ErrorContext* lpcParser::Expr0Context::error() {
  return getRuleContext<lpcParser::ErrorContext>(0);
}

lpcParser::CastContext* lpcParser::Expr0Context::cast() {
  return getRuleContext<lpcParser::CastContext>(0);
}

tree::TerminalNode* lpcParser::Expr0Context::L_INC() {
  return getToken(lpcParser::L_INC, 0);
}

tree::TerminalNode* lpcParser::Expr0Context::L_DEC() {
  return getToken(lpcParser::L_DEC, 0);
}

tree::TerminalNode* lpcParser::Expr0Context::L_NOT() {
  return getToken(lpcParser::L_NOT, 0);
}

lpcParser::Expr4Context* lpcParser::Expr0Context::expr4() {
  return getRuleContext<lpcParser::Expr4Context>(0);
}

lpcParser::SscanfContext* lpcParser::Expr0Context::sscanf() {
  return getRuleContext<lpcParser::SscanfContext>(0);
}

lpcParser::Parse_commandContext* lpcParser::Expr0Context::parse_command() {
  return getRuleContext<lpcParser::Parse_commandContext>(0);
}

lpcParser::Time_expressionContext* lpcParser::Expr0Context::time_expression() {
  return getRuleContext<lpcParser::Time_expressionContext>(0);
}

lpcParser::NumberContext* lpcParser::Expr0Context::number() {
  return getRuleContext<lpcParser::NumberContext>(0);
}

lpcParser::RealContext* lpcParser::Expr0Context::real() {
  return getRuleContext<lpcParser::RealContext>(0);
}

tree::TerminalNode* lpcParser::Expr0Context::L_LOR() {
  return getToken(lpcParser::L_LOR, 0);
}

tree::TerminalNode* lpcParser::Expr0Context::L_LAND() {
  return getToken(lpcParser::L_LAND, 0);
}

tree::TerminalNode* lpcParser::Expr0Context::L_EQ() {
  return getToken(lpcParser::L_EQ, 0);
}

tree::TerminalNode* lpcParser::Expr0Context::L_NE() {
  return getToken(lpcParser::L_NE, 0);
}

tree::TerminalNode* lpcParser::Expr0Context::L_ORDER() {
  return getToken(lpcParser::L_ORDER, 0);
}

tree::TerminalNode* lpcParser::Expr0Context::L_LSH() {
  return getToken(lpcParser::L_LSH, 0);
}

tree::TerminalNode* lpcParser::Expr0Context::L_RSH() {
  return getToken(lpcParser::L_RSH, 0);
}


size_t lpcParser::Expr0Context::getRuleIndex() const {
  return lpcParser::RuleExpr0;
}

void lpcParser::Expr0Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr0(this);
}

void lpcParser::Expr0Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr0(this);
}


antlrcpp::Any lpcParser::Expr0Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitExpr0(this);
  else
    return visitor->visitChildren(this);
}


lpcParser::Expr0Context* lpcParser::expr0() {
   return expr0(0);
}

lpcParser::Expr0Context* lpcParser::expr0(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  lpcParser::Expr0Context *_localctx = _tracker.createInstance<Expr0Context>(_ctx, parentState);
  lpcParser::Expr0Context *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 98;
  enterRecursionRule(_localctx, 98, lpcParser::RuleExpr0, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(607);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      setState(571);
      ref();
      setState(572);
      lvalue();
      break;
    }

    case 2: {
      setState(574);
      lvalue();
      setState(575);
      match(lpcParser::L_ASSIGN);
      setState(576);
      expr0(33);
      break;
    }

    case 3: {
      setState(578);
      error();
      setState(579);
      match(lpcParser::L_ASSIGN);
      setState(580);
      expr0(32);
      break;
    }

    case 4: {
      setState(582);
      cast();
      setState(583);
      expr0(14);
      break;
    }

    case 5: {
      setState(585);
      match(lpcParser::L_INC);
      setState(586);
      lvalue();
      break;
    }

    case 6: {
      setState(587);
      match(lpcParser::L_DEC);
      setState(588);
      lvalue();
      break;
    }

    case 7: {
      setState(589);
      match(lpcParser::L_NOT);
      setState(590);
      expr0(11);
      break;
    }

    case 8: {
      setState(591);
      match(lpcParser::T__16);
      setState(592);
      expr0(10);
      break;
    }

    case 9: {
      setState(593);
      match(lpcParser::T__13);
      setState(594);
      expr0(9);
      break;
    }

    case 10: {
      setState(595);
      lvalue();
      setState(596);
      match(lpcParser::L_INC);
      break;
    }

    case 11: {
      setState(598);
      lvalue();
      setState(599);
      match(lpcParser::L_DEC);
      break;
    }

    case 12: {
      setState(601);
      expr4();
      break;
    }

    case 13: {
      setState(602);
      sscanf();
      break;
    }

    case 14: {
      setState(603);
      parse_command();
      break;
    }

    case 15: {
      setState(604);
      time_expression();
      break;
    }

    case 16: {
      setState(605);
      number();
      break;
    }

    case 17: {
      setState(606);
      real();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(665);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(663);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(609);

          if (!(precpred(_ctx, 31))) throw FailedPredicateException(this, "precpred(_ctx, 31)");
          setState(610);
          match(lpcParser::T__17);
          setState(611);
          expr0(0);
          setState(612);
          match(lpcParser::T__5);
          setState(613);
          expr0(32);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(615);

          if (!(precpred(_ctx, 30))) throw FailedPredicateException(this, "precpred(_ctx, 30)");
          setState(616);
          match(lpcParser::L_LOR);
          setState(617);
          expr0(31);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(618);

          if (!(precpred(_ctx, 29))) throw FailedPredicateException(this, "precpred(_ctx, 29)");
          setState(619);
          match(lpcParser::L_LAND);
          setState(620);
          expr0(30);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(621);

          if (!(precpred(_ctx, 28))) throw FailedPredicateException(this, "precpred(_ctx, 28)");
          setState(622);
          match(lpcParser::T__8);
          setState(623);
          expr0(29);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(624);

          if (!(precpred(_ctx, 27))) throw FailedPredicateException(this, "precpred(_ctx, 27)");
          setState(625);
          match(lpcParser::T__9);
          setState(626);
          expr0(28);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(627);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(628);
          match(lpcParser::T__10);
          setState(629);
          expr0(27);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(630);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(631);
          match(lpcParser::L_EQ);
          setState(632);
          expr0(26);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(633);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(634);
          match(lpcParser::L_NE);
          setState(635);
          expr0(25);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(636);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(637);
          match(lpcParser::L_ORDER);
          setState(638);
          expr0(24);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(639);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(640);
          match(lpcParser::T__11);
          setState(641);
          expr0(23);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(642);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(643);
          match(lpcParser::L_LSH);
          setState(644);
          expr0(22);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(645);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(646);
          match(lpcParser::L_RSH);
          setState(647);
          expr0(21);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(648);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(649);
          match(lpcParser::T__12);
          setState(650);
          expr0(20);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(651);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(652);
          match(lpcParser::T__13);
          setState(653);
          expr0(19);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(654);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(655);
          match(lpcParser::T__4);
          setState(656);
          expr0(18);
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(657);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(658);
          match(lpcParser::T__14);
          setState(659);
          expr0(17);
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<Expr0Context>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr0);
          setState(660);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(661);
          match(lpcParser::T__15);
          setState(662);
          expr0(16);
          break;
        }

        default:
          break;
        } 
      }
      setState(667);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

lpcParser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::Return_stmtContext::L_RETURN() {
  return getToken(lpcParser::L_RETURN, 0);
}

lpcParser::Comma_exprContext* lpcParser::Return_stmtContext::comma_expr() {
  return getRuleContext<lpcParser::Comma_exprContext>(0);
}


size_t lpcParser::Return_stmtContext::getRuleIndex() const {
  return lpcParser::RuleReturn_stmt;
}

void lpcParser::Return_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_stmt(this);
}

void lpcParser::Return_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_stmt(this);
}


antlrcpp::Any lpcParser::Return_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitReturn_stmt(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Return_stmtContext* lpcParser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 100, lpcParser::RuleReturn_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(674);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(668);
      match(lpcParser::L_RETURN);
      setState(669);
      match(lpcParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(670);
      match(lpcParser::L_RETURN);
      setState(671);
      comma_expr();
      setState(672);
      match(lpcParser::T__0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_listContext ------------------------------------------------------------------

lpcParser::Expr_listContext::Expr_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Expr_list2Context* lpcParser::Expr_listContext::expr_list2() {
  return getRuleContext<lpcParser::Expr_list2Context>(0);
}


size_t lpcParser::Expr_listContext::getRuleIndex() const {
  return lpcParser::RuleExpr_list;
}

void lpcParser::Expr_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_list(this);
}

void lpcParser::Expr_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_list(this);
}


antlrcpp::Any lpcParser::Expr_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitExpr_list(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Expr_listContext* lpcParser::expr_list() {
  Expr_listContext *_localctx = _tracker.createInstance<Expr_listContext>(_ctx, getState());
  enterRule(_localctx, 102, lpcParser::RuleExpr_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(680);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(676);
      expr_list2();
      break;
    }

    case 2: {
      setState(677);
      expr_list2();
      setState(678);
      match(lpcParser::T__1);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_list_nodeContext ------------------------------------------------------------------

lpcParser::Expr_list_nodeContext::Expr_list_nodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Expr0Context* lpcParser::Expr_list_nodeContext::expr0() {
  return getRuleContext<lpcParser::Expr0Context>(0);
}

tree::TerminalNode* lpcParser::Expr_list_nodeContext::L_DOT_DOT_DOT() {
  return getToken(lpcParser::L_DOT_DOT_DOT, 0);
}


size_t lpcParser::Expr_list_nodeContext::getRuleIndex() const {
  return lpcParser::RuleExpr_list_node;
}

void lpcParser::Expr_list_nodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_list_node(this);
}

void lpcParser::Expr_list_nodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_list_node(this);
}


antlrcpp::Any lpcParser::Expr_list_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitExpr_list_node(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Expr_list_nodeContext* lpcParser::expr_list_node() {
  Expr_list_nodeContext *_localctx = _tracker.createInstance<Expr_list_nodeContext>(_ctx, getState());
  enterRule(_localctx, 104, lpcParser::RuleExpr_list_node);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(686);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(682);
      expr0(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(683);
      expr0(0);
      setState(684);
      match(lpcParser::L_DOT_DOT_DOT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_list2Context ------------------------------------------------------------------

lpcParser::Expr_list2Context::Expr_list2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<lpcParser::Expr_list_nodeContext *> lpcParser::Expr_list2Context::expr_list_node() {
  return getRuleContexts<lpcParser::Expr_list_nodeContext>();
}

lpcParser::Expr_list_nodeContext* lpcParser::Expr_list2Context::expr_list_node(size_t i) {
  return getRuleContext<lpcParser::Expr_list_nodeContext>(i);
}


size_t lpcParser::Expr_list2Context::getRuleIndex() const {
  return lpcParser::RuleExpr_list2;
}

void lpcParser::Expr_list2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_list2(this);
}

void lpcParser::Expr_list2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_list2(this);
}


antlrcpp::Any lpcParser::Expr_list2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitExpr_list2(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Expr_list2Context* lpcParser::expr_list2() {
  Expr_list2Context *_localctx = _tracker.createInstance<Expr_list2Context>(_ctx, getState());
  enterRule(_localctx, 106, lpcParser::RuleExpr_list2);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(688);
    expr_list_node();
    setState(693);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(689);
        match(lpcParser::T__1);
        setState(690);
        expr_list_node(); 
      }
      setState(695);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_list3Context ------------------------------------------------------------------

lpcParser::Expr_list3Context::Expr_list3Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Expr_list4Context* lpcParser::Expr_list3Context::expr_list4() {
  return getRuleContext<lpcParser::Expr_list4Context>(0);
}


size_t lpcParser::Expr_list3Context::getRuleIndex() const {
  return lpcParser::RuleExpr_list3;
}

void lpcParser::Expr_list3Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_list3(this);
}

void lpcParser::Expr_list3Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_list3(this);
}


antlrcpp::Any lpcParser::Expr_list3Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitExpr_list3(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Expr_list3Context* lpcParser::expr_list3() {
  Expr_list3Context *_localctx = _tracker.createInstance<Expr_list3Context>(_ctx, getState());
  enterRule(_localctx, 108, lpcParser::RuleExpr_list3);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(700);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(696);
      expr_list4();
      break;
    }

    case 2: {
      setState(697);
      expr_list4();
      setState(698);
      match(lpcParser::T__1);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_list4Context ------------------------------------------------------------------

lpcParser::Expr_list4Context::Expr_list4Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<lpcParser::Assoc_pairContext *> lpcParser::Expr_list4Context::assoc_pair() {
  return getRuleContexts<lpcParser::Assoc_pairContext>();
}

lpcParser::Assoc_pairContext* lpcParser::Expr_list4Context::assoc_pair(size_t i) {
  return getRuleContext<lpcParser::Assoc_pairContext>(i);
}


size_t lpcParser::Expr_list4Context::getRuleIndex() const {
  return lpcParser::RuleExpr_list4;
}

void lpcParser::Expr_list4Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_list4(this);
}

void lpcParser::Expr_list4Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_list4(this);
}


antlrcpp::Any lpcParser::Expr_list4Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitExpr_list4(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Expr_list4Context* lpcParser::expr_list4() {
  Expr_list4Context *_localctx = _tracker.createInstance<Expr_list4Context>(_ctx, getState());
  enterRule(_localctx, 110, lpcParser::RuleExpr_list4);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(702);
    assoc_pair();
    setState(707);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(703);
        match(lpcParser::T__1);
        setState(704);
        assoc_pair(); 
      }
      setState(709);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assoc_pairContext ------------------------------------------------------------------

lpcParser::Assoc_pairContext::Assoc_pairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<lpcParser::Expr0Context *> lpcParser::Assoc_pairContext::expr0() {
  return getRuleContexts<lpcParser::Expr0Context>();
}

lpcParser::Expr0Context* lpcParser::Assoc_pairContext::expr0(size_t i) {
  return getRuleContext<lpcParser::Expr0Context>(i);
}


size_t lpcParser::Assoc_pairContext::getRuleIndex() const {
  return lpcParser::RuleAssoc_pair;
}

void lpcParser::Assoc_pairContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssoc_pair(this);
}

void lpcParser::Assoc_pairContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssoc_pair(this);
}


antlrcpp::Any lpcParser::Assoc_pairContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitAssoc_pair(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Assoc_pairContext* lpcParser::assoc_pair() {
  Assoc_pairContext *_localctx = _tracker.createInstance<Assoc_pairContext>(_ctx, getState());
  enterRule(_localctx, 112, lpcParser::RuleAssoc_pair);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(710);
    expr0(0);
    setState(711);
    match(lpcParser::T__5);
    setState(712);
    expr0(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LvalueContext ------------------------------------------------------------------

lpcParser::LvalueContext::LvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Expr4Context* lpcParser::LvalueContext::expr4() {
  return getRuleContext<lpcParser::Expr4Context>(0);
}


size_t lpcParser::LvalueContext::getRuleIndex() const {
  return lpcParser::RuleLvalue;
}

void lpcParser::LvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLvalue(this);
}

void lpcParser::LvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLvalue(this);
}


antlrcpp::Any lpcParser::LvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitLvalue(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::LvalueContext* lpcParser::lvalue() {
  LvalueContext *_localctx = _tracker.createInstance<LvalueContext>(_ctx, getState());
  enterRule(_localctx, 114, lpcParser::RuleLvalue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(714);
    expr4();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- L_new_function_openContext ------------------------------------------------------------------

lpcParser::L_new_function_openContext::L_new_function_openContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Efun_overrideContext* lpcParser::L_new_function_openContext::efun_override() {
  return getRuleContext<lpcParser::Efun_overrideContext>(0);
}


size_t lpcParser::L_new_function_openContext::getRuleIndex() const {
  return lpcParser::RuleL_new_function_open;
}

void lpcParser::L_new_function_openContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterL_new_function_open(this);
}

void lpcParser::L_new_function_openContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitL_new_function_open(this);
}


antlrcpp::Any lpcParser::L_new_function_openContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitL_new_function_open(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::L_new_function_openContext* lpcParser::l_new_function_open() {
  L_new_function_openContext *_localctx = _tracker.createInstance<L_new_function_openContext>(_ctx, getState());
  enterRule(_localctx, 116, lpcParser::RuleL_new_function_open);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(719);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(716);
      match(lpcParser::T__18);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(717);
      match(lpcParser::T__18);
      setState(718);
      efun_override();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr3Context ------------------------------------------------------------------

lpcParser::Expr3Context::Expr3Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::Expr3Context::L_IDENTIFIER() {
  return getToken(lpcParser::L_IDENTIFIER, 0);
}

tree::TerminalNode* lpcParser::Expr3Context::L_PARAMETER() {
  return getToken(lpcParser::L_PARAMETER, 0);
}

lpcParser::Comma_exprContext* lpcParser::Expr3Context::comma_expr() {
  return getRuleContext<lpcParser::Comma_exprContext>(0);
}

lpcParser::StringContext* lpcParser::Expr3Context::string() {
  return getRuleContext<lpcParser::StringContext>(0);
}

lpcParser::Catch_blockContext* lpcParser::Expr3Context::catch_block() {
  return getRuleContext<lpcParser::Catch_blockContext>(0);
}

lpcParser::Tree_blockContext* lpcParser::Expr3Context::tree_block() {
  return getRuleContext<lpcParser::Tree_blockContext>(0);
}

tree::TerminalNode* lpcParser::Expr3Context::L_BASIC_TYPE() {
  return getToken(lpcParser::L_BASIC_TYPE, 0);
}

lpcParser::ArgumentContext* lpcParser::Expr3Context::argument() {
  return getRuleContext<lpcParser::ArgumentContext>(0);
}

lpcParser::BlockContext* lpcParser::Expr3Context::block() {
  return getRuleContext<lpcParser::BlockContext>(0);
}

lpcParser::L_new_function_openContext* lpcParser::Expr3Context::l_new_function_open() {
  return getRuleContext<lpcParser::L_new_function_openContext>(0);
}

lpcParser::Expr_list2Context* lpcParser::Expr3Context::expr_list2() {
  return getRuleContext<lpcParser::Expr_list2Context>(0);
}

tree::TerminalNode* lpcParser::Expr3Context::L_MAPPING_OPEN() {
  return getToken(lpcParser::L_MAPPING_OPEN, 0);
}

lpcParser::Expr_list3Context* lpcParser::Expr3Context::expr_list3() {
  return getRuleContext<lpcParser::Expr_list3Context>(0);
}

tree::TerminalNode* lpcParser::Expr3Context::L_ARRAY_OPEN() {
  return getToken(lpcParser::L_ARRAY_OPEN, 0);
}

lpcParser::Expr_listContext* lpcParser::Expr3Context::expr_list() {
  return getRuleContext<lpcParser::Expr_listContext>(0);
}

lpcParser::Function_nameContext* lpcParser::Expr3Context::function_name() {
  return getRuleContext<lpcParser::Function_nameContext>(0);
}


size_t lpcParser::Expr3Context::getRuleIndex() const {
  return lpcParser::RuleExpr3;
}

void lpcParser::Expr3Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr3(this);
}

void lpcParser::Expr3Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr3(this);
}


antlrcpp::Any lpcParser::Expr3Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitExpr3(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Expr3Context* lpcParser::expr3() {
  Expr3Context *_localctx = _tracker.createInstance<Expr3Context>(_ctx, getState());
  enterRule(_localctx, 118, lpcParser::RuleExpr3);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(771);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(721);
      match(lpcParser::L_IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(722);
      match(lpcParser::L_PARAMETER);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(723);
      match(lpcParser::T__19);
      setState(724);
      match(lpcParser::T__2);
      setState(725);
      comma_expr();
      setState(726);
      match(lpcParser::T__3);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(728);
      string();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(729);
      match(lpcParser::T__2);
      setState(730);
      comma_expr();
      setState(731);
      match(lpcParser::T__3);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(733);
      catch_block();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(734);
      tree_block();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(735);
      match(lpcParser::L_BASIC_TYPE);
      setState(736);
      match(lpcParser::T__2);
      setState(737);
      argument();
      setState(738);
      match(lpcParser::T__3);
      setState(739);
      block();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(741);
      l_new_function_open();
      setState(742);
      match(lpcParser::T__5);
      setState(743);
      match(lpcParser::T__3);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(745);
      l_new_function_open();
      setState(746);
      match(lpcParser::T__1);
      setState(747);
      expr_list2();
      setState(748);
      match(lpcParser::T__5);
      setState(749);
      match(lpcParser::T__3);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(751);
      match(lpcParser::T__18);
      setState(752);
      comma_expr();
      setState(753);
      match(lpcParser::T__5);
      setState(754);
      match(lpcParser::T__3);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(756);
      match(lpcParser::L_MAPPING_OPEN);
      setState(757);
      expr_list3();
      setState(758);
      match(lpcParser::T__20);
      setState(759);
      match(lpcParser::T__3);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(761);
      match(lpcParser::L_ARRAY_OPEN);
      setState(762);
      expr_list();
      setState(763);
      match(lpcParser::T__7);
      setState(764);
      match(lpcParser::T__3);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(766);
      function_name();
      setState(767);
      match(lpcParser::T__2);
      setState(768);
      expr_list();
      setState(769);
      match(lpcParser::T__3);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr4Context ------------------------------------------------------------------

lpcParser::Expr4Context::Expr4Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::Expr3Context* lpcParser::Expr4Context::expr3() {
  return getRuleContext<lpcParser::Expr3Context>(0);
}

std::vector<tree::TerminalNode *> lpcParser::Expr4Context::L_ARROW() {
  return getTokens(lpcParser::L_ARROW);
}

tree::TerminalNode* lpcParser::Expr4Context::L_ARROW(size_t i) {
  return getToken(lpcParser::L_ARROW, i);
}

std::vector<lpcParser::IdentifierContext *> lpcParser::Expr4Context::identifier() {
  return getRuleContexts<lpcParser::IdentifierContext>();
}

lpcParser::IdentifierContext* lpcParser::Expr4Context::identifier(size_t i) {
  return getRuleContext<lpcParser::IdentifierContext>(i);
}

std::vector<lpcParser::Comma_exprContext *> lpcParser::Expr4Context::comma_expr() {
  return getRuleContexts<lpcParser::Comma_exprContext>();
}

lpcParser::Comma_exprContext* lpcParser::Expr4Context::comma_expr(size_t i) {
  return getRuleContext<lpcParser::Comma_exprContext>(i);
}

std::vector<tree::TerminalNode *> lpcParser::Expr4Context::L_RANGE() {
  return getTokens(lpcParser::L_RANGE);
}

tree::TerminalNode* lpcParser::Expr4Context::L_RANGE(size_t i) {
  return getToken(lpcParser::L_RANGE, i);
}

lpcParser::Efun_overrideContext* lpcParser::Expr4Context::efun_override() {
  return getRuleContext<lpcParser::Efun_overrideContext>(0);
}

lpcParser::Expr_listContext* lpcParser::Expr4Context::expr_list() {
  return getRuleContext<lpcParser::Expr_listContext>(0);
}

tree::TerminalNode* lpcParser::Expr4Context::L_NEW() {
  return getToken(lpcParser::L_NEW, 0);
}

tree::TerminalNode* lpcParser::Expr4Context::L_CLASS() {
  return getToken(lpcParser::L_CLASS, 0);
}

tree::TerminalNode* lpcParser::Expr4Context::L_IDENTIFIER() {
  return getToken(lpcParser::L_IDENTIFIER, 0);
}

lpcParser::Opt_class_initContext* lpcParser::Expr4Context::opt_class_init() {
  return getRuleContext<lpcParser::Opt_class_initContext>(0);
}

lpcParser::Function_nameContext* lpcParser::Expr4Context::function_name() {
  return getRuleContext<lpcParser::Function_nameContext>(0);
}


size_t lpcParser::Expr4Context::getRuleIndex() const {
  return lpcParser::RuleExpr4;
}

void lpcParser::Expr4Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr4(this);
}

void lpcParser::Expr4Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr4(this);
}


antlrcpp::Any lpcParser::Expr4Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitExpr4(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Expr4Context* lpcParser::expr4() {
  Expr4Context *_localctx = _tracker.createInstance<Expr4Context>(_ctx, getState());
  enterRule(_localctx, 120, lpcParser::RuleExpr4);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(813);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      setState(810);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
      case 1: {
        setState(773);
        efun_override();
        setState(774);
        match(lpcParser::T__2);
        setState(775);
        expr_list();
        setState(776);
        match(lpcParser::T__3);
        break;
      }

      case 2: {
        setState(778);
        match(lpcParser::L_NEW);
        setState(779);
        match(lpcParser::T__2);
        setState(780);
        expr_list();
        setState(781);
        match(lpcParser::T__3);
        break;
      }

      case 3: {
        setState(783);
        match(lpcParser::L_NEW);
        setState(784);
        match(lpcParser::T__2);
        setState(785);
        match(lpcParser::L_CLASS);
        setState(786);
        match(lpcParser::L_IDENTIFIER);
        setState(787);
        opt_class_init();
        setState(788);
        match(lpcParser::T__3);
        break;
      }

      case 4: {
        setState(790);
        function_name();
        setState(791);
        match(lpcParser::T__2);
        setState(792);
        expr_list();
        setState(793);
        match(lpcParser::T__3);
        break;
      }

      case 5: {
        setState(795);
        expr3();
        setState(796);
        match(lpcParser::L_ARROW);
        setState(797);
        identifier();
        setState(798);
        match(lpcParser::T__2);
        setState(799);
        expr_list();
        setState(800);
        match(lpcParser::T__3);
        break;
      }

      case 6: {
        setState(802);
        match(lpcParser::T__2);
        setState(803);
        match(lpcParser::T__4);
        setState(804);
        comma_expr();
        setState(805);
        match(lpcParser::T__3);
        setState(806);
        match(lpcParser::T__2);
        setState(807);
        expr_list();
        setState(808);
        match(lpcParser::T__3);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      setState(812);
      expr3();
      break;
    }

    default:
      break;
    }
    setState(867);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(865);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
        case 1: {
          setState(815);
          match(lpcParser::L_ARROW);
          setState(816);
          identifier();
          break;
        }

        case 2: {
          setState(817);
          match(lpcParser::T__21);
          setState(818);
          comma_expr();
          setState(819);
          match(lpcParser::L_RANGE);
          setState(820);
          comma_expr();
          setState(821);
          match(lpcParser::T__20);
          break;
        }

        case 3: {
          setState(823);
          match(lpcParser::T__21);
          setState(824);
          match(lpcParser::T__11);
          setState(825);
          comma_expr();
          setState(826);
          match(lpcParser::L_RANGE);
          setState(827);
          comma_expr();
          setState(828);
          match(lpcParser::T__20);
          break;
        }

        case 4: {
          setState(830);
          match(lpcParser::T__21);
          setState(831);
          match(lpcParser::T__11);
          setState(832);
          comma_expr();
          setState(833);
          match(lpcParser::L_RANGE);
          setState(834);
          match(lpcParser::T__11);
          setState(835);
          comma_expr();
          setState(836);
          match(lpcParser::T__20);
          break;
        }

        case 5: {
          setState(838);
          match(lpcParser::T__21);
          setState(839);
          comma_expr();
          setState(840);
          match(lpcParser::L_RANGE);
          setState(841);
          match(lpcParser::T__11);
          setState(842);
          comma_expr();
          setState(843);
          match(lpcParser::T__20);
          break;
        }

        case 6: {
          setState(845);
          match(lpcParser::T__21);
          setState(846);
          comma_expr();
          setState(847);
          match(lpcParser::L_RANGE);
          setState(848);
          match(lpcParser::T__20);
          break;
        }

        case 7: {
          setState(850);
          match(lpcParser::T__21);
          setState(851);
          match(lpcParser::T__11);
          setState(852);
          comma_expr();
          setState(853);
          match(lpcParser::L_RANGE);
          setState(854);
          match(lpcParser::T__20);
          break;
        }

        case 8: {
          setState(856);
          match(lpcParser::T__21);
          setState(857);
          match(lpcParser::T__11);
          setState(858);
          comma_expr();
          setState(859);
          match(lpcParser::T__20);
          break;
        }

        case 9: {
          setState(861);
          match(lpcParser::T__21);
          setState(862);
          comma_expr();
          setState(863);
          match(lpcParser::T__20);
          break;
        }

        default:
          break;
        } 
      }
      setState(869);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_or_blockContext ------------------------------------------------------------------

lpcParser::Expr_or_blockContext::Expr_or_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::BlockContext* lpcParser::Expr_or_blockContext::block() {
  return getRuleContext<lpcParser::BlockContext>(0);
}

lpcParser::Comma_exprContext* lpcParser::Expr_or_blockContext::comma_expr() {
  return getRuleContext<lpcParser::Comma_exprContext>(0);
}


size_t lpcParser::Expr_or_blockContext::getRuleIndex() const {
  return lpcParser::RuleExpr_or_block;
}

void lpcParser::Expr_or_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_or_block(this);
}

void lpcParser::Expr_or_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_or_block(this);
}


antlrcpp::Any lpcParser::Expr_or_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitExpr_or_block(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Expr_or_blockContext* lpcParser::expr_or_block() {
  Expr_or_blockContext *_localctx = _tracker.createInstance<Expr_or_blockContext>(_ctx, getState());
  enterRule(_localctx, 122, lpcParser::RuleExpr_or_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(875);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lpcParser::T__6: {
        enterOuterAlt(_localctx, 1);
        setState(870);
        block();
        break;
      }

      case lpcParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(871);
        match(lpcParser::T__2);
        setState(872);
        comma_expr();
        setState(873);
        match(lpcParser::T__3);
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

//----------------- Catch_blockContext ------------------------------------------------------------------

lpcParser::Catch_blockContext::Catch_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::Catch_blockContext::L_CATCH() {
  return getToken(lpcParser::L_CATCH, 0);
}

lpcParser::Expr_or_blockContext* lpcParser::Catch_blockContext::expr_or_block() {
  return getRuleContext<lpcParser::Expr_or_blockContext>(0);
}


size_t lpcParser::Catch_blockContext::getRuleIndex() const {
  return lpcParser::RuleCatch_block;
}

void lpcParser::Catch_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatch_block(this);
}

void lpcParser::Catch_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatch_block(this);
}


antlrcpp::Any lpcParser::Catch_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitCatch_block(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Catch_blockContext* lpcParser::catch_block() {
  Catch_blockContext *_localctx = _tracker.createInstance<Catch_blockContext>(_ctx, getState());
  enterRule(_localctx, 124, lpcParser::RuleCatch_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(877);
    match(lpcParser::L_CATCH);
    setState(878);
    expr_or_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Tree_blockContext ------------------------------------------------------------------

lpcParser::Tree_blockContext::Tree_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::Tree_blockContext::L_TREE() {
  return getToken(lpcParser::L_TREE, 0);
}

lpcParser::BlockContext* lpcParser::Tree_blockContext::block() {
  return getRuleContext<lpcParser::BlockContext>(0);
}

lpcParser::Comma_exprContext* lpcParser::Tree_blockContext::comma_expr() {
  return getRuleContext<lpcParser::Comma_exprContext>(0);
}


size_t lpcParser::Tree_blockContext::getRuleIndex() const {
  return lpcParser::RuleTree_block;
}

void lpcParser::Tree_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTree_block(this);
}

void lpcParser::Tree_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTree_block(this);
}


antlrcpp::Any lpcParser::Tree_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitTree_block(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Tree_blockContext* lpcParser::tree_block() {
  Tree_blockContext *_localctx = _tracker.createInstance<Tree_blockContext>(_ctx, getState());
  enterRule(_localctx, 126, lpcParser::RuleTree_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(887);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(880);
      match(lpcParser::L_TREE);
      setState(881);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(882);
      match(lpcParser::L_TREE);
      setState(883);
      match(lpcParser::T__2);
      setState(884);
      comma_expr();
      setState(885);
      match(lpcParser::T__3);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SscanfContext ------------------------------------------------------------------

lpcParser::SscanfContext::SscanfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::SscanfContext::L_SSCANF() {
  return getToken(lpcParser::L_SSCANF, 0);
}

std::vector<lpcParser::Expr0Context *> lpcParser::SscanfContext::expr0() {
  return getRuleContexts<lpcParser::Expr0Context>();
}

lpcParser::Expr0Context* lpcParser::SscanfContext::expr0(size_t i) {
  return getRuleContext<lpcParser::Expr0Context>(i);
}

lpcParser::Lvalue_listContext* lpcParser::SscanfContext::lvalue_list() {
  return getRuleContext<lpcParser::Lvalue_listContext>(0);
}


size_t lpcParser::SscanfContext::getRuleIndex() const {
  return lpcParser::RuleSscanf;
}

void lpcParser::SscanfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSscanf(this);
}

void lpcParser::SscanfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSscanf(this);
}


antlrcpp::Any lpcParser::SscanfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitSscanf(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::SscanfContext* lpcParser::sscanf() {
  SscanfContext *_localctx = _tracker.createInstance<SscanfContext>(_ctx, getState());
  enterRule(_localctx, 128, lpcParser::RuleSscanf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(889);
    match(lpcParser::L_SSCANF);
    setState(890);
    match(lpcParser::T__2);
    setState(891);
    expr0(0);
    setState(892);
    match(lpcParser::T__1);
    setState(893);
    expr0(0);
    setState(894);
    lvalue_list();
    setState(895);
    match(lpcParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parse_commandContext ------------------------------------------------------------------

lpcParser::Parse_commandContext::Parse_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::Parse_commandContext::L_PARSE_COMMAND() {
  return getToken(lpcParser::L_PARSE_COMMAND, 0);
}

std::vector<lpcParser::Expr0Context *> lpcParser::Parse_commandContext::expr0() {
  return getRuleContexts<lpcParser::Expr0Context>();
}

lpcParser::Expr0Context* lpcParser::Parse_commandContext::expr0(size_t i) {
  return getRuleContext<lpcParser::Expr0Context>(i);
}

lpcParser::Lvalue_listContext* lpcParser::Parse_commandContext::lvalue_list() {
  return getRuleContext<lpcParser::Lvalue_listContext>(0);
}


size_t lpcParser::Parse_commandContext::getRuleIndex() const {
  return lpcParser::RuleParse_command;
}

void lpcParser::Parse_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParse_command(this);
}

void lpcParser::Parse_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParse_command(this);
}


antlrcpp::Any lpcParser::Parse_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitParse_command(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Parse_commandContext* lpcParser::parse_command() {
  Parse_commandContext *_localctx = _tracker.createInstance<Parse_commandContext>(_ctx, getState());
  enterRule(_localctx, 130, lpcParser::RuleParse_command);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(897);
    match(lpcParser::L_PARSE_COMMAND);
    setState(898);
    match(lpcParser::T__2);
    setState(899);
    expr0(0);
    setState(900);
    match(lpcParser::T__1);
    setState(901);
    expr0(0);
    setState(902);
    match(lpcParser::T__1);
    setState(903);
    expr0(0);
    setState(904);
    lvalue_list();
    setState(905);
    match(lpcParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Time_expressionContext ------------------------------------------------------------------

lpcParser::Time_expressionContext::Time_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::Time_expressionContext::L_TIME_EXPRESSION() {
  return getToken(lpcParser::L_TIME_EXPRESSION, 0);
}

lpcParser::Expr_or_blockContext* lpcParser::Time_expressionContext::expr_or_block() {
  return getRuleContext<lpcParser::Expr_or_blockContext>(0);
}


size_t lpcParser::Time_expressionContext::getRuleIndex() const {
  return lpcParser::RuleTime_expression;
}

void lpcParser::Time_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTime_expression(this);
}

void lpcParser::Time_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTime_expression(this);
}


antlrcpp::Any lpcParser::Time_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitTime_expression(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Time_expressionContext* lpcParser::time_expression() {
  Time_expressionContext *_localctx = _tracker.createInstance<Time_expressionContext>(_ctx, getState());
  enterRule(_localctx, 132, lpcParser::RuleTime_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(907);
    match(lpcParser::L_TIME_EXPRESSION);
    setState(908);
    expr_or_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Lvalue_listContext ------------------------------------------------------------------

lpcParser::Lvalue_listContext::Lvalue_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<lpcParser::LvalueContext *> lpcParser::Lvalue_listContext::lvalue() {
  return getRuleContexts<lpcParser::LvalueContext>();
}

lpcParser::LvalueContext* lpcParser::Lvalue_listContext::lvalue(size_t i) {
  return getRuleContext<lpcParser::LvalueContext>(i);
}


size_t lpcParser::Lvalue_listContext::getRuleIndex() const {
  return lpcParser::RuleLvalue_list;
}

void lpcParser::Lvalue_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLvalue_list(this);
}

void lpcParser::Lvalue_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLvalue_list(this);
}


antlrcpp::Any lpcParser::Lvalue_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitLvalue_list(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Lvalue_listContext* lpcParser::lvalue_list() {
  Lvalue_listContext *_localctx = _tracker.createInstance<Lvalue_listContext>(_ctx, getState());
  enterRule(_localctx, 134, lpcParser::RuleLvalue_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(914);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lpcParser::T__1) {
      setState(910);
      match(lpcParser::T__1);
      setState(911);
      lvalue();
      setState(916);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

lpcParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::String_con2Context* lpcParser::StringContext::string_con2() {
  return getRuleContext<lpcParser::String_con2Context>(0);
}


size_t lpcParser::StringContext::getRuleIndex() const {
  return lpcParser::RuleString;
}

void lpcParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void lpcParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}


antlrcpp::Any lpcParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::StringContext* lpcParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 136, lpcParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(917);
    string_con2();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_con1Context ------------------------------------------------------------------

lpcParser::String_con1Context::String_con1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t lpcParser::String_con1Context::getRuleIndex() const {
  return lpcParser::RuleString_con1;
}

void lpcParser::String_con1Context::copyFrom(String_con1Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StringConstConcatContext ------------------------------------------------------------------

lpcParser::String_con2Context* lpcParser::StringConstConcatContext::string_con2() {
  return getRuleContext<lpcParser::String_con2Context>(0);
}

lpcParser::StringConstConcatContext::StringConstConcatContext(String_con1Context *ctx) { copyFrom(ctx); }

void lpcParser::StringConstConcatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringConstConcat(this);
}
void lpcParser::StringConstConcatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringConstConcat(this);
}

antlrcpp::Any lpcParser::StringConstConcatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitStringConstConcat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringConstPlusContext ------------------------------------------------------------------

std::vector<lpcParser::String_con1Context *> lpcParser::StringConstPlusContext::string_con1() {
  return getRuleContexts<lpcParser::String_con1Context>();
}

lpcParser::String_con1Context* lpcParser::StringConstPlusContext::string_con1(size_t i) {
  return getRuleContext<lpcParser::String_con1Context>(i);
}

lpcParser::StringConstPlusContext::StringConstPlusContext(String_con1Context *ctx) { copyFrom(ctx); }

void lpcParser::StringConstPlusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringConstPlus(this);
}
void lpcParser::StringConstPlusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringConstPlus(this);
}

antlrcpp::Any lpcParser::StringConstPlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitStringConstPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringConstInParenContext ------------------------------------------------------------------

lpcParser::String_con1Context* lpcParser::StringConstInParenContext::string_con1() {
  return getRuleContext<lpcParser::String_con1Context>(0);
}

lpcParser::StringConstInParenContext::StringConstInParenContext(String_con1Context *ctx) { copyFrom(ctx); }

void lpcParser::StringConstInParenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringConstInParen(this);
}
void lpcParser::StringConstInParenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringConstInParen(this);
}

antlrcpp::Any lpcParser::StringConstInParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitStringConstInParen(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::String_con1Context* lpcParser::string_con1() {
   return string_con1(0);
}

lpcParser::String_con1Context* lpcParser::string_con1(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  lpcParser::String_con1Context *_localctx = _tracker.createInstance<String_con1Context>(_ctx, parentState);
  lpcParser::String_con1Context *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 138;
  enterRecursionRule(_localctx, 138, lpcParser::RuleString_con1, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(925);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case lpcParser::L_STRING: {
        _localctx = _tracker.createInstance<StringConstConcatContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(920);
        string_con2();
        break;
      }

      case lpcParser::T__2: {
        _localctx = _tracker.createInstance<StringConstInParenContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(921);
        match(lpcParser::T__2);
        setState(922);
        string_con1(0);
        setState(923);
        match(lpcParser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(932);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<StringConstPlusContext>(_tracker.createInstance<String_con1Context>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleString_con1);
        setState(927);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(928);
        match(lpcParser::T__12);
        setState(929);
        string_con1(2); 
      }
      setState(934);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- String_con2Context ------------------------------------------------------------------

lpcParser::String_con2Context::String_con2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> lpcParser::String_con2Context::L_STRING() {
  return getTokens(lpcParser::L_STRING);
}

tree::TerminalNode* lpcParser::String_con2Context::L_STRING(size_t i) {
  return getToken(lpcParser::L_STRING, i);
}


size_t lpcParser::String_con2Context::getRuleIndex() const {
  return lpcParser::RuleString_con2;
}

void lpcParser::String_con2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString_con2(this);
}

void lpcParser::String_con2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString_con2(this);
}


antlrcpp::Any lpcParser::String_con2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitString_con2(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::String_con2Context* lpcParser::string_con2() {
  String_con2Context *_localctx = _tracker.createInstance<String_con2Context>(_ctx, getState());
  enterRule(_localctx, 140, lpcParser::RuleString_con2);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(936); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(935);
              match(lpcParser::L_STRING);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(938); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_initContext ------------------------------------------------------------------

lpcParser::Class_initContext::Class_initContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

lpcParser::IdentifierContext* lpcParser::Class_initContext::identifier() {
  return getRuleContext<lpcParser::IdentifierContext>(0);
}

lpcParser::Expr0Context* lpcParser::Class_initContext::expr0() {
  return getRuleContext<lpcParser::Expr0Context>(0);
}


size_t lpcParser::Class_initContext::getRuleIndex() const {
  return lpcParser::RuleClass_init;
}

void lpcParser::Class_initContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_init(this);
}

void lpcParser::Class_initContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_init(this);
}


antlrcpp::Any lpcParser::Class_initContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitClass_init(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Class_initContext* lpcParser::class_init() {
  Class_initContext *_localctx = _tracker.createInstance<Class_initContext>(_ctx, getState());
  enterRule(_localctx, 142, lpcParser::RuleClass_init);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(940);
    identifier();
    setState(941);
    match(lpcParser::T__5);
    setState(942);
    expr0(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Opt_class_initContext ------------------------------------------------------------------

lpcParser::Opt_class_initContext::Opt_class_initContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<lpcParser::Class_initContext *> lpcParser::Opt_class_initContext::class_init() {
  return getRuleContexts<lpcParser::Class_initContext>();
}

lpcParser::Class_initContext* lpcParser::Opt_class_initContext::class_init(size_t i) {
  return getRuleContext<lpcParser::Class_initContext>(i);
}


size_t lpcParser::Opt_class_initContext::getRuleIndex() const {
  return lpcParser::RuleOpt_class_init;
}

void lpcParser::Opt_class_initContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpt_class_init(this);
}

void lpcParser::Opt_class_initContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpt_class_init(this);
}


antlrcpp::Any lpcParser::Opt_class_initContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitOpt_class_init(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Opt_class_initContext* lpcParser::opt_class_init() {
  Opt_class_initContext *_localctx = _tracker.createInstance<Opt_class_initContext>(_ctx, getState());
  enterRule(_localctx, 144, lpcParser::RuleOpt_class_init);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(948);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == lpcParser::T__1) {
      setState(944);
      match(lpcParser::T__1);
      setState(945);
      class_init();
      setState(950);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Efun_overrideContext ------------------------------------------------------------------

lpcParser::Efun_overrideContext::Efun_overrideContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::Efun_overrideContext::L_EFUN() {
  return getToken(lpcParser::L_EFUN, 0);
}

tree::TerminalNode* lpcParser::Efun_overrideContext::L_COLON_COLON() {
  return getToken(lpcParser::L_COLON_COLON, 0);
}

lpcParser::IdentifierContext* lpcParser::Efun_overrideContext::identifier() {
  return getRuleContext<lpcParser::IdentifierContext>(0);
}

tree::TerminalNode* lpcParser::Efun_overrideContext::L_NEW() {
  return getToken(lpcParser::L_NEW, 0);
}


size_t lpcParser::Efun_overrideContext::getRuleIndex() const {
  return lpcParser::RuleEfun_override;
}

void lpcParser::Efun_overrideContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEfun_override(this);
}

void lpcParser::Efun_overrideContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEfun_override(this);
}


antlrcpp::Any lpcParser::Efun_overrideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitEfun_override(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Efun_overrideContext* lpcParser::efun_override() {
  Efun_overrideContext *_localctx = _tracker.createInstance<Efun_overrideContext>(_ctx, getState());
  enterRule(_localctx, 146, lpcParser::RuleEfun_override);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(957);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(951);
      match(lpcParser::L_EFUN);
      setState(952);
      match(lpcParser::L_COLON_COLON);
      setState(953);
      identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(954);
      match(lpcParser::L_EFUN);
      setState(955);
      match(lpcParser::L_COLON_COLON);
      setState(956);
      match(lpcParser::L_NEW);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_nameContext ------------------------------------------------------------------

lpcParser::Function_nameContext::Function_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::Function_nameContext::L_IDENTIFIER() {
  return getToken(lpcParser::L_IDENTIFIER, 0);
}

tree::TerminalNode* lpcParser::Function_nameContext::L_COLON_COLON() {
  return getToken(lpcParser::L_COLON_COLON, 0);
}

std::vector<lpcParser::IdentifierContext *> lpcParser::Function_nameContext::identifier() {
  return getRuleContexts<lpcParser::IdentifierContext>();
}

lpcParser::IdentifierContext* lpcParser::Function_nameContext::identifier(size_t i) {
  return getRuleContext<lpcParser::IdentifierContext>(i);
}

tree::TerminalNode* lpcParser::Function_nameContext::L_BASIC_TYPE() {
  return getToken(lpcParser::L_BASIC_TYPE, 0);
}


size_t lpcParser::Function_nameContext::getRuleIndex() const {
  return lpcParser::RuleFunction_name;
}

void lpcParser::Function_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_name(this);
}

void lpcParser::Function_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_name(this);
}


antlrcpp::Any lpcParser::Function_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitFunction_name(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Function_nameContext* lpcParser::function_name() {
  Function_nameContext *_localctx = _tracker.createInstance<Function_nameContext>(_ctx, getState());
  enterRule(_localctx, 148, lpcParser::RuleFunction_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(969);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(959);
      match(lpcParser::L_IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(960);
      match(lpcParser::L_COLON_COLON);
      setState(961);
      identifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(962);
      match(lpcParser::L_BASIC_TYPE);
      setState(963);
      match(lpcParser::L_COLON_COLON);
      setState(964);
      identifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(965);
      identifier();
      setState(966);
      match(lpcParser::L_COLON_COLON);
      setState(967);
      identifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

lpcParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::CondContext::L_IF() {
  return getToken(lpcParser::L_IF, 0);
}

lpcParser::Comma_exprContext* lpcParser::CondContext::comma_expr() {
  return getRuleContext<lpcParser::Comma_exprContext>(0);
}

lpcParser::StatementContext* lpcParser::CondContext::statement() {
  return getRuleContext<lpcParser::StatementContext>(0);
}

lpcParser::Optional_else_partContext* lpcParser::CondContext::optional_else_part() {
  return getRuleContext<lpcParser::Optional_else_partContext>(0);
}


size_t lpcParser::CondContext::getRuleIndex() const {
  return lpcParser::RuleCond;
}

void lpcParser::CondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCond(this);
}

void lpcParser::CondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCond(this);
}


antlrcpp::Any lpcParser::CondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitCond(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::CondContext* lpcParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 150, lpcParser::RuleCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(971);
    match(lpcParser::L_IF);
    setState(972);
    match(lpcParser::T__2);
    setState(973);
    comma_expr();
    setState(974);
    match(lpcParser::T__3);
    setState(975);
    statement();
    setState(976);
    optional_else_part();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Optional_else_partContext ------------------------------------------------------------------

lpcParser::Optional_else_partContext::Optional_else_partContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::Optional_else_partContext::L_ELSE() {
  return getToken(lpcParser::L_ELSE, 0);
}

lpcParser::StatementContext* lpcParser::Optional_else_partContext::statement() {
  return getRuleContext<lpcParser::StatementContext>(0);
}


size_t lpcParser::Optional_else_partContext::getRuleIndex() const {
  return lpcParser::RuleOptional_else_part;
}

void lpcParser::Optional_else_partContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptional_else_part(this);
}

void lpcParser::Optional_else_partContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptional_else_part(this);
}


antlrcpp::Any lpcParser::Optional_else_partContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitOptional_else_part(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::Optional_else_partContext* lpcParser::optional_else_part() {
  Optional_else_partContext *_localctx = _tracker.createInstance<Optional_else_partContext>(_ctx, getState());
  enterRule(_localctx, 152, lpcParser::RuleOptional_else_part);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(980);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      setState(978);
      match(lpcParser::L_ELSE);
      setState(979);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ErrorContext ------------------------------------------------------------------

lpcParser::ErrorContext::ErrorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* lpcParser::ErrorContext::L_ERROR() {
  return getToken(lpcParser::L_ERROR, 0);
}


size_t lpcParser::ErrorContext::getRuleIndex() const {
  return lpcParser::RuleError;
}

void lpcParser::ErrorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterError(this);
}

void lpcParser::ErrorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<lpcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitError(this);
}


antlrcpp::Any lpcParser::ErrorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<lpcVisitor*>(visitor))
    return parserVisitor->visitError(this);
  else
    return visitor->visitChildren(this);
}

lpcParser::ErrorContext* lpcParser::error() {
  ErrorContext *_localctx = _tracker.createInstance<ErrorContext>(_ctx, getState());
  enterRule(_localctx, 154, lpcParser::RuleError);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(982);
    match(lpcParser::L_ERROR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool lpcParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return preprocessor_invoke_arglistSempred(dynamic_cast<Preprocessor_invoke_arglistContext *>(context), predicateIndex);
    case 46: return constantSempred(dynamic_cast<ConstantContext *>(context), predicateIndex);
    case 49: return expr0Sempred(dynamic_cast<Expr0Context *>(context), predicateIndex);
    case 69: return string_con1Sempred(dynamic_cast<String_con1Context *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool lpcParser::preprocessor_invoke_arglistSempred(Preprocessor_invoke_arglistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool lpcParser::constantSempred(ConstantContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 19);
    case 2: return precpred(_ctx, 18);
    case 3: return precpred(_ctx, 17);
    case 4: return precpred(_ctx, 16);
    case 5: return precpred(_ctx, 15);
    case 6: return precpred(_ctx, 14);
    case 7: return precpred(_ctx, 13);
    case 8: return precpred(_ctx, 12);
    case 9: return precpred(_ctx, 11);
    case 10: return precpred(_ctx, 10);
    case 11: return precpred(_ctx, 9);
    case 12: return precpred(_ctx, 8);
    case 13: return precpred(_ctx, 7);
    case 14: return precpred(_ctx, 6);

  default:
    break;
  }
  return true;
}

bool lpcParser::expr0Sempred(Expr0Context *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 15: return precpred(_ctx, 31);
    case 16: return precpred(_ctx, 30);
    case 17: return precpred(_ctx, 29);
    case 18: return precpred(_ctx, 28);
    case 19: return precpred(_ctx, 27);
    case 20: return precpred(_ctx, 26);
    case 21: return precpred(_ctx, 25);
    case 22: return precpred(_ctx, 24);
    case 23: return precpred(_ctx, 23);
    case 24: return precpred(_ctx, 22);
    case 25: return precpred(_ctx, 21);
    case 26: return precpred(_ctx, 20);
    case 27: return precpred(_ctx, 19);
    case 28: return precpred(_ctx, 18);
    case 29: return precpred(_ctx, 17);
    case 30: return precpred(_ctx, 16);
    case 31: return precpred(_ctx, 15);

  default:
    break;
  }
  return true;
}

bool lpcParser::string_con1Sempred(String_con1Context *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 32: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> lpcParser::_decisionToDFA;
atn::PredictionContextCache lpcParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN lpcParser::_atn;
std::vector<uint16_t> lpcParser::_serializedATN;

std::vector<std::string> lpcParser::_ruleNames = {
  "program", "preprocessor_invoke_arglist", "preprocessor_invoke", "inheritance", 
  "real", "number", "optional_star", "block_or_semi", "identifier", "function", 
  "def", "var", "modifier_change", "member_name", "type_decl", "new_local_name", 
  "atomic_type", "opt_atomic_type", "basic_type", "arg_type", "new_arg", 
  "argument", "argument_list", "type_modifier_list", "type", "cast", "opt_basic_type", 
  "new_name", "block", "decl_block", "local_declarations", "new_local_def", 
  "single_new_local_def", "single_new_local_def_with_init", "statement", 
  "while_stmt", "do_stmt", "for_stmt", "foreach_var", "foreach_vars", "foreach", 
  "for_expr", "first_for_expr", "switch_stmt", "case_stmt", "case_label", 
  "constant", "comma_expr", "ref", "expr0", "return_stmt", "expr_list", 
  "expr_list_node", "expr_list2", "expr_list3", "expr_list4", "assoc_pair", 
  "lvalue", "l_new_function_open", "expr3", "expr4", "expr_or_block", "catch_block", 
  "tree_block", "sscanf", "parse_command", "time_expression", "lvalue_list", 
  "string", "string_con1", "string_con2", "class_init", "opt_class_init", 
  "efun_override", "function_name", "cond", "optional_else_part", "error"
};

std::vector<std::string> lpcParser::_literalNames = {
  "", "';'", "','", "'('", "')'", "'*'", "':'", "'{'", "'}'", "'|'", "'^'", 
  "'&'", "'<'", "'+'", "'-'", "'%'", "'/'", "'~'", "'\u003F'", "'(:'", "'$'", 
  "']'", "'['", "", "", "", "", "", "'__TREE__'", "'break'", "'case'", "'catch'", 
  "", "'continue'", "'default'", "'do'", "'efun'", "'else'", "", "'for'", 
  "'foreach'", "'if'", "'in'", "'inherit'", "'new'", "", "'parse_command'", 
  "'ref'", "'return'", "'sscanf'", "'switch'", "'time_expression'", "'while'", 
  "", "", "", "", "'&&'", "'||'", "'<<'", "'>>'", "'!'", "'..'", "'...'", 
  "'array'", "", "", "", "'++'", "'--'", "'=='", "'!='", "'->'", "'::'", 
  "'({'", "'(['", "'error'"
};

std::vector<std::string> lpcParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "BlockComment", "LineComment", "Whitespace", "Newline", 
  "L_PREPROCESSOR_COMMAND", "L_TREE", "L_BREAK", "L_CASE", "L_CATCH", "L_CLASS", 
  "L_CONTINUE", "L_DEFAULT", "L_DO", "L_EFUN", "L_ELSE", "L_BASIC_TYPE", 
  "L_FOR", "L_FOREACH", "L_IF", "L_IN", "L_INHERIT", "L_NEW", "L_TYPE_MODIFIER", 
  "L_PARSE_COMMAND", "L_REF", "L_RETURN", "L_SSCANF", "L_SWITCH", "L_TIME_EXPRESSION", 
  "L_WHILE", "L_STRING", "L_NUMBER", "L_REAL", "L_IDENTIFIER", "L_LAND", 
  "L_LOR", "L_LSH", "L_RSH", "L_NOT", "L_RANGE", "L_DOT_DOT_DOT", "L_ARRAY", 
  "L_PARAMETER", "L_ORDER", "L_ASSIGN", "L_INC", "L_DEC", "L_EQ", "L_NE", 
  "L_ARROW", "L_COLON_COLON", "L_ARRAY_OPEN", "L_MAPPING_OPEN", "L_ERROR", 
  "StringLiteral", "DigitSequence"
};

dfa::Vocabulary lpcParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> lpcParser::_tokenNames;

lpcParser::Initializer::Initializer() {
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
    0x3, 0x50, 0x3db, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0xa2, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0xa5, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0xac, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0xb1, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0xb4, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xbc, 0xa, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x8, 0x5, 0x8, 0xc8, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x5, 0x9, 0xcd, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xde, 0xa, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xe4, 0xa, 0xd, 0xc, 0xd, 
    0xe, 0xd, 0xe7, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xf9, 
    0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xfc, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x7, 0x10, 0x101, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x104, 
    0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x5, 0x12, 0x10d, 0xa, 0x12, 0x3, 0x13, 0x5, 0x13, 
    0x110, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 
    0x116, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 
    0x11c, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x126, 0xa, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x12c, 0xa, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x131, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 
    0x134, 0xb, 0x18, 0x3, 0x19, 0x7, 0x19, 0x137, 0xa, 0x19, 0xc, 0x19, 
    0xe, 0x19, 0x13a, 0xb, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x5, 0x1c, 0x145, 
    0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x14f, 0xa, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x154, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 
    0x157, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x15c, 
    0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 
    0x1f, 0x163, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x7, 0x20, 0x169, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x16c, 0xb, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x171, 0xa, 0x20, 0xc, 0x20, 
    0xe, 0x20, 0x174, 0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x17e, 0xa, 0x21, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 
    0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x196, 0xa, 0x24, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 
    0x1b2, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x5, 0x29, 0x1b9, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x5, 0x2b, 0x1c4, 
    0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x1c8, 0xa, 0x2c, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x7, 0x2d, 0x1d3, 0xa, 0x2d, 0xc, 0x2d, 0xe, 0x2d, 
    0x1d6, 0xb, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 
    0x2e, 0x1f0, 0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x1f4, 0xa, 
    0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 
    0x30, 0x202, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
    0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
    0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
    0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x7, 0x30, 
    0x22e, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x231, 0xb, 0x30, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x7, 0x31, 0x236, 0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 
    0x239, 0xb, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
    0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
    0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
    0x33, 0x3, 0x33, 0x5, 0x33, 0x262, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
    0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
    0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
    0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
    0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x7, 0x33, 0x29a, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 0x29d, 0xb, 0x33, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 
    0x34, 0x2a5, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x5, 0x35, 0x2ab, 0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x5, 0x36, 0x2b1, 0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x7, 0x37, 
    0x2b6, 0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 0x2b9, 0xb, 0x37, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x2bf, 0xa, 0x38, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x7, 0x39, 0x2c4, 0xa, 0x39, 0xc, 0x39, 0xe, 0x39, 
    0x2c7, 0xb, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x2d2, 0xa, 0x3c, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
    0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
    0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
    0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
    0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x306, 
    0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 
    0x32d, 0xa, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x330, 0xa, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x7, 0x3e, 0x364, 0xa, 0x3e, 
    0xc, 0x3e, 0xe, 0x3e, 0x367, 0xb, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x36e, 0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x5, 0x41, 0x37a, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 
    0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 
    0x45, 0x3, 0x45, 0x7, 0x45, 0x393, 0xa, 0x45, 0xc, 0x45, 0xe, 0x45, 
    0x396, 0xb, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x3a0, 0xa, 0x47, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x7, 0x47, 0x3a5, 0xa, 0x47, 0xc, 0x47, 0xe, 0x47, 
    0x3a8, 0xb, 0x47, 0x3, 0x48, 0x6, 0x48, 0x3ab, 0xa, 0x48, 0xd, 0x48, 
    0xe, 0x48, 0x3ac, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x4a, 
    0x3, 0x4a, 0x7, 0x4a, 0x3b5, 0xa, 0x4a, 0xc, 0x4a, 0xe, 0x4a, 0x3b8, 
    0xb, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 
    0x4b, 0x5, 0x4b, 0x3c0, 0xa, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 
    0x4c, 0x5, 0x4c, 0x3cc, 0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
    0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x5, 
    0x4e, 0x3d7, 0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x2, 0x6, 0x4, 
    0x5e, 0x64, 0x8c, 0x50, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
    0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 
    0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 
    0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 
    0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 
    0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x2, 0x2, 0x2, 
    0x428, 0x2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x4, 0xa8, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x8, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xa, 0xc2, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xe, 0xc7, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0xcc, 0x3, 0x2, 0x2, 0x2, 0x12, 0xce, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x16, 0xdd, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xea, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0xed, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x20, 0x107, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x24, 0x10f, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x115, 0x3, 0x2, 0x2, 0x2, 0x28, 0x11b, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x125, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x12b, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x30, 0x138, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x34, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x144, 0x3, 0x2, 0x2, 0x2, 0x38, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x150, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x162, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x172, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x42, 0x17f, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x183, 0x3, 0x2, 0x2, 0x2, 0x46, 0x195, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x197, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x19d, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x1b8, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1c3, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1c9, 0x3, 
    0x2, 0x2, 0x2, 0x5a, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x1f3, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x201, 0x3, 0x2, 0x2, 0x2, 0x60, 0x232, 0x3, 0x2, 0x2, 
    0x2, 0x62, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x64, 0x261, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x68, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x6a, 
    0x2b0, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x2be, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2c8, 0x3, 
    0x2, 0x2, 0x2, 0x74, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x76, 0x2d1, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x305, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x32f, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x36f, 0x3, 0x2, 0x2, 0x2, 
    0x80, 0x379, 0x3, 0x2, 0x2, 0x2, 0x82, 0x37b, 0x3, 0x2, 0x2, 0x2, 0x84, 
    0x383, 0x3, 0x2, 0x2, 0x2, 0x86, 0x38d, 0x3, 0x2, 0x2, 0x2, 0x88, 0x394, 
    0x3, 0x2, 0x2, 0x2, 0x8a, 0x397, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x39f, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x90, 0x3ae, 0x3, 0x2, 
    0x2, 0x2, 0x92, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x94, 0x3bf, 0x3, 0x2, 0x2, 
    0x2, 0x96, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x98, 0x3cd, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x3d8, 0x3, 0x2, 0x2, 0x2, 0x9e, 
    0xa2, 0x5, 0x6, 0x4, 0x2, 0x9f, 0xa2, 0x5, 0x16, 0xc, 0x2, 0xa0, 0xa2, 
    0x7, 0x3, 0x2, 0x2, 0xa1, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 
    0x2, 0x2, 0x2, 0xa1, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa5, 0x3, 0x2, 
    0x2, 0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 
    0x2, 0xa4, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa3, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0xa7, 0x7, 0x2, 0x2, 0x3, 0xa7, 0x3, 0x3, 0x2, 0x2, 0x2, 0xa8, 
    0xab, 0x8, 0x3, 0x1, 0x2, 0xa9, 0xac, 0x5, 0x6, 0x4, 0x2, 0xaa, 0xac, 
    0x7, 0x37, 0x2, 0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xab, 0xaa, 0x3, 
    0x2, 0x2, 0x2, 0xac, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0xc, 0x4, 
    0x2, 0x2, 0xae, 0xaf, 0x7, 0x4, 0x2, 0x2, 0xaf, 0xb1, 0x5, 0x4, 0x3, 
    0x5, 0xb0, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb4, 0x3, 0x2, 0x2, 0x2, 
    0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb3, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xbc, 
    0x7, 0x3a, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x3a, 0x2, 0x2, 0xb7, 0xb8, 0x7, 
    0x5, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x4, 0x3, 0x2, 0xb9, 0xba, 0x7, 0x6, 
    0x2, 0x2, 0xba, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb5, 0x3, 0x2, 0x2, 
    0x2, 0xbb, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0xbd, 0xbe, 0x5, 0x30, 0x19, 0x2, 0xbe, 0xbf, 0x7, 0x2d, 0x2, 0x2, 0xbf, 
    0xc0, 0x5, 0x8c, 0x47, 0x2, 0xc0, 0xc1, 0x7, 0x3, 0x2, 0x2, 0xc1, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x39, 0x2, 0x2, 0xc3, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x38, 0x2, 0x2, 0xc5, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0xc6, 0xc8, 0x7, 0x7, 0x2, 0x2, 0xc7, 0xc6, 0x3, 0x2, 0x2, 
    0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0xc9, 0xcd, 0x5, 0x3a, 0x1e, 0x2, 0xca, 0xcd, 0x7, 0x3, 0x2, 0x2, 0xcb, 
    0xcd, 0x5, 0x9c, 0x4f, 0x2, 0xcc, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xca, 
    0x3, 0x2, 0x2, 0x2, 0xcc, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x3a, 0x2, 0x2, 0xcf, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0xd0, 0xd1, 0x5, 0x32, 0x1a, 0x2, 0xd1, 0xd2, 0x5, 0xe, 0x8, 
    0x2, 0xd2, 0xd3, 0x5, 0x12, 0xa, 0x2, 0xd3, 0xd4, 0x7, 0x5, 0x2, 0x2, 
    0xd4, 0xd5, 0x5, 0x2c, 0x17, 0x2, 0xd5, 0xd6, 0x7, 0x6, 0x2, 0x2, 0xd6, 
    0xd7, 0x5, 0x10, 0x9, 0x2, 0xd7, 0x15, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xde, 
    0x5, 0x14, 0xb, 0x2, 0xd9, 0xde, 0x5, 0x18, 0xd, 0x2, 0xda, 0xde, 0x5, 
    0x8, 0x5, 0x2, 0xdb, 0xde, 0x5, 0x1e, 0x10, 0x2, 0xdc, 0xde, 0x5, 0x1a, 
    0xe, 0x2, 0xdd, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xd9, 0x3, 0x2, 0x2, 
    0x2, 0xdd, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 
    0xdd, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 0x17, 0x3, 0x2, 0x2, 0x2, 0xdf, 
    0xe0, 0x5, 0x32, 0x1a, 0x2, 0xe0, 0xe5, 0x5, 0x38, 0x1d, 0x2, 0xe1, 
    0xe2, 0x7, 0x4, 0x2, 0x2, 0xe2, 0xe4, 0x5, 0x38, 0x1d, 0x2, 0xe3, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0xe4, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe3, 0x3, 
    0x2, 0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe8, 0x3, 0x2, 
    0x2, 0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0x3, 0x2, 
    0x2, 0xe9, 0x19, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x5, 0x30, 0x19, 0x2, 
    0xeb, 0xec, 0x7, 0x8, 0x2, 0x2, 0xec, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xed, 
    0xee, 0x5, 0xe, 0x8, 0x2, 0xee, 0xef, 0x5, 0x12, 0xa, 0x2, 0xef, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x5, 0x30, 0x19, 0x2, 0xf1, 0xf2, 0x7, 
    0x22, 0x2, 0x2, 0xf2, 0xf3, 0x5, 0x12, 0xa, 0x2, 0xf3, 0x102, 0x7, 0x9, 
    0x2, 0x2, 0xf4, 0xfa, 0x5, 0x26, 0x14, 0x2, 0xf5, 0xf6, 0x5, 0x1c, 0xf, 
    0x2, 0xf6, 0xf7, 0x7, 0x4, 0x2, 0x2, 0xf7, 0xf9, 0x3, 0x2, 0x2, 0x2, 
    0xf8, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfa, 
    0xf8, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfd, 
    0x3, 0x2, 0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x5, 
    0x1c, 0xf, 0x2, 0xfe, 0xff, 0x7, 0x3, 0x2, 0x2, 0xff, 0x101, 0x3, 0x2, 
    0x2, 0x2, 0x100, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x101, 0x104, 0x3, 0x2, 0x2, 
    0x2, 0x102, 0x100, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 
    0x2, 0x103, 0x105, 0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 
    0x2, 0x105, 0x106, 0x7, 0xa, 0x2, 0x2, 0x106, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x107, 0x108, 0x7, 0x3a, 0x2, 0x2, 0x108, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x109, 0x10d, 0x7, 0x28, 0x2, 0x2, 0x10a, 0x10b, 0x7, 0x22, 0x2, 0x2, 
    0x10b, 0x10d, 0x7, 0x3a, 0x2, 0x2, 0x10c, 0x109, 0x3, 0x2, 0x2, 0x2, 
    0x10c, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x23, 0x3, 0x2, 0x2, 0x2, 0x10e, 
    0x110, 0x5, 0x22, 0x12, 0x2, 0x10f, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10f, 
    0x110, 0x3, 0x2, 0x2, 0x2, 0x110, 0x25, 0x3, 0x2, 0x2, 0x2, 0x111, 0x116, 
    0x5, 0x22, 0x12, 0x2, 0x112, 0x113, 0x5, 0x24, 0x13, 0x2, 0x113, 0x114, 
    0x7, 0x42, 0x2, 0x2, 0x114, 0x116, 0x3, 0x2, 0x2, 0x2, 0x115, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0x115, 0x112, 0x3, 0x2, 0x2, 0x2, 0x116, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x117, 0x11c, 0x5, 0x26, 0x14, 0x2, 0x118, 0x119, 0x5, 
    0x26, 0x14, 0x2, 0x119, 0x11a, 0x5, 0x62, 0x32, 0x2, 0x11a, 0x11c, 0x3, 
    0x2, 0x2, 0x2, 0x11b, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x118, 0x3, 
    0x2, 0x2, 0x2, 0x11c, 0x29, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x5, 0x28, 
    0x15, 0x2, 0x11e, 0x11f, 0x5, 0xe, 0x8, 0x2, 0x11f, 0x126, 0x3, 0x2, 
    0x2, 0x2, 0x120, 0x121, 0x5, 0x28, 0x15, 0x2, 0x121, 0x122, 0x5, 0xe, 
    0x8, 0x2, 0x122, 0x123, 0x5, 0x20, 0x11, 0x2, 0x123, 0x126, 0x3, 0x2, 
    0x2, 0x2, 0x124, 0x126, 0x5, 0x20, 0x11, 0x2, 0x125, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x125, 0x120, 0x3, 0x2, 0x2, 0x2, 0x125, 0x124, 0x3, 0x2, 
    0x2, 0x2, 0x126, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x127, 0x12c, 0x5, 0x2e, 
    0x18, 0x2, 0x128, 0x129, 0x5, 0x2e, 0x18, 0x2, 0x129, 0x12a, 0x7, 0x41, 
    0x2, 0x2, 0x12a, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x127, 0x3, 0x2, 
    0x2, 0x2, 0x12b, 0x128, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x3, 0x2, 
    0x2, 0x2, 0x12c, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x132, 0x5, 0x2a, 
    0x16, 0x2, 0x12e, 0x12f, 0x7, 0x4, 0x2, 0x2, 0x12f, 0x131, 0x5, 0x2a, 
    0x16, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x131, 0x134, 0x3, 0x2, 
    0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x133, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x134, 0x132, 0x3, 0x2, 0x2, 
    0x2, 0x135, 0x137, 0x7, 0x2f, 0x2, 0x2, 0x136, 0x135, 0x3, 0x2, 0x2, 
    0x2, 0x137, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x138, 0x136, 0x3, 0x2, 0x2, 
    0x2, 0x138, 0x139, 0x3, 0x2, 0x2, 0x2, 0x139, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x13a, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x5, 0x30, 0x19, 0x2, 
    0x13c, 0x13d, 0x5, 0x36, 0x1c, 0x2, 0x13d, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x13e, 0x13f, 0x7, 0x5, 0x2, 0x2, 0x13f, 0x140, 0x5, 0x26, 0x14, 0x2, 
    0x140, 0x141, 0x5, 0xe, 0x8, 0x2, 0x141, 0x142, 0x7, 0x6, 0x2, 0x2, 
    0x142, 0x35, 0x3, 0x2, 0x2, 0x2, 0x143, 0x145, 0x5, 0x26, 0x14, 0x2, 
    0x144, 0x143, 0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0x3, 0x2, 0x2, 0x2, 
    0x145, 0x37, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x5, 0xe, 0x8, 0x2, 0x147, 
    0x148, 0x5, 0x12, 0xa, 0x2, 0x148, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x149, 
    0x14a, 0x5, 0xe, 0x8, 0x2, 0x14a, 0x14b, 0x5, 0x12, 0xa, 0x2, 0x14b, 
    0x14c, 0x7, 0x45, 0x2, 0x2, 0x14c, 0x14d, 0x5, 0x64, 0x33, 0x2, 0x14d, 
    0x14f, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x146, 0x3, 0x2, 0x2, 0x2, 0x14e, 
    0x149, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x39, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 
    0x7, 0x9, 0x2, 0x2, 0x151, 0x155, 0x5, 0x3e, 0x20, 0x2, 0x152, 0x154, 
    0x5, 0x46, 0x24, 0x2, 0x153, 0x152, 0x3, 0x2, 0x2, 0x2, 0x154, 0x157, 
    0x3, 0x2, 0x2, 0x2, 0x155, 0x153, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 
    0x3, 0x2, 0x2, 0x2, 0x156, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x157, 0x155, 
    0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 0x5, 0x9c, 0x4f, 0x2, 0x159, 0x15a, 
    0x7, 0x3, 0x2, 0x2, 0x15a, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x158, 
    0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 
    0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x7, 0xa, 0x2, 0x2, 0x15e, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x15f, 0x163, 0x5, 0x3a, 0x1e, 0x2, 0x160, 0x163, 0x5, 
    0x4c, 0x27, 0x2, 0x161, 0x163, 0x5, 0x52, 0x2a, 0x2, 0x162, 0x15f, 0x3, 
    0x2, 0x2, 0x2, 0x162, 0x160, 0x3, 0x2, 0x2, 0x2, 0x162, 0x161, 0x3, 
    0x2, 0x2, 0x2, 0x163, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x164, 0x16a, 0x5, 0x26, 
    0x14, 0x2, 0x165, 0x166, 0x5, 0x40, 0x21, 0x2, 0x166, 0x167, 0x7, 0x4, 
    0x2, 0x2, 0x167, 0x169, 0x3, 0x2, 0x2, 0x2, 0x168, 0x165, 0x3, 0x2, 
    0x2, 0x2, 0x169, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x168, 0x3, 0x2, 
    0x2, 0x2, 0x16a, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16d, 0x3, 0x2, 
    0x2, 0x2, 0x16c, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x5, 0x40, 
    0x21, 0x2, 0x16e, 0x16f, 0x7, 0x3, 0x2, 0x2, 0x16f, 0x171, 0x3, 0x2, 
    0x2, 0x2, 0x170, 0x164, 0x3, 0x2, 0x2, 0x2, 0x171, 0x174, 0x3, 0x2, 
    0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x3, 0x2, 
    0x2, 0x2, 0x173, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x174, 0x172, 0x3, 0x2, 0x2, 
    0x2, 0x175, 0x176, 0x5, 0xe, 0x8, 0x2, 0x176, 0x177, 0x5, 0x20, 0x11, 
    0x2, 0x177, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x5, 0xe, 0x8, 
    0x2, 0x179, 0x17a, 0x5, 0x20, 0x11, 0x2, 0x17a, 0x17b, 0x7, 0x45, 0x2, 
    0x2, 0x17b, 0x17c, 0x5, 0x64, 0x33, 0x2, 0x17c, 0x17e, 0x3, 0x2, 0x2, 
    0x2, 0x17d, 0x175, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x178, 0x3, 0x2, 0x2, 
    0x2, 0x17e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x5, 0x28, 0x15, 
    0x2, 0x180, 0x181, 0x5, 0xe, 0x8, 0x2, 0x181, 0x182, 0x5, 0x20, 0x11, 
    0x2, 0x182, 0x43, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 0x5, 0x42, 0x22, 
    0x2, 0x184, 0x185, 0x7, 0x45, 0x2, 0x2, 0x185, 0x186, 0x5, 0x64, 0x33, 
    0x2, 0x186, 0x45, 0x3, 0x2, 0x2, 0x2, 0x187, 0x188, 0x5, 0x60, 0x31, 
    0x2, 0x188, 0x189, 0x7, 0x3, 0x2, 0x2, 0x189, 0x196, 0x3, 0x2, 0x2, 
    0x2, 0x18a, 0x196, 0x5, 0x98, 0x4d, 0x2, 0x18b, 0x196, 0x5, 0x48, 0x25, 
    0x2, 0x18c, 0x196, 0x5, 0x4a, 0x26, 0x2, 0x18d, 0x196, 0x5, 0x58, 0x2d, 
    0x2, 0x18e, 0x196, 0x5, 0x66, 0x34, 0x2, 0x18f, 0x196, 0x5, 0x3c, 0x1f, 
    0x2, 0x190, 0x196, 0x7, 0x3, 0x2, 0x2, 0x191, 0x192, 0x7, 0x1f, 0x2, 
    0x2, 0x192, 0x196, 0x7, 0x3, 0x2, 0x2, 0x193, 0x194, 0x7, 0x23, 0x2, 
    0x2, 0x194, 0x196, 0x7, 0x3, 0x2, 0x2, 0x195, 0x187, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x195, 0x18b, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x195, 0x18d, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x195, 0x18f, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x190, 0x3, 0x2, 0x2, 0x2, 0x195, 0x191, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x193, 0x3, 0x2, 0x2, 0x2, 0x196, 0x47, 0x3, 0x2, 0x2, 0x2, 
    0x197, 0x198, 0x7, 0x36, 0x2, 0x2, 0x198, 0x199, 0x7, 0x5, 0x2, 0x2, 
    0x199, 0x19a, 0x5, 0x60, 0x31, 0x2, 0x19a, 0x19b, 0x7, 0x6, 0x2, 0x2, 
    0x19b, 0x19c, 0x5, 0x46, 0x24, 0x2, 0x19c, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x19d, 0x19e, 0x7, 0x25, 0x2, 0x2, 0x19e, 0x19f, 0x5, 0x46, 0x24, 0x2, 
    0x19f, 0x1a0, 0x7, 0x36, 0x2, 0x2, 0x1a0, 0x1a1, 0x7, 0x5, 0x2, 0x2, 
    0x1a1, 0x1a2, 0x5, 0x60, 0x31, 0x2, 0x1a2, 0x1a3, 0x7, 0x6, 0x2, 0x2, 
    0x1a3, 0x1a4, 0x7, 0x3, 0x2, 0x2, 0x1a4, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x1a5, 
    0x1a6, 0x7, 0x29, 0x2, 0x2, 0x1a6, 0x1a7, 0x7, 0x5, 0x2, 0x2, 0x1a7, 
    0x1a8, 0x5, 0x56, 0x2c, 0x2, 0x1a8, 0x1a9, 0x7, 0x3, 0x2, 0x2, 0x1a9, 
    0x1aa, 0x5, 0x54, 0x2b, 0x2, 0x1aa, 0x1ab, 0x7, 0x3, 0x2, 0x2, 0x1ab, 
    0x1ac, 0x5, 0x54, 0x2b, 0x2, 0x1ac, 0x1ad, 0x7, 0x6, 0x2, 0x2, 0x1ad, 
    0x1ae, 0x5, 0x46, 0x24, 0x2, 0x1ae, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x1af, 
    0x1b2, 0x7, 0x3a, 0x2, 0x2, 0x1b0, 0x1b2, 0x5, 0x42, 0x22, 0x2, 0x1b1, 
    0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b2, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b9, 0x5, 0x4e, 0x28, 0x2, 0x1b4, 
    0x1b5, 0x5, 0x4e, 0x28, 0x2, 0x1b5, 0x1b6, 0x7, 0x4, 0x2, 0x2, 0x1b6, 
    0x1b7, 0x5, 0x4e, 0x28, 0x2, 0x1b7, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1b8, 
    0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b9, 
    0x51, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x7, 0x2a, 0x2, 0x2, 0x1bb, 
    0x1bc, 0x7, 0x5, 0x2, 0x2, 0x1bc, 0x1bd, 0x5, 0x50, 0x29, 0x2, 0x1bd, 
    0x1be, 0x7, 0x2c, 0x2, 0x2, 0x1be, 0x1bf, 0x5, 0x64, 0x33, 0x2, 0x1bf, 
    0x1c0, 0x7, 0x6, 0x2, 0x2, 0x1c0, 0x1c1, 0x5, 0x46, 0x24, 0x2, 0x1c1, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c4, 0x5, 0x60, 0x31, 0x2, 0x1c3, 
    0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c4, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c8, 0x5, 0x54, 0x2b, 0x2, 0x1c6, 
    0x1c8, 0x5, 0x44, 0x23, 0x2, 0x1c7, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c7, 
    0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 
    0x7, 0x34, 0x2, 0x2, 0x1ca, 0x1cb, 0x7, 0x5, 0x2, 0x2, 0x1cb, 0x1cc, 
    0x5, 0x60, 0x31, 0x2, 0x1cc, 0x1cd, 0x7, 0x6, 0x2, 0x2, 0x1cd, 0x1ce, 
    0x7, 0x9, 0x2, 0x2, 0x1ce, 0x1cf, 0x5, 0x3e, 0x20, 0x2, 0x1cf, 0x1d4, 
    0x5, 0x5a, 0x2e, 0x2, 0x1d0, 0x1d3, 0x5, 0x5a, 0x2e, 0x2, 0x1d1, 0x1d3, 
    0x5, 0x46, 0x24, 0x2, 0x1d2, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d1, 
    0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d2, 
    0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d7, 
    0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 
    0x7, 0xa, 0x2, 0x2, 0x1d8, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0x7, 
    0x20, 0x2, 0x2, 0x1da, 0x1db, 0x5, 0x5c, 0x2f, 0x2, 0x1db, 0x1dc, 0x7, 
    0x8, 0x2, 0x2, 0x1dc, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1de, 0x7, 
    0x20, 0x2, 0x2, 0x1de, 0x1df, 0x5, 0x5c, 0x2f, 0x2, 0x1df, 0x1e0, 0x7, 
    0x40, 0x2, 0x2, 0x1e0, 0x1e1, 0x5, 0x5c, 0x2f, 0x2, 0x1e1, 0x1e2, 0x7, 
    0x8, 0x2, 0x2, 0x1e2, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x7, 
    0x20, 0x2, 0x2, 0x1e4, 0x1e5, 0x5, 0x5c, 0x2f, 0x2, 0x1e5, 0x1e6, 0x7, 
    0x40, 0x2, 0x2, 0x1e6, 0x1e7, 0x7, 0x8, 0x2, 0x2, 0x1e7, 0x1f0, 0x3, 
    0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 0x20, 0x2, 0x2, 0x1e9, 0x1ea, 0x7, 
    0x40, 0x2, 0x2, 0x1ea, 0x1eb, 0x5, 0x5c, 0x2f, 0x2, 0x1eb, 0x1ec, 0x7, 
    0x8, 0x2, 0x2, 0x1ec, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x7, 
    0x24, 0x2, 0x2, 0x1ee, 0x1f0, 0x7, 0x8, 0x2, 0x2, 0x1ef, 0x1d9, 0x3, 
    0x2, 0x2, 0x2, 0x1ef, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1e3, 0x3, 
    0x2, 0x2, 0x2, 0x1ef, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1ed, 0x3, 
    0x2, 0x2, 0x2, 0x1f0, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f4, 0x5, 0x5e, 
    0x30, 0x2, 0x1f2, 0x1f4, 0x5, 0x8c, 0x47, 0x2, 0x1f3, 0x1f1, 0x3, 0x2, 
    0x2, 0x2, 0x1f3, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x1f5, 0x1f6, 0x8, 0x30, 0x1, 0x2, 0x1f6, 0x1f7, 0x7, 0x5, 0x2, 
    0x2, 0x1f7, 0x1f8, 0x5, 0x5e, 0x30, 0x2, 0x1f8, 0x1f9, 0x7, 0x6, 0x2, 
    0x2, 0x1f9, 0x202, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x202, 0x7, 0x38, 0x2, 
    0x2, 0x1fb, 0x1fc, 0x7, 0x10, 0x2, 0x2, 0x1fc, 0x202, 0x7, 0x38, 0x2, 
    0x2, 0x1fd, 0x1fe, 0x7, 0x3f, 0x2, 0x2, 0x1fe, 0x202, 0x7, 0x38, 0x2, 
    0x2, 0x1ff, 0x200, 0x7, 0x13, 0x2, 0x2, 0x200, 0x202, 0x7, 0x38, 0x2, 
    0x2, 0x201, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x201, 0x1fa, 0x3, 0x2, 0x2, 
    0x2, 0x201, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x201, 0x1fd, 0x3, 0x2, 0x2, 
    0x2, 0x201, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x202, 0x22f, 0x3, 0x2, 0x2, 
    0x2, 0x203, 0x204, 0xc, 0x15, 0x2, 0x2, 0x204, 0x205, 0x7, 0xb, 0x2, 
    0x2, 0x205, 0x22e, 0x5, 0x5e, 0x30, 0x16, 0x206, 0x207, 0xc, 0x14, 0x2, 
    0x2, 0x207, 0x208, 0x7, 0xc, 0x2, 0x2, 0x208, 0x22e, 0x5, 0x5e, 0x30, 
    0x15, 0x209, 0x20a, 0xc, 0x13, 0x2, 0x2, 0x20a, 0x20b, 0x7, 0xd, 0x2, 
    0x2, 0x20b, 0x22e, 0x5, 0x5e, 0x30, 0x14, 0x20c, 0x20d, 0xc, 0x12, 0x2, 
    0x2, 0x20d, 0x20e, 0x7, 0x48, 0x2, 0x2, 0x20e, 0x22e, 0x5, 0x5e, 0x30, 
    0x13, 0x20f, 0x210, 0xc, 0x11, 0x2, 0x2, 0x210, 0x211, 0x7, 0x49, 0x2, 
    0x2, 0x211, 0x22e, 0x5, 0x5e, 0x30, 0x12, 0x212, 0x213, 0xc, 0x10, 0x2, 
    0x2, 0x213, 0x214, 0x7, 0x44, 0x2, 0x2, 0x214, 0x22e, 0x5, 0x5e, 0x30, 
    0x11, 0x215, 0x216, 0xc, 0xf, 0x2, 0x2, 0x216, 0x217, 0x7, 0xe, 0x2, 
    0x2, 0x217, 0x22e, 0x5, 0x5e, 0x30, 0x10, 0x218, 0x219, 0xc, 0xe, 0x2, 
    0x2, 0x219, 0x21a, 0x7, 0x3d, 0x2, 0x2, 0x21a, 0x22e, 0x5, 0x5e, 0x30, 
    0xf, 0x21b, 0x21c, 0xc, 0xd, 0x2, 0x2, 0x21c, 0x21d, 0x7, 0x3e, 0x2, 
    0x2, 0x21d, 0x22e, 0x5, 0x5e, 0x30, 0xe, 0x21e, 0x21f, 0xc, 0xc, 0x2, 
    0x2, 0x21f, 0x220, 0x7, 0xf, 0x2, 0x2, 0x220, 0x22e, 0x5, 0x5e, 0x30, 
    0xd, 0x221, 0x222, 0xc, 0xb, 0x2, 0x2, 0x222, 0x223, 0x7, 0x10, 0x2, 
    0x2, 0x223, 0x22e, 0x5, 0x5e, 0x30, 0xc, 0x224, 0x225, 0xc, 0xa, 0x2, 
    0x2, 0x225, 0x226, 0x7, 0x7, 0x2, 0x2, 0x226, 0x22e, 0x5, 0x5e, 0x30, 
    0xb, 0x227, 0x228, 0xc, 0x9, 0x2, 0x2, 0x228, 0x229, 0x7, 0x11, 0x2, 
    0x2, 0x229, 0x22e, 0x5, 0x5e, 0x30, 0xa, 0x22a, 0x22b, 0xc, 0x8, 0x2, 
    0x2, 0x22b, 0x22c, 0x7, 0x12, 0x2, 0x2, 0x22c, 0x22e, 0x5, 0x5e, 0x30, 
    0x9, 0x22d, 0x203, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x206, 0x3, 0x2, 0x2, 
    0x2, 0x22d, 0x209, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x20c, 0x3, 0x2, 0x2, 
    0x2, 0x22d, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x212, 0x3, 0x2, 0x2, 
    0x2, 0x22d, 0x215, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x218, 0x3, 0x2, 0x2, 
    0x2, 0x22d, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x21e, 0x3, 0x2, 0x2, 
    0x2, 0x22d, 0x221, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x224, 0x3, 0x2, 0x2, 
    0x2, 0x22d, 0x227, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22a, 0x3, 0x2, 0x2, 
    0x2, 0x22e, 0x231, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x22d, 0x3, 0x2, 0x2, 
    0x2, 0x22f, 0x230, 0x3, 0x2, 0x2, 0x2, 0x230, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x231, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x232, 0x237, 0x5, 0x64, 0x33, 0x2, 
    0x233, 0x234, 0x7, 0x4, 0x2, 0x2, 0x234, 0x236, 0x5, 0x64, 0x33, 0x2, 
    0x235, 0x233, 0x3, 0x2, 0x2, 0x2, 0x236, 0x239, 0x3, 0x2, 0x2, 0x2, 
    0x237, 0x235, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x3, 0x2, 0x2, 0x2, 
    0x238, 0x61, 0x3, 0x2, 0x2, 0x2, 0x239, 0x237, 0x3, 0x2, 0x2, 0x2, 0x23a, 
    0x23b, 0x7, 0x31, 0x2, 0x2, 0x23b, 0x63, 0x3, 0x2, 0x2, 0x2, 0x23c, 
    0x23d, 0x8, 0x33, 0x1, 0x2, 0x23d, 0x23e, 0x5, 0x62, 0x32, 0x2, 0x23e, 
    0x23f, 0x5, 0x74, 0x3b, 0x2, 0x23f, 0x262, 0x3, 0x2, 0x2, 0x2, 0x240, 
    0x241, 0x5, 0x74, 0x3b, 0x2, 0x241, 0x242, 0x7, 0x45, 0x2, 0x2, 0x242, 
    0x243, 0x5, 0x64, 0x33, 0x23, 0x243, 0x262, 0x3, 0x2, 0x2, 0x2, 0x244, 
    0x245, 0x5, 0x9c, 0x4f, 0x2, 0x245, 0x246, 0x7, 0x45, 0x2, 0x2, 0x246, 
    0x247, 0x5, 0x64, 0x33, 0x22, 0x247, 0x262, 0x3, 0x2, 0x2, 0x2, 0x248, 
    0x249, 0x5, 0x34, 0x1b, 0x2, 0x249, 0x24a, 0x5, 0x64, 0x33, 0x10, 0x24a, 
    0x262, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24c, 0x7, 0x46, 0x2, 0x2, 0x24c, 
    0x262, 0x5, 0x74, 0x3b, 0x2, 0x24d, 0x24e, 0x7, 0x47, 0x2, 0x2, 0x24e, 
    0x262, 0x5, 0x74, 0x3b, 0x2, 0x24f, 0x250, 0x7, 0x3f, 0x2, 0x2, 0x250, 
    0x262, 0x5, 0x64, 0x33, 0xd, 0x251, 0x252, 0x7, 0x13, 0x2, 0x2, 0x252, 
    0x262, 0x5, 0x64, 0x33, 0xc, 0x253, 0x254, 0x7, 0x10, 0x2, 0x2, 0x254, 
    0x262, 0x5, 0x64, 0x33, 0xb, 0x255, 0x256, 0x5, 0x74, 0x3b, 0x2, 0x256, 
    0x257, 0x7, 0x46, 0x2, 0x2, 0x257, 0x262, 0x3, 0x2, 0x2, 0x2, 0x258, 
    0x259, 0x5, 0x74, 0x3b, 0x2, 0x259, 0x25a, 0x7, 0x47, 0x2, 0x2, 0x25a, 
    0x262, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x262, 0x5, 0x7a, 0x3e, 0x2, 0x25c, 
    0x262, 0x5, 0x82, 0x42, 0x2, 0x25d, 0x262, 0x5, 0x84, 0x43, 0x2, 0x25e, 
    0x262, 0x5, 0x86, 0x44, 0x2, 0x25f, 0x262, 0x5, 0xc, 0x7, 0x2, 0x260, 
    0x262, 0x5, 0xa, 0x6, 0x2, 0x261, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x261, 
    0x240, 0x3, 0x2, 0x2, 0x2, 0x261, 0x244, 0x3, 0x2, 0x2, 0x2, 0x261, 
    0x248, 0x3, 0x2, 0x2, 0x2, 0x261, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x261, 
    0x24d, 0x3, 0x2, 0x2, 0x2, 0x261, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x261, 
    0x251, 0x3, 0x2, 0x2, 0x2, 0x261, 0x253, 0x3, 0x2, 0x2, 0x2, 0x261, 
    0x255, 0x3, 0x2, 0x2, 0x2, 0x261, 0x258, 0x3, 0x2, 0x2, 0x2, 0x261, 
    0x25b, 0x3, 0x2, 0x2, 0x2, 0x261, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x261, 
    0x25d, 0x3, 0x2, 0x2, 0x2, 0x261, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x261, 
    0x25f, 0x3, 0x2, 0x2, 0x2, 0x261, 0x260, 0x3, 0x2, 0x2, 0x2, 0x262, 
    0x29b, 0x3, 0x2, 0x2, 0x2, 0x263, 0x264, 0xc, 0x21, 0x2, 0x2, 0x264, 
    0x265, 0x7, 0x14, 0x2, 0x2, 0x265, 0x266, 0x5, 0x64, 0x33, 0x2, 0x266, 
    0x267, 0x7, 0x8, 0x2, 0x2, 0x267, 0x268, 0x5, 0x64, 0x33, 0x22, 0x268, 
    0x29a, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0xc, 0x20, 0x2, 0x2, 0x26a, 
    0x26b, 0x7, 0x3c, 0x2, 0x2, 0x26b, 0x29a, 0x5, 0x64, 0x33, 0x21, 0x26c, 
    0x26d, 0xc, 0x1f, 0x2, 0x2, 0x26d, 0x26e, 0x7, 0x3b, 0x2, 0x2, 0x26e, 
    0x29a, 0x5, 0x64, 0x33, 0x20, 0x26f, 0x270, 0xc, 0x1e, 0x2, 0x2, 0x270, 
    0x271, 0x7, 0xb, 0x2, 0x2, 0x271, 0x29a, 0x5, 0x64, 0x33, 0x1f, 0x272, 
    0x273, 0xc, 0x1d, 0x2, 0x2, 0x273, 0x274, 0x7, 0xc, 0x2, 0x2, 0x274, 
    0x29a, 0x5, 0x64, 0x33, 0x1e, 0x275, 0x276, 0xc, 0x1c, 0x2, 0x2, 0x276, 
    0x277, 0x7, 0xd, 0x2, 0x2, 0x277, 0x29a, 0x5, 0x64, 0x33, 0x1d, 0x278, 
    0x279, 0xc, 0x1b, 0x2, 0x2, 0x279, 0x27a, 0x7, 0x48, 0x2, 0x2, 0x27a, 
    0x29a, 0x5, 0x64, 0x33, 0x1c, 0x27b, 0x27c, 0xc, 0x1a, 0x2, 0x2, 0x27c, 
    0x27d, 0x7, 0x49, 0x2, 0x2, 0x27d, 0x29a, 0x5, 0x64, 0x33, 0x1b, 0x27e, 
    0x27f, 0xc, 0x19, 0x2, 0x2, 0x27f, 0x280, 0x7, 0x44, 0x2, 0x2, 0x280, 
    0x29a, 0x5, 0x64, 0x33, 0x1a, 0x281, 0x282, 0xc, 0x18, 0x2, 0x2, 0x282, 
    0x283, 0x7, 0xe, 0x2, 0x2, 0x283, 0x29a, 0x5, 0x64, 0x33, 0x19, 0x284, 
    0x285, 0xc, 0x17, 0x2, 0x2, 0x285, 0x286, 0x7, 0x3d, 0x2, 0x2, 0x286, 
    0x29a, 0x5, 0x64, 0x33, 0x18, 0x287, 0x288, 0xc, 0x16, 0x2, 0x2, 0x288, 
    0x289, 0x7, 0x3e, 0x2, 0x2, 0x289, 0x29a, 0x5, 0x64, 0x33, 0x17, 0x28a, 
    0x28b, 0xc, 0x15, 0x2, 0x2, 0x28b, 0x28c, 0x7, 0xf, 0x2, 0x2, 0x28c, 
    0x29a, 0x5, 0x64, 0x33, 0x16, 0x28d, 0x28e, 0xc, 0x14, 0x2, 0x2, 0x28e, 
    0x28f, 0x7, 0x10, 0x2, 0x2, 0x28f, 0x29a, 0x5, 0x64, 0x33, 0x15, 0x290, 
    0x291, 0xc, 0x13, 0x2, 0x2, 0x291, 0x292, 0x7, 0x7, 0x2, 0x2, 0x292, 
    0x29a, 0x5, 0x64, 0x33, 0x14, 0x293, 0x294, 0xc, 0x12, 0x2, 0x2, 0x294, 
    0x295, 0x7, 0x11, 0x2, 0x2, 0x295, 0x29a, 0x5, 0x64, 0x33, 0x13, 0x296, 
    0x297, 0xc, 0x11, 0x2, 0x2, 0x297, 0x298, 0x7, 0x12, 0x2, 0x2, 0x298, 
    0x29a, 0x5, 0x64, 0x33, 0x12, 0x299, 0x263, 0x3, 0x2, 0x2, 0x2, 0x299, 
    0x269, 0x3, 0x2, 0x2, 0x2, 0x299, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x299, 
    0x26f, 0x3, 0x2, 0x2, 0x2, 0x299, 0x272, 0x3, 0x2, 0x2, 0x2, 0x299, 
    0x275, 0x3, 0x2, 0x2, 0x2, 0x299, 0x278, 0x3, 0x2, 0x2, 0x2, 0x299, 
    0x27b, 0x3, 0x2, 0x2, 0x2, 0x299, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x299, 
    0x281, 0x3, 0x2, 0x2, 0x2, 0x299, 0x284, 0x3, 0x2, 0x2, 0x2, 0x299, 
    0x287, 0x3, 0x2, 0x2, 0x2, 0x299, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x299, 
    0x28d, 0x3, 0x2, 0x2, 0x2, 0x299, 0x290, 0x3, 0x2, 0x2, 0x2, 0x299, 
    0x293, 0x3, 0x2, 0x2, 0x2, 0x299, 0x296, 0x3, 0x2, 0x2, 0x2, 0x29a, 
    0x29d, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x299, 0x3, 0x2, 0x2, 0x2, 0x29b, 
    0x29c, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x65, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29b, 
    0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x7, 0x32, 0x2, 0x2, 0x29f, 0x2a5, 
    0x7, 0x3, 0x2, 0x2, 0x2a0, 0x2a1, 0x7, 0x32, 0x2, 0x2, 0x2a1, 0x2a2, 
    0x5, 0x60, 0x31, 0x2, 0x2a2, 0x2a3, 0x7, 0x3, 0x2, 0x2, 0x2a3, 0x2a5, 
    0x3, 0x2, 0x2, 0x2, 0x2a4, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a0, 
    0x3, 0x2, 0x2, 0x2, 0x2a5, 0x67, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2ab, 0x5, 
    0x6c, 0x37, 0x2, 0x2a7, 0x2a8, 0x5, 0x6c, 0x37, 0x2, 0x2a8, 0x2a9, 0x7, 
    0x4, 0x2, 0x2, 0x2a9, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2a6, 0x3, 
    0x2, 0x2, 0x2, 0x2aa, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ab, 0x3, 
    0x2, 0x2, 0x2, 0x2ab, 0x69, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2b1, 0x5, 0x64, 
    0x33, 0x2, 0x2ad, 0x2ae, 0x5, 0x64, 0x33, 0x2, 0x2ae, 0x2af, 0x7, 0x41, 
    0x2, 0x2, 0x2af, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2ac, 0x3, 0x2, 
    0x2, 0x2, 0x2b0, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x2b2, 0x2b7, 0x5, 0x6a, 0x36, 0x2, 0x2b3, 0x2b4, 0x7, 0x4, 0x2, 
    0x2, 0x2b4, 0x2b6, 0x5, 0x6a, 0x36, 0x2, 0x2b5, 0x2b3, 0x3, 0x2, 0x2, 
    0x2, 0x2b6, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b5, 0x3, 0x2, 0x2, 
    0x2, 0x2b7, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x6d, 0x3, 0x2, 0x2, 0x2, 
    0x2b9, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bf, 0x5, 0x70, 0x39, 0x2, 
    0x2bb, 0x2bc, 0x5, 0x70, 0x39, 0x2, 0x2bc, 0x2bd, 0x7, 0x4, 0x2, 0x2, 
    0x2bd, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2ba, 0x3, 0x2, 0x2, 0x2, 
    0x2be, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bf, 0x3, 0x2, 0x2, 0x2, 
    0x2bf, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c5, 0x5, 0x72, 0x3a, 0x2, 
    0x2c1, 0x2c2, 0x7, 0x4, 0x2, 0x2, 0x2c2, 0x2c4, 0x5, 0x72, 0x3a, 0x2, 
    0x2c3, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c7, 0x3, 0x2, 0x2, 0x2, 
    0x2c5, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c6, 0x3, 0x2, 0x2, 0x2, 
    0x2c6, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c8, 
    0x2c9, 0x5, 0x64, 0x33, 0x2, 0x2c9, 0x2ca, 0x7, 0x8, 0x2, 0x2, 0x2ca, 
    0x2cb, 0x5, 0x64, 0x33, 0x2, 0x2cb, 0x73, 0x3, 0x2, 0x2, 0x2, 0x2cc, 
    0x2cd, 0x5, 0x7a, 0x3e, 0x2, 0x2cd, 0x75, 0x3, 0x2, 0x2, 0x2, 0x2ce, 
    0x2d2, 0x7, 0x15, 0x2, 0x2, 0x2cf, 0x2d0, 0x7, 0x15, 0x2, 0x2, 0x2d0, 
    0x2d2, 0x5, 0x94, 0x4b, 0x2, 0x2d1, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d1, 
    0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x77, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x306, 
    0x7, 0x3a, 0x2, 0x2, 0x2d4, 0x306, 0x7, 0x43, 0x2, 0x2, 0x2d5, 0x2d6, 
    0x7, 0x16, 0x2, 0x2, 0x2d6, 0x2d7, 0x7, 0x5, 0x2, 0x2, 0x2d7, 0x2d8, 
    0x5, 0x60, 0x31, 0x2, 0x2d8, 0x2d9, 0x7, 0x6, 0x2, 0x2, 0x2d9, 0x306, 
    0x3, 0x2, 0x2, 0x2, 0x2da, 0x306, 0x5, 0x8a, 0x46, 0x2, 0x2db, 0x2dc, 
    0x7, 0x5, 0x2, 0x2, 0x2dc, 0x2dd, 0x5, 0x60, 0x31, 0x2, 0x2dd, 0x2de, 
    0x7, 0x6, 0x2, 0x2, 0x2de, 0x306, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x306, 
    0x5, 0x7e, 0x40, 0x2, 0x2e0, 0x306, 0x5, 0x80, 0x41, 0x2, 0x2e1, 0x2e2, 
    0x7, 0x28, 0x2, 0x2, 0x2e2, 0x2e3, 0x7, 0x5, 0x2, 0x2, 0x2e3, 0x2e4, 
    0x5, 0x2c, 0x17, 0x2, 0x2e4, 0x2e5, 0x7, 0x6, 0x2, 0x2, 0x2e5, 0x2e6, 
    0x5, 0x3a, 0x1e, 0x2, 0x2e6, 0x306, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e8, 
    0x5, 0x76, 0x3c, 0x2, 0x2e8, 0x2e9, 0x7, 0x8, 0x2, 0x2, 0x2e9, 0x2ea, 
    0x7, 0x6, 0x2, 0x2, 0x2ea, 0x306, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ec, 
    0x5, 0x76, 0x3c, 0x2, 0x2ec, 0x2ed, 0x7, 0x4, 0x2, 0x2, 0x2ed, 0x2ee, 
    0x5, 0x6c, 0x37, 0x2, 0x2ee, 0x2ef, 0x7, 0x8, 0x2, 0x2, 0x2ef, 0x2f0, 
    0x7, 0x6, 0x2, 0x2, 0x2f0, 0x306, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f2, 
    0x7, 0x15, 0x2, 0x2, 0x2f2, 0x2f3, 0x5, 0x60, 0x31, 0x2, 0x2f3, 0x2f4, 
    0x7, 0x8, 0x2, 0x2, 0x2f4, 0x2f5, 0x7, 0x6, 0x2, 0x2, 0x2f5, 0x306, 
    0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f7, 0x7, 0x4d, 0x2, 0x2, 0x2f7, 0x2f8, 
    0x5, 0x6e, 0x38, 0x2, 0x2f8, 0x2f9, 0x7, 0x17, 0x2, 0x2, 0x2f9, 0x2fa, 
    0x7, 0x6, 0x2, 0x2, 0x2fa, 0x306, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fc, 
    0x7, 0x4c, 0x2, 0x2, 0x2fc, 0x2fd, 0x5, 0x68, 0x35, 0x2, 0x2fd, 0x2fe, 
    0x7, 0xa, 0x2, 0x2, 0x2fe, 0x2ff, 0x7, 0x6, 0x2, 0x2, 0x2ff, 0x306, 
    0x3, 0x2, 0x2, 0x2, 0x300, 0x301, 0x5, 0x96, 0x4c, 0x2, 0x301, 0x302, 
    0x7, 0x5, 0x2, 0x2, 0x302, 0x303, 0x5, 0x68, 0x35, 0x2, 0x303, 0x304, 
    0x7, 0x6, 0x2, 0x2, 0x304, 0x306, 0x3, 0x2, 0x2, 0x2, 0x305, 0x2d3, 
    0x3, 0x2, 0x2, 0x2, 0x305, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x305, 0x2d5, 
    0x3, 0x2, 0x2, 0x2, 0x305, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x305, 0x2db, 
    0x3, 0x2, 0x2, 0x2, 0x305, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x305, 0x2e0, 
    0x3, 0x2, 0x2, 0x2, 0x305, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x305, 0x2e7, 
    0x3, 0x2, 0x2, 0x2, 0x305, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x305, 0x2f1, 
    0x3, 0x2, 0x2, 0x2, 0x305, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x305, 0x2fb, 
    0x3, 0x2, 0x2, 0x2, 0x305, 0x300, 0x3, 0x2, 0x2, 0x2, 0x306, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x307, 0x308, 0x5, 0x94, 0x4b, 0x2, 0x308, 0x309, 0x7, 
    0x5, 0x2, 0x2, 0x309, 0x30a, 0x5, 0x68, 0x35, 0x2, 0x30a, 0x30b, 0x7, 
    0x6, 0x2, 0x2, 0x30b, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x30d, 0x7, 
    0x2e, 0x2, 0x2, 0x30d, 0x30e, 0x7, 0x5, 0x2, 0x2, 0x30e, 0x30f, 0x5, 
    0x68, 0x35, 0x2, 0x30f, 0x310, 0x7, 0x6, 0x2, 0x2, 0x310, 0x32d, 0x3, 
    0x2, 0x2, 0x2, 0x311, 0x312, 0x7, 0x2e, 0x2, 0x2, 0x312, 0x313, 0x7, 
    0x5, 0x2, 0x2, 0x313, 0x314, 0x7, 0x22, 0x2, 0x2, 0x314, 0x315, 0x7, 
    0x3a, 0x2, 0x2, 0x315, 0x316, 0x5, 0x92, 0x4a, 0x2, 0x316, 0x317, 0x7, 
    0x6, 0x2, 0x2, 0x317, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x318, 0x319, 0x5, 
    0x96, 0x4c, 0x2, 0x319, 0x31a, 0x7, 0x5, 0x2, 0x2, 0x31a, 0x31b, 0x5, 
    0x68, 0x35, 0x2, 0x31b, 0x31c, 0x7, 0x6, 0x2, 0x2, 0x31c, 0x32d, 0x3, 
    0x2, 0x2, 0x2, 0x31d, 0x31e, 0x5, 0x78, 0x3d, 0x2, 0x31e, 0x31f, 0x7, 
    0x4a, 0x2, 0x2, 0x31f, 0x320, 0x5, 0x12, 0xa, 0x2, 0x320, 0x321, 0x7, 
    0x5, 0x2, 0x2, 0x321, 0x322, 0x5, 0x68, 0x35, 0x2, 0x322, 0x323, 0x7, 
    0x6, 0x2, 0x2, 0x323, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x324, 0x325, 0x7, 
    0x5, 0x2, 0x2, 0x325, 0x326, 0x7, 0x7, 0x2, 0x2, 0x326, 0x327, 0x5, 
    0x60, 0x31, 0x2, 0x327, 0x328, 0x7, 0x6, 0x2, 0x2, 0x328, 0x329, 0x7, 
    0x5, 0x2, 0x2, 0x329, 0x32a, 0x5, 0x68, 0x35, 0x2, 0x32a, 0x32b, 0x7, 
    0x6, 0x2, 0x2, 0x32b, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x307, 0x3, 
    0x2, 0x2, 0x2, 0x32c, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x311, 0x3, 
    0x2, 0x2, 0x2, 0x32c, 0x318, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x31d, 0x3, 
    0x2, 0x2, 0x2, 0x32c, 0x324, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x330, 0x3, 
    0x2, 0x2, 0x2, 0x32e, 0x330, 0x5, 0x78, 0x3d, 0x2, 0x32f, 0x32c, 0x3, 
    0x2, 0x2, 0x2, 0x32f, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x330, 0x365, 0x3, 
    0x2, 0x2, 0x2, 0x331, 0x332, 0x7, 0x4a, 0x2, 0x2, 0x332, 0x364, 0x5, 
    0x12, 0xa, 0x2, 0x333, 0x334, 0x7, 0x18, 0x2, 0x2, 0x334, 0x335, 0x5, 
    0x60, 0x31, 0x2, 0x335, 0x336, 0x7, 0x40, 0x2, 0x2, 0x336, 0x337, 0x5, 
    0x60, 0x31, 0x2, 0x337, 0x338, 0x7, 0x17, 0x2, 0x2, 0x338, 0x364, 0x3, 
    0x2, 0x2, 0x2, 0x339, 0x33a, 0x7, 0x18, 0x2, 0x2, 0x33a, 0x33b, 0x7, 
    0xe, 0x2, 0x2, 0x33b, 0x33c, 0x5, 0x60, 0x31, 0x2, 0x33c, 0x33d, 0x7, 
    0x40, 0x2, 0x2, 0x33d, 0x33e, 0x5, 0x60, 0x31, 0x2, 0x33e, 0x33f, 0x7, 
    0x17, 0x2, 0x2, 0x33f, 0x364, 0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 0x7, 
    0x18, 0x2, 0x2, 0x341, 0x342, 0x7, 0xe, 0x2, 0x2, 0x342, 0x343, 0x5, 
    0x60, 0x31, 0x2, 0x343, 0x344, 0x7, 0x40, 0x2, 0x2, 0x344, 0x345, 0x7, 
    0xe, 0x2, 0x2, 0x345, 0x346, 0x5, 0x60, 0x31, 0x2, 0x346, 0x347, 0x7, 
    0x17, 0x2, 0x2, 0x347, 0x364, 0x3, 0x2, 0x2, 0x2, 0x348, 0x349, 0x7, 
    0x18, 0x2, 0x2, 0x349, 0x34a, 0x5, 0x60, 0x31, 0x2, 0x34a, 0x34b, 0x7, 
    0x40, 0x2, 0x2, 0x34b, 0x34c, 0x7, 0xe, 0x2, 0x2, 0x34c, 0x34d, 0x5, 
    0x60, 0x31, 0x2, 0x34d, 0x34e, 0x7, 0x17, 0x2, 0x2, 0x34e, 0x364, 0x3, 
    0x2, 0x2, 0x2, 0x34f, 0x350, 0x7, 0x18, 0x2, 0x2, 0x350, 0x351, 0x5, 
    0x60, 0x31, 0x2, 0x351, 0x352, 0x7, 0x40, 0x2, 0x2, 0x352, 0x353, 0x7, 
    0x17, 0x2, 0x2, 0x353, 0x364, 0x3, 0x2, 0x2, 0x2, 0x354, 0x355, 0x7, 
    0x18, 0x2, 0x2, 0x355, 0x356, 0x7, 0xe, 0x2, 0x2, 0x356, 0x357, 0x5, 
    0x60, 0x31, 0x2, 0x357, 0x358, 0x7, 0x40, 0x2, 0x2, 0x358, 0x359, 0x7, 
    0x17, 0x2, 0x2, 0x359, 0x364, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x7, 
    0x18, 0x2, 0x2, 0x35b, 0x35c, 0x7, 0xe, 0x2, 0x2, 0x35c, 0x35d, 0x5, 
    0x60, 0x31, 0x2, 0x35d, 0x35e, 0x7, 0x17, 0x2, 0x2, 0x35e, 0x364, 0x3, 
    0x2, 0x2, 0x2, 0x35f, 0x360, 0x7, 0x18, 0x2, 0x2, 0x360, 0x361, 0x5, 
    0x60, 0x31, 0x2, 0x361, 0x362, 0x7, 0x17, 0x2, 0x2, 0x362, 0x364, 0x3, 
    0x2, 0x2, 0x2, 0x363, 0x331, 0x3, 0x2, 0x2, 0x2, 0x363, 0x333, 0x3, 
    0x2, 0x2, 0x2, 0x363, 0x339, 0x3, 0x2, 0x2, 0x2, 0x363, 0x340, 0x3, 
    0x2, 0x2, 0x2, 0x363, 0x348, 0x3, 0x2, 0x2, 0x2, 0x363, 0x34f, 0x3, 
    0x2, 0x2, 0x2, 0x363, 0x354, 0x3, 0x2, 0x2, 0x2, 0x363, 0x35a, 0x3, 
    0x2, 0x2, 0x2, 0x363, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x364, 0x367, 0x3, 
    0x2, 0x2, 0x2, 0x365, 0x363, 0x3, 0x2, 0x2, 0x2, 0x365, 0x366, 0x3, 
    0x2, 0x2, 0x2, 0x366, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x367, 0x365, 0x3, 0x2, 
    0x2, 0x2, 0x368, 0x36e, 0x5, 0x3a, 0x1e, 0x2, 0x369, 0x36a, 0x7, 0x5, 
    0x2, 0x2, 0x36a, 0x36b, 0x5, 0x60, 0x31, 0x2, 0x36b, 0x36c, 0x7, 0x6, 
    0x2, 0x2, 0x36c, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x368, 0x3, 0x2, 
    0x2, 0x2, 0x36d, 0x369, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x36f, 0x370, 0x7, 0x21, 0x2, 0x2, 0x370, 0x371, 0x5, 0x7c, 0x3f, 
    0x2, 0x371, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x372, 0x373, 0x7, 0x1e, 0x2, 
    0x2, 0x373, 0x37a, 0x5, 0x3a, 0x1e, 0x2, 0x374, 0x375, 0x7, 0x1e, 0x2, 
    0x2, 0x375, 0x376, 0x7, 0x5, 0x2, 0x2, 0x376, 0x377, 0x5, 0x60, 0x31, 
    0x2, 0x377, 0x378, 0x7, 0x6, 0x2, 0x2, 0x378, 0x37a, 0x3, 0x2, 0x2, 
    0x2, 0x379, 0x372, 0x3, 0x2, 0x2, 0x2, 0x379, 0x374, 0x3, 0x2, 0x2, 
    0x2, 0x37a, 0x81, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x37c, 0x7, 0x33, 0x2, 
    0x2, 0x37c, 0x37d, 0x7, 0x5, 0x2, 0x2, 0x37d, 0x37e, 0x5, 0x64, 0x33, 
    0x2, 0x37e, 0x37f, 0x7, 0x4, 0x2, 0x2, 0x37f, 0x380, 0x5, 0x64, 0x33, 
    0x2, 0x380, 0x381, 0x5, 0x88, 0x45, 0x2, 0x381, 0x382, 0x7, 0x6, 0x2, 
    0x2, 0x382, 0x83, 0x3, 0x2, 0x2, 0x2, 0x383, 0x384, 0x7, 0x30, 0x2, 
    0x2, 0x384, 0x385, 0x7, 0x5, 0x2, 0x2, 0x385, 0x386, 0x5, 0x64, 0x33, 
    0x2, 0x386, 0x387, 0x7, 0x4, 0x2, 0x2, 0x387, 0x388, 0x5, 0x64, 0x33, 
    0x2, 0x388, 0x389, 0x7, 0x4, 0x2, 0x2, 0x389, 0x38a, 0x5, 0x64, 0x33, 
    0x2, 0x38a, 0x38b, 0x5, 0x88, 0x45, 0x2, 0x38b, 0x38c, 0x7, 0x6, 0x2, 
    0x2, 0x38c, 0x85, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x38e, 0x7, 0x35, 0x2, 
    0x2, 0x38e, 0x38f, 0x5, 0x7c, 0x3f, 0x2, 0x38f, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x390, 0x391, 0x7, 0x4, 0x2, 0x2, 0x391, 0x393, 0x5, 0x74, 0x3b, 
    0x2, 0x392, 0x390, 0x3, 0x2, 0x2, 0x2, 0x393, 0x396, 0x3, 0x2, 0x2, 
    0x2, 0x394, 0x392, 0x3, 0x2, 0x2, 0x2, 0x394, 0x395, 0x3, 0x2, 0x2, 
    0x2, 0x395, 0x89, 0x3, 0x2, 0x2, 0x2, 0x396, 0x394, 0x3, 0x2, 0x2, 0x2, 
    0x397, 0x398, 0x5, 0x8e, 0x48, 0x2, 0x398, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0x399, 0x39a, 0x8, 0x47, 0x1, 0x2, 0x39a, 0x3a0, 0x5, 0x8e, 0x48, 0x2, 
    0x39b, 0x39c, 0x7, 0x5, 0x2, 0x2, 0x39c, 0x39d, 0x5, 0x8c, 0x47, 0x2, 
    0x39d, 0x39e, 0x7, 0x6, 0x2, 0x2, 0x39e, 0x3a0, 0x3, 0x2, 0x2, 0x2, 
    0x39f, 0x399, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x39b, 0x3, 0x2, 0x2, 0x2, 
    0x3a0, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x3a1, 0x3a2, 0xc, 0x3, 0x2, 0x2, 
    0x3a2, 0x3a3, 0x7, 0xf, 0x2, 0x2, 0x3a3, 0x3a5, 0x5, 0x8c, 0x47, 0x4, 
    0x3a4, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x3a8, 0x3, 0x2, 0x2, 0x2, 
    0x3a6, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x3a7, 0x3, 0x2, 0x2, 0x2, 
    0x3a7, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x3a9, 
    0x3ab, 0x7, 0x37, 0x2, 0x2, 0x3aa, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3ab, 
    0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3ac, 
    0x3ad, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3af, 
    0x5, 0x12, 0xa, 0x2, 0x3af, 0x3b0, 0x7, 0x8, 0x2, 0x2, 0x3b0, 0x3b1, 
    0x5, 0x64, 0x33, 0x2, 0x3b1, 0x91, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b3, 
    0x7, 0x4, 0x2, 0x2, 0x3b3, 0x3b5, 0x5, 0x90, 0x49, 0x2, 0x3b4, 0x3b2, 
    0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b4, 
    0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x93, 0x3, 
    0x2, 0x2, 0x2, 0x3b8, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 0x7, 
    0x26, 0x2, 0x2, 0x3ba, 0x3bb, 0x7, 0x4b, 0x2, 0x2, 0x3bb, 0x3c0, 0x5, 
    0x12, 0xa, 0x2, 0x3bc, 0x3bd, 0x7, 0x26, 0x2, 0x2, 0x3bd, 0x3be, 0x7, 
    0x4b, 0x2, 0x2, 0x3be, 0x3c0, 0x7, 0x2e, 0x2, 0x2, 0x3bf, 0x3b9, 0x3, 
    0x2, 0x2, 0x2, 0x3bf, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x95, 0x3, 0x2, 
    0x2, 0x2, 0x3c1, 0x3cc, 0x7, 0x3a, 0x2, 0x2, 0x3c2, 0x3c3, 0x7, 0x4b, 
    0x2, 0x2, 0x3c3, 0x3cc, 0x5, 0x12, 0xa, 0x2, 0x3c4, 0x3c5, 0x7, 0x28, 
    0x2, 0x2, 0x3c5, 0x3c6, 0x7, 0x4b, 0x2, 0x2, 0x3c6, 0x3cc, 0x5, 0x12, 
    0xa, 0x2, 0x3c7, 0x3c8, 0x5, 0x12, 0xa, 0x2, 0x3c8, 0x3c9, 0x7, 0x4b, 
    0x2, 0x2, 0x3c9, 0x3ca, 0x5, 0x12, 0xa, 0x2, 0x3ca, 0x3cc, 0x3, 0x2, 
    0x2, 0x2, 0x3cb, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3c2, 0x3, 0x2, 
    0x2, 0x2, 0x3cb, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3c7, 0x3, 0x2, 
    0x2, 0x2, 0x3cc, 0x97, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3ce, 0x7, 0x2b, 
    0x2, 0x2, 0x3ce, 0x3cf, 0x7, 0x5, 0x2, 0x2, 0x3cf, 0x3d0, 0x5, 0x60, 
    0x31, 0x2, 0x3d0, 0x3d1, 0x7, 0x6, 0x2, 0x2, 0x3d1, 0x3d2, 0x5, 0x46, 
    0x24, 0x2, 0x3d2, 0x3d3, 0x5, 0x9a, 0x4e, 0x2, 0x3d3, 0x99, 0x3, 0x2, 
    0x2, 0x2, 0x3d4, 0x3d5, 0x7, 0x27, 0x2, 0x2, 0x3d5, 0x3d7, 0x5, 0x46, 
    0x24, 0x2, 0x3d6, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d7, 0x3, 0x2, 
    0x2, 0x2, 0x3d7, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x3d9, 0x7, 0x4e, 
    0x2, 0x2, 0x3d9, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x43, 0xa1, 0xa3, 0xab, 0xb2, 
    0xbb, 0xc7, 0xcc, 0xdd, 0xe5, 0xfa, 0x102, 0x10c, 0x10f, 0x115, 0x11b, 
    0x125, 0x12b, 0x132, 0x138, 0x144, 0x14e, 0x155, 0x15b, 0x162, 0x16a, 
    0x172, 0x17d, 0x195, 0x1b1, 0x1b8, 0x1c3, 0x1c7, 0x1d2, 0x1d4, 0x1ef, 
    0x1f3, 0x201, 0x22d, 0x22f, 0x237, 0x261, 0x299, 0x29b, 0x2a4, 0x2aa, 
    0x2b0, 0x2b7, 0x2be, 0x2c5, 0x2d1, 0x305, 0x32c, 0x32f, 0x363, 0x365, 
    0x36d, 0x379, 0x394, 0x39f, 0x3a6, 0x3ac, 0x3b6, 0x3bf, 0x3cb, 0x3d6, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

lpcParser::Initializer lpcParser::_init;
