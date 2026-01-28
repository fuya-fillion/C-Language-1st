# コンパイラの指定
CC = gcc
# コンパイルオプション（-Wall は警告を全部出す、-g はデバッグ情報を入れる）
CFLAGS = -Wall -g

# 最終的に作りたい実行ファイル名
TARGET = my_matrix

# 必要なオブジェクトファイル
OBJS = main.o matrix.o

# 1. 最終成果物を作るルール
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# 2. main.o を作るルール
main.o: main.c matrix.h
	$(CC) $(CFLAGS) -c main.c

# 3. matrix.o を作るルール
matrix.o: matrix.c matrix.h
	$(CC) $(CFLAGS) -c matrix.c

# 4. 掃除用ルール（make clean でファイルを消せる）
clean:
	rm -f $(TARGET) $(OBJS)