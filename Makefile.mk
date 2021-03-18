ZorkUL: ZorkUL.o Room.o Parser.o Command.o CommandWords.o item.o
    g++ ZorkUL.o Room.o Parser.o Command.o CommandWords.o item.o -o ZorkUL

ZorkUL.o: ZorkUL.cpp ZorkUL.h
    g++ -c ZorkUL.cpp

Room.o: Room.cpp Room.h
    g++ -c Room.cpp

Parser.o: Parser.cpp Parser.h
    g++ -c Parser.cpp
    
Command.o: Command.cpp Command.h
    g++ -c Command.cpp

CommandWords.o: CommandWords.cpp CommandWords.h
    g++ -c CommandWords.cpp

item.o: item.cpp item.h
    g++ -c item.cpp

clean:
    rm *.o ZorkUL