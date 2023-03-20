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
	unk_0x44E747EFAA4C6724();
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
						unk_0xF48C88BD1F0007E8(Global_14374, "APP_FUNCTION");
						unk_0x876C5D0739031E15(1);
						unk_0xA52FC2467E672B55();
						unk_0x5AE11BC36633DE4E(0);
					}
					if (unk_0xC9D9444186B5A374() > 2000)
					{
						unk_0xF48C88BD1F0007E8(Global_14374, "APP_FUNCTION");
						unk_0x876C5D0739031E15(1);
						unk_0xA52FC2467E672B55();
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
	unk_0xCD27BF29FB9012E2(&Global_2264, 22);
	unk_0x883793591E631A3B();
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
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0x84795EA8F54230A1(-1, "Menu_Back", &Global_14382, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x58FC9C7DF8FE009B(iParam0, uParam1) || (iParam2 == 1 && unk_0x02AC213158CF29AE(iParam0, uParam1)))
	{
		if (unk_0x80AD636AD4184F2B())
		{
			if (unk_0x807035052B6EC8A1() == 0 || (unk_0x1B3FC52C6D531434() && unk_0x30E5EC01C9ACF9BC(2)))
			{
				return 0;
			}
		}
		if (unk_0xBB02FD0C8166DE6D() || unk_0xDAF2549B28FDF97C())
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
	unk_0xCD27BF29FB9012E2(&Global_2263, 17);
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xF48C88BD1F0007E8(uParam0, sParam1);
	unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x8FA72E132AAFA62F(sParam7))
	{
		func_8(sParam7);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam8))
	{
		func_8(iParam8);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam9))
	{
		func_8(iParam9);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam10))
	{
		func_8(iParam10);
	}
	if (!unk_0x8FA72E132AAFA62F(iParam11))
	{
		func_8(iParam11);
	}
	unk_0xA52FC2467E672B55();
}

void func_8(var uParam0)
{
	unk_0x44F4D219F8513945(uParam0);
	unk_0x113A6F657EE871A3();
}

void func_9()
{
	int iVar0;
	bool bVar1;
	
	if (func_17() == 0)
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			Local_19 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			fLocal_22 = unk_0xA9D6B28E708753B6(unk_0x507DA4994C3D8EBD());
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
				unk_0xF48C88BD1F0007E8(Global_14374, "SET_DATA_SLOT");
				unk_0x876C5D0739031E15(23);
				unk_0x876C5D0739031E15(0);
				if (unk_0x61D8FEAF64881CDA(Global_2264, 30))
				{
					unk_0x876C5D0739031E15(-99);
					unk_0x876C5D0739031E15(0);
				}
				else
				{
					unk_0x876C5D0739031E15(unk_0xF34EE736CF047844(fLocal_26));
					unk_0x876C5D0739031E15(unk_0xF34EE736CF047844(fLocal_27));
				}
				unk_0x876C5D0739031E15(100);
				if (unk_0x61D8FEAF64881CDA(Global_2264, 22))
				{
					unk_0x876C5D0739031E15(1);
				}
				else
				{
					unk_0x876C5D0739031E15(0);
				}
				if (unk_0x61D8FEAF64881CDA(Global_2264, 29))
				{
					unk_0x5D559A5DDC88A4EF(0);
				}
				else
				{
					unk_0x5D559A5DDC88A4EF(1);
				}
				if (unk_0x61D8FEAF64881CDA(Global_2265, 1))
				{
					unk_0xA8F7908868900538(fLocal_29);
				}
				unk_0xA52FC2467E672B55();
			}
			if (fLocal_22 == fLocal_22)
			{
			}
			func_13(Global_14374, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		Local_19 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
		fLocal_22 = unk_0xA9D6B28E708753B6(unk_0x507DA4994C3D8EBD());
		if (Global_2543747 > 4)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_2543747)
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
				unk_0xF48C88BD1F0007E8(Global_14374, "SET_DATA_SLOT");
				unk_0x876C5D0739031E15(23);
				unk_0x876C5D0739031E15(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (unk_0x61D8FEAF64881CDA(Global_2543551, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (unk_0x61D8FEAF64881CDA(Global_2543551, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (unk_0x61D8FEAF64881CDA(Global_2543551, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (unk_0x61D8FEAF64881CDA(Global_2543551, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					unk_0x876C5D0739031E15(-99);
					unk_0x876C5D0739031E15(0);
				}
				else
				{
					unk_0x876C5D0739031E15(unk_0xF34EE736CF047844(fLocal_26));
					unk_0x876C5D0739031E15(unk_0xF34EE736CF047844(fLocal_27));
				}
				unk_0x876C5D0739031E15(100);
				if (unk_0x61D8FEAF64881CDA(Global_2264, 22))
				{
					unk_0x5D559A5DDC88A4EF(1);
				}
				else
				{
					unk_0x5D559A5DDC88A4EF(1);
				}
				if (unk_0x61D8FEAF64881CDA(Global_2264, 29))
				{
					unk_0x5D559A5DDC88A4EF(0);
				}
				else
				{
					unk_0x5D559A5DDC88A4EF(1);
				}
				if (unk_0x61D8FEAF64881CDA(Global_2265, 1))
				{
					unk_0xA8F7908868900538(fLocal_29);
				}
				unk_0xA52FC2467E672B55();
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
	fLocal_24 = (Global_2543734[iParam0 /*3*/] - Local_19.f_0);
	fLocal_25 = (unk_0xD0FFB162F40A139C(((3.14159f / 180f) * Local_19.f_0)) * (Global_2543734[iParam0 /*3*/].f_1 - Local_19.f_1));
	fLocal_26 = unk_0x1E7EBED5BB2C078C(fLocal_24, fLocal_25);
	if (fLocal_26 < 0f)
	{
		fLocal_26 = (fLocal_26 + 360f);
	}
	return fLocal_26;
}

float func_11(int iParam0)
{
	fLocal_28 = unk_0x71D93B57D07F9804(unk_0xB7A628320EFF8E47(Global_2543734[iParam0 /*3*/], Local_19));
	fLocal_29 = (Global_2543734[iParam0 /*3*/].f_2 - Local_19.f_2);
	return fLocal_28;
}

float func_12(int iParam0)
{
	fLocal_27 = unk_0x71D93B57D07F9804((((Global_2543734[iParam0 /*3*/] - Local_19.f_0) * (Global_2543734[iParam0 /*3*/] - Local_19.f_0)) + ((Global_2543734[iParam0 /*3*/].f_1 - Local_19.f_1) * (Global_2543734[iParam0 /*3*/].f_1 - Local_19.f_1))));
	return fLocal_27;
}

void func_13(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF48C88BD1F0007E8(uParam0, sParam1);
	unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x876C5D0739031E15(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xA52FC2467E672B55();
}

float func_14()
{
	fLocal_24 = (Global_16798 - Local_19.f_0);
	fLocal_25 = (unk_0xD0FFB162F40A139C(((3.14159f / 180f) * Local_19.f_0)) * (Global_16798.f_1 - Local_19.f_1));
	fLocal_26 = unk_0x1E7EBED5BB2C078C(fLocal_24, fLocal_25);
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
	if (Global_68067 == 1)
	{
		return 1;
	}
	return 0;
}

