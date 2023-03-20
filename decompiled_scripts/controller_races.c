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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	if (unk_0xD63E63DFACCEB80E(82))
	{
		func_30();
	}
	if (unk_0x7B47A371E2D93C2C(joaat("controller_races")) > 1)
	{
		unk_0xE60DEFFB2A853900();
	}
	while (unk_0x7B47A371E2D93C2C(joaat("initial")) > 0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_29();
	while (true)
	{
		if (func_26(9) || Global_87287)
		{
			func_30();
		}
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if (func_24())
			{
				func_22();
				func_18();
				if (func_12() == 1)
				{
					switch (iLocal_27)
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
			if (unk_0x94E72F17611BCD3C(Global_97358.f_28176.f_1, iVar0))
			{
				if (unk_0x94E72F17611BCD3C(Global_97358.f_28176.f_3, iVar0))
				{
					fVar2 = unk_0xB7A628320EFF8E47(func_9(unk_0xCFC72E446B0B3AD7()), func_8(iVar1, 0));
					if (fVar2 > 43681f)
					{
						if (!func_7(iVar1))
						{
							if (!Global_97332[iVar0])
							{
								func_3(iVar1);
								func_2(iVar1, 1, 1);
								unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_28176.f_3), iVar0);
							}
							else if ((unk_0x17103F66FBB44C3C() - Global_97338[iVar0]) > 60000)
							{
								Global_97332[iVar0] = 0;
								Global_97338[iVar0] = unk_0x17103F66FBB44C3C();
								func_3(iVar1);
								func_2(iVar1, 1, 1);
								unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_28176.f_3), iVar0);
							}
						}
						else
						{
							unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_28176.f_3), iVar0);
						}
					}
					else if (func_7(iVar1))
					{
						func_2(iVar1, 0, 1);
					}
				}
				else if (!func_7(iVar1))
				{
					if (!Global_97332[iVar0])
					{
						func_3(iVar1);
						func_2(iVar1, 1, 1);
					}
					else if ((unk_0x17103F66FBB44C3C() - Global_97338[iVar0]) > 60000)
					{
						Global_97332[iVar0] = 0;
						Global_97338[iVar0] = unk_0x17103F66FBB44C3C();
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
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0x94E72F17611BCD3C(Global_24748[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x94E72F17611BCD3C(Global_24748[iVar0 /*23*/].f_11, 0))
	{
		unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 18);
		if (Global_24745 == 1)
		{
			Global_24746 = 1;
		}
		Global_24745 = 1;
	}
	if (bParam1)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 0);
		unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 15);
		unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_24748[iVar0 /*23*/].f_11), 0);
		unk_0xF76EE56D3E7DAF1B(&(Global_24748[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x94E72F17611BCD3C(Global_24748[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x2E6E8D325977B3EC(Global_24748[iVar0 /*23*/].f_19))
		{
			unk_0x5DC6B0185B12682A(1);
			unk_0x0451B5D93A4BDAA0(&(Global_24748[iVar0 /*23*/].f_19));
			unk_0x5DC6B0185B12682A(0);
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
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == unk_0x94E72F17611BCD3C(Global_24748[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_24748[iVar0 /*23*/].f_11), 4);
	}
	if (Global_24745 == 1)
	{
		Global_24746 = 1;
	}
	Global_24745 = 1;
	unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 18);
}

void func_5(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == unk_0x94E72F17611BCD3C(Global_24748[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_24748[iVar0 /*23*/].f_11), 5);
	}
	if (Global_24745 == 1)
	{
		Global_24746 = 1;
	}
	Global_24745 = 1;
	unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 18);
}

void func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == unk_0x94E72F17611BCD3C(Global_24748[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_24748[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_24748[iVar0 /*23*/].f_11), 11);
	}
	if (Global_24745 == 1)
	{
		Global_24746 = 1;
	}
	Global_24745 = 1;
	unk_0xEDB9A377CD8B7F03(&(Global_24748[iVar0 /*23*/].f_11), 18);
}

bool func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	return unk_0x2E6E8D325977B3EC(Global_24748[iVar0 /*23*/].f_19);
}

Vector3 func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0f, 0f, 0f;
	}
	return Global_24748[iVar0 /*23*/][iParam1 /*3*/];
}

Vector3 func_9(var uParam0)
{
	return unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(uParam0), 0);
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 85;
			break;
		
		case 1:
			return 86;
			break;
		
		case 2:
			return 87;
			break;
		
		case 3:
			return 88;
			break;
		
		case 4:
			return 89;
			break;
	}
	return 85;
}

bool func_11(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[0], iParam0);
}

int func_12()
{
	func_13();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_13()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_17(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_16(unk_0x9F92518438215DD0());
			if (func_15(iVar0) && (!func_14(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_15(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_14(int iParam0)
{
	return Global_34913 == iParam0;
}

bool func_15(int iParam0)
{
	return iParam0 < 3;
}

int func_16(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(uParam0);
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
		return Global_97358.f_29774[iParam0 /*29*/];
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
			if (unk_0x94E72F17611BCD3C(Global_97358.f_28173.f_2, iVar0))
			{
				fVar2 = unk_0xB7A628320EFF8E47(func_9(unk_0xCFC72E446B0B3AD7()), func_8(iVar1, 0));
				if (fVar2 > 43681f)
				{
					if (!func_7(iVar1))
					{
						if (!Global_97322[iVar0])
						{
							func_3(iVar1);
							func_2(iVar1, 1, 1);
							unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_28173.f_2), iVar0);
						}
						else if ((unk_0x17103F66FBB44C3C() - Global_97327[iVar0]) > 60000)
						{
							Global_97322[iVar0] = 0;
							Global_97327[iVar0] = unk_0x17103F66FBB44C3C();
							func_3(iVar1);
							func_2(iVar1, 1, 1);
							unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_28173.f_2), iVar0);
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
				if (!Global_97322[iVar0])
				{
					func_3(iVar1);
					func_2(iVar1, 1, 1);
				}
				else if ((unk_0x17103F66FBB44C3C() - Global_97327[iVar0]) > 60000)
				{
					Global_97322[iVar0] = 0;
					Global_97327[iVar0] = unk_0x17103F66FBB44C3C();
					func_3(iVar1);
					func_2(iVar1, 1, 1);
				}
			}
			else if (!Global_97358.f_28173)
			{
				if (iVar1 == 81)
				{
					func_20(81);
					func_19(65, 1000);
					Global_97358.f_28173 = 1;
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
	Global_97358.f_6869[iParam0] = 1;
	Global_97358.f_6869.f_236[iParam0] = (unk_0x17103F66FBB44C3C() + iParam1);
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
			return 81;
			break;
		
		case 1:
			return 82;
			break;
		
		case 2:
			return 83;
			break;
		
		case 3:
			return 84;
			break;
	}
	return 81;
}

void func_22()
{
	switch (iLocal_27)
	{
		case 0:
			if (unk_0x3E15607264E063C3() < 20 && unk_0x3E15607264E063C3() >= 5)
			{
				func_23();
				iLocal_27 = 1;
			}
			else
			{
				iLocal_27 = 2;
			}
			break;
		
		case 1:
			if (unk_0x3E15607264E063C3() >= 20 || unk_0x3E15607264E063C3() < 5)
			{
				iLocal_27 = 2;
			}
			break;
		
		case 2:
			if (unk_0x3E15607264E063C3() < 20 && unk_0x3E15607264E063C3() >= 5)
			{
				func_23();
				iLocal_27 = 1;
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
	if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0)
	{
		return 0;
	}
	if (unk_0x2D8FCFBC4E01FF7C())
	{
		return 0;
	}
	return 1;
}

int func_25()
{
	if (unk_0x7B47A371E2D93C2C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0)
{
	if (Global_34913 == 15)
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
	return func_28(iParam0, Global_34913);
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
		Global_97322[iVar0] = 0;
		Global_97327[iVar0] = unk_0x17103F66FBB44C3C();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		Global_97332[iVar0] = 0;
		iVar0++;
	}
}

void func_30()
{
	unk_0xE60DEFFB2A853900();
}

