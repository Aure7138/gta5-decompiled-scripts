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
	unk_0x7A41D32A383895D8(800);
	func_19();
	while (true)
	{
		unk_0x6E14AB8F3CA0CAC5();
		func_18();
		if (func_7() || uLocal_62)
		{
			func_3();
		}
		if (!iLocal_58)
		{
			if (!iLocal_57 && unk_0x17FAADF9916EF741())
			{
				unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Local_65, 1, 0, 0, 1);
				unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), fLocal_63);
				unk_0x1732A8A5D2D39430(Local_65, 2500f, 0);
				unk_0xF3F01A78937DC905(0);
				iLocal_57 = 1;
			}
			else if (unk_0x719413B40BB63D86())
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
					unk_0x829FA4611BD56B44(800);
					iLocal_58 = 1;
				}
			}
		}
	}
}

int func_1()
{
	if (!unk_0x441443E0B2239D89(uLocal_64, "garage_decor_01"))
	{
		unk_0x2888D2934A5F0F7D(uLocal_64, "garage_decor_01");
	}
	else
	{
		unk_0x2C200845CC871354(uLocal_64);
		return 1;
	}
	return 0;
}

int func_2()
{
	uLocal_64 = unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA());
	if (unk_0xBF697FA7422C0621(uLocal_64))
	{
		if (!iLocal_60)
		{
			unk_0x184188AF06D2A771(uLocal_64);
			iLocal_60 = 1;
		}
		else if (unk_0x18487DB48DC3A046(uLocal_64))
		{
			unk_0xB165D6ED2E977354(uLocal_64);
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
	unk_0x95E4B6F3ED223F5A();
}

void func_5(int iParam0)
{
	func_6(&(uLocal_35[iParam0]));
	unk_0xA6E7E0EC9E48D44C((unk_0x146F82F73FA40AB0(0, 0) - 1));
}

void func_6(var uParam0)
{
	var uVar0;
	
	if (unk_0x7FFE36DB9042AF23(*uParam0))
	{
		if (!unk_0x89B5CBCE9D131B32(*uParam0))
		{
		}
	}
	if (unk_0x8EA6CABD14F1B89A(*uParam0))
	{
		uVar0 = unk_0xD14280F674B4DBF4(*uParam0);
		unk_0xC46CA8E9D2A3F4DD(&uVar0);
	}
}

int func_7()
{
	var uVar0;
	
	func_14(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_13())
	{
		return 1;
	}
	if (Global_2459932)
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
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_8() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_8()) == 0)
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
	return Global_25277;
}

bool func_10()
{
	return Global_2447942.f_586;
}

int func_11(int iParam0)
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	return Global_2457699;
}

bool func_13()
{
	return Global_2447942.f_581;
}

void func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x414AA1932D1C88E2(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1113296425:
					func_15(iVar0);
					break;
				
				case -319074860:
					unk_0x414AA1932D1C88E2(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -1987561915)
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
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &Var0, 3))
	{
		if (func_17(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xA95CF30C72EB526E(Var0.f_1);
			if (unk_0x724D816EA203A79E(uVar3))
			{
				if (unk_0x5237AF95232D78C5(uVar3, 0))
				{
					uVar4 = unk_0x9FE9D386222EEE47(uVar3, 0);
					if (unk_0x403C891106DCABAF(uVar4, Var0.f_2) && unk_0x32405B7614E36453())
					{
						if (func_16(uVar4, &bVar5))
						{
							unk_0xD5DC0505375F4D00(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x1E7A09C1710FB071(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_16(var uParam0, var uParam1)
{
	if (unk_0x724D816EA203A79E(uParam0))
	{
		if (!unk_0x5CAE759AE8219D20(uParam0))
		{
			if (unk_0x63B5FF8D34CBC98E(uParam0))
			{
				if (!unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(uParam0)))
				{
					unk_0x77815D3407C6700D(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xB248FAA35ED47DB9(uParam0, 0))
		{
			if (unk_0x4DF785C4DF542CD0(uParam0))
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
		if (unk_0x96B1061E8F3CBC9A(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436641.f_3[iVar0])
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
	unk_0xBF463BC3D6FFDE31(32, 0, -1);
	func_21(0, -1, 0);
	unk_0x76AE988734CA7760(&uLocal_35, 21);
	if (!func_20())
	{
		func_3();
	}
	unk_0x6C87EFD58B261C6F(0);
	if (!unk_0xE7CC712DAAEA69F3("imp_dt1_02_cargarage_a"))
	{
		unk_0x5183B5D4E829B7E4("imp_dt1_02_cargarage_a");
	}
}

int func_20()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 0;
		}
		if (unk_0xB3E1B1F67FB95F04())
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
	
	iVar0 = unk_0x4796DAD7A8894E2F();
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
				if (!unk_0x7AF0088ABFA713B6())
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
			else if (!unk_0xF5F5C6DD66B0FB2A())
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
		iVar0 = unk_0x4796DAD7A8894E2F();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
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
	else if (!unk_0xF5F5C6DD66B0FB2A())
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
	return Global_1312831;
}

