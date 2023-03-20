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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	bool bVar1;
	
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	if (unk_0x7547D7CF93115D6D(3))
	{
		func_19();
	}
	unk_0xA81035D922E28F10(1);
	func_18(0);
	func_17();
	unk_0x94332074A0B773EB();
	while (!bVar1)
	{
		uVar0 = unk_0x455695D60DCAF0EC();
		if (unk_0xA858564DC37EED5E(unk_0x6AC6E47ABFB4EB1D(uVar0), "heist_ctrl_finale"))
		{
			bVar1 = true;
		}
	}
	unk_0x4275D92AAF73C757(uVar0);
	func_16();
	func_1(96.7f, -1288.1f, 28.1f, 104.5f, -1301f, 30f, 2f, 118.3f, -1309.7f, 29f, 120f, 1, 1, 1, 0, 0);
	func_19();
}

void func_1(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_2(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_2(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, var uParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	uVar0 = unk_0xF6EA6ED8FFB5B505();
	if (unk_0xFD68187442384158(uVar0))
	{
		if (!unk_0x73E2404DC70203CD(iVar0))
		{
			unk_0xBAE5DF507EEC53C8(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0xCA8794CE207FC6D5(iVar0, 0))
		{
			if (bParam18)
			{
				func_15(iVar0);
			}
			if (unk_0x9EC075F0DABF6298(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0xBF1B13057E5119A4(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_12(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xCA8794CE207FC6D5(iVar0, 0))
			{
				if (unk_0x40923C25A763E8E8(iVar0, joaat("taxi")))
				{
					if (unk_0xE634CB9EE7094537(iVar0, -1) != unk_0x507DA4994C3D8EBD() && unk_0xE634CB9EE7094537(iVar0, -1) != 0)
					{
						if (unk_0x8FE221761D524CFE(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0xBF1B13057E5119A4(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_4(iVar0, func_6(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_3(Param11))
				{
					if (unk_0xCA8794CE207FC6D5(iVar0, 0))
					{
						iVar13 = unk_0x26EA758C2A691D06(iVar0);
						unk_0xC12F158FCF93E148(iVar0, &Var4, &Var7);
						if (unk_0x6149FC3B1572A5B9(iVar13))
						{
							Param11.f_0 = (Param11.f_0 + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						if ((Var7.f_0 - Var4.f_0) > Param11.f_0)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0xCA8794CE207FC6D5(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x407F91A831576A66(Param7, 5f, 0, 0, 0, 0, 0);
						unk_0x248DC16118AE5035(iVar0, uParam10);
						unk_0xF85858E5CBF4D9F0(iVar0, Param7, 1, 0, 0, 1);
						unk_0xD90C30D269B19096(iVar0);
						if (bParam17)
						{
							unk_0xE0E038A4E5C7727B(iVar0, 0, 1);
							unk_0x6F4AC9499C730CF0(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x73E2404DC70203CD(iVar0) || !unk_0x51BC2FF711F8CF71(iVar0, 1))
						{
							unk_0xBAE5DF507EEC53C8(iVar0, 1, 1);
						}
						if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iVar0, 0))
						{
							unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), unk_0xBF1B13057E5119A4(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0x10EA498723DC5A09(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0xA9F8B7FE33AD0C93(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0xFD68187442384158(iVar0))
				{
					if (unk_0x73E2404DC70203CD(iVar0))
					{
						unk_0xB67623A401171555(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x73E2404DC70203CD(iVar0))
			{
				unk_0xBAE5DF507EEC53C8(iVar0, 1, 0);
			}
			iVar14 = unk_0xE634CB9EE7094537(iVar0, -1);
			if (unk_0xFD68187442384158(iVar14) && !unk_0x9F94F2CFDCA78C55(iVar14))
			{
				unk_0xF85858E5CBF4D9F0(iVar14, unk_0xBF1B13057E5119A4(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0x3D27599863364482(unk_0x26EA758C2A691D06(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0xE634CB9EE7094537(iVar0, 0);
				if (unk_0xFD68187442384158(iVar14) && !unk_0x9F94F2CFDCA78C55(iVar14))
				{
					unk_0xF85858E5CBF4D9F0(iVar14, unk_0xBF1B13057E5119A4(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0xE634CB9EE7094537(iVar0, 1);
				if (unk_0xFD68187442384158(iVar14) && !unk_0x9F94F2CFDCA78C55(iVar14))
				{
					unk_0xF85858E5CBF4D9F0(iVar14, unk_0xBF1B13057E5119A4(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0xE634CB9EE7094537(iVar0, 2);
				if (unk_0xFD68187442384158(iVar14) && !unk_0x9F94F2CFDCA78C55(iVar14))
				{
					unk_0xF85858E5CBF4D9F0(iVar14, unk_0xBF1B13057E5119A4(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0x10EA498723DC5A09(&iVar0);
		}
	}
}

int func_3(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_4(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xFD68187442384158(uParam0) || !unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_5(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x61D8FEAF64881CDA(Global_97173.f_5486[iVar9], 0))
		{
			if (unk_0xA5A6C7F14D300E6C(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_5(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_6()
{
	func_7();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_7()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_11(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_10(unk_0x507DA4994C3D8EBD());
			if (func_9(iVar0) && (!func_8(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_9(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_8(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)
{
	if (func_9(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_12(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (unk_0xCA8794CE207FC6D5(uParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_14(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0xB72AA272E2B242A6(unk_0x26EA758C2A691D06(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0x0CAFB9D38494283D(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0x0CAFB9D38494283D(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0x0CAFB9D38494283D(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0x0CAFB9D38494283D(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_13(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_13(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_13(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_13(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_13(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_13(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_13(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_13(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_13(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_13(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_13(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_13(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_13(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_13(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_13(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_13(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_13(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param3.f_0;
	fVar3 = Param3.f_1;
	fVar4 = Param6.f_0;
	fVar5 = Param6.f_1;
	fVar6 = Param9.f_0;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_14(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_15(int iParam0)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (unk_0xBA2FAB683F225FF0(iParam0) <= 200f)
			{
				unk_0x240BBFD908B5DA09(iParam0, 500f);
			}
			if (unk_0x6E8B0986A202BDDE(iParam0) <= 700f)
			{
				unk_0x240BBFD908B5DA09(iParam0, 900f);
			}
			if (unk_0x5D422B4764FA2ACA(iParam0) < 200)
			{
				unk_0x240BBFD908B5DA09(iParam0, 500f);
			}
		}
	}
}

void func_16()
{
	Global_96197 = 1;
}

void func_17()
{
	int iVar0;
	
	iVar0 = func_6();
	switch (iVar0)
	{
		case 0:
			unk_0xC25755924A02755B("BS_2A_2B_INT", 12, 8);
			break;
		
		case 1:
			unk_0xC25755924A02755B("BS_2A_2B_INT", 14, 8);
			break;
		
		case 2:
			unk_0xFF5665416E4C22D1("BS_2A_2B_INT", 8);
			break;
	}
	while (!unk_0x9ED959C675F03EA5("BS_2A_2B_INT"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_18(int iParam0)
{
	Global_66960.f_138 = iParam0;
}

void func_19()
{
	func_24(24, 1);
	func_20(1, 0);
	unk_0x883793591E631A3B();
}

void func_20(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_54574)
	{
		Global_54574 = iParam1;
	}
	if (bParam0)
	{
		if ((func_23(0) && Global_68313.f_1 == 1) && func_22(Global_68313))
		{
		}
		else
		{
			Global_54572 = 1;
		}
	}
	if (Global_97173.f_7311 || func_23(0))
	{
		iVar0 = func_21();
		iVar1 = Global_80941[iVar0 /*5*/];
		uVar2 = Global_68336.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_97173.f_7311)
			{
			}
			return;
		}
		if (unk_0x61D8FEAF64881CDA(Global_80941[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x61D8FEAF64881CDA(Global_80941[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x3DBE2A7AF9E71C82(&(Global_80941[iVar0 /*5*/].f_1), 4);
		unk_0x3DBE2A7AF9E71C82(&Global_68315, 1);
		Global_68331 = uVar2;
		Global_68332 = unk_0xF976C624234A4AA8();
	}
}

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x61D8FEAF64881CDA(Global_80941[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool func_23(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

void func_24(int iParam0, int iParam1)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return;
	}
	if (Global_97173.f_7311.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_97173.f_7311.f_99.f_58[iParam0] = iParam1;
}

