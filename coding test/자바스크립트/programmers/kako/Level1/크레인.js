const board = [[0, 0, 0, 0, 0], [0, 0, 1, 0, 3], [0, 2, 5, 0, 1], [4, 2, 4, 4, 2], [3, 5, 1, 3, 1]]
const moves = [1, 5, 3, 5, 1, 2, 1, 4]
console.log(solution(board, moves));
function solution(board, moves) {
    let answer = 0; let reboard = [];
    //넣기
    for (let X = 0; X < moves.length; X++) {
        for (let Y = 0; Y <board.length; Y++) {
            if (board[Y][moves[X] - 1] !== 0) {
                reboard.push(board[Y][moves[X] - 1])
                board[Y][moves[X] - 1] = 0
                break
            }
        }
        //검사
        for (let index = 0; index < reboard.length; index++) {
            if (reboard[index] == reboard[index + 1]) {
                reboard.splice(index, index + 1)
                answer += 2
            }
        }
    }
    return answer;
}