#pragma once

#include <compare>

namespace numberplace
{
    class Number
    {
        public:
            enum class KIND : unsigned int
            {
                NONE,
                N_1,
                N_2,
                N_3,
                N_4,
                N_5,
                N_6,
                N_7,
                N_8,
                N_9,
                SIZE,
            };

        private:
            KIND m_kind;

        public:
            Number ();
            Number (const Number&) = default;
            Number (Number&&)      = default;
            ~Number()              = default;

        public:
            Number(KIND kind);

        public:
            KIND& GetKind();

        public:
            Number& operator=(const Number& cr_number);

        public:
            friend auto operator<=>(const Number& number1, const Number& number2) = default;
    };
}
