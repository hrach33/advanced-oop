Possible desigh patterns: 

chain of responsibility for rule validations

design pattern sources: https://sourcemaking.com/design_patterns

We need to kepp state for each piece for validating some none common rules: such as if a pawn is moved the first time by two steps and went near opponents pwan, opponent's pawn can take it. Or in case of castling, or if some figure makes a move which opens a shah for king.
