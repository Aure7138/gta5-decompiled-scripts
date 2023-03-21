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
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = 0;
	var uLocal_33 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	
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
	iLocal_28 = -1;
	bLocal_32 = true;
	if (unk_0x7832F791572D5809(joaat("exile_city_denial")) > 1)
	{
		Global_35778 = 0;
		unk_0xBEE2834559A8897A();
	}
	func_36(18);
	func_35();
	unk_0xC1B1E9A034A63A62(0);
	unk_0x5AE11BC36633DE4E(0);
	iVar0 = 2;
	iVar1 = 0;
	while (!iLocal_31)
	{
		iLocal_31 = 1;
		if (unk_0xB9B05E900D325C36(83))
		{
			Global_35778 = 0;
			if (!func_34(130))
			{
				func_33(18);
				func_32();
			}
			else if (func_34(131))
			{
				func_33(18);
				func_32();
			}
			switch (unk_0x6BD2A9ED76EC68DF())
			{
				case 16:
					func_33(18);
					func_32();
					break;
				
				case 2:
					func_32();
					break;
				
				case 1:
					func_24(1628462442);
					func_24(1791324372);
					func_24(-240877892);
					func_24(1806999335);
					func_24(2054503592);
					func_24(-2009081795);
					bLocal_29 = false;
					while (!unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
					{
						unk_0x4EDE34FBADD967A6(1000);
					}
					iLocal_31 = 0;
					break;
				}
		}
	}
	while (true)
	{
		if (iVar1 > 0)
		{
			iVar1 = (iVar1 - unk_0x83666F9FB8FEBD4B());
			unk_0xC1B1E9A034A63A62(0);
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
		}
		Var2 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0) };
		bLocal_29 = func_23(Var2, &bLocal_32);
		if (Global_71054 || Global_71054.f_1)
		{
			bLocal_29 = false;
		}
		bVar5 = false;
		bVar6 = false;
		if (func_34(131))
		{
			bVar5 = true;
		}
		if (!func_34(130))
		{
			bVar5 = true;
		}
		if (bVar5)
		{
			Global_35778 = 0;
			func_33(18);
			func_32();
		}
		if (func_21() == 1)
		{
			bVar6 = true;
		}
		Global_35778 = bLocal_29;
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (unk_0xF43A22E8C53B2D1E(unk_0x0031992CA618A445()) || unk_0x9FA0D3FBA715E011(unk_0x0031992CA618A445()))
			{
				if (unk_0xF6C6ED9F9C63AEC0(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)))
				{
					bLocal_29 = false;
				}
			}
		}
		if (bLocal_30 != bLocal_29)
		{
			if (!bLocal_29)
			{
				func_19();
			}
			if (bLocal_29 && !bVar6)
			{
				bVar7 = false;
				bVar8 = true;
				while (bVar8)
				{
					switch (func_17(&iLocal_28, 6, 12, 0, 0))
					{
						case 0:
							bVar8 = false;
							bVar7 = false;
							break;
						
						case 1:
							bVar8 = false;
							bVar7 = true;
							break;
						
						default:
							unk_0x4EDE34FBADD967A6(0);
							break;
					}
					if (Global_70785)
					{
						unk_0xBEE2834559A8897A();
					}
				}
				if (bVar7)
				{
					unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445());
					if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
					{
						uVar9 = unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445());
						while (unk_0x68BBDCBE8B7849EB(uVar9))
						{
							unk_0x4EDE34FBADD967A6(5000);
							unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445());
							if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
							{
								uVar9 = unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445());
							}
						}
					}
					if (func_15(unk_0x0031992CA618A445()) == 0)
					{
						if (!unk_0x2A3398C6222EB190(Global_104439.f_7549.f_923, 0))
						{
							func_10(1628462442, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
						else if (!unk_0x2A3398C6222EB190(Global_104439.f_7549.f_923, 1))
						{
							func_10(1791324372, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
						else if (!unk_0x2A3398C6222EB190(Global_104439.f_7549.f_923, 2))
						{
							func_10(-240877892, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
					}
					else if (func_15(unk_0x0031992CA618A445()) == 2)
					{
						if (!unk_0x2A3398C6222EB190(Global_104439.f_7549.f_923, 3))
						{
							func_10(1806999335, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
						else if (!unk_0x2A3398C6222EB190(Global_104439.f_7549.f_923, 4))
						{
							func_10(2054503592, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
						else if (!unk_0x2A3398C6222EB190(Global_104439.f_7549.f_923, 4))
						{
							func_10(-2009081795, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
					}
					if (iVar1 == 0 && !bVar6)
					{
						if ((!func_9(0) && !func_9(4)) && !func_9(3))
						{
							if (unk_0xB9EE37DD06252A1C(11) < 256)
							{
								if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
								{
									if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
									{
										unk_0xA5C2C03A805E0938(11, unk_0x0031992CA618A445(), iVar0, 0f, &uLocal_33, 0);
									}
								}
							}
							if (unk_0xF9FC07CC13402AEF())
							{
								if (bLocal_32)
								{
									func_8("CITDENAL", -1);
								}
								else
								{
									func_8("CITDENAL_R", -1);
								}
								iVar1 = 120000;
							}
						}
					}
				}
				else
				{
					bLocal_29 = false;
				}
			}
			else
			{
				func_19();
			}
		}
		if (bLocal_29)
		{
			if (!unk_0x639471C2A013D8D7(uLocal_33))
			{
				if (unk_0xB9EE37DD06252A1C(11) < 256)
				{
					if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
					{
						if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
						{
							unk_0xA5C2C03A805E0938(11, unk_0x0031992CA618A445(), iVar0, 0f, &uLocal_33, 0);
						}
					}
				}
			}
		}
		if (bLocal_29 && unk_0xC9D9444186B5A374() > 60000)
		{
			unk_0x5AE11BC36633DE4E(0);
			iVar0 = (iVar0 + unk_0x3AF262D7332EEDF5(1, 2));
			if (iVar0 < 8)
			{
				if (unk_0x639471C2A013D8D7(uLocal_33))
				{
					unk_0x54613BB5229443F8(uLocal_33, 11, iVar0);
				}
				else if (unk_0xB9EE37DD06252A1C(11) < 256)
				{
					if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
					{
						if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
						{
							unk_0xA5C2C03A805E0938(11, unk_0x0031992CA618A445(), iVar0, 0f, &uLocal_33, 0);
						}
					}
				}
			}
			else
			{
				iVar0 = 8;
			}
		}
		bLocal_30 = bLocal_29;
		if (bVar6)
		{
			Global_35778 = 0;
			if (bLocal_29)
			{
				func_19();
			}
			func_4();
			while (func_21() == 1)
			{
				unk_0x4EDE34FBADD967A6(2000);
			}
			func_35();
			bVar6 = false;
		}
		if (bLocal_29)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		else
		{
			unk_0x4EDE34FBADD967A6(10000);
		}
		if (func_1(12) && !func_9(12))
		{
			if (bLocal_29)
			{
				func_19();
			}
			while (func_9(0) || func_9(4))
			{
				unk_0x4EDE34FBADD967A6(8000);
			}
		}
	}
	func_4();
}

int func_1(int iParam0)
{
	if (Global_35813 == 15)
	{
		return 0;
	}
	if (func_2(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_2(int iParam0)
{
	return func_3(iParam0, Global_35813);
}

int func_3(int iParam0, int iParam1)
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

void func_4()
{
	func_7(0, 1);
	func_7(2, 1);
	func_7(1, 1);
	func_5(0, 1);
	func_5(1, 1);
	func_5(3, 1);
	func_5(2, 1);
}

void func_5(int iParam0, bool bParam1)
{
	if (iParam0 == 7)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_7090.f_17[iParam0]), 0);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_104439.f_7090.f_17[iParam0]), 0);
	}
	unk_0x130CD7CBDC82A949(Global_88046[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_88046[iParam0 /*9*/].f_7, 0, 0);
}

void func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0x2A3398C6222EB190(Global_25533[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x2A3398C6222EB190(Global_25533[iVar0 /*23*/].f_11, 0))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_25533[iVar0 /*23*/].f_11), 18);
		if (Global_25530 == 1)
		{
			Global_25531 = 1;
		}
		Global_25530 = 1;
	}
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_25533[iVar0 /*23*/].f_11), 0);
		unk_0xCD7E92DE2BFA0B0D(&(Global_25533[iVar0 /*23*/].f_11), 15);
		unk_0xCD7E92DE2BFA0B0D(&(Global_25533[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_25533[iVar0 /*23*/].f_11), 0);
		unk_0xD804ACF2A7171150(&(Global_25533[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x2A3398C6222EB190(Global_25533[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xA761A0B6072010C8(Global_25533[iVar0 /*23*/].f_19))
		{
			unk_0xDECD64DB818CE695(1);
			unk_0x0C4BDC77192798AE(&(Global_25533[iVar0 /*23*/].f_19));
			unk_0xDECD64DB818CE695(0);
		}
	}
}

void func_7(int iParam0, bool bParam1)
{
	if (iParam0 == 5)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_7090.f_11[iParam0]), 0);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_104439.f_7090.f_11[iParam0]), 0);
	}
	unk_0x483D53CA785890D9(Global_88110[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_88110[iParam0 /*9*/].f_7, 0, 0);
}

void func_8(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 1, iParam1);
}

bool func_9(int iParam0)
{
	return Global_35813 == iParam0;
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_14(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0x2A3398C6222EB190(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_104439.f_7549.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_104439.f_7549.f_911 == Var0.f_0)
		{
			Global_104439.f_7549.f_911 = -1;
		}
		Var0.f_3 = func_13(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x31CD6E9F83C10233() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0xD804ACF2A7171150(&(Var0.f_1), 1);
		unk_0xD804ACF2A7171150(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Var0.f_1), 10);
		}
		Global_104439.f_7549[Global_104439.f_7549.f_136 /*15*/] = { Var0 };
		Global_104439.f_7549.f_136++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (unk_0x2A3398C6222EB190(iParam2, iVar15))
			{
				func_11(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

void func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_12(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_104439.f_7549.f_136)
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_7549[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_104439.f_7549[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_104439.f_7549[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_104439.f_7549.f_764)
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_7549.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_104439.f_7549.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_104439.f_7549.f_919[iParam0] = iVar1;
}

bool func_12(int iParam0)
{
	return iParam0 < 3;
}

int func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

bool func_14(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

int func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)
{
	if (func_12(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90385.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_1(0))
		{
			return 0;
		}
		Global_35777++;
		*iParam0 = Global_35777;
		unk_0x94EB0EFC2C10DAF6(unk_0xED1168B8D2D313FA(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x7EF668988342648C(8);
		}
		Global_35813 = iParam2;
		Global_35775 = *iParam0;
		Global_35776 = iParam4;
		Global_35774 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35774 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35774)
			{
				if (Global_35780[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35775 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_2(iParam2))
		{
			return 0;
		}
		if (Global_35774 == 8)
		{
			return 0;
		}
		Global_35777++;
		*iParam0 = Global_35777;
		Global_35780[Global_35774 /*4*/] = Global_35777;
		Global_35780[Global_35774 /*4*/].f_1 = iParam1;
		Global_35780[Global_35774 /*4*/].f_2 = iParam2;
		Global_35780[Global_35774 /*4*/].f_3 = 0;
		Global_35774++;
		if (iParam4 != 0)
		{
			func_18(iParam0, iParam4);
		}
	}
	return 2;
}

void func_18(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35774 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35774)
	{
		if (Global_35780[iVar0 /*4*/] == *uParam0)
		{
			Global_35780[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

void func_19()
{
	if (iLocal_28 != -1)
	{
		func_20(&iLocal_28);
	}
	func_24(1628462442);
	func_24(1791324372);
	func_24(-240877892);
	func_24(1806999335);
	func_24(2054503592);
	func_24(-2009081795);
	bLocal_29 = false;
	bLocal_30 = false;
	Global_35778 = 0;
	unk_0x2A73038D24F9CB75(uLocal_33);
}

void func_20(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35775)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35774 = 0;
	Global_35776 = 0;
	Global_35813 = 15;
	Global_55851 = 0;
	Global_55852 = 0;
}

int func_21()
{
	func_22();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_22()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_16(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_15(unk_0x0031992CA618A445());
			if (func_12(iVar0) && (!func_9(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_12(Global_104439.f_2244.f_539.f_4301))
				{
					Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
				}
				Global_104439.f_2244.f_539.f_4303 = iVar0;
				Global_104439.f_2244.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104439.f_2244.f_539.f_4301 != 145)
			{
				Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
			}
			return;
		}
	}
	Global_104439.f_2244.f_539.f_4301 = 145;
}

int func_23(struct<2> Param0, var uParam2, int iParam3)
{
	if (!(unk_0xF9FC07CC13402AEF() || unk_0x4413A34F0AAF1146()))
	{
		return 0;
	}
	if (Param0.f_1 < 400f)
	{
		if (Param0.f_0 < 1400f)
		{
			if (Param0.f_0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					*iParam3 = 1;
					return 1;
				}
			}
		}
	}
	if (Param0.f_0 < 1536.35f)
	{
		if (Param0.f_1 > 1016.18f)
		{
			if (Param0.f_1 < 1213.53f)
			{
				if (Param0.f_0 > 1278.08f)
				{
					*iParam3 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_104439.f_7549.f_136)
	{
		if (Global_104439.f_7549[iVar0 /*15*/] == iParam0)
		{
			if (Global_36360 != iVar0)
			{
				func_31(iVar0);
				func_28(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104439.f_7549.f_198)
	{
		if (Global_104439.f_7549.f_137[iVar0 /*15*/] == iParam0)
		{
			func_28(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104439.f_7549.f_650)
	{
		if (Global_104439.f_7549.f_199[iVar0 /*15*/] == iParam0)
		{
			func_27(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104439.f_7549.f_764)
	{
		if (Global_104439.f_7549.f_651[iVar0 /*14*/] == iParam0)
		{
			func_26(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104439.f_7549.f_866)
	{
		if (Global_104439.f_7549.f_765[iVar0 /*10*/] == iParam0)
		{
			func_25(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_25(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_104439.f_7549.f_866)
	{
		return;
	}
	if (Global_104439.f_7549.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_104439.f_7549.f_866 - 2))
		{
			Global_104439.f_7549.f_765[iVar0 /*10*/] = { Global_104439.f_7549.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_104439.f_7549.f_866 > 0)
	{
		Global_104439.f_7549.f_765[(Global_104439.f_7549.f_866 - 1) /*10*/] = { Var1 };
		Global_104439.f_7549.f_866 = (Global_104439.f_7549.f_866 - 1);
	}
}

void func_26(int iParam0)
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_104439.f_7549.f_764)
	{
		return;
	}
	if (Global_104439.f_7549.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_104439.f_7549.f_764 - 2))
		{
			Global_104439.f_7549.f_651[iVar0 /*14*/] = { Global_104439.f_7549.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_104439.f_7549.f_764 > 0)
	{
		Global_104439.f_7549.f_651[(Global_104439.f_7549.f_764 - 1) /*14*/] = { Var1 };
		Global_104439.f_7549.f_764 = (Global_104439.f_7549.f_764 - 1);
	}
	func_11(0);
	func_11(1);
	func_11(2);
}

void func_27(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_104439.f_7549.f_650)
	{
		if (Global_104439.f_7549.f_199[iVar15 /*15*/] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_104439.f_7549.f_650 - 2))
			{
				Global_104439.f_7549.f_199[iVar16 /*15*/] = { Global_104439.f_7549.f_199[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_104439.f_7549.f_199[(Global_104439.f_7549.f_650 - 1) /*15*/] = { Var0 };
			Global_104439.f_7549.f_650 = (Global_104439.f_7549.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_28(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_104439.f_7549.f_198)
	{
		if (Global_104439.f_7549.f_137[iVar15 /*15*/] == iParam0)
		{
			func_29(Global_104439.f_7549.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_104439.f_7549.f_198 - 2))
			{
				Global_104439.f_7549.f_137[iVar16 /*15*/] = { Global_104439.f_7549.f_137[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_104439.f_7549.f_137[(Global_104439.f_7549.f_198 - 1) /*15*/] = { Var0 };
			Global_104439.f_7549.f_198 = (Global_104439.f_7549.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_29(int iParam0)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (Global_104439.f_27911[iParam0 /*29*/].f_19[Global_14443] == 1)
		{
			Global_104439.f_27911[iParam0 /*29*/].f_19[Global_14443] = 0;
			if (Global_104439.f_27911[iParam0 /*29*/].f_24[Global_14443] == 0)
			{
				iVar0 = Global_14443;
				func_30(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_30(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_104439.f_27911[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_104439.f_27911[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_31(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_104439.f_7549.f_136)
	{
		return;
	}
	uVar1 = Global_104439.f_7549[iParam0 /*15*/].f_2;
	if (Global_104439.f_7549.f_136 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_104439.f_7549.f_136 - 2))
		{
			Global_104439.f_7549[iVar0 /*15*/] = { Global_104439.f_7549[iVar0 + 1 /*15*/] };
			iVar0++;
		}
	}
	if (Global_104439.f_7549.f_136 > 0)
	{
		Global_104439.f_7549[(Global_104439.f_7549.f_136 - 1) /*15*/] = { Var2 };
		Global_104439.f_7549.f_136 = (Global_104439.f_7549.f_136 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2A3398C6222EB190(uVar1, iVar0))
		{
			func_11(iVar0);
		}
		iVar0++;
	}
}

void func_32()
{
	func_19();
	func_4();
	unk_0xBEE2834559A8897A();
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x2A3398C6222EB190(Global_104439.f_8946.f_99.f_219[iVar0], iVar1))
	{
		unk_0xD804ACF2A7171150(&(Global_104439.f_8946.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104439.f_8946.f_99.f_58[iParam0];
}

void func_35()
{
	func_7(0, 0);
	func_7(2, 0);
	func_7(1, 0);
	func_5(0, 0);
	func_5(1, 0);
	func_5(3, 0);
	func_5(2, 0);
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x2A3398C6222EB190(Global_104439.f_8946.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_8946.f_99.f_219[iVar0]), iVar1);
	return 1;
}

