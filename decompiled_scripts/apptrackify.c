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
	struct<3> Local_20 = { 0, 0, 0 } ;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	int iLocal_31 = 0;
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
	fLocal_27 = 9.99f;
	fLocal_28 = 0f;
	fLocal_29 = 0f;
	fLocal_30 = 0f;
	unk_0xC1A27D367CCA8C15();
	func_10();
	func_7();
	unk_0xC1B1E9A034A63A62(0);
	unk_0x5AE11BC36633DE4E(0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14493.f_1 != 9)
		{
			switch (Global_14493.f_1)
			{
				case 7:
					if (unk_0x83666F9FB8FEBD4B() > 125)
					{
						func_10();
						unk_0xC1B1E9A034A63A62(0);
					}
					if (unk_0xC9D9444186B5A374() > unk_0xF34EE736CF047844(fLocal_29) * 30 && unk_0xC9D9444186B5A374() > 150)
					{
						unk_0x29CD142125FE177B(Global_14474, "APP_FUNCTION");
						unk_0x1E1FB49121565EB6(1);
						unk_0xF9FBC2F3F73D94C9();
						unk_0x5AE11BC36633DE4E(0);
					}
					if (unk_0xC9D9444186B5A374() > 2000)
					{
						unk_0x29CD142125FE177B(Global_14474, "APP_FUNCTION");
						unk_0x1E1FB49121565EB6(1);
						unk_0xF9FBC2F3F73D94C9();
						unk_0x5AE11BC36633DE4E(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_14461, 0))
					{
						func_5();
						Global_14471 = 1;
						func_10();
						func_7();
						if (Global_14493.f_1 > 3)
						{
							Global_14493.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
			{
				func_2();
			}
		}
		else
		{
			Global_14495 = 6;
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
	if (((Global_14493.f_1 == 1 || Global_14493.f_1 == 3) || Global_14493.f_1 == 0) || Global_14437 == 1)
	{
		Global_14480 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	unk_0x7CB6FD92BE491AD9(&Global_2364, 22);
	unk_0x95E4B6F3ED223F5A();
}

void func_3(int iParam0, int iParam1)
{
	Global_4267671[iParam0] = iParam1;
}

int func_4()
{
	if (Global_2969 == 1 || Global_14493.f_1 < 7)
	{
		Global_14480 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Back", &Global_14482, 1);
	}
}

int func_6(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x694514BD37EC4E94(iParam0, uParam1) || (iParam2 == 1 && unk_0xF7DDAAF0EFDAFA22(iParam0, uParam1)))
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			if (unk_0x0F8865E539C1FCE8() == 0 || (unk_0xF32BA80A2DED1FC6() && unk_0x50465D2C022B9E04(2)))
			{
				return 0;
			}
		}
		if (unk_0xE186ACC7BE9B244E() || unk_0x18158A50125911B6())
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

void func_7()
{
	if (Global_14481)
	{
		func_8(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_14474, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_14474, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_14474, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x7CB6FD92BE491AD9(&Global_2363, 17);
}

void func_8(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x29CD142125FE177B(uParam0, sParam1);
	unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xF1734B55490E9045(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0xF1734B55490E9045(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0xF1734B55490E9045(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0xF1734B55490E9045(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0xF1734B55490E9045(iParam11))
	{
		func_9(iParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_9(var uParam0)
{
	unk_0x57016C44F10111F0(uParam0);
	unk_0x64989E60CF560CA1();
}

void func_10()
{
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			Local_20 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			fLocal_23 = unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA());
			func_17();
			func_16();
			func_15();
			fLocal_24 = (360f - fLocal_23);
			fLocal_27 = (fLocal_27 - fLocal_24);
			if (fLocal_27 < 0f)
			{
				fLocal_27 = (fLocal_27 + 360f);
			}
			if (iLocal_31 == 0)
			{
				unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(23);
				unk_0x1E1FB49121565EB6(0);
				if (unk_0xFA30DFD0084E92FE(Global_2364, 30))
				{
					unk_0x1E1FB49121565EB6(-99);
					unk_0x1E1FB49121565EB6(0);
				}
				else
				{
					unk_0x1E1FB49121565EB6(unk_0xF34EE736CF047844(fLocal_27));
					unk_0x1E1FB49121565EB6(unk_0xF34EE736CF047844(fLocal_28));
				}
				unk_0x1E1FB49121565EB6(100);
				if (unk_0xFA30DFD0084E92FE(Global_2364, 22))
				{
					unk_0x1E1FB49121565EB6(1);
				}
				else
				{
					unk_0x1E1FB49121565EB6(0);
				}
				if (unk_0xFA30DFD0084E92FE(Global_2364, 29))
				{
					unk_0x5E5DBD0A6623969E(0);
				}
				else
				{
					unk_0x5E5DBD0A6623969E(1);
				}
				if (unk_0xFA30DFD0084E92FE(Global_2365, 1))
				{
					unk_0xD44E04EBBDC4CE88(fLocal_30);
				}
				unk_0xF9FBC2F3F73D94C9();
			}
			if (fLocal_23 == fLocal_23)
			{
			}
			func_14(Global_14474, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		Local_20 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
		fLocal_23 = unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA());
		if (Global_4267677 > 5)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_4267677)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_24 = (360f - fLocal_23);
			fLocal_27 = (fLocal_27 - fLocal_24);
			if (fLocal_27 < 0f)
			{
				fLocal_27 = (fLocal_27 + 360f);
			}
			if (iLocal_31 == 0)
			{
				unk_0x29CD142125FE177B(Global_14474, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(23);
				unk_0x1E1FB49121565EB6(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (unk_0xFA30DFD0084E92FE(Global_4267466, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (unk_0xFA30DFD0084E92FE(Global_4267466, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (unk_0xFA30DFD0084E92FE(Global_4267466, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (unk_0xFA30DFD0084E92FE(Global_4267466, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					unk_0x1E1FB49121565EB6(-99);
					unk_0x1E1FB49121565EB6(0);
				}
				else
				{
					unk_0x1E1FB49121565EB6(unk_0xF34EE736CF047844(fLocal_27));
					unk_0x1E1FB49121565EB6(unk_0xF34EE736CF047844(fLocal_28));
				}
				unk_0x1E1FB49121565EB6(100);
				if (unk_0xFA30DFD0084E92FE(Global_2364, 22))
				{
					unk_0x5E5DBD0A6623969E(1);
				}
				else
				{
					unk_0x5E5DBD0A6623969E(1);
				}
				if (unk_0xFA30DFD0084E92FE(Global_2364, 29))
				{
					unk_0x5E5DBD0A6623969E(0);
				}
				else
				{
					unk_0x5E5DBD0A6623969E(1);
				}
				unk_0xD44E04EBBDC4CE88(fLocal_30);
				unk_0x1E1FB49121565EB6(Global_4267671[iVar0]);
				unk_0xF9FBC2F3F73D94C9();
			}
			if (fLocal_23 == fLocal_23)
			{
			}
			func_14(Global_14474, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_11(int iParam0)
{
	fLocal_25 = (Global_4267655[iParam0 /*3*/] - Local_20.f_0);
	fLocal_26 = (unk_0xD0FFB162F40A139C(((3.14159f / 180f) * Local_20.f_0)) * (Global_4267655[iParam0 /*3*/].f_1 - Local_20.f_1));
	fLocal_27 = unk_0xE8CFCB6B2165523B(fLocal_25, fLocal_26);
	if (fLocal_27 < 0f)
	{
		fLocal_27 = (fLocal_27 + 360f);
	}
	return fLocal_27;
}

float func_12(int iParam0)
{
	fLocal_29 = unk_0x71D93B57D07F9804(unk_0xB7A628320EFF8E47(Global_4267655[iParam0 /*3*/], Local_20));
	fLocal_30 = (Global_4267655[iParam0 /*3*/].f_2 - Local_20.f_2);
	return fLocal_29;
}

float func_13(int iParam0)
{
	fLocal_28 = unk_0x71D93B57D07F9804((((Global_4267655[iParam0 /*3*/] - Local_20.f_0) * (Global_4267655[iParam0 /*3*/] - Local_20.f_0)) + ((Global_4267655[iParam0 /*3*/].f_1 - Local_20.f_1) * (Global_4267655[iParam0 /*3*/].f_1 - Local_20.f_1))));
	return fLocal_28;
}

void func_14(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x29CD142125FE177B(uParam0, sParam1);
	unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xF9FBC2F3F73D94C9();
}

float func_15()
{
	fLocal_25 = (Global_16906 - Local_20.f_0);
	fLocal_26 = (unk_0xD0FFB162F40A139C(((3.14159f / 180f) * Local_20.f_0)) * (Global_16906.f_1 - Local_20.f_1));
	fLocal_27 = unk_0xE8CFCB6B2165523B(fLocal_25, fLocal_26);
	if (fLocal_27 < 0f)
	{
		fLocal_27 = (fLocal_27 + 360f);
	}
	return fLocal_27;
}

float func_16()
{
	fLocal_29 = unk_0x71D93B57D07F9804(unk_0xB7A628320EFF8E47(Global_16906, Local_20));
	fLocal_30 = (Global_16906.f_2 - Local_20.f_2);
	return fLocal_29;
}

float func_17()
{
	fLocal_28 = unk_0x71D93B57D07F9804((((Global_16906 - Local_20.f_0) * (Global_16906 - Local_20.f_0)) + ((Global_16906.f_1 - Local_20.f_1) * (Global_16906.f_1 - Local_20.f_1))));
	return fLocal_28;
}

int func_18()
{
	if (Global_70978 == 1)
	{
		return 1;
	}
	return 0;
}

