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
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	struct<3> Local_58[32];
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x44243F2E2F58B8E3())
	{
		func_37(ScriptParam_0);
	}
	else
	{
		func_34();
	}
	iLocal_53 = unk_0x5AFB8ED811F05E4D();
	while (true)
	{
		func_33();
		if ((func_23() || unk_0x3AB73ED02FDAC9A8()) || (func_22(unk_0x8CFC7D6E1DA5D304()) || func_21(unk_0x8CFC7D6E1DA5D304())))
		{
			func_34();
		}
		if (unk_0x44243F2E2F58B8E3())
		{
			func_2();
			func_1();
			iLocal_54++;
			if (iLocal_54 >= unk_0xF02902C16AF3CA92())
			{
				iLocal_54 = 0;
			}
		}
		else
		{
			func_34();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x71808F682AF71F7D();
	iVar0 = 0;
	while (iVar0 < unk_0xF02902C16AF3CA92())
	{
		if ((iLocal_54 % iVar0) == 0)
		{
			if (unk_0x0CA6AB9C192005B8(unk_0xF4E7C3C6384793AA(iVar0)))
			{
				iVar2 = unk_0x6604E096142B4B55(unk_0x8A0B92A0286253B3(unk_0xF4E7C3C6384793AA(iVar0)));
				if (!unk_0x74C2FE037DFC8B4A(iVar2, 0))
				{
					if (Local_58[iVar0 /*3*/].f_2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), unk_0x761660F5CE986DC4(iVar2, 1)) <= 22500f)
						{
							if (!iLocal_56)
							{
								unk_0x831CD0FBFB26EC7E("mini@prostitutes@sexlow_veh");
								unk_0x831CD0FBFB26EC7E("mini@prostitutes@sexnorm_veh");
								unk_0x831CD0FBFB26EC7E("mini@prostitutes@sexlow_veh_first_person");
								unk_0x831CD0FBFB26EC7E("mini@prostitutes@sexnorm_veh_first_person");
								iLocal_56 = 1;
							}
							if (!unk_0xB03A1684359C50A1(iLocal_55, iVar0))
							{
								unk_0xD2A9C3F486236CC5(&iLocal_55, iVar0);
							}
						}
						else if (unk_0xB03A1684359C50A1(iLocal_55, iVar0))
						{
							unk_0x62148293B793073B(&iLocal_55, iVar0);
						}
					}
					else if (unk_0xB03A1684359C50A1(iLocal_55, iVar0))
					{
						unk_0x62148293B793073B(&iLocal_55, iVar0);
					}
				}
				else if (unk_0xB03A1684359C50A1(iLocal_55, iVar0))
				{
					unk_0x62148293B793073B(&iLocal_55, iVar0);
				}
			}
		}
		iVar0++;
	}
	if ((iLocal_55 == 0 && iLocal_56) && !Local_58[iVar1 /*3*/].f_2)
	{
		unk_0x334F1DD67B2EC86A("mini@prostitutes@sexlow_veh");
		unk_0x334F1DD67B2EC86A("mini@prostitutes@sexnorm_veh");
		unk_0x334F1DD67B2EC86A("mini@prostitutes@sexlow_veh_first_person");
		unk_0x334F1DD67B2EC86A("mini@prostitutes@sexnorm_veh_first_person");
		iLocal_56 = 0;
	}
}

void func_2()
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		return;
	}
	if (iLocal_53 > unk_0x5AFB8ED811F05E4D())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = unk_0x71808F682AF71F7D();
	bVar3 = false;
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			uVar1 = unk_0x18F7BE9ACB7D08F4();
			if (func_20(&uVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_52)
	{
		case 0:
			if ((func_17(unk_0x8CFC7D6E1DA5D304(), 1) || func_16()) || !bVar3)
			{
				iLocal_52 = 4;
			}
			else
			{
				iVar0 = func_12();
				if (iVar0 != func_11(iVar2) && iVar0 != 0)
				{
					func_10(iVar0);
					iLocal_53 = unk_0x5AFB8ED811F05E4D();
					iLocal_52 = 2;
				}
				else
				{
					iLocal_53 = unk_0x5AFB8ED811F05E4D() + 500;
				}
			}
			break;
		
		case 2:
			if (func_3())
			{
				Global_25386 = 0f;
				unk_0xC8A5933869E73673("pb_prostitute");
				iLocal_53 = unk_0x5AFB8ED811F05E4D() + 250;
				Local_58[iVar2 /*3*/].f_2 = 0;
				iLocal_52 = 3;
			}
			else
			{
				iLocal_53 = unk_0x5AFB8ED811F05E4D() + 250;
			}
			break;
		
		case 3:
			if ((unk_0xC040FCA5F6E73B3E("pb_prostitute") && unk_0xE7FAF8E78F7D3A73(joaat("pb_prostitute")) <= 0) && !unk_0x1D96871229AA29DD("pb_prostitute", unk_0x71808F682AF71F7D(), 1, 0))
			{
				iVar4 = func_11(iVar2);
				iLocal_57 = unk_0xB8BA7F44DF1575E1("pb_prostitute", &iVar4, 1, 2050);
				unk_0x2130D1396EE39C8E("pb_prostitute");
				iLocal_52 = 0;
			}
			iLocal_53 = unk_0x5AFB8ED811F05E4D();
			break;
		
		case 4:
			if (func_3())
			{
				Local_58[iVar2 /*3*/].f_2 = 0;
				iLocal_53 = unk_0x5AFB8ED811F05E4D() + 250;
				iLocal_52 = 5;
			}
			else
			{
				iLocal_53 = unk_0x5AFB8ED811F05E4D() + 500;
			}
			break;
		
		case 5:
			if ((!func_17(unk_0x8CFC7D6E1DA5D304(), 1) && !func_16()) && bVar3)
			{
				iLocal_53 = unk_0x5AFB8ED811F05E4D() + 250;
				iLocal_52 = 0;
			}
			else
			{
				iLocal_53 = unk_0x5AFB8ED811F05E4D() + 500;
			}
			break;
	}
}

int func_3()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("pb_prostitute")) <= 0 && !unk_0x1D96871229AA29DD("pb_prostitute", unk_0x71808F682AF71F7D(), 1, 0))
	{
		return 1;
	}
	if (iLocal_57 == 0)
	{
		return 1;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		func_4();
	}
	else
	{
		unk_0xFF2415412E4281BB("pb_prostitute", 1);
	}
	return 0;
}

void func_4()
{
	struct<2> Var0;
	int iVar2;
	
	Var0.f_0 = -2056139012;
	Var0.f_1 = unk_0x8CFC7D6E1DA5D304();
	iVar2 = func_5(1, 1);
	if (iVar2 != 0)
	{
		unk_0xDC8B8CF2FBDF3387(1, &Var0, 2, iVar2);
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
		iVar2 = unk_0x3479F6F64A48251C(iVar1);
		if (func_9(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x8CFC7D6E1DA5D304() || iParam0)
			{
				if (bParam1)
				{
					unk_0xD2A9C3F486236CC5(&uVar0, iVar1);
				}
				else if (!func_6(iVar2, 0))
				{
					unk_0xD2A9C3F486236CC5(&uVar0, iVar1);
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
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_7(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
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
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_8()
{
	return Global_1312736;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436169.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_10(int iParam0)
{
	Local_58[unk_0x71808F682AF71F7D() /*3*/] = iParam0;
}

int func_11(int iParam0)
{
	if (iParam0 == -1)
	{
		return Local_58[unk_0x71808F682AF71F7D() /*3*/];
	}
	return Local_58[iParam0 /*3*/];
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
	iVar1 = unk_0x71808F682AF71F7D();
	if (!unk_0x31F12808DC47A9E5(func_11(iVar1)))
	{
		func_10(0);
		return iVar0;
	}
	if (iLocal_57 != 0 && unk_0x19B3A29FD53C54A6(iLocal_57))
	{
		if (Local_58[iVar1 /*3*/].f_2)
		{
			return func_11(iVar1);
		}
		if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				uVar2 = unk_0x18F7BE9ACB7D08F4();
				if (func_20(&uVar2))
				{
					uVar3 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
					if (unk_0x31F12808DC47A9E5(uVar3))
					{
						if (func_11(iVar1) == unk_0x4983F8C51A0C0AF3(uVar3, 0, 0) || unk_0x88B79D32B518C327(func_11(iVar1), uVar3, 1))
						{
							Local_58[iVar1 /*3*/].f_2 = 1;
							return func_11(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_11(iVar1);
					}
					Var4 = { unk_0x761660F5CE986DC4(func_11(iVar1), 0) };
					Var7 = { unk_0x761660F5CE986DC4(iVar0, 0) };
					Var10 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0) };
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
	iVar10 = unk_0x74A7D93DBA7322F5(unk_0x18F7BE9ACB7D08F4(), &uVar1, -1);
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (!unk_0x0FAE113CE72ED842(uVar1[iVar11]))
			{
				if (unk_0xC746C0AC3E89276F(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || unk_0xC746C0AC3E89276F(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (func_15(uVar1[iVar11]))
					{
						if (!func_14(uVar1[iVar11]))
						{
							if (!unk_0x3ECC58F70B51B88E(uVar1[iVar11]))
							{
								return uVar1[iVar11];
							}
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
		if (Local_58[iVar0 /*3*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_15(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar1 = unk_0x7677C12E3146DA0A(uParam0, &uVar0);
	if (!unk_0xFAFFA408239A026B(uVar1))
	{
		if (unk_0x9D39145AD645E383(uVar1, "GB_VEHICLE_EXPORT"))
		{
			return 0;
		}
	}
	return 1;
}

bool func_16()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 0);
}

int func_17(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_18(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595681[iParam0 /*678*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_18(int iParam0)
{
	return func_19(iParam0);
}

bool func_19(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_13.f_1, 0);
}

int func_20(var uParam0)
{
	if (unk_0x657B649BA2AD3582(*uParam0, 0))
	{
		if (unk_0x4983F8C51A0C0AF3(unk_0x0B495402BD092DEB(*uParam0), -1, 0) == *uParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_21(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 7;
}

bool func_22(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 2;
}

int func_23()
{
	var uVar0;
	
	func_30(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			return 1;
		}
	}
	if (func_29())
	{
		return 1;
	}
	if (Global_2459011)
	{
		return 1;
	}
	if (func_28())
	{
		return 1;
	}
	if (func_27(157))
	{
		if (!func_26())
		{
			return 1;
		}
	}
	if (func_27(155))
	{
		return 1;
	}
	if (!unk_0xA1C84586015AE5DB())
	{
		return 1;
	}
	if (func_24() != 0)
	{
		if (unk_0xE7FAF8E78F7D3A73(func_24()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_24()
{
	switch (func_25())
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

int func_25()
{
	return Global_25233;
}

bool func_26()
{
	return Global_2447128.f_586;
}

int func_27(int iParam0)
{
	if (unk_0xA1B200C8BB1289B7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_28()
{
	return Global_2456781;
}

bool func_29()
{
	return Global_2447128.f_581;
}

void func_30(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5B5D98FAAE6FEC3E(1))
	{
		iVar1 = unk_0xD8DDA9403FAEDB57(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xF6A7C6FEAD04F4B3(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1592539087:
					func_31(iVar0);
					break;
				
				case 1094813140:
					unk_0xF6A7C6FEAD04F4B3(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1903409068)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_31(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &Var0, 3))
	{
		if (func_9(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x6604E096142B4B55(Var0.f_1);
			if (unk_0x31F12808DC47A9E5(uVar3))
			{
				if (unk_0x657B649BA2AD3582(uVar3, 0))
				{
					uVar4 = unk_0x5AD687C3474F04B4(uVar3, 0);
					if (unk_0xF7FC2DC5308754C4(uVar4, Var0.f_2) && unk_0xD8E9E28C65F6D7A9())
					{
						if (func_32(uVar4, &bVar5))
						{
							unk_0x02FFEDE7A52D9E18(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x4F5FF3F3FDCAB15D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_32(var uParam0, var uParam1)
{
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		if (!unk_0x90D1FDC9D31B7BE1(uParam0))
		{
			if (unk_0x84E7E48409E0DA9F(uParam0))
			{
				if (!unk_0xA403D842C198CAFF(unk_0x4F69FBD64CDF125B(uParam0)))
				{
					unk_0x337F2213526139E0(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xE54DCC6B21FDC95A(uParam0, 0))
		{
			if (unk_0x1800B99666D25740(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_33()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_34()
{
	if (iLocal_56)
	{
		unk_0x334F1DD67B2EC86A("mini@prostitutes@sexlow_veh");
		unk_0x334F1DD67B2EC86A("mini@prostitutes@sexnorm_veh");
		unk_0x334F1DD67B2EC86A("mini@prostitutes@sexlow_veh_first_person");
		unk_0x334F1DD67B2EC86A("mini@prostitutes@sexnorm_veh_first_person");
	}
	func_36();
	func_3();
	if (unk_0x44243F2E2F58B8E3())
	{
		func_4();
	}
	else
	{
		unk_0xFF2415412E4281BB("pb_prostitute", 1);
	}
	Global_2512581.f_4 = 0;
	func_35();
}

void func_35()
{
	unk_0x810C5D6462DD69E6();
}

void func_36()
{
	Global_2436169.f_1040.f_10 = 0;
}

void func_37(struct<21> Param0)
{
	func_40(func_41(Param0.f_0), Param0);
	func_38(0, -1, 0);
	unk_0x0D25D64240F2BAA8(&Local_58, 97);
	if (unk_0x44243F2E2F58B8E3())
	{
		func_4();
	}
	else
	{
		unk_0xFF2415412E4281BB("pb_prostitute", 1);
	}
	unk_0xDA6A6B59F261B209(0);
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD8BE1F0DC107B5A4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_35();
			}
			else
			{
				return 0;
			}
		}
		if (!func_39())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x44243F2E2F58B8E3())
				{
					if (!bParam2)
					{
						func_35();
					}
					else
					{
						return 0;
					}
				}
				if (func_29())
				{
					if (!bParam2)
					{
						func_35();
					}
					else
					{
						return 0;
					}
				}
				if (func_27(155))
				{
					if (!bParam2)
					{
						func_35();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x32BCC4E6A353E146())
			{
				if (!bParam2)
				{
					func_35();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD8BE1F0DC107B5A4();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			if (!bParam2)
			{
				func_35();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x32BCC4E6A353E146())
	{
		if (!bParam2)
		{
			func_35();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_39()
{
	return Global_1312831;
}

void func_40(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		func_35();
	}
	unk_0x4121A9A0CCC0E014(uParam0, 0, Param1.f_16);
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
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
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
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
		
		case 113:
			return 32;
		
		case 114:
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
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 115:
			return 32;
		
		case 116:
			return 32;
		
		case 120:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 2;
		
		case 136:
			return 1;
		
		case 132:
			return 2;
		
		case 133:
			return 4;
		
		case 134:
			return 2;
		
		case 135:
			return 2;
		
		case 117:
			return 1;
		
		case 137:
			return 2;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 0;
		
		case 147:
			return 1;
		
		case 144:
			return 4;
		
		case 145:
			return 16;
		
		case 146:
			return 32;
		
		default:
	}
	return 0;
}

