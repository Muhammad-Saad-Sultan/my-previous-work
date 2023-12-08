#pragma once
class driver
{
	private:
		char* d_name;    // null ptr
		char* d_CNO;     // null ptr
		char* d_address; // null ptr
		char* d_CNIC;    // null ptr
		int d_trips;     // 0
		float d_rating;  // 0

	public:
		driver();
		driver(char*, char*, char*, char*, int, float);
		~driver();

		// Setters
		void setd_name(char*);
		void setd_CNO(char*);
		void setd_address(char*);
		void setd_CNIC(char*);
		void setd_trips(int);
		void setd_rating(float);

		// Getters
		char* getd_name();
		char* getd_CNO();
		char* getd_address();
		char* getd_CNIC();
		int getd_trips();
		float getd_rating();

		// Display
		void display1();

};

class rider
{
	private:
		char* r_name;    // null ptr
		char* r_CNO;     // null ptr
		int r_trips;     // 0
		float r_rating;  // 0

	public:
		rider();
		rider(char*, char*, int, float);
		~rider();

		// Setters
		void setr_name(char*);
		void setr_CNO(char*);
		void setr_trips(int);
		void setr_rating(float);

		// Getters
		char* getr_name();
		char* getr_CNO();
		int getr_trips();
		float getr_rating();

		// Display
		void display2();


};

class ride
{
	private:
		char* p_loc;      // nullptr
		char* d_loc;      // nullptr
		char* v_num;      // nullptr
		char* p_code;     // nullptr
		char* category;   // nullptr
		int s_time;       // 0
		int a_time;       // 0
		int t_ID;         // 0
		float b_fare;     // 0
		float discount;   // 0
		float p_km;       // 0
		float p_min;      // 0

	public:
		ride();
		ride(char*, char*, char*, char*, char*, int, int, int, float, float, float, float);
		~ride();

		// Setters
		void setp_loc (char*);
		void setd_loc (char*);
		void setv_num (char*);
		void setp_code (char*);
		void setcategory (char*);
		void s_time (int);
		void a_time (int);
		void t_ID (int);
		void b_fare (float);
		void discount (float);
		void p_km (float);
		void p_min (float);

		// Getters
		char* getp_loc();
		char* getd_loc();
		char* getv_num();
		char* getp_code();
		char* getcategory();
		int gets_time();
		int geta_time();
		int gett_ID();
		float getb_fare();
		float getdiscount();
		float getp_km();
		float getp_min();

		// Display
		void display3();

};