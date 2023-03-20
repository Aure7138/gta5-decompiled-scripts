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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
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
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	if (unk_0x9CEB376419A71A96(3))
	{
		func_19();
	}
	unk_0xECB8ED754419899D(1);
	func_18(0);
	func_17();
	unk_0x965F371FF939A0F4();
	while (!bVar1)
	{
		uVar0 = unk_0xAD2184B31D16EE35();
		if (unk_0x2F6869889D97DFED(unk_0x9AC5FB535EC9B35E(uVar0), "heist_ctrl_finale"))
		{
			bVar1 = true;
		}
	}
	unk_0x074026B0599A6B63(uVar0);
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
	uVar0 = unk_0xF222904387CE4946();
	if (unk_0xC1EDB61CE0A4B94E(uVar0))
	{
		if (!unk_0xC9A01F9792B3D486(iVar0))
		{
			unk_0xB7E6C6AE18F1EDA6(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0x1B6292EA51632C25(iVar0, 0))
		{
			if (bParam18)
			{
				func_15(iVar0);
			}
			if (unk_0x923F1BB1676259BF(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0xF4745590D18D14B8(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_12(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0x1B6292EA51632C25(iVar0, 0))
			{
				if (unk_0xD94C5D56986DC6E2(iVar0, joaat("taxi")))
				{
					if (unk_0x4321FC7479614822(iVar0, -1) != unk_0x06736567F820A39E() && unk_0x4321FC7479614822(iVar0, -1) != 0)
					{
						if (unk_0xA1F52EC3ECE1D42E(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0xF4745590D18D14B8(iVar0, 1), 1) < 20f)
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
					if (unk_0x1B6292EA51632C25(iVar0, 0))
					{
						iVar13 = unk_0x79469DA5833EACA8(iVar0);
						unk_0x7DF4D466F6A2515B(iVar0, &Var4, &Var7);
						if (unk_0xEF439FAE899F725F(iVar13))
						{
							Param11.f_0 = (Param11.f_0 + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
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
				if (unk_0x1B6292EA51632C25(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x6C4DEE9BDB093DC6(Param7, 5f, 0, 0, 0, 0, 0);
						unk_0xEF32567B3A5047F5(iVar0, uParam10);
						unk_0xA9AD2484206C8140(iVar0, Param7, 1, 0, 0, 1);
						unk_0xCE889B96E78E6DC5(iVar0);
						if (bParam17)
						{
							unk_0x68018E1A807B2CF1(iVar0, 0, 1, 0);
							unk_0x9F87B571F48552FC(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0xC9A01F9792B3D486(iVar0) || !unk_0x7292AF41BC6C644F(iVar0, 1))
						{
							unk_0xB7E6C6AE18F1EDA6(iVar0, 1, 1);
						}
						if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), iVar0, 0))
						{
							unk_0xA9AD2484206C8140(unk_0x06736567F820A39E(), unk_0xF4745590D18D14B8(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0x5D91DDE62ED9EC5E(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0x18FA64B82A64141F(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0xC1EDB61CE0A4B94E(iVar0))
				{
					if (unk_0xC9A01F9792B3D486(iVar0))
					{
						unk_0x768B37F1452D4834(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xC9A01F9792B3D486(iVar0))
			{
				unk_0xB7E6C6AE18F1EDA6(iVar0, 1, 0);
			}
			iVar14 = unk_0x4321FC7479614822(iVar0, -1);
			if (unk_0xC1EDB61CE0A4B94E(iVar14) && !unk_0xCFC04A38F256EE06(iVar14))
			{
				unk_0xA9AD2484206C8140(iVar14, unk_0xF4745590D18D14B8(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0x5E094905747079DF(unk_0x79469DA5833EACA8(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0x4321FC7479614822(iVar0, 0);
				if (unk_0xC1EDB61CE0A4B94E(iVar14) && !unk_0xCFC04A38F256EE06(iVar14))
				{
					unk_0xA9AD2484206C8140(iVar14, unk_0xF4745590D18D14B8(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0x4321FC7479614822(iVar0, 1);
				if (unk_0xC1EDB61CE0A4B94E(iVar14) && !unk_0xCFC04A38F256EE06(iVar14))
				{
					unk_0xA9AD2484206C8140(iVar14, unk_0xF4745590D18D14B8(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0x4321FC7479614822(iVar0, 2);
				if (unk_0xC1EDB61CE0A4B94E(iVar14) && !unk_0xCFC04A38F256EE06(iVar14))
				{
					unk_0xA9AD2484206C8140(iVar14, unk_0xF4745590D18D14B8(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0x5D91DDE62ED9EC5E(&iVar0);
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
	
	if (!unk_0xC1EDB61CE0A4B94E(uParam0) || !unk_0x1B6292EA51632C25(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_5(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x7DA173D4FD42F36B(Global_101186.f_5995[iVar9], 0))
		{
			if (unk_0x5410F8A769870CA4(&sVar1, iParam0))
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
	return Global_101186.f_1902.f_539.f_3549;
}

void func_7()
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (func_11(Global_101186.f_1902.f_539.f_3549) != unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			iVar0 = func_10(unk_0x06736567F820A39E());
			if (func_9(iVar0) && (!func_8(14) || Global_100138))
			{
				if (Global_101186.f_1902.f_539.f_3549 != iVar0 && func_9(Global_101186.f_1902.f_539.f_3549))
				{
					Global_101186.f_1902.f_539.f_3550 = Global_101186.f_1902.f_539.f_3549;
				}
				Global_101186.f_1902.f_539.f_3551 = iVar0;
				Global_101186.f_1902.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101186.f_1902.f_539.f_3549 != 145)
			{
				Global_101186.f_1902.f_539.f_3551 = Global_101186.f_1902.f_539.f_3549;
			}
			return;
		}
	}
	Global_101186.f_1902.f_539.f_3549 = 145;
}

bool func_8(int iParam0)
{
	return Global_35742 == iParam0;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		iVar1 = unk_0x79469DA5833EACA8(iParam0);
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
		return Global_101186.f_32651[iParam0 /*29*/];
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
	
	if (unk_0x1B6292EA51632C25(uParam0, 0))
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
		unk_0x9CFA23DC65790425(unk_0x79469DA5833EACA8(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0xF42E2289B33D5C38(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0xF42E2289B33D5C38(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0xF42E2289B33D5C38(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0xF42E2289B33D5C38(iParam0, Var34.f_0, Var34.f_1, 0f) };
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
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (unk_0x1B6292EA51632C25(iParam0, 0))
		{
			if (unk_0xA1B16F2399008FCA(iParam0) <= 200f)
			{
				unk_0xFC462627D90533FE(iParam0, 500f);
			}
			if (unk_0x4B2FB28E87E96C63(iParam0) <= 700f)
			{
				unk_0xFC462627D90533FE(iParam0, 900f);
			}
			if (unk_0x6267527E254067CA(iParam0) < 200)
			{
				unk_0xFC462627D90533FE(iParam0, 500f);
			}
		}
	}
}

void func_16()
{
	Global_100210 = 1;
}

void func_17()
{
	int iVar0;
	
	iVar0 = func_6();
	switch (iVar0)
	{
		case 0:
			unk_0x177901EA0FEB57D3("BS_2A_2B_INT", 12, 8);
			break;
		
		case 1:
			unk_0x177901EA0FEB57D3("BS_2A_2B_INT", 14, 8);
			break;
		
		case 2:
			unk_0xEA1FBC6E8BE11FF2("BS_2A_2B_INT", 8);
			break;
	}
	while (!unk_0xB86B3344E5D278C4("BS_2A_2B_INT"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_18(int iParam0)
{
	Global_68350.f_138 = iParam0;
}

void func_19()
{
	func_24(24, 1);
	func_20(1, 0);
	unk_0xF5DF8F3392CDD07B();
}

void func_20(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55782)
	{
		Global_55782 = iParam1;
	}
	if (bParam0)
	{
		if ((func_23(0) && Global_69767.f_1 == 1) && func_22(Global_69767))
		{
		}
		else
		{
			Global_55780 = 1;
		}
	}
	if (Global_101186.f_7851 || func_23(0))
	{
		iVar0 = func_21();
		iVar1 = Global_82395[iVar0 /*5*/];
		uVar2 = Global_69790.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_101186.f_7851)
			{
			}
			return;
		}
		if (unk_0x7DA173D4FD42F36B(Global_82395[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x7DA173D4FD42F36B(Global_82395[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xE27C8E42A97895CF(&(Global_82395[iVar0 /*5*/].f_1), 4);
		unk_0xE27C8E42A97895CF(&Global_69769, 1);
		Global_69785 = uVar2;
		Global_69786 = unk_0x1ADBAAC322D61F73();
	}
}

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x7DA173D4FD42F36B(Global_82395[iVar0 /*5*/].f_1, 2))
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
	if (!bParam0 && unk_0x98934607F8D0FB03(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_69769, 0);
}

void func_24(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_101186.f_7851.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_101186.f_7851.f_99.f_58[iParam0] = iParam1;
}

