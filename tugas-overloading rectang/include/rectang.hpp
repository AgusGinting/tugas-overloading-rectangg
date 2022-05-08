#ifndef __RECTANG_HPP__
#define __RECTANG_HPP__
    class rectang{
        private:
            float x_maks, x_min, y_maks, y_min;
        public:
            rectang(float midpoint_x, float midpoint_y, float length, float width);
            bool operator== (rectang const &)const;
            rectang operator+ (rectang const &);
            rectang operator- (rectang const &);
            void operator++ ();
            void operator++(int);
            void operator-- ();
            void operator--(int);
            float operator[](int pilihan);
            void output();
    };
#endif