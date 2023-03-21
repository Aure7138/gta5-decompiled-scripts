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
	unk_0x8351F65655759E0C(800);
	func_19();
	while (true)
	{
		unk_0xB489C6849644BAD4();
		func_18();
		if (func_7() || uLocal_62)
		{
			func_3();
		}
		if (!iLocal_58)
		{
			if (!iLocal_57 && unk_0x5114FCEE2A997B95())
			{
				unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), Local_65, 1, 0, 0, 1);
				unk_0x5082D1A6D078DB20(unk_0x0031992CA618A445(), fLocal_63);
				unk_0x4A7134889007D5B3(Local_65, 2500f, 0);
				unk_0x31F42B23A853582E(0);
				iLocal_57 = 1;
			}
			else if (unk_0x391103C96DB7B6E4())
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
					unk_0x18D7C8000EDEAAB4(800);
					iLocal_58 = 1;
				}
			}
		}
	}
}

int func_1()
{
	if (!unk_0xC48310CE90FC9A5C(uLocal_64, "garage_decor_01"))
	{
		unk_0x3E66706B240DC339(uLocal_64, "garage_decor_01");
	}
	else
	{
		unk_0x5017A9E27608AEC0(uLocal_64);
		return 1;
	}
	return 0;
}

int func_2()
{
	uLocal_64 = unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445());
	if (unk_0x68BBDCBE8B7849EB(uLocal_64))
	{
		if (!iLocal_60)
		{
			unk_0x23B2455CBC51BE80(uLocal_64);
			iLocal_60 = 1;
		}
		else if (unk_0xC2902CEA00DDC12E(uLocal_64))
		{
			unk_0x29F8C56DC8DA4943(uLocal_64);
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
	unk_0xBEE2834559A8897A();
}

void func_5(int iParam0)
{
	func_6(&(uLocal_35[iParam0]));
	unk_0x79C80114C0FC1BE7((unk_0x35973152AB031A4F(0, 0) - 1));
}

void func_6(var uParam0)
{
	var uVar0;
	
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		if (!unk_0xA02DD6B5C8C02298(*uParam0))
		{
		}
	}
	if (unk_0xAA55DF0CB38F413B(*uParam0))
	{
		uVar0 = unk_0xC42CA935BE72299D(*uParam0);
		unk_0x237D39B9E9EE9ADC(&uVar0);
	}
}

int func_7()
{
	var uVar0;
	
	func_14(&uVar0);
	if (Global_1312830 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 1;
		}
	}
	if (func_13())
	{
		return 1;
	}
	if (Global_2457338)
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
	if (!unk_0xE096BC82D913B3DB())
	{
		return 1;
	}
	if (func_8() != 0)
	{
		if (unk_0x7832F791572D5809(func_8()) == 0)
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
	return Global_25222;
}

bool func_10()
{
	return Global_2445582.f_579;
}

int func_11(int iParam0)
{
	if (unk_0xB2481AAB46462A07(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	return Global_2455114;
}

bool func_13()
{
	return Global_2445582.f_574;
}

void func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xA97A6E008E9CF806(1))
	{
		iVar1 = unk_0x4A1C0E7DCF648DFE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x4AE700F97F1781DC(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -614201546:
					func_15(iVar0);
					break;
				
				case 1050640701:
					unk_0x4AE700F97F1781DC(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -959337465)
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
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		if (func_17(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xD33F4BC17EB987E5(Var0.f_1);
			if (unk_0x76B3C79DE564AFC6(uVar3))
			{
				if (unk_0x90219307C9D2728D(uVar3, 0))
				{
					uVar4 = unk_0xCFA31F1E461A6BB5(uVar3, 0);
					if (unk_0x095622A3608A0D06(uVar4, Var0.f_2) && unk_0x93BDC21B9F2C5E43())
					{
						if (func_16(uVar4, &bVar5))
						{
							unk_0xB54B438E5C15D5FB(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x28BB69BE14577487(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_16(var uParam0, var uParam1)
{
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		if (!unk_0xCC234795142FC2D2(uParam0))
		{
			if (unk_0x8D0F418585E0886B(uParam0))
			{
				if (!unk_0x22237535B3A68DF9(unk_0xE9559A12052415BE(uParam0)))
				{
					unk_0x1581691D748490F3(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xC9FBF92709010AC3(uParam0, 0))
		{
			if (unk_0x3B077EBCBD1ABF1F(uParam0))
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
		if (unk_0x80BA8E3CC61A8625(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x4B0365EB2D59E6FA(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434915.f_3[iVar0])
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
	unk_0x3C5BEC9CD4A5F148(32, 0, -1);
	func_21(0, -1, 0);
	unk_0x158D750851ECBBF8(&uLocal_35, 21);
	if (!func_20())
	{
		func_3();
	}
	unk_0x0BDEAF4CD9510F40(0);
	if (!unk_0xE6A94C903E0230BE("imp_dt1_02_cargarage_a"))
	{
		unk_0x50FCFE42878E03C1("imp_dt1_02_cargarage_a");
	}
}

int func_20()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 0;
		}
		if (unk_0xCA641F91944A37DE())
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
	
	iVar0 = unk_0xF5343104BDF6779F();
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
				if (!unk_0x27CA09C6DFAB1E79())
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
			else if (!unk_0x8B05DA934032590D())
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
		iVar0 = unk_0xF5343104BDF6779F();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
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
	else if (!unk_0x8B05DA934032590D())
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
	return Global_1312830;
}

