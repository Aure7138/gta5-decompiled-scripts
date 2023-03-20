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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<3> Local_54[32];
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_19 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0x4B69FB3A5B09A1BA())
	{
		func_36(ScriptParam_0);
	}
	else
	{
		func_33();
	}
	iLocal_49 = unk_0x17103F66FBB44C3C();
	while (true)
	{
		func_32();
		if ((func_22() || unk_0x4F0283431254A343()) || (func_21(unk_0xCFC72E446B0B3AD7()) || func_20(unk_0xCFC72E446B0B3AD7())))
		{
			func_33();
		}
		if (unk_0x4B69FB3A5B09A1BA())
		{
			func_2();
			func_1();
			iLocal_50++;
			if (iLocal_50 >= unk_0x0C20B275AC51DD95())
			{
				iLocal_50 = 0;
			}
		}
		else
		{
			func_33();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x8516D2494EB4AD1B();
	iVar0 = 0;
	while (iVar0 < unk_0x0C20B275AC51DD95())
	{
		if ((iLocal_50 % iVar0) == 0)
		{
			if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar0)))
			{
				iVar2 = unk_0x4E6043D225B9C75F(unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iVar0)));
				if (!unk_0x0BA451447C3B1A8D(iVar2))
				{
					if (Local_54[iVar0 /*3*/].f_2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), unk_0x77009B1C011405A9(iVar2, 1)) <= 22500f)
						{
							if (!iLocal_52)
							{
								unk_0xDA293E5084610B09("mini@prostitutes@sexlow_veh");
								unk_0xDA293E5084610B09("mini@prostitutes@sexnorm_veh");
								unk_0xDA293E5084610B09("mini@prostitutes@sexlow_veh_first_person");
								unk_0xDA293E5084610B09("mini@prostitutes@sexnorm_veh_first_person");
								iLocal_52 = 1;
							}
							if (!unk_0x94E72F17611BCD3C(iLocal_51, iVar0))
							{
								unk_0xEDB9A377CD8B7F03(&iLocal_51, iVar0);
							}
						}
						else if (unk_0x94E72F17611BCD3C(iLocal_51, iVar0))
						{
							unk_0xF76EE56D3E7DAF1B(&iLocal_51, iVar0);
						}
					}
					else if (unk_0x94E72F17611BCD3C(iLocal_51, iVar0))
					{
						unk_0xF76EE56D3E7DAF1B(&iLocal_51, iVar0);
					}
				}
				else if (unk_0x94E72F17611BCD3C(iLocal_51, iVar0))
				{
					unk_0xF76EE56D3E7DAF1B(&iLocal_51, iVar0);
				}
			}
		}
		iVar0++;
	}
	if ((iLocal_51 == 0 && iLocal_52) && !Local_54[iVar1 /*3*/].f_2)
	{
		unk_0xE29F0AC6C728DD9C("mini@prostitutes@sexlow_veh");
		unk_0xE29F0AC6C728DD9C("mini@prostitutes@sexnorm_veh");
		unk_0xE29F0AC6C728DD9C("mini@prostitutes@sexlow_veh_first_person");
		unk_0xE29F0AC6C728DD9C("mini@prostitutes@sexnorm_veh_first_person");
		iLocal_52 = 0;
	}
}

void func_2()
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		return;
	}
	if (iLocal_49 > unk_0x17103F66FBB44C3C())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = unk_0x8516D2494EB4AD1B();
	bVar3 = false;
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			uVar1 = unk_0x9F92518438215DD0();
			if (func_19(&uVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_48)
	{
		case 0:
			if ((func_16(unk_0xCFC72E446B0B3AD7(), 1) || func_15()) || !bVar3)
			{
				iLocal_48 = 4;
			}
			else
			{
				iVar0 = func_12();
				if (iVar0 != func_11(iVar2) && iVar0 != 0)
				{
					func_10(iVar0);
					iLocal_49 = unk_0x17103F66FBB44C3C();
					iLocal_48 = 2;
				}
				else
				{
					iLocal_49 = unk_0x17103F66FBB44C3C() + 500;
				}
			}
			break;
		
		case 2:
			if (func_3())
			{
				Global_24597 = 0f;
				unk_0x9AD29F8AF48B9AD1("pb_prostitute");
				iLocal_49 = unk_0x17103F66FBB44C3C() + 250;
				Local_54[iVar2 /*3*/].f_2 = 0;
				iLocal_48 = 3;
			}
			else
			{
				iLocal_49 = unk_0x17103F66FBB44C3C() + 250;
			}
			break;
		
		case 3:
			if ((unk_0x197501C41CB2403F("pb_prostitute") && unk_0x7B47A371E2D93C2C(joaat("pb_prostitute")) <= 0) && !unk_0x6DB88021BE9DDB28("pb_prostitute", unk_0x8516D2494EB4AD1B(), 1, 0))
			{
				iVar4 = func_11(iVar2);
				iLocal_53 = unk_0xB8BA7F44DF1575E1("pb_prostitute", &iVar4, 1, 2050);
				unk_0x45C517E671FFDD0E("pb_prostitute");
				iLocal_48 = 0;
			}
			iLocal_49 = unk_0x17103F66FBB44C3C();
			break;
		
		case 4:
			if (func_3())
			{
				Local_54[iVar2 /*3*/].f_2 = 0;
				iLocal_49 = unk_0x17103F66FBB44C3C() + 250;
				iLocal_48 = 5;
			}
			else
			{
				iLocal_49 = unk_0x17103F66FBB44C3C() + 500;
			}
			break;
		
		case 5:
			if ((!func_16(unk_0xCFC72E446B0B3AD7(), 1) && !func_15()) && bVar3)
			{
				iLocal_49 = unk_0x17103F66FBB44C3C() + 250;
				iLocal_48 = 0;
			}
			else
			{
				iLocal_49 = unk_0x17103F66FBB44C3C() + 500;
			}
			break;
	}
}

int func_3()
{
	if (unk_0x7B47A371E2D93C2C(joaat("pb_prostitute")) <= 0 && !unk_0x6DB88021BE9DDB28("pb_prostitute", unk_0x8516D2494EB4AD1B(), 1, 0))
	{
		return 1;
	}
	if (iLocal_53 == 0)
	{
		return 1;
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		func_4();
	}
	else
	{
		unk_0x80E0440344EE2FBF("pb_prostitute", 1);
	}
	return 0;
}

void func_4()
{
	struct<2> Var0;
	int iVar2;
	
	Var0.f_0 = 229;
	Var0.f_1 = unk_0xCFC72E446B0B3AD7();
	iVar2 = func_5(1, 1);
	if (iVar2 != 0)
	{
		unk_0x0EA5A5773B9C09AE(1, &Var0, 2, iVar2);
	}
}

var func_5(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7225A5A7A532BC7C(iVar1);
		if (func_9(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xCFC72E446B0B3AD7() || iParam0)
			{
				if (bParam1)
				{
					unk_0xEDB9A377CD8B7F03(&uVar0, iVar1);
				}
				else if (!func_6(iVar2, 0))
				{
					unk_0xEDB9A377CD8B7F03(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_6(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_7(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_7(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_8()
{
	return Global_1312737;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0xCB29E1C3D086FBAE(uParam0))
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

void func_10(int iParam0)
{
	Local_54[unk_0x8516D2494EB4AD1B() /*3*/] = iParam0;
}

int func_11(int iParam0)
{
	if (iParam0 == -1)
	{
		return Local_54[unk_0x8516D2494EB4AD1B() /*3*/];
	}
	return Local_54[iParam0 /*3*/];
}

int func_12()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	
	iVar0 = func_13();
	iVar1 = unk_0x8516D2494EB4AD1B();
	if (!unk_0x746960881FB19A89(func_11(iVar1)))
	{
		func_10(0);
		return iVar0;
	}
	if (iLocal_53 != 0 && unk_0x4E8A0A2FF31F0831(iLocal_53))
	{
		if (Local_54[iVar1 /*3*/].f_2)
		{
			return func_11(iVar1);
		}
		if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
		{
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				uVar2 = unk_0x9F92518438215DD0();
				if (func_19(&uVar2))
				{
					uVar3 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
					if (unk_0x746960881FB19A89(uVar3))
					{
						if (func_11(iVar1) == unk_0xB5BBEB12C77EE430(uVar3, 0) || unk_0x44E080690DA76A2A(func_11(iVar1), uVar3, 1))
						{
							Local_54[iVar1 /*3*/].f_2 = 1;
							return func_11(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_11(iVar1);
					}
					Var4 = { unk_0x77009B1C011405A9(func_11(iVar1), 0) };
					Var7 = { unk_0x77009B1C011405A9(iVar0, 0) };
					Var10 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0) };
					fVar13 = unk_0x2A488C176D52CCA5(Var4, Var10);
					fVar14 = unk_0x2A488C176D52CCA5(Var10, Var7);
					if (fVar13 > fVar14)
					{
						if ((fVar13 - fVar14) > 25f)
						{
							return iVar0;
						}
						else if (fVar14 < 6f && fVar13 > 11f)
						{
							return iVar0;
						}
						else
						{
							return func_11(iVar1);
						}
					}
					else
					{
						return func_11(iVar1);
					}
				}
			}
		}
	}
	return iVar0;
}

int func_13()
{
	int iVar0;
	var uVar1[8];
	int iVar10;
	int iVar11;
	
	iVar0 = 0;
	iVar10 = unk_0x6E83F85086466E82(unk_0x9F92518438215DD0(), &uVar1, -1);
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (!unk_0x3E0478C40AB5B38D(uVar1[iVar11]))
			{
				if (unk_0x97DFCBCC740CB5FD(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || unk_0x97DFCBCC740CB5FD(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (!func_14(uVar1[iVar11]))
					{
						if (!unk_0x7E4B3ADE683EE23B(uVar1[iVar11]))
						{
							return uVar1[iVar11];
						}
					}
				}
			}
			iVar11++;
		}
	}
	return iVar0;
}

int func_14(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Local_54[iVar0 /*3*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_15()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_39.f_18, 0);
}

int func_16(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_17(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582869[iParam0 /*332*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_17(int iParam0)
{
	return func_18(iParam0);
}

bool func_18(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_13.f_1, 0);
}

int func_19(var uParam0)
{
	if (unk_0x827151D7B70CB853(*uParam0, 0))
	{
		if (unk_0xB5BBEB12C77EE430(unk_0xEF1C7D5F912BEE3D(*uParam0), -1) == *uParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_20(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 7;
}

bool func_21(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 2;
}

int func_22()
{
	bool bVar0;
	
	func_29(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 1;
		}
	}
	if (func_28())
	{
		return 1;
	}
	if (Global_2437036)
	{
		return 1;
	}
	if (func_27())
	{
		return 1;
	}
	if (func_26(157))
	{
		if (!func_25())
		{
			return 1;
		}
	}
	if (func_26(155))
	{
		return 1;
	}
	if (!unk_0x6518D9FF7C996D2B())
	{
		return 1;
	}
	if (func_23() != 0)
	{
		if (unk_0x7B47A371E2D93C2C(func_23()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_23()
{
	switch (func_24())
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

int func_24()
{
	return Global_24444;
}

bool func_25()
{
	return Global_2428162.f_572;
}

int func_26(int iParam0)
{
	if (unk_0xAFB34077E5ACCBA7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_27()
{
	return Global_2435128;
}

bool func_28()
{
	return Global_2428162.f_567;
}

void func_29(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2FAEA355B623BA14(1))
	{
		iVar1 = unk_0x18F85CAA17F9F9A1(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2E567DCD11FE0296(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_30(iVar0);
					break;
				
				case 2:
					unk_0x2E567DCD11FE0296(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_30(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x2E567DCD11FE0296(1, iParam0, &Var0, 3))
	{
		if (func_9(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4E6043D225B9C75F(Var0.f_1);
			if (unk_0x746960881FB19A89(uVar3))
			{
				if (unk_0x827151D7B70CB853(uVar3, 0))
				{
					uVar4 = unk_0x1161215F69587BDA(uVar3, 0);
					if (unk_0x4A4FC7B76BEF1AC9(uVar4, Var0.f_2) && unk_0xD28DD58204E8F9D1())
					{
						if (func_31(uVar4, &bVar5))
						{
							unk_0xB3216D41373DA6C7(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9187463EB4918A4D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_31(var uParam0, var uParam1)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (!unk_0x34E74FF8690AA4B1(uParam0))
		{
			if (unk_0x1F298C7D5F6EEDBF(uParam0))
			{
				unk_0x336AE92FD68DEF98(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xAD2C236C4A4B83C9(uParam0, 0))
		{
			if (unk_0x88A3865085DFB7AD(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_32()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_33()
{
	if (iLocal_52)
	{
		unk_0xE29F0AC6C728DD9C("mini@prostitutes@sexlow_veh");
		unk_0xE29F0AC6C728DD9C("mini@prostitutes@sexnorm_veh");
		unk_0xE29F0AC6C728DD9C("mini@prostitutes@sexlow_veh_first_person");
		unk_0xE29F0AC6C728DD9C("mini@prostitutes@sexnorm_veh_first_person");
	}
	func_35();
	func_3();
	if (unk_0x4B69FB3A5B09A1BA())
	{
		func_4();
	}
	else
	{
		unk_0x80E0440344EE2FBF("pb_prostitute", 1);
	}
	Global_2446533.f_2 = 0;
	func_34();
}

void func_34()
{
	unk_0xE60DEFFB2A853900();
}

void func_35()
{
	Global_2422166.f_600.f_10 = 0;
}

void func_36(struct<20> Param0)
{
	func_39(func_40(Param0.f_0), Param0);
	func_37(0, -1, 0);
	unk_0x85862F9356411B89(&Local_54, 97);
	if (unk_0x4B69FB3A5B09A1BA())
	{
		func_4();
	}
	else
	{
		unk_0x80E0440344EE2FBF("pb_prostitute", 1);
	}
	unk_0xE5556978B2858C53(0);
}

int func_37(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x56448188B27B0D1C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_34();
			}
			else
			{
				return 0;
			}
		}
		if (!func_38())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4B69FB3A5B09A1BA())
				{
					if (!bParam2)
					{
						func_34();
					}
					else
					{
						return 0;
					}
				}
				if (func_28())
				{
					if (!bParam2)
					{
						func_34();
					}
					else
					{
						return 0;
					}
				}
				if (func_26(155))
				{
					if (!bParam2)
					{
						func_34();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xB659F73755907B0D())
			{
				if (!bParam2)
				{
					func_34();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x56448188B27B0D1C();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			if (!bParam2)
			{
				func_34();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xB659F73755907B0D())
	{
		if (!bParam2)
		{
			func_34();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_38()
{
	return Global_1315874;
}

void func_39(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		func_34();
	}
	unk_0x097416E6C5CBD31B(uParam0, 0, Param1.f_16);
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

