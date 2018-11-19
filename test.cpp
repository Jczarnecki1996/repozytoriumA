#include "pch.h"
#include "../lista3Nowa/rownanieKwadratowe.cpp"
#include "../lista3Nowa/rownanieWyjatki.cpp"

rownanieKwadratowe rownanieTestowePierwsze(1, 5, 6);
rownanieKwadratowe rownanieTestoweDrugie(1, 2, 1);
rownanieKwadratowe rownanieTestoweTrzecie(1, -3, 7);
rownanieWyjatki wyjatek(1);

TEST(miejscaZeroweTest, dwaMiejscaZerowe) {
 /* EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);*/

	EXPECT_EQ(-2, rownanieTestowePierwsze.podajMiejsceZerowe(2));
	EXPECT_EQ(-3, rownanieTestowePierwsze.podajMiejsceZerowe(1)); //nie krytyczne niepowodznie, pozwala na kontynuowanie dzialania funkcji
	//ASSERT_EQ(-3, rownanieTestowePierwsze.podajMiejsceZerowe(1)); // krytyczne niepowodznie, nie pozwala na kontynuowanie dzialania funkcji
	
}
TEST(miejscaZeroweTest, jednoMiejsceZerowe) {
	EXPECT_EQ(-1, rownanieTestoweDrugie.podajMiejsceZerowe(2));
	EXPECT_EQ(-1, rownanieTestoweDrugie.podajMiejsceZerowe(1));
}

TEST(miejscaZeroweTest, brakMiejscZerowych) {
	EXPECT_THROW(rownanieTestoweTrzecie.podajMiejsceZerowe(1), rownanieWyjatki );
}