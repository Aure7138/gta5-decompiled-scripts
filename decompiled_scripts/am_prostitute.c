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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55[32];
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
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0x17CC0D5008835470())
	{
		func_36(ScriptParam_0);
	}
	else
	{
		func_33();
	}
	iLocal_50 = unk_0x1ADBAAC322D61F73();
	while (true)
	{
		func_32();
		if ((func_22() || unk_0x51857BE3D081B03F()) || (func_21(unk_0xE0BDAFA1A39552D6()) || func_20(unk_0xE0BDAFA1A39552D6())))
		{
			func_33();
		}
		if (unk_0x17CC0D5008835470())
		{
			func_2();
			func_1();
			iLocal_51++;
			if (iLocal_51 >= unk_0xC4A9F8E5EC59EB4F())
			{
				iLocal_51 = 0;
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
	
	iVar1 = unk_0x4B6E64C01984DC43();
	iVar0 = 0;
	while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
	{
		if ((iLocal_51 % iVar0) == 0)
		{
			if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar0)))
			{
				iVar2 = unk_0x44A9253132E1DDE0(unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar0)));
				if (!unk_0xBDA1F5E8A36BFA07(iVar2, 0))
				{
					if (Local_55[iVar0 /*3*/].f_2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), unk_0xF4745590D18D14B8(iVar2, 1)) <= 22500f)
						{
							if (!iLocal_53)
							{
								unk_0x198E497B820DA913("mini@prostitutes@sexlow_veh");
								unk_0x198E497B820DA913("mini@prostitutes@sexnorm_veh");
								unk_0x198E497B820DA913("mini@prostitutes@sexlow_veh_first_person");
								unk_0x198E497B820DA913("mini@prostitutes@sexnorm_veh_first_person");
								iLocal_53 = 1;
							}
							if (!unk_0x7DA173D4FD42F36B(iLocal_52, iVar0))
							{
								unk_0xE27C8E42A97895CF(&iLocal_52, iVar0);
							}
						}
						else if (unk_0x7DA173D4FD42F36B(iLocal_52, iVar0))
						{
							unk_0x99BCB15F954AF579(&iLocal_52, iVar0);
						}
					}
					else if (unk_0x7DA173D4FD42F36B(iLocal_52, iVar0))
					{
						unk_0x99BCB15F954AF579(&iLocal_52, iVar0);
					}
				}
				else if (unk_0x7DA173D4FD42F36B(iLocal_52, iVar0))
				{
					unk_0x99BCB15F954AF579(&iLocal_52, iVar0);
				}
			}
		}
		iVar0++;
	}
	if ((iLocal_52 == 0 && iLocal_53) && !Local_55[iVar1 /*3*/].f_2)
	{
		unk_0x6B09668CBB188BED("mini@prostitutes@sexlow_veh");
		unk_0x6B09668CBB188BED("mini@prostitutes@sexnorm_veh");
		unk_0x6B09668CBB188BED("mini@prostitutes@sexlow_veh_first_person");
		unk_0x6B09668CBB188BED("mini@prostitutes@sexnorm_veh_first_person");
		iLocal_53 = 0;
	}
}

void func_2()
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
	{
		return;
	}
	if (iLocal_50 > unk_0x1ADBAAC322D61F73())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = unk_0x4B6E64C01984DC43();
	bVar3 = false;
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
		{
			uVar1 = unk_0x06736567F820A39E();
			if (func_19(&uVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_49)
	{
		case 0:
			if ((func_16(unk_0xE0BDAFA1A39552D6(), 1) || func_15()) || !bVar3)
			{
				iLocal_49 = 4;
			}
			else
			{
				iVar0 = func_12();
				if (iVar0 != func_11(iVar2) && iVar0 != 0)
				{
					func_10(iVar0);
					iLocal_50 = unk_0x1ADBAAC322D61F73();
					iLocal_49 = 2;
				}
				else
				{
					iLocal_50 = unk_0x1ADBAAC322D61F73() + 500;
				}
			}
			break;
		
		case 2:
			if (func_3())
			{
				Global_25305 = 0f;
				unk_0x47CCE1B84DDCD2A7("pb_prostitute");
				iLocal_50 = unk_0x1ADBAAC322D61F73() + 250;
				Local_55[iVar2 /*3*/].f_2 = 0;
				iLocal_49 = 3;
			}
			else
			{
				iLocal_50 = unk_0x1ADBAAC322D61F73() + 250;
			}
			break;
		
		case 3:
			if ((unk_0x04D070195A8178CD("pb_prostitute") && unk_0x98934607F8D0FB03(joaat("pb_prostitute")) <= 0) && !unk_0x5B003181D760D4E1("pb_prostitute", unk_0x4B6E64C01984DC43(), 1, 0))
			{
				iVar4 = func_11(iVar2);
				iLocal_54 = unk_0xB8BA7F44DF1575E1("pb_prostitute", &iVar4, 1, 2050);
				unk_0x3F380364F30A5C6B("pb_prostitute");
				iLocal_49 = 0;
			}
			iLocal_50 = unk_0x1ADBAAC322D61F73();
			break;
		
		case 4:
			if (func_3())
			{
				Local_55[iVar2 /*3*/].f_2 = 0;
				iLocal_50 = unk_0x1ADBAAC322D61F73() + 250;
				iLocal_49 = 5;
			}
			else
			{
				iLocal_50 = unk_0x1ADBAAC322D61F73() + 500;
			}
			break;
		
		case 5:
			if ((!func_16(unk_0xE0BDAFA1A39552D6(), 1) && !func_15()) && bVar3)
			{
				iLocal_50 = unk_0x1ADBAAC322D61F73() + 250;
				iLocal_49 = 0;
			}
			else
			{
				iLocal_50 = unk_0x1ADBAAC322D61F73() + 500;
			}
			break;
	}
}

int func_3()
{
	if (unk_0x98934607F8D0FB03(joaat("pb_prostitute")) <= 0 && !unk_0x5B003181D760D4E1("pb_prostitute", unk_0x4B6E64C01984DC43(), 1, 0))
	{
		return 1;
	}
	if (iLocal_54 == 0)
	{
		return 1;
	}
	if (unk_0x17CC0D5008835470())
	{
		func_4();
	}
	else
	{
		unk_0x98254795BBDC8DFA("pb_prostitute", 1);
	}
	return 0;
}

void func_4()
{
	struct<2> Var0;
	int iVar2;
	
	Var0.f_0 = 270;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	iVar2 = func_5(1, 1);
	if (iVar2 != 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Var0, 2, iVar2);
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
		iVar2 = unk_0x801C03D92F1C6755(iVar1);
		if (func_9(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xE0BDAFA1A39552D6() || iParam0)
			{
				if (bParam1)
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar1);
				}
				else if (!func_6(iVar2, 0))
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar1);
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
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_7(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587816[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			bVar0 = unk_0xF749B19A9F9B3DBF(iParam0) == 8;
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
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_8()
{
	return Global_1312747;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0xA27C9E8196C79D22(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7868479D9B6694C0(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428549.f_3[iVar0])
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
	Local_55[unk_0x4B6E64C01984DC43() /*3*/] = iParam0;
}

int func_11(int iParam0)
{
	if (iParam0 == -1)
	{
		return Local_55[unk_0x4B6E64C01984DC43() /*3*/];
	}
	return Local_55[iParam0 /*3*/];
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
	iVar1 = unk_0x4B6E64C01984DC43();
	if (!unk_0xC1EDB61CE0A4B94E(func_11(iVar1)))
	{
		func_10(0);
		return iVar0;
	}
	if (iLocal_54 != 0 && unk_0xDF49ABF9204CC801(iLocal_54))
	{
		if (Local_55[iVar1 /*3*/].f_2)
		{
			return func_11(iVar1);
		}
		if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
		{
			if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
			{
				uVar2 = unk_0x06736567F820A39E();
				if (func_19(&uVar2))
				{
					uVar3 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
					if (unk_0xC1EDB61CE0A4B94E(uVar3))
					{
						if (func_11(iVar1) == unk_0x4321FC7479614822(uVar3, 0) || unk_0x93E49C491856D7AD(func_11(iVar1), uVar3, 1))
						{
							Local_55[iVar1 /*3*/].f_2 = 1;
							return func_11(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_11(iVar1);
					}
					Var4 = { unk_0xF4745590D18D14B8(func_11(iVar1), 0) };
					Var7 = { unk_0xF4745590D18D14B8(iVar0, 0) };
					Var10 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0) };
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
	iVar10 = unk_0x8DB7EA2D75DA4B59(unk_0x06736567F820A39E(), &uVar1, -1);
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (!unk_0xCFC04A38F256EE06(uVar1[iVar11]))
			{
				if (unk_0x02FC32544FA168D5(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || unk_0x02FC32544FA168D5(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (!func_14(uVar1[iVar11]))
					{
						if (!unk_0x0DA2000F5C8A8ECC(uVar1[iVar11]))
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
		if (Local_55[iVar0 /*3*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_15()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 0);
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
	if (Global_1587816[iParam0 /*444*/] == -1)
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
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_13.f_1, 0);
}

int func_19(var uParam0)
{
	if (unk_0x0FDFEC0DD29106EE(*uParam0, 0))
	{
		if (unk_0x4321FC7479614822(unk_0xEB18AC70F95C0F8C(*uParam0), -1) == *uParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_20(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 7;
}

bool func_21(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 2;
}

int func_22()
{
	bool bVar0;
	
	func_29(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315888 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			return 1;
		}
	}
	if (func_28())
	{
		return 1;
	}
	if (Global_2446452)
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
	if (!unk_0x2CB436C59D8FC08B())
	{
		return 1;
	}
	if (func_23() != 0)
	{
		if (unk_0x98934607F8D0FB03(func_23()) == 0)
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
	return Global_25152;
}

bool func_25()
{
	return Global_2434839.f_575;
}

int func_26(int iParam0)
{
	if (unk_0x1151827D6B6D09C7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_27()
{
	return Global_2444095;
}

bool func_28()
{
	return Global_2434839.f_570;
}

void func_29(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF33D012D28E3DB68(1))
	{
		iVar1 = unk_0xF0310CD279B9DC23(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6E7EC37CC38579DB(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 347:
					func_30(iVar0);
					break;
				
				case 2:
					unk_0x6E7EC37CC38579DB(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
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
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		if (func_9(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x44A9253132E1DDE0(Var0.f_1);
			if (unk_0xC1EDB61CE0A4B94E(uVar3))
			{
				if (unk_0x0FDFEC0DD29106EE(uVar3, 0))
				{
					uVar4 = unk_0x34E1EF1E8BCD1BFC(uVar3, 0);
					if (unk_0xBBDEC099189867B6(uVar4, Var0.f_2) && unk_0x992E302DC36A4251())
					{
						if (func_31(uVar4, &bVar5))
						{
							unk_0x87332622AA717A1B(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x768B37F1452D4834(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_31(var uParam0, var uParam1)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (!unk_0xC9A01F9792B3D486(uParam0))
		{
			if (unk_0x2A3F30E37EB8FDD8(uParam0))
			{
				unk_0xB7E6C6AE18F1EDA6(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x7292AF41BC6C644F(uParam0, 0))
		{
			if (unk_0xA2C0F3D7469C0A0B(uParam0))
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
	if (iLocal_53)
	{
		unk_0x6B09668CBB188BED("mini@prostitutes@sexlow_veh");
		unk_0x6B09668CBB188BED("mini@prostitutes@sexnorm_veh");
		unk_0x6B09668CBB188BED("mini@prostitutes@sexlow_veh_first_person");
		unk_0x6B09668CBB188BED("mini@prostitutes@sexnorm_veh_first_person");
	}
	func_35();
	func_3();
	if (unk_0x17CC0D5008835470())
	{
		func_4();
	}
	else
	{
		unk_0x98254795BBDC8DFA("pb_prostitute", 1);
	}
	Global_2464975.f_4 = 0;
	func_34();
}

void func_34()
{
	unk_0xF5DF8F3392CDD07B();
}

void func_35()
{
	Global_2428549.f_648.f_10 = 0;
}

void func_36(struct<20> Param0)
{
	func_39(func_40(Param0.f_0), Param0);
	func_37(0, -1, 0);
	unk_0xE51AD091F27ECBFF(&Local_55, 97);
	if (unk_0x17CC0D5008835470())
	{
		func_4();
	}
	else
	{
		unk_0x98254795BBDC8DFA("pb_prostitute", 1);
	}
	unk_0x8AAE4CDF72BA829A(0);
}

int func_37(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD225119541DF4E45();
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
				if (!unk_0x17CC0D5008835470())
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
			else if (!unk_0xE5302F426D0500D6())
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
		iVar0 = unk_0xD225119541DF4E45();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x17CC0D5008835470())
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
	else if (!unk_0xE5302F426D0500D6())
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
	return Global_1315888;
}

void func_39(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x17CC0D5008835470())
	{
		func_34();
	}
	unk_0xEC43D0BC14815F9E(uParam0, 0, Param1.f_16);
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
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
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
		
		case 73:
			return 32;
		
		case 74:
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
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 80:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 83:
			return 32;
		
		case 84:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 2;
		
		case 96:
			return 1;
		
		case 92:
			return 2;
		
		case 93:
			return 4;
		
		case 94:
			return 2;
		
		case 95:
			return 2;
		
		case 77:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
			return 0;
		
		case 105:
			return 1;
		
		case 104:
			return 4;
		
		default:
	}
	return 0;
}

