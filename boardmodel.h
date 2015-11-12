class GameBoardModel {
private:
	// Basic dimensions
	const int width;
	const int height;
	
	int 	blocks[];
	bool 	selected[];
	
	int		num_blocks; // Number of squares that are not empty
						
public:
	GameBoardModel(int width, int height);

	int get_num_blocks(); // Maybe used for figuring 
						  // out how many blocks to drop?
	
	int 	get_block(int row, int col);
	void 	set_block(int row, int col);

	void	select_block(int row, int col); // Returns false if already selected
	void 	deselect_block(int row, int col); // Return false if not selected

	void 	clear_block(int row, int col);
};


