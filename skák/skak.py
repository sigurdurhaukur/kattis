# https://iceland.kattis.com/problems/iceland.skak

rook_pos  = [int(pos) for pos in input().split(" ")]
pawn_pos = [int(pos) for pos in input().split(" ")]

class ChessPiece:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def can_capture(self, x2, y2):
        """ check if piece can capture another piece"""
        return self.x == x2 or self.y == y2

rook = ChessPiece(rook_pos[0], rook_pos[1])
pawn = ChessPiece(pawn_pos[0], pawn_pos[1])

# check if the rook can capture the pawn
if rook.can_capture(pawn.x, pawn.y):
    print(1)
else:
    print(2)