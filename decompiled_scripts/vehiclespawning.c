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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	struct<3> Local_65 = { 0, 0, 0 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	fLocal_63 = 277.7314f;
	Local_65 = { -196.045f, -580.13f, 135.0004f };
	unk_0x9662BE461F9FDF9E(800);
	func_19();
	while (true)
	{
		unk_0xA285B4C287E26AFE();
		func_18();
		if (func_7() || uLocal_62)
		{
			func_3();
		}
		if (!iLocal_58)
		{
			if (!iLocal_57 && unk_0x71364F510A1CB69F())
			{
				unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), Local_65, 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), fLocal_63);
				unk_0x543A213BF1AB6832(Local_65, 2500f, 0);
				unk_0xD87B76260C547F31(0);
				iLocal_57 = 1;
			}
			else if (unk_0xE6F861B0A4D50CE0())
			{
				if (!bLocal_61)
				{
					bLocal_61 = func_2();
				}
				else if (!bLocal_59)
				{
					bLocal_59 = func_1();
				}
				else
				{
					unk_0x70C1F5AA59767FE6(800);
					iLocal_58 = 1;
				}
			}
		}
	}
}

int func_1()
{
	if (!unk_0xE0A4C16EE6C60363(uLocal_64, "garage_decor_01"))
	{
		unk_0x6679FC2A24AEDF2D(uLocal_64, "garage_decor_01");
	}
	else
	{
		unk_0xEF6CE4AF8D633F85(uLocal_64);
		return 1;
	}
	return 0;
}

int func_2()
{
	uLocal_64 = unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715());
	if (unk_0x893915B076B1DDF7(uLocal_64))
	{
		if (!iLocal_60)
		{
			unk_0x1BBA2DDBEBA5EC7A(uLocal_64);
			iLocal_60 = 1;
		}
		else if (unk_0x2A8A410BC14B59BC(uLocal_64))
		{
			unk_0xAFDE4F43F150FE9E(uLocal_64);
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_56)
	{
		func_5(iVar0);
		iVar0++;
	}
	func_4();
}

void func_4()
{
	unk_0x8F1A9FE6D91AAFEB();
}

void func_5(int iParam0)
{
	func_6(&(uLocal_35[iParam0]));
	unk_0xA721D9ED3827732A((unk_0xA373CB83DA86BA00(0, 0) - 1));
}

void func_6(var uParam0)
{
	var uVar0;
	
	if (unk_0x83A1DA4E6C55E952(*uParam0))
	{
		if (!unk_0xABF0452BE64AD290(*uParam0))
		{
		}
	}
	if (unk_0xAABBF7FA3E338B30(*uParam0))
	{
		uVar0 = unk_0x1C3E3FC5D339FC8C(*uParam0);
		unk_0x901EB5F80E22EEBF(&uVar0);
	}
}

int func_7()
{
	var uVar0;
	
	func_14(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_13())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_12())
	{
		return 1;
	}
	if (func_11(157))
	{
		if (!func_10())
		{
			return 1;
		}
	}
	if (func_11(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_8() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_8()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_8()
{
	switch (func_9())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_9()
{
	return Global_25459;
}

bool func_10()
{
	return Global_2448386.f_587;
}

int func_11(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	return Global_2458191;
}

bool func_13()
{
	return Global_2448386.f_582;
}

void func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D7B2A77420FF19E(1))
	{
		iVar1 = unk_0x5712B9353A8F6573(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x8866A4E42CDA3EF1(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -563286670:
					func_15(iVar0);
					break;
				
				case 566035618:
					unk_0x8866A4E42CDA3EF1(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -1989728150)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_15(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &Var0, 3))
	{
		if (func_17(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xEE978C39384D834F(Var0.f_1);
			if (unk_0xDC5D81351D6A4DDB(uVar3))
			{
				if (unk_0x5D7DFE2058701942(uVar3, 0))
				{
					uVar4 = unk_0xCAEB6CE71A2C7212(uVar3, 0);
					if (unk_0xEB1A41F6F719807C(uVar4, Var0.f_2) && unk_0xB592B7A61F21E7A5())
					{
						if (func_16(uVar4, &bVar5))
						{
							unk_0x3D2495030621765B(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x792676988A48387F(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_16(var uParam0, var uParam1)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0))
	{
		if (!unk_0x4943BEEC19289B8E(uParam0))
		{
			if (unk_0xCC01DCC72D8B9E39(uParam0))
			{
				if (!unk_0x289FBFAD3E416C48(unk_0x8F474E419F56E48D(uParam0)))
				{
					unk_0x1F7948851FB36E88(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x82384F63D814C864(uParam0, 0))
		{
			if (unk_0xB540EEBB14C48518(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC77FA683E9BB485B(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x58E3CCF930D23BD5(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437022.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_18()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_19()
{
	unk_0x1B0D16DC60698F88(32, 0, -1);
	func_21(0, -1, 0);
	unk_0xF82A3961787FA0A4(&uLocal_35, 21);
	if (!func_20())
	{
		func_3();
	}
	unk_0x2F3193E06C2EFF44(0);
	if (!unk_0x471855870C045BD0("imp_dt1_02_cargarage_a"))
	{
		unk_0x1639295C71657BCF("imp_dt1_02_cargarage_a");
	}
}

int func_20()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 0;
		}
		if (unk_0x9657A511FBAA9216())
		{
			return 1;
		}
		if (func_13())
		{
			return 0;
		}
		if (func_11(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_21(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBF19BA6420EC428C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
		if (!func_22())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C9BACA8D249CB13())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_13())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_11(155))
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xB3ADBAEA60664F46())
			{
				if (!bParam2)
				{
					func_4();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xBF19BA6420EC428C();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xB3ADBAEA60664F46())
	{
		if (!bParam2)
		{
			func_4();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_22()
{
	return Global_1312834;
}

