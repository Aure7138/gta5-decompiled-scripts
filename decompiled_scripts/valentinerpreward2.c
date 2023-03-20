#region Local Var
	char* sLocal_0 = NULL;
	var uLocal_1 = 0;
	bool bLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7[2] = { 0, 0 };
	var uLocal_10[2] = { 0, 0 };
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "BG_NG 1.28.04";
	unk_0xE5556978B2858C53(0);
	unk_0x1ED2FDBD02899869();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	iVar0 = unk_0x17103F66FBB44C3C() + 10000;
	while (unk_0x17103F66FBB44C3C() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_34())
		{
			func_33();
			if (bLocal_2)
			{
				unk_0xC98C9F8951F37C8D(0f, 0.23f);
				unk_0x8DEED365C52CC9BE(255, 255, 255, 255);
				func_32(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		if (unk_0x4B69FB3A5B09A1BA())
		{
			func_30();
			func_29();
			func_25();
			func_24();
			func_18();
			func_16();
			func_10();
			if (unk_0x708CE249B4F97BF8())
			{
				func_1();
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE60DEFFB2A853900();
}

void func_1()
{
	var uVar0;
	int iVar1;
	
	if (func_9(unk_0xCFC72E446B0B3AD7(), 1, 1))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0());
		if (!func_6(3784, -1, -1))
		{
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				uVar0 = func_4(1943, -1, 0);
				if (unk_0x94E72F17611BCD3C(uVar0, 10))
				{
					func_2(3784, 1, -1, 1);
				}
			}
			else if (iVar1 == joaat("mp_f_freemode_01"))
			{
				uVar0 = func_4(1943, -1, 0);
				if (unk_0x94E72F17611BCD3C(uVar0, 23))
				{
					func_2(3784, 1, -1, 1);
				}
			}
		}
		if (!func_6(3787, -1, -1))
		{
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				uVar0 = func_4(1943, -1, 0);
				if (unk_0x94E72F17611BCD3C(uVar0, 13))
				{
					func_2(3787, 1, -1, 1);
				}
			}
			else if (iVar1 == joaat("mp_f_freemode_01"))
			{
				uVar0 = func_4(1943, -1, 0);
				if (unk_0x94E72F17611BCD3C(uVar0, 26))
				{
					func_2(3787, 1, -1, 1);
				}
			}
		}
		if (!func_6(3792, -1, -1))
		{
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				uVar0 = func_4(1943, -1, 0);
				if (unk_0x94E72F17611BCD3C(uVar0, 18))
				{
					func_2(3792, 1, -1, 1);
				}
			}
			else if (iVar1 == joaat("mp_f_freemode_01"))
			{
				uVar0 = func_4(1943, -1, 0);
				if (unk_0x94E72F17611BCD3C(uVar0, 31))
				{
					func_2(3792, 1, -1, 1);
				}
			}
		}
	}
}

int func_2(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_3();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x7565CDA85EDEC9B0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE2BC0DB4A5812A4A((iParam0 - 0)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x7565CDA85EDEC9B0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE2BC0DB4A5812A4A((iParam0 - 192)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x7565CDA85EDEC9B0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE2BC0DB4A5812A4A((iParam0 - 513)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x7565CDA85EDEC9B0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE2BC0DB4A5812A4A((iParam0 - 705)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61264BB982D4A58A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE2BC0DB4A5812A4A((iParam0 - 3111)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61264BB982D4A58A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE2BC0DB4A5812A4A((iParam0 - 2919)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		iVar8 = unk_0x35D7A57BD397F35B((iParam0 - 4895), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4895) - unk_0xE2BC0DB4A5812A4A((iParam0 - 4895)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		iVar9 = unk_0x35D7A57BD397F35B((iParam0 - 5023), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 5023) - unk_0xE2BC0DB4A5812A4A((iParam0 - 5023)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_3()
{
	return Global_1312737;
}

int func_4(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454588[iParam0 /*6*/][func_5(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_3();
		if (iVar1 > -1)
		{
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

int func_6(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_3();
	}
	iVar1 = func_8(iParam0, iParam1);
	uVar2 = func_7(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x6132304E7C8C9267(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xE2BC0DB4A5812A4A((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xE2BC0DB4A5812A4A((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xE2BC0DB4A5812A4A((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xE2BC0DB4A5812A4A((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xE2BC0DB4A5812A4A((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xE2BC0DB4A5812A4A((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		iVar0 = ((iParam0 - 5023) - unk_0xE2BC0DB4A5812A4A((iParam0 - 5023)) * 64);
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		iVar0 = ((iParam0 - 4895) - unk_0xE2BC0DB4A5812A4A((iParam0 - 4895)) * 64);
	}
	return iVar0;
}

int func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_3();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x7565CDA85EDEC9B0((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x7565CDA85EDEC9B0((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x7565CDA85EDEC9B0((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x7565CDA85EDEC9B0((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x61264BB982D4A58A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x61264BB982D4A58A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		iVar0 = unk_0x35D7A57BD397F35B((iParam0 - 5023), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		iVar0 = unk_0x35D7A57BD397F35B((iParam0 - 4895), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	return iVar0;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xCB29E1C3D086FBAE(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x378E80A2B7D7C8DF(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422166.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_10()
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	var uVar23;
	
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 6);
	iVar0 = 0;
	while (iVar0 < unk_0x2FAEA355B623BA14(1))
	{
		iVar1 = unk_0x18F85CAA17F9F9A1(1, iVar0);
		if (iVar1 == 165)
		{
			if (unk_0x2E567DCD11FE0296(1, iVar0, &Var2, 21))
			{
				if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
				{
					if (((func_15() == 999 || func_15() == -1) && (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0()))) && Var2.f_14 == 1)
					{
						func_12();
						func_11(1);
						uVar23 = unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0());
						unk_0x71628E52718BD195(unk_0x9F92518438215DD0());
						unk_0xCD3EBB4EAE50293F(&uVar23);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_11(int iParam0)
{
	Global_2435076 = iParam0;
}

void func_12()
{
	if (func_14() == 0 || unk_0xC8557993A78C1B3E())
	{
		func_13(1);
		unk_0xE8D54444121BA43A(0);
		unk_0xE8D54444121BA43A(0);
	}
}

void func_13(int iParam0)
{
	if (Global_1312467.f_20 != iParam0)
	{
		Global_1312467.f_20 = iParam0;
	}
}

int func_14()
{
	return Global_1312467.f_20;
}

int func_15()
{
	return Global_24444;
}

void func_16()
{
	var uVar0[32];
	int iVar33;
	int iVar34;
	var uVar35;
	
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 5);
	if (!iLocal_16)
	{
		iLocal_17 = unk_0x6A8628B6E9F055B3();
		iLocal_16 = 1;
	}
	if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(iLocal_17, unk_0x6A8628B6E9F055B3())) < 1000)
	{
		return;
	}
	else
	{
		iLocal_17 = unk_0x6A8628B6E9F055B3();
	}
	iVar34 = unk_0xFC9FFBE3300B9CD9(unk_0x9F92518438215DD0(), &uVar0);
	if (iVar34 > 32)
	{
		iVar34 = 32;
	}
	if (Global_1582702.f_23 == -1 && !Global_1685057)
	{
		iVar33 = 0;
		while (iVar33 < iVar34)
		{
			if (unk_0x746960881FB19A89(uVar0[iVar33]) && unk_0xFC38B241541883D3(uVar0[iVar33], 0))
			{
				if (Global_1582702.f_23 == -1 && unk_0x6B08EC9A88700FBB(unk_0xC6FE92FD1DF5318E(uVar0[iVar33], &uVar35), "AM_MP_PROPERTY_EXT"))
				{
					if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), uVar0[iVar33], 1))
					{
						unk_0x71628E52718BD195(unk_0x9F92518438215DD0());
					}
					if (func_17(uVar0[iVar33], 1, 1, 0))
					{
						if (unk_0x88A3865085DFB7AD(uVar0[iVar33]))
						{
							unk_0x336AE92FD68DEF98(uVar0[iVar33], 0, 1);
							unk_0xCD3EBB4EAE50293F(&(uVar0[iVar33]));
						}
					}
				}
			}
			iVar33++;
		}
	}
}

int func_17(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x95A70C0B34435CA8(uParam0) + 1;
	if (!unk_0x0BA451447C3B1A8D(uParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x4A33023BC86AAA7F(uParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xB5BBEB12C77EE430(uParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0x9F92518438215DD0())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x3E0478C40AB5B38D(iVar2))
					{
						if (unk_0x2FCB242469087013(iVar2))
						{
							return 0;
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else
				{
					iVar3 = unk_0xB5BBEB12C77EE430(uParam0, (iVar0 - 1));
					if (!unk_0x3E0478C40AB5B38D(iVar3))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_18()
{
	var uVar0;
	
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 4);
	if (func_23())
	{
	}
	else
	{
		if (unk_0x11D7DF356299D4F0())
		{
			func_22(&uLocal_14);
			return;
		}
		if (!func_21(&uLocal_14))
		{
			func_20(&uLocal_14, 1, 0);
		}
		else if (func_19(&uLocal_14, 1000, 1))
		{
			if (func_9(unk_0xCFC72E446B0B3AD7(), 1, 1))
			{
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					uVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
					if (((((unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()) && !unk_0x3E5B62F75695AF89()) && !unk_0x4F0283431254A343()) && !unk_0x2D8FCFBC4E01FF7C()) && !unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 11)) && !Global_1676157)
					{
						if (unk_0xCD22EDB73BA42551(uVar0))
						{
							if (unk_0x88A3865085DFB7AD(uVar0))
							{
								unk_0x78D5F615D8984F4E(uVar0, 1);
								func_22(&uLocal_14);
							}
						}
						else
						{
							unk_0x78D5F615D8984F4E(uVar0, 1);
							func_22(&uLocal_14);
						}
					}
					else
					{
						func_22(&uLocal_14);
					}
				}
				else
				{
					func_22(&uLocal_14);
				}
			}
			else
			{
				func_22(&uLocal_14);
			}
		}
	}
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
	if (unk_0x4B69FB3A5B09A1BA() && !bParam2)
	{
		if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x17103F66FBB44C3C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_20(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4B69FB3A5B09A1BA() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6A8628B6E9F055B3();
			}
			else
			{
				*uParam0 = unk_0x4FEA29C1086C638D();
			}
		}
		else
		{
			*uParam0 = unk_0x17103F66FBB44C3C();
		}
		uParam0->f_1 = 1;
	}
}

bool func_21(var uParam0)
{
	return uParam0->f_1;
}

void func_22(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_23()
{
	return Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_173 != 0;
}

void func_24()
{
	int iVar0;
	
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 3);
	if (func_3() >= 0)
	{
		if (!iLocal_7[func_3()])
		{
			if (func_9(unk_0xCFC72E446B0B3AD7(), 1, 1))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (!unk_0x94E72F17611BCD3C(uLocal_10[func_3()], iVar0))
					{
						if (func_6((3594 + iVar0), -1, -1))
						{
							unk_0xEDB9A377CD8B7F03(&(uLocal_10[func_3()]), iVar0);
						}
					}
					iVar0++;
				}
				iLocal_7[func_3()] = 1;
			}
		}
		else
		{
			if (!unk_0x94E72F17611BCD3C(uLocal_10[func_3()], iLocal_13))
			{
				if (func_6((3594 + iLocal_13), -1, -1))
				{
					func_2((3594 + iLocal_13), 0, -1, 1);
				}
			}
			iLocal_13++;
			if (iLocal_13 >= 6)
			{
				iLocal_13 = 0;
			}
		}
	}
}

void func_25()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 2);
	bVar2 = false;
	if (func_27())
	{
		if (!iLocal_6)
		{
			Global_1694376 = 1;
			iLocal_6 = 1;
		}
	}
	else if (iLocal_6)
	{
		Global_1694376 = 0;
		iLocal_6 = 0;
	}
	if (!Global_1676157 && !unk_0x94E72F17611BCD3C(Global_1048576.f_4, 0))
	{
		if (func_9(unk_0xCFC72E446B0B3AD7(), 1, 1))
		{
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
				if (unk_0xB4289912C78431FE(iVar0, "Player_Vehicle") && unk_0xE70466D7F0596A0E(unk_0xCFC72E446B0B3AD7()) == unk_0x70BD1F58B07BE0C1(iVar0, "Player_Vehicle"))
				{
					if (unk_0xB4289912C78431FE(iVar0, "PV_Slot") && !unk_0xB4289912C78431FE(iVar0, "Not_Allow_As_Saved_Veh"))
					{
						iVar1 = unk_0x70BD1F58B07BE0C1(iVar0, "PV_Slot");
						if (iVar1 >= 0)
						{
							if (iVar1 == Global_2097152[func_26() /*8064*/].f_5756.f_2 && iVar0 == Global_2446533.f_273)
							{
								if (iVar1 == Global_2097152[func_26() /*8064*/].f_5756.f_2)
								{
									bVar2 = true;
									if (!func_21(&uLocal_4))
									{
										func_20(&uLocal_4, 1, 0);
									}
									else if (func_19(&uLocal_4, 500, 1))
									{
										func_22(&uLocal_4);
										if (!unk_0x94E72F17611BCD3C(Global_2097152[func_26() /*8064*/][Global_2097152[func_26() /*8064*/].f_5756.f_2 /*111*/].f_72, 0))
										{
											unk_0xEDB9A377CD8B7F03(&(Global_2097152[func_26() /*8064*/][Global_2097152[func_26() /*8064*/].f_5756.f_2 /*111*/].f_72), 0);
											func_22(&uLocal_4);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (!bVar2 && func_21(&uLocal_4))
	{
		func_22(&uLocal_4);
	}
}

int func_26()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_27()
{
	if (((func_28() >= 0 && unk_0x94E72F17611BCD3C(Global_2097152[func_26() /*8064*/][func_28() /*111*/].f_72, 11)) && unk_0x94E72F17611BCD3C(Global_2097152[func_26() /*8064*/][func_28() /*111*/].f_72, 0)) && !unk_0xFC38B241541883D3(Global_2446533.f_273, 0))
	{
		return 1;
	}
	return 0;
}

int func_28()
{
	return Global_2097152[func_26() /*8064*/].f_5756.f_2;
}

void func_29()
{
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 1);
	if (Global_1311716[0 /*4*/] > 0)
	{
		if (Global_2391035 > 0)
		{
			if (Global_2359718[0 /*26*/].f_1 == 14)
			{
				if (Global_1603097 == 0)
				{
					if (Global_1603097.f_2 == 2)
					{
						Global_2391035 = 0;
						Global_2391036 = 0;
					}
				}
			}
		}
	}
}

void func_30()
{
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 0);
	if (func_31() == 10)
	{
		if (!Global_68245)
		{
			Global_68245 = 1;
		}
	}
}

int func_31()
{
	return Global_1315856;
}

void func_32(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x94FC96A7EE0D90ED(sParam2);
	unk_0xBE450B0DD4D82DF2(sParam3);
	unk_0xC5A6B5A176BD3AE0(fParam0, fParam1, 0);
}

void func_33()
{
	if (!bLocal_2)
	{
		if (unk_0xC8557993A78C1B3E())
		{
			switch (iLocal_3)
			{
				case 0:
					if (unk_0x205C5BF7277043DF(2, 189))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0x205C5BF7277043DF(2, 190))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 2:
					if (unk_0x205C5BF7277043DF(2, 189))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 3:
					if (unk_0x205C5BF7277043DF(2, 190))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 4:
					if (unk_0x205C5BF7277043DF(2, 188))
					{
						bLocal_2 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0xC8557993A78C1B3E())
	{
		switch (iLocal_3)
		{
			case 0:
				if (unk_0x205C5BF7277043DF(2, 188))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0x205C5BF7277043DF(2, 190))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 2:
				if (unk_0x205C5BF7277043DF(2, 189))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 3:
				if (unk_0x205C5BF7277043DF(2, 190))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 4:
				if (unk_0x205C5BF7277043DF(2, 189))
				{
					bLocal_2 = false;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			}
	}
}

bool func_34()
{
	return unk_0x9501317225249120(-1762644250);
}

