tests
testRewritePatternToken_pattern
	| parser |
	parser := $a asPParser token enablePatternMatching.
	
	self assert: parser parse: '`c`'.
	self flag: 'JK: Not sure about the following assertion:'.
	self assert: result isKindOf: PP2PatternParseNode.
"	self assert: result value = '`c`'."
	self assert: result isPatternParseNode.
	self assert: result name = 'c'.