#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	if (unk_0xE8A79675302ED812(82))
	{
		func_30();
	}
	if (unk_0xB731B8C5BCE89836(joaat("controller_races")) > 1)
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (unk_0xB731B8C5BCE89836(joaat("initial")) > 0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_29();
	while (true)
	{
		if (func_26(9) || Global_90020)
		{
			func_30();
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if (func_24())
			{
				func_22();
				func_18();
				if (func_12() == 1)
				{
					switch (iLocal_28)
					{
						case 1:
							break;
						
						case 2:
							func_1();
							break;
						}
					}
				}
		}
		unk_0x4EDE34FBADD967A6(1000);
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (func_11(8))
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			iVar1 = func_10(iVar0);
			if (unk_0xFA30DFD0084E92FE(Global_105220.f_24950.f_1, iVar0))
			{
				if (unk_0xFA30DFD0084E92FE(Global_105220.f_24950.f_3, iVar0))
				{
					fVar2 = unk_0xB7A628320EFF8E47(func_9(unk_0xB5CEFD608600A09F()), func_8(iVar1, 0));
					if (fVar2 > 43681f)
					{
						if (!func_7(iVar1))
						{
							if (!Global_105194[iVar0])
							{
								func_3(iVar1);
								func_2(iVar1, 1, 1);
								unk_0x7CB6FD92BE491AD9(&(Global_105220.f_24950.f_3), iVar0);
							}
							else if ((unk_0x105601648511CC64() - Global_105200[iVar0]) > 60000)
							{
								Global_105194[iVar0] = 0;
								Global_105200[iVar0] = unk_0x105601648511CC64();
								func_3(iVar1);
								func_2(iVar1, 1, 1);
								unk_0x7CB6FD92BE491AD9(&(Global_105220.f_24950.f_3), iVar0);
							}
						}
						else
						{
							unk_0x7CB6FD92BE491AD9(&(Global_105220.f_24950.f_3), iVar0);
						}
					}
					else if (func_7(iVar1))
					{
						func_2(iVar1, 0, 1);
					}
				}
				else if (!func_7(iVar1))
				{
					if (!Global_105194[iVar0])
					{
						func_3(iVar1);
						func_2(iVar1, 1, 1);
					}
					else if ((unk_0x105601648511CC64() - Global_105200[iVar0]) > 60000)
					{
						Global_105194[iVar0] = 0;
						Global_105200[iVar0] = unk_0x105601648511CC64();
						func_3(iVar1);
						func_2(iVar1, 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_2(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0xFA30DFD0084E92FE(Global_25622[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xFA30DFD0084E92FE(Global_25622[iVar0 /*23*/].f_11, 0))
	{
		unk_0xF0059F27F7BB6680(&(Global_25622[iVar0 /*23*/].f_11), 18);
		if (Global_25619 == 1)
		{
			Global_25620 = 1;
		}
		Global_25619 = 1;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_25622[iVar0 /*23*/].f_11), 0);
		unk_0xF0059F27F7BB6680(&(Global_25622[iVar0 /*23*/].f_11), 15);
		unk_0xF0059F27F7BB6680(&(Global_25622[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_25622[iVar0 /*23*/].f_11), 0);
		unk_0x7CB6FD92BE491AD9(&(Global_25622[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xFA30DFD0084E92FE(Global_25622[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x2DA8CA50A72528FB(Global_25622[iVar0 /*23*/].f_19))
		{
			unk_0xB5AD2E78802711D6(1);
			unk_0x07B8ECB35A4ED3AC(&(Global_25622[iVar0 /*23*/].f_19));
			unk_0xB5AD2E78802711D6(0);
		}
	}
}

void func_3(int iParam0)
{
	func_6(iParam0, 0, 0);
	func_5(iParam0, 1);
	func_4(iParam0, 1);
}

void func_4(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xFA30DFD0084E92FE(Global_25622[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_25622[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_25622[iVar0 /*23*/].f_11), 4);
	}
	if (Global_25619 == 1)
	{
		Global_25620 = 1;
	}
	Global_25619 = 1;
	unk_0xF0059F27F7BB6680(&(Global_25622[iVar0 /*23*/].f_11), 18);
}

void func_5(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xFA30DFD0084E92FE(Global_25622[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_25622[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_25622[iVar0 /*23*/].f_11), 5);
	}
	if (Global_25619 == 1)
	{
		Global_25620 = 1;
	}
	Global_25619 = 1;
	unk_0xF0059F27F7BB6680(&(Global_25622[iVar0 /*23*/].f_11), 18);
}

void func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xFA30DFD0084E92FE(Global_25622[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_25622[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_25622[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_25622[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_25622[iVar0 /*23*/].f_11), 11);
	}
	if (Global_25619 == 1)
	{
		Global_25620 = 1;
	}
	Global_25619 = 1;
	unk_0xF0059F27F7BB6680(&(Global_25622[iVar0 /*23*/].f_11), 18);
}

bool func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x2DA8CA50A72528FB(Global_25622[iVar0 /*23*/].f_19);
}

Vector3 func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_25622[iVar0 /*23*/][iParam1 /*3*/];
}

Vector3 func_9(var uParam0)
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(uParam0), 0);
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 86;
			break;
		
		case 1:
			return 87;
			break;
		
		case 2:
			return 88;
			break;
		
		case 3:
			return 89;
			break;
		
		case 4:
			return 90;
			break;
	}
	return 86;
}

bool func_11(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_105220.f_9056.f_99.f_219[0], iParam0);
}

int func_12()
{
	func_13();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_13()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_17(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_16(unk_0xBC25C936A095B5BA());
			if (func_15(iVar0) && (!func_14(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_15(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_14(int iParam0)
{
	return Global_35905 == iParam0;
}

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(uParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_18()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (func_11(7))
	{
		iVar0 = 0;
		while (iVar0 <= (4 - 1))
		{
			iVar1 = func_21(iVar0);
			if (unk_0xFA30DFD0084E92FE(Global_105220.f_24947.f_2, iVar0))
			{
				fVar2 = unk_0xB7A628320EFF8E47(func_9(unk_0xB5CEFD608600A09F()), func_8(iVar1, 0));
				if (fVar2 > 43681f)
				{
					if (!func_7(iVar1))
					{
						if (!Global_105184[iVar0])
						{
							func_3(iVar1);
							func_2(iVar1, 1, 1);
							unk_0x7CB6FD92BE491AD9(&(Global_105220.f_24947.f_2), iVar0);
						}
						else if ((unk_0x105601648511CC64() - Global_105189[iVar0]) > 60000)
						{
							Global_105184[iVar0] = 0;
							Global_105189[iVar0] = unk_0x105601648511CC64();
							func_3(iVar1);
							func_2(iVar1, 1, 1);
							unk_0x7CB6FD92BE491AD9(&(Global_105220.f_24947.f_2), iVar0);
						}
					}
				}
				else if (func_7(iVar1))
				{
					func_2(iVar1, 0, 1);
				}
			}
			else if (!func_7(iVar1))
			{
				if (!Global_105184[iVar0])
				{
					func_3(iVar1);
					func_2(iVar1, 1, 1);
				}
				else if ((unk_0x105601648511CC64() - Global_105189[iVar0]) > 60000)
				{
					Global_105184[iVar0] = 0;
					Global_105189[iVar0] = unk_0x105601648511CC64();
					func_3(iVar1);
					func_2(iVar1, 1, 1);
				}
			}
			else if (!Global_105220.f_24947)
			{
				if (iVar1 == 82)
				{
					func_20(82);
					func_19(65, 1000);
					Global_105220.f_24947 = 1;
				}
			}
			iVar0++;
		}
	}
}

void func_19(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_105220.f_8584[iParam0] = 1;
	Global_105220.f_8584.f_236[iParam0] = (unk_0x105601648511CC64() + iParam1);
}

void func_20(int iParam0)
{
	func_6(iParam0, 1, 0);
	func_5(iParam0, 1);
	func_4(iParam0, 1);
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 82;
			break;
		
		case 1:
			return 83;
			break;
		
		case 2:
			return 84;
			break;
		
		case 3:
			return 85;
			break;
	}
	return 82;
}

void func_22()
{
	switch (iLocal_28)
	{
		case 0:
			if (unk_0x6E06C0DB9B43570D() < 20 && unk_0x6E06C0DB9B43570D() >= 5)
			{
				func_23();
				iLocal_28 = 1;
			}
			else
			{
				iLocal_28 = 2;
			}
			break;
		
		case 1:
			if (unk_0x6E06C0DB9B43570D() >= 20 || unk_0x6E06C0DB9B43570D() < 5)
			{
				iLocal_28 = 2;
			}
			break;
		
		case 2:
			if (unk_0x6E06C0DB9B43570D() < 20 && unk_0x6E06C0DB9B43570D() >= 5)
			{
				func_23();
				iLocal_28 = 1;
			}
			break;
	}
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		func_2(func_10(iVar0), 0, 0);
		iVar0++;
	}
}

int func_24()
{
	if (func_26(9))
	{
		return 0;
	}
	if (func_25())
	{
		return 0;
	}
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
	{
		return 0;
	}
	if (unk_0x7930B3E9C919E90F())
	{
		return 0;
	}
	return 1;
}

int func_25()
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0)
{
	if (Global_35905 == 15)
	{
		return 0;
	}
	if (func_27(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_27(int iParam0)
{
	return func_28(iParam0, Global_35905);
}

int func_28(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		Global_105184[iVar0] = 0;
		Global_105189[iVar0] = unk_0x105601648511CC64();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		Global_105194[iVar0] = 0;
		iVar0++;
	}
}

void func_30()
{
	unk_0x95E4B6F3ED223F5A();
}

