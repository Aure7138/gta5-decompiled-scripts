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
	struct<26> Local_19 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	char cLocal_51[32] = "";
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
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
	iLocal_50 = -99;
	StringCopy(&cLocal_51, "TRACKID", 32);
	unk_0x1ED2FDBD02899869();
	unk_0x9C53AD1E8A38ADEE(&cLocal_51, 1);
	while (!unk_0x7DE7B5897062BC2C(1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_15();
	func_14();
	func_11();
	unk_0xC1B1E9A034A63A62(0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_60)
		{
			if (iLocal_62 < 101)
			{
				if (unk_0x83666F9FB8FEBD4B() > 30)
				{
					iLocal_62++;
					unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(23);
					unk_0x4BD4D58838D3F8E5(0);
					unk_0x4BD4D58838D3F8E5(1);
					func_10("CELL_4005");
					unk_0x4BD4D58838D3F8E5(iLocal_62);
					unk_0x7E86CE5F658823DB();
					func_9(Global_14374, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(0), -1082130432, -1082130432, -1082130432);
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			else
			{
				unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
				unk_0x4BD4D58838D3F8E5(23);
				unk_0x4BD4D58838D3F8E5(0);
				unk_0x4BD4D58838D3F8E5(2);
				func_10("CELL_4006");
				func_10("CELL_4007");
				unk_0x7E86CE5F658823DB();
				func_9(Global_14374, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(0), -1082130432, -1082130432, -1082130432);
				iLocal_61 = 1;
				iLocal_60 = 0;
			}
		}
		if (Global_14393.f_1 != 9)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					func_8();
					if (iLocal_59 == 0)
					{
						func_6();
					}
					break;
				
				case 8:
					if (func_5(2, Global_14361, 0))
					{
						func_4();
						iLocal_60 = 0;
						iLocal_61 = 0;
						Global_14371 = 1;
						func_14();
						if (Global_14393.f_1 > 3)
						{
							Global_14393.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_14395 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 3) || Global_14393.f_1 == 0) || Global_14337 == 1)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	iLocal_60 = 0;
	unk_0xE60DEFFB2A853900();
}

int func_3()
{
	if (Global_2869 == 1 || Global_14393.f_1 < 7)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		unk_0x86F4B3D6FF8F65DE(-1, "Menu_Back", &Global_14382, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x205C5BF7277043DF(iParam0, uParam1) || (iParam2 == 1 && unk_0x4841051C33809BC4(iParam0, uParam1)))
	{
		if (unk_0x708CE249B4F97BF8())
		{
			if (unk_0x16F8ADED32EFC76D() == 0 || (unk_0xB693DB1187BBD585() && unk_0x286FD331C17C5174(2)))
			{
				return 0;
			}
		}
		if (unk_0xC8557993A78C1B3E() || unk_0x3B8CF48C3FC0CF62())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_6()
{
	if (unk_0x83666F9FB8FEBD4B() > 2200)
	{
		if (Global_14381)
		{
			func_7(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		iLocal_59 = 1;
	}
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9E9AFDBF482248F6(sParam7))
	{
		func_10(sParam7);
	}
	if (!unk_0x9E9AFDBF482248F6(sParam8))
	{
		func_10(sParam8);
	}
	if (!unk_0x9E9AFDBF482248F6(sParam9))
	{
		func_10(sParam9);
	}
	if (!unk_0x9E9AFDBF482248F6(sParam10))
	{
		func_10(sParam10);
	}
	if (!unk_0x9E9AFDBF482248F6(sParam11))
	{
		func_10(sParam11);
	}
	unk_0x7E86CE5F658823DB();
}

void func_8()
{
	if (Global_14371 == 0)
	{
		if (func_5(2, Global_14362, 0))
		{
			if ((iLocal_59 && iLocal_61 == 0) && iLocal_60 == 0)
			{
				iLocal_62 = 0;
				unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
				unk_0x4BD4D58838D3F8E5(23);
				unk_0x4BD4D58838D3F8E5(0);
				unk_0x4BD4D58838D3F8E5(1);
				func_10("CELL_4005");
				unk_0x4BD4D58838D3F8E5(iLocal_62);
				unk_0x7E86CE5F658823DB();
				func_9(Global_14374, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(0), -1082130432, -1082130432, -1082130432);
				if (Global_14381)
				{
					func_7(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					func_7(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
				}
				else
				{
					func_7(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					func_7(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_7(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xF76EE56D3E7DAF1B(&Global_2263, 17);
				iLocal_60 = 1;
				unk_0xC1B1E9A034A63A62(0);
			}
		}
	}
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x7E86CE5F658823DB();
}

void func_10(char* sParam0)
{
	unk_0x0F79C8080022554A(sParam0);
	unk_0xE6EC84BF3A7A64B6();
}

void func_11()
{
	int iVar0;
	
	func_13(134, 1);
	iVar0 = unk_0x147076C287537800();
	switch (func_12(iVar0))
	{
		case 1:
			func_13(82, 1);
			break;
		
		case 2:
			func_13(81, 1);
			break;
		
		default:
			func_13(83, 1);
			break;
	}
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}

void func_13(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		unk_0x39496A55977AA312(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xC46BDC34976E9532(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_14()
{
	unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
	unk_0x4BD4D58838D3F8E5(23);
	unk_0x4BD4D58838D3F8E5(0);
	unk_0x4BD4D58838D3F8E5(0);
	func_10("CELL_4001");
	func_10(&Local_19);
	func_10(&(Local_19.f_16));
	func_10("CELL_4002");
	unk_0x4BD4D58838D3F8E5(Local_19.f_24);
	func_10("CELL_4003");
	func_10(&(Local_19.f_25));
	func_10("CELL_4004");
	unk_0x7E86CE5F658823DB();
	func_9(Global_14374, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(0), -1082130432, -1082130432, -1082130432);
	if (Global_14381)
	{
		if (iLocal_59)
		{
			func_7(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		func_7(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		if (iLocal_59)
		{
			func_7(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_7(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_7(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xF76EE56D3E7DAF1B(&Global_2263, 17);
}

void func_15()
{
	iLocal_50 = unk_0x7C4AE738949600AD();
	StringCopy(&Local_19, "", 64);
	StringIntConCat(&Local_19, iLocal_50, 64);
	StringConCat(&Local_19, "S", 64);
	StringCopy(&(Local_19.f_16), "", 32);
	StringIntConCat(&(Local_19.f_16), iLocal_50, 32);
	StringConCat(&(Local_19.f_16), "A", 32);
	StringCopy(&(Local_19.f_25), unk_0x9A7AD1EAD7302727(), 24);
	if (!unk_0x75426D5397CE9E5D(&Local_19))
	{
		StringCopy(&Local_19, "CELL_195", 64);
	}
	if (!unk_0x75426D5397CE9E5D(&(Local_19.f_16)))
	{
		StringCopy(&(Local_19.f_16), "CELL_195", 32);
		StringCopy(&(Local_19.f_25), "CELL_195", 24);
	}
}

