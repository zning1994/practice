class Clock {
    private:
        int hour, minute, second;
    public :
	  	void setTime(int h, int m, int s);
		void showTime();
		Clock(int h=0, int m=0, int s=0);
		~Clock();
};

