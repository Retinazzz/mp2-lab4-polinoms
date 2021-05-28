#include"gtest.h"
//#include<algorithm>
#include"../vers1/vers1.cpp"

TEST(Monom, can_create_monom)
{
	ASSERT_NO_THROW(MONOM m);
}


TEST(MONOM, monom_can_be_assigned_to)
{
	MONOM m1, m2;
	ASSERT_NO_THROW(m1 = m2);
}


//TEST(MONOM, monoms_can_be_multiplied_by_each_other)
//{
	//MONOM m1, m2;
	//ASSERT_NO_THROW(m1 = m1 * m2);
//}

TEST(MONOM, monoms_multiplying_by_each_other_is_done_correctly)
{
	MONOM m1(2,123), m2(3,321);
	MONOM c;
	c.Coef = m1.Coef * m2.Coef;
	c.d_x = (m1.Index / 100) + (m2.Index / 100);
	c.d_y = ((m1.Index % 100 - m1.Index % 10) / 10) + ((m2.Index % 100 - m2.Index % 10) / 10);
	c.d_z = (m1.Index % 10) + (m2.Index % 10);
	int error = 0;
	if ((m1.Index/100) != 4 || ((m1.Index % 100 - m1.Index % 10) / 10) != 4 || (m1.Index%10) != 4 || (m1.Coef != 6.0))
		error++;
	EXPECT_EQ(0, error);
}

/*TEST(MONOM, monoms_can_be_multiplied_by_a_number)
{
	MONOM m;
	
	ASSERT_NO_THROW(m = m * 5.0);
}*/

TEST(MONOM, monoms_multiplying_by_a_number_is_done_correctly)
{
	MONOM m(4,123);
	m.Coef = m.Coef * 5.0;
	int error = 0;
	if (((m.Index / 100) != 1 || ((m.Index % 100 - m.Index % 10) / 10) != 2 || (m.Index % 10) != 3 || (m.Coef != 20.0)))
		error++;
	EXPECT_EQ(0, error);
}

