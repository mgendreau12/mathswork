GameBoardModel::GameBoardModel(int width, int height) {
	self.width = width;
	self.height = height;

	self.blocks = new int[width*height];
	self.selected = new int[width*height];

	for (int i = 0; i < width*height; i++) {
		self.blocks[i] = -1;
		self.selected[i] = false;
	}	
}

GameBoardModel::~GameBoardModel() {
	delete self.blocks;
	delete self.selected;
}

// Returns the number of blocks that arent filled
int GameBoardModel::get_num_blocks() {
	return num_blocks;
}

int GameBoardModel::get_block(int row, int col) {
	assert(row >= 0 && col >= 0 && row < height && col < width);
	return blocks[row*width+col];
}

int GameBoardModel::set_block(int row, int col, int value) {
	assert(row >= 0 && col >= 0 && row < height && col < width);
	blocks[row*width+col] = value;
}

void GameBoardModel::clear_block(int row, int col) {
	assert(row >= 0 && col >= 0 && row < height && col < width);
	blocks[row*width+col] = -1;
	selected[row*width+col] = false;
}

void GameBoardModel::select_block(int row, int col) {
	assert(row >= 0 && col >= 0 && row < height && col < width);
	selected[row*width+col] = true;
}

void GameBoardModel::deselect_block(int row, int col) {
	assert(row >= 0 && col >= 0 && row < height && col < width);
	selected[row*width+col] = false;
}