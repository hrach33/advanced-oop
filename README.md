Possible desigh patterns: 

chain of responsibility for rule validations

design pattern sources: https://sourcemaking.com/design_patterns

We need to kepp state for each piece for validating some none common rules: such as if a pawn is moved the first time by two steps and went near opponents pwan, opponent's pawn can take it. Or in case of castling, or if some figure makes a move which opens a shah for king.


Some sources for existing implementations:
https://codereview.stackexchange.com/questions/71790/design-a-chess-game-using-object-oriented-principles

https://massivetechinterview.blogspot.com/2015/07/design-chess-game-using-oo-principles.html

https://www.geeksforgeeks.org/design-a-chess-game/


Main structure: each piece will validate its common rule, then custom rule validator will be used with chain of responsibility pattern to make custom validations  . Some of the pieces should have state, such as pawn is moved or not, or king is moved or not

