
# ♛ N-Queen Problem (C)

This project solves the **N-Queen Problem** using the **Backtracking Algorithm** in C.

The goal is to place **N queens** on an **N × N chessboard** such that no two queens attack each other (no same row, column, or diagonal).

## 🧠 Approach
- Place queens row by row.
- Check if the position is safe (column & diagonals).
- If not safe, backtrack and try the next position.

## 🚀 How to Run

### Compile
```bash
gcc nqueen.c -o nqueen
```

### Execute
```bash
./nqueen
```

## 📊 Complexity
- **Time Complexity:** O(N!)
- **Space Complexity:** O(N)

---

⭐ Feel free to fork and improve!