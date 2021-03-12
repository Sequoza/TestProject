
class Mine {
	virtual void touchMine();

	void addObserver(MineObserver observer);

	MineStatus getStatus();
};
