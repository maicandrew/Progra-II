import random

def drawBoard(board):
   # This function prints out the board that it was passed.
   # "board" is a list of 10 strings representing the board (ignore index 0)
   print('   |   |')
   print(' ' + board[7] + ' | ' + board[8] + ' | ' + board[9])
   print('   |   |')
   print('-----------')
   print('   |   |')
   print(' ' + board[4] + ' | ' + board[5] + ' | ' + board[6])
   print('   |   |')
   print('-----------')
   print('   |   |')
   print(' ' + board[1] + ' | ' + board[2] + ' | ' + board[3])
   print('   |   |')

def drawCube(cube):
    for i in cube:
        drawBoard(i)
        print('')

def inputPlayerLetter():
    # Lets the player type which letter they want to be.
    # Returns a list with the player’s letter as the first item, and the computer's letter as the second.
    letter = ''
    while not (letter == 'X' or letter == 'O'):
        print('¿Desea ser X u O?')
        letter = input().upper()
        # the first element in the list is the player’s letter, the second is the computer's letter.
        if letter == 'X':
            return ['X', 'O']
        else:
            return ['O', 'X']
def whoGoesFirst():
    # Randomly choose the player who goes first.
    if random.randint(0, 1) == 0:
        return 'computer'
    else:
        return 'player'

def playAgain():
    # This function returns True if the player wants to play again, otherwise it returns False.
    print('¿Desea jugar de nuevo? (y/n)')
    return input().lower().startswith('y')

def makeMove(cube, letter, move):
    cube[move[0]-1][move[1]] = letter

def isWinnerBoard(bo, le):
    # Given a board and a player’s letter, this function returns True if that player has won.
    # We use bo instead of board and le instead of letter so we don’t have to type as much.
    return ((bo[7] == le and bo[8] == le and bo[9] == le) or # across the top
    (bo[4] == le and bo[5] == le and bo[6] == le) or # across the middle
    (bo[1] == le and bo[2] == le and bo[3] == le) or # across the bottom
    (bo[7] == le and bo[4] == le and bo[1] == le) or # down the left side
    (bo[8] == le and bo[5] == le and bo[2] == le) or # down the middle
    (bo[9] == le and bo[6] == le and bo[3] == le) or # down the right side
    (bo[7] == le and bo[5] == le and bo[3] == le) or # diagonal
    (bo[9] == le and bo[5] == le and bo[1] == le)) # diagonal

def isWinner(cube, le):
    return (isWinnerBoard([0, cube[0][1], cube[0][4], cube[0][7],
                        cube[1][1], cube[1][4], cube[1][7],
                        cube[2][1], cube[2][4], cube[2][7]], le) or
            isWinnerBoard([0, cube[0][2], cube[0][5], cube[0][8],
                        cube[1][2], cube[1][5], cube[1][8],
                        cube[2][2], cube[2][5], cube[2][8]], le) or
            isWinnerBoard([0, cube[0][3], cube[0][6], cube[0][9],
                        cube[1][3], cube[1][6], cube[1][9],
                        cube[2][3], cube[2][6], cube[2][9]], le) or
            isWinnerBoard([0, cube[0][1], cube[0][2], cube[0][3],
                        cube[1][1], cube[1][2], cube[1][3],
                        cube[2][1], cube[2][2], cube[2][3]], le) or
            isWinnerBoard([0, cube[0][4], cube[0][5], cube[0][6],
                        cube[1][4], cube[1][5], cube[1][6],
                        cube[2][4], cube[2][5], cube[2][6]], le) or
            isWinnerBoard([0, cube[0][7], cube[0][8], cube[0][9],
                        cube[1][7], cube[1][8], cube[1][9],
                        cube[2][7], cube[2][8], cube[2][9]], le) or
            isWinnerBoard(cube[0], le) or
            isWinnerBoard(cube[1], le) or
            isWinnerBoard(cube[2], le) or
            (cube[0][7] == le and cube[1][5] == le and cube[2][3] == le) or
            (cube[0][9] == le and cube[1][5] == le and cube[2][1] == le) or
            (cube[0][3] == le and cube[1][5] == le and cube[2][7] == le) or
            (cube[0][1] == le and cube[1][5] == le and cube[2][9] == le) )

def getBoardCopy(board):
    # Make a duplicate of the board list and return it the duplicate.
    dupeBoard = []
    for i in board:
        dupeBoard.append(i)
    return dupeBoard

def getCubeCopy(cube):
    newCube = []
    for i in cube:
        newCube.append(getBoardCopy(i))
    return newCube

def isSpaceFree(board, move):
    # Return true if the passed move is free on the passed board.
    return board[move] == ' '

def getPlayerMove(cube):
    # Let the player type in their move.
    board = ' '
    move = ' '
    while board not in '1 2 3'.split() or isBoardFull(cube, int(board)):
        print('Escoja una capa (1-3)')
        board = input()
        while move not in '1 2 3 4 5 6 7 8 9'.split() or not isSpaceFree(cube[int(board)-1], int(move)):
            print('Escoja una celda (1-9)')
            move = input()
    return [int(board),int(move)]

def chooseRandomMoveFromList(cube, movesList):
    # Returns a valid move from the passed list on the passed board.
    # Returns None if there is no valid move.
    possibleMoves = []
    board = random.choice([1,2,3])
    for i in movesList:
        if isSpaceFree(cube[board-1], i):
            possibleMoves.append([board,i])
    if len(possibleMoves) != 0:
        return random.choice(possibleMoves)
    else:
        return None

def getComputerMove(cube, computerLetter):
    # Given a board and the computer's letter, determine where to move and return that move.
    if computerLetter == 'X':
        playerLetter = 'O'
    else:
        playerLetter = 'X'
    # Here is our algorithm for our Tic Tac Toe AI:
    # First, check if we can win in the next move
    for j in range(1, 4):
        for i in range(1,10):
            cube1 = getCubeCopy(cube)
            if not isBoardFull(cube1, j):
                copy = getBoardCopy(cube1[j-1])
                if isSpaceFree(copy, i):
                    makeMove(cube1, computerLetter, [j,i])
                    if isWinner(cube1, computerLetter):
                        return [j,i]
    # Check if the player could win on their next move, and block them.
    for j in range(1, 4):
        for i in range(1,10):
            cube1 = getCubeCopy(cube)
            if not isBoardFull(cube1, j):
                copy = getBoardCopy(cube1[j-1])
                if isSpaceFree(copy, i):
                    makeMove(cube1, playerLetter, [j,i])
                    if isWinner(cube1, playerLetter):
                        return [j,i]

    # Try to take the center, if it is free.
    if isSpaceFree(cube[1], 5):
        return [2 ,5]

    # Try to take one of the corners, if they are free.
    move = chooseRandomMoveFromList(cube, list(range(1,10)))
    while move == None:
        move = chooseRandomMoveFromList(cube, list(range(1,10)))

    return move

def isCubeFull(cube):
    for i in range(1, 10):
        for j in range(1,4):
            if isSpaceFree(cube[j-1], i):
                return False
    return True

def isBoardFull(cube, board):
    # Return True if every space on the board has been taken. Otherwise return False.
    for i in range(1, 10):
        if isSpaceFree(cube[board-1], i):
            return False
    return True
print('¡Bienvenido a Triki!')
while True:
    # Reset the board
    theBoard = [' '] * 10
    theBoard1 = [' '] * 10
    theBoard2 = [' '] * 10
    cube = [theBoard, theBoard1, theBoard2]
    playerLetter, computerLetter = inputPlayerLetter()
    turn = whoGoesFirst()
    print('El ' + turn + ' juega primero')
    gameIsPlaying = True
    while gameIsPlaying:
        if turn == 'player':
            # Player’s turn.
            drawCube(cube)
            move = getPlayerMove(cube)
            makeMove(cube, playerLetter, move)
            if isWinner(cube, playerLetter):
                drawCube(cube)
                print('¡Felicidades, ganó el juego!')
                gameIsPlaying = False
            else:
                if isCubeFull(cube):
                    drawCube(cube)
                    print('Empate')
                    break
                else:
                    turn = 'computer'
        else:
            # Computer’s turn.
            move = getComputerMove(cube, computerLetter)
            makeMove(cube, computerLetter, move)
            if isWinner(cube, computerLetter):
                drawCube(cube)
                print('Has sido vencido')
                gameIsPlaying = False
            else:
                if isCubeFull(cube):
                    drawCube(cube)
                    print('Empate')
                    break
                else:
                    turn = 'player'
    if not playAgain():
        break
