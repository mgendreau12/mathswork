class MathGameModel {
private:
	GameBoard* 	board_model;
	int			difficulty;
	long		time; // Not quite sure if necessary
	string 		formula;

public:
	/* Try to clear tiles from the board used in the given formula.
	   Return true if valid, else false */
	bool handle_formula(String formula);

	/* Fill the board with new numbers at the beginning of the game */ 
	void fill_board();

	/* Removes the last num or operator from the formula */
	void dequeue();

	/* Adds a num or operator to the formula */
	void append(String);

	/* Fills in more grid squares based on game mode and difficulty */
	void tick();
};