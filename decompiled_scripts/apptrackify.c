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
	struct<3> Local_19 = { 0, 0, 0 } ;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	int iLocal_30 = 0;
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
	fLocal_26 = 9.99f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	fLocal_29 = 0f;
	unk_0x1ED2FDBD02899869();
	func_9();
	func_6();
	unk_0xC1B1E9A034A63A62(0);
	unk_0x5AE11BC36633DE4E(0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14393.f_1 != 9)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					if (unk_0x83666F9FB8FEBD4B() > 125)
					{
						func_9();
						unk_0xC1B1E9A034A63A62(0);
					}
					if (unk_0xC9D9444186B5A374() > unk_0xF34EE736CF047844(fLocal_28) * 30 && unk_0xC9D9444186B5A374() > 150)
					{
						unk_0x48F299599202B77A(Global_14374, "APP_FUNCTION");
						unk_0x4BD4D58838D3F8E5(1);
						unk_0x7E86CE5F658823DB();
						unk_0x5AE11BC36633DE4E(0);
					}
					if (unk_0xC9D9444186B5A374() > 2000)
					{
						unk_0x48F299599202B77A(Global_14374, "APP_FUNCTION");
						unk_0x4BD4D58838D3F8E5(1);
						unk_0x7E86CE5F658823DB();
						unk_0x5AE11BC36633DE4E(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_14361, 0))
					{
						func_4();
						Global_14371 = 1;
						func_9();
						func_6();
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
	unk_0xF76EE56D3E7DAF1B(&Global_2264, 22);
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
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_8(sParam7);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam8))
	{
		func_8(iParam8);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam9))
	{
		func_8(iParam9);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam10))
	{
		func_8(iParam10);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam11))
	{
		func_8(iParam11);
	}
	unk_0x7E86CE5F658823DB();
}

void func_8(var uParam0)
{
	unk_0x0F79C8080022554A(uParam0);
	unk_0xE6EC84BF3A7A64B6();
}

void func_9()
{
	int iVar0;
	bool bVar1;
	
	if (func_17() == 0)
	{
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			Local_19 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			fLocal_22 = unk_0xE691E4EA6B4440C6(unk_0x9F92518438215DD0());
			func_16();
			func_15();
			func_14();
			fLocal_23 = (360f - fLocal_22);
			fLocal_26 = (fLocal_26 - fLocal_23);
			if (fLocal_26 < 0f)
			{
				fLocal_26 = (fLocal_26 + 360f);
			}
			if (iLocal_30 == 0)
			{
				unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
				unk_0x4BD4D58838D3F8E5(23);
				unk_0x4BD4D58838D3F8E5(0);
				if (unk_0x94E72F17611BCD3C(Global_2264, 30))
				{
					unk_0x4BD4D58838D3F8E5(-99);
					unk_0x4BD4D58838D3F8E5(0);
				}
				else
				{
					unk_0x4BD4D58838D3F8E5(unk_0xF34EE736CF047844(fLocal_26));
					unk_0x4BD4D58838D3F8E5(unk_0xF34EE736CF047844(fLocal_27));
				}
				unk_0x4BD4D58838D3F8E5(100);
				if (unk_0x94E72F17611BCD3C(Global_2264, 22))
				{
					unk_0x4BD4D58838D3F8E5(1);
				}
				else
				{
					unk_0x4BD4D58838D3F8E5(0);
				}
				if (unk_0x94E72F17611BCD3C(Global_2264, 29))
				{
					unk_0x63E5FA5DEE979BD6(0);
				}
				else
				{
					unk_0x63E5FA5DEE979BD6(1);
				}
				if (unk_0x94E72F17611BCD3C(Global_2265, 1))
				{
					unk_0xC4F81CF078CCB564(fLocal_29);
				}
				unk_0x7E86CE5F658823DB();
			}
			if (fLocal_22 == fLocal_22)
			{
			}
			func_13(Global_14374, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		Local_19 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
		fLocal_22 = unk_0xE691E4EA6B4440C6(unk_0x9F92518438215DD0());
		if (Global_2545738 > 5)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_2545738)
		{
			func_12(iVar0);
			func_11(iVar0);
			func_10(iVar0);
			fLocal_23 = (360f - fLocal_22);
			fLocal_26 = (fLocal_26 - fLocal_23);
			if (fLocal_26 < 0f)
			{
				fLocal_26 = (fLocal_26 + 360f);
			}
			if (iLocal_30 == 0)
			{
				unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
				unk_0x4BD4D58838D3F8E5(23);
				unk_0x4BD4D58838D3F8E5(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (unk_0x94E72F17611BCD3C(Global_2545539, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (unk_0x94E72F17611BCD3C(Global_2545539, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (unk_0x94E72F17611BCD3C(Global_2545539, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (unk_0x94E72F17611BCD3C(Global_2545539, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					unk_0x4BD4D58838D3F8E5(-99);
					unk_0x4BD4D58838D3F8E5(0);
				}
				else
				{
					unk_0x4BD4D58838D3F8E5(unk_0xF34EE736CF047844(fLocal_26));
					unk_0x4BD4D58838D3F8E5(unk_0xF34EE736CF047844(fLocal_27));
				}
				unk_0x4BD4D58838D3F8E5(100);
				if (unk_0x94E72F17611BCD3C(Global_2264, 22))
				{
					unk_0x63E5FA5DEE979BD6(1);
				}
				else
				{
					unk_0x63E5FA5DEE979BD6(1);
				}
				if (unk_0x94E72F17611BCD3C(Global_2264, 29))
				{
					unk_0x63E5FA5DEE979BD6(0);
				}
				else
				{
					unk_0x63E5FA5DEE979BD6(1);
				}
				if (unk_0x94E72F17611BCD3C(Global_2265, 1))
				{
					unk_0xC4F81CF078CCB564(fLocal_29);
				}
				unk_0x7E86CE5F658823DB();
			}
			if (fLocal_22 == fLocal_22)
			{
			}
			func_13(Global_14374, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_10(int iParam0)
{
	fLocal_24 = (Global_2545722[iParam0 /*3*/] - Local_19.f_0);
	fLocal_25 = (unk_0xD0FFB162F40A139C(((3.14159f / 180f) * Local_19.f_0)) * (Global_2545722[iParam0 /*3*/].f_1 - Local_19.f_1));
	fLocal_26 = unk_0x4E9A83F39209A4F6(fLocal_24, fLocal_25);
	if (fLocal_26 < 0f)
	{
		fLocal_26 = (fLocal_26 + 360f);
	}
	return fLocal_26;
}

float func_11(int iParam0)
{
	fLocal_28 = unk_0x71D93B57D07F9804(unk_0xB7A628320EFF8E47(Global_2545722[iParam0 /*3*/], Local_19));
	fLocal_29 = (Global_2545722[iParam0 /*3*/].f_2 - Local_19.f_2);
	return fLocal_28;
}

float func_12(int iParam0)
{
	fLocal_27 = unk_0x71D93B57D07F9804((((Global_2545722[iParam0 /*3*/] - Local_19.f_0) * (Global_2545722[iParam0 /*3*/] - Local_19.f_0)) + ((Global_2545722[iParam0 /*3*/].f_1 - Local_19.f_1) * (Global_2545722[iParam0 /*3*/].f_1 - Local_19.f_1))));
	return fLocal_27;
}

void func_13(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

float func_14()
{
	fLocal_24 = (Global_16798 - Local_19.f_0);
	fLocal_25 = (unk_0xD0FFB162F40A139C(((3.14159f / 180f) * Local_19.f_0)) * (Global_16798.f_1 - Local_19.f_1));
	fLocal_26 = unk_0x4E9A83F39209A4F6(fLocal_24, fLocal_25);
	if (fLocal_26 < 0f)
	{
		fLocal_26 = (fLocal_26 + 360f);
	}
	return fLocal_26;
}

float func_15()
{
	fLocal_28 = unk_0x71D93B57D07F9804(unk_0xB7A628320EFF8E47(Global_16798, Local_19));
	fLocal_29 = (Global_16798.f_2 - Local_19.f_2);
	return fLocal_28;
}

float func_16()
{
	fLocal_27 = unk_0x71D93B57D07F9804((((Global_16798 - Local_19.f_0) * (Global_16798 - Local_19.f_0)) + ((Global_16798.f_1 - Local_19.f_1) * (Global_16798.f_1 - Local_19.f_1))));
	return fLocal_27;
}

int func_17()
{
	if (Global_68245 == 1)
	{
		return 1;
	}
	return 0;
}

