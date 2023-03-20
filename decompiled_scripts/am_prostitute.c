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
	if (unk_0x1995B52453EF6537())
	{
		func_37(ScriptParam_0);
	}
	else
	{
		func_34();
	}
	iLocal_50 = unk_0x84A97C70FFDEC0C8();
	while (true)
	{
		func_33();
		if ((func_23() || unk_0xF5C5C10402E12CCB()) || (func_22(unk_0xFB6B3EEFAB2DD12C()) || func_21(unk_0xFB6B3EEFAB2DD12C())))
		{
			func_34();
		}
		if (unk_0x1995B52453EF6537())
		{
			func_2();
			func_1();
			iLocal_51++;
			if (iLocal_51 >= unk_0x11B9E7FF50B2F4CC())
			{
				iLocal_51 = 0;
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
	
	iVar1 = unk_0xBF9F666ECB14FCC3();
	iVar0 = 0;
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		if ((iLocal_51 % iVar0) == 0)
		{
			if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar0)))
			{
				iVar2 = unk_0x4572B13EE70C8F52(unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0)));
				if (!unk_0xB529B2A4B7C64D6D(iVar2, 0))
				{
					if (Local_55[iVar0 /*3*/].f_2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), unk_0xC086F8D75730FA3A(iVar2, 1)) <= 22500f)
						{
							if (!iLocal_53)
							{
								unk_0x49E996A1E39EAAD7("mini@prostitutes@sexlow_veh");
								unk_0x49E996A1E39EAAD7("mini@prostitutes@sexnorm_veh");
								unk_0x49E996A1E39EAAD7("mini@prostitutes@sexlow_veh_first_person");
								unk_0x49E996A1E39EAAD7("mini@prostitutes@sexnorm_veh_first_person");
								iLocal_53 = 1;
							}
							if (!unk_0xF44A5E894FE76438(iLocal_52, iVar0))
							{
								unk_0xB8A73E7DA87B2968(&iLocal_52, iVar0);
							}
						}
						else if (unk_0xF44A5E894FE76438(iLocal_52, iVar0))
						{
							unk_0x4EA098C870B73AB7(&iLocal_52, iVar0);
						}
					}
					else if (unk_0xF44A5E894FE76438(iLocal_52, iVar0))
					{
						unk_0x4EA098C870B73AB7(&iLocal_52, iVar0);
					}
				}
				else if (unk_0xF44A5E894FE76438(iLocal_52, iVar0))
				{
					unk_0x4EA098C870B73AB7(&iLocal_52, iVar0);
				}
			}
		}
		iVar0++;
	}
	if ((iLocal_52 == 0 && iLocal_53) && !Local_55[iVar1 /*3*/].f_2)
	{
		unk_0x6989DACCC7A558AE("mini@prostitutes@sexlow_veh");
		unk_0x6989DACCC7A558AE("mini@prostitutes@sexnorm_veh");
		unk_0x6989DACCC7A558AE("mini@prostitutes@sexlow_veh_first_person");
		unk_0x6989DACCC7A558AE("mini@prostitutes@sexnorm_veh_first_person");
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
	
	if (unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		return;
	}
	if (iLocal_50 > unk_0x84A97C70FFDEC0C8())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = unk_0xBF9F666ECB14FCC3();
	bVar3 = false;
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			uVar1 = unk_0xD5A676B97920D126();
			if (func_20(&uVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_49)
	{
		case 0:
			if ((func_17(unk_0xFB6B3EEFAB2DD12C(), 1) || func_16()) || !bVar3)
			{
				iLocal_49 = 4;
			}
			else
			{
				iVar0 = func_12();
				if (iVar0 != func_11(iVar2) && iVar0 != 0)
				{
					func_10(iVar0);
					iLocal_50 = unk_0x84A97C70FFDEC0C8();
					iLocal_49 = 2;
				}
				else
				{
					iLocal_50 = unk_0x84A97C70FFDEC0C8() + 500;
				}
			}
			break;
		
		case 2:
			if (func_3())
			{
				Global_25338 = 0f;
				unk_0x7FC35FCC666F974E("pb_prostitute");
				iLocal_50 = unk_0x84A97C70FFDEC0C8() + 250;
				Local_55[iVar2 /*3*/].f_2 = 0;
				iLocal_49 = 3;
			}
			else
			{
				iLocal_50 = unk_0x84A97C70FFDEC0C8() + 250;
			}
			break;
		
		case 3:
			if ((unk_0x4AAFD43C0AFB7A1A("pb_prostitute") && unk_0xAB964FCFAC3C767A(joaat("pb_prostitute")) <= 0) && !unk_0x64E5EEDB2FF05CDA("pb_prostitute", unk_0xBF9F666ECB14FCC3(), 1, 0))
			{
				iVar4 = func_11(iVar2);
				iLocal_54 = unk_0xB8BA7F44DF1575E1("pb_prostitute", &iVar4, 1, 2050);
				unk_0x0446A34B5E23D747("pb_prostitute");
				iLocal_49 = 0;
			}
			iLocal_50 = unk_0x84A97C70FFDEC0C8();
			break;
		
		case 4:
			if (func_3())
			{
				Local_55[iVar2 /*3*/].f_2 = 0;
				iLocal_50 = unk_0x84A97C70FFDEC0C8() + 250;
				iLocal_49 = 5;
			}
			else
			{
				iLocal_50 = unk_0x84A97C70FFDEC0C8() + 500;
			}
			break;
		
		case 5:
			if ((!func_17(unk_0xFB6B3EEFAB2DD12C(), 1) && !func_16()) && bVar3)
			{
				iLocal_50 = unk_0x84A97C70FFDEC0C8() + 250;
				iLocal_49 = 0;
			}
			else
			{
				iLocal_50 = unk_0x84A97C70FFDEC0C8() + 500;
			}
			break;
	}
}

int func_3()
{
	if (unk_0xAB964FCFAC3C767A(joaat("pb_prostitute")) <= 0 && !unk_0x64E5EEDB2FF05CDA("pb_prostitute", unk_0xBF9F666ECB14FCC3(), 1, 0))
	{
		return 1;
	}
	if (iLocal_54 == 0)
	{
		return 1;
	}
	if (unk_0x1995B52453EF6537())
	{
		func_4();
	}
	else
	{
		unk_0xD2313F680EE374D3("pb_prostitute", 1);
	}
	return 0;
}

void func_4()
{
	struct<2> Var0;
	int iVar2;
	
	Var0.f_0 = 288;
	Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	iVar2 = func_5(1, 1);
	if (iVar2 != 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Var0, 2, iVar2);
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
		iVar2 = unk_0x7A4693BB354F3CD3(iVar1);
		if (func_9(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xFB6B3EEFAB2DD12C() || iParam0)
			{
				if (bParam1)
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar1);
				}
				else if (!func_6(iVar2, 0))
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar1);
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
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_7(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
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
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_8()
{
	return Global_1312731;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x1E0256D6F1052B31(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x9BA2465846EC8271(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433082.f_3[iVar0])
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
	Local_55[unk_0xBF9F666ECB14FCC3() /*3*/] = iParam0;
}

int func_11(int iParam0)
{
	if (iParam0 == -1)
	{
		return Local_55[unk_0xBF9F666ECB14FCC3() /*3*/];
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
	iVar1 = unk_0xBF9F666ECB14FCC3();
	if (!unk_0x7887B64A08364778(func_11(iVar1)))
	{
		func_10(0);
		return iVar0;
	}
	if (iLocal_54 != 0 && unk_0x597C1E51157E5516(iLocal_54))
	{
		if (Local_55[iVar1 /*3*/].f_2)
		{
			return func_11(iVar1);
		}
		if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
		{
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				uVar2 = unk_0xD5A676B97920D126();
				if (func_20(&uVar2))
				{
					uVar3 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
					if (unk_0x7887B64A08364778(uVar3))
					{
						if (func_11(iVar1) == unk_0x98BE504E8B389665(uVar3, 0, 0) || unk_0x04D83291EB9DE51D(func_11(iVar1), uVar3, 1))
						{
							Local_55[iVar1 /*3*/].f_2 = 1;
							return func_11(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_11(iVar1);
					}
					Var4 = { unk_0xC086F8D75730FA3A(func_11(iVar1), 0) };
					Var7 = { unk_0xC086F8D75730FA3A(iVar0, 0) };
					Var10 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0) };
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
	iVar10 = unk_0x2B7034B7B7F5EA19(unk_0xD5A676B97920D126(), &uVar1, -1);
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (!unk_0x00B5B0B68211D89B(uVar1[iVar11]))
			{
				if (unk_0xA79BE27F2F4EEF6B(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || unk_0xA79BE27F2F4EEF6B(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (func_15(uVar1[iVar11]))
					{
						if (!func_14(uVar1[iVar11]))
						{
							if (!unk_0xFCDC1684830866E8(uVar1[iVar11]))
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
		if (Local_55[iVar0 /*3*/] == iParam0)
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
	
	uVar1 = unk_0xB20FC7F756C6FEF5(uParam0, &uVar0);
	if (!unk_0xC55B9553B3EDADE9(uVar1))
	{
		if (unk_0xCC257DA11A122B5F(uVar1, "GB_VEHICLE_EXPORT"))
		{
			return 0;
		}
	}
	return 1;
}

bool func_16()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 0);
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
	if (Global_1589933[iParam0 /*601*/] == -1)
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
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

int func_20(var uParam0)
{
	if (unk_0x6A0583ECFCCECC9B(*uParam0, 0))
	{
		if (unk_0x98BE504E8B389665(unk_0x19912132A3CBAD3C(*uParam0), -1, 0) == *uParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_21(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 7;
}

bool func_22(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 2;
}

int func_23()
{
	bool bVar0;
	var uVar1;
	
	func_30(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			return 1;
		}
	}
	if (func_29())
	{
		return 1;
	}
	if (Global_2454699)
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
	if (!unk_0xA4B4423421E91E97())
	{
		return 1;
	}
	if (func_24() != 0)
	{
		if (unk_0xAB964FCFAC3C767A(func_24()) == 0)
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
	return Global_25185;
}

bool func_26()
{
	return Global_2443089.f_577;
}

int func_27(int iParam0)
{
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_28()
{
	return Global_2452479;
}

bool func_29()
{
	return Global_2443089.f_572;
}

void func_30(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x49897615E4CA227C(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 365:
					func_31(iVar0);
					break;
				
				case 2:
					unk_0x49897615E4CA227C(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
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
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 3))
	{
		if (func_9(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4572B13EE70C8F52(Var0.f_1);
			if (unk_0x7887B64A08364778(uVar3))
			{
				if (unk_0x6A0583ECFCCECC9B(uVar3, 0))
				{
					uVar4 = unk_0x0DBD8FE531FD620D(uVar3, 0);
					if (unk_0xCC5C4B9DB5D0FF42(uVar4, Var0.f_2) && unk_0x5C565D8FF913FF0D())
					{
						if (func_32(uVar4, &bVar5))
						{
							unk_0x0AB574163629C3BD(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB24D3BF5DABD13AA(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_32(var uParam0, var uParam1)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(uParam0))
		{
			if (unk_0x94482DCC4926EF60(uParam0))
			{
				unk_0xC53606C390BE2727(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x67F42C4B7B64C593(uParam0, 0))
		{
			if (unk_0x4A478FA962FF575A(uParam0))
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
	if (iLocal_53)
	{
		unk_0x6989DACCC7A558AE("mini@prostitutes@sexlow_veh");
		unk_0x6989DACCC7A558AE("mini@prostitutes@sexnorm_veh");
		unk_0x6989DACCC7A558AE("mini@prostitutes@sexlow_veh_first_person");
		unk_0x6989DACCC7A558AE("mini@prostitutes@sexnorm_veh_first_person");
	}
	func_36();
	func_3();
	if (unk_0x1995B52453EF6537())
	{
		func_4();
	}
	else
	{
		unk_0xD2313F680EE374D3("pb_prostitute", 1);
	}
	Global_2494149.f_4 = 0;
	func_35();
}

void func_35()
{
	unk_0x01DFCA3621B68C4A();
}

void func_36()
{
	Global_2433082.f_655.f_10 = 0;
}

void func_37(struct<20> Param0)
{
	func_40(func_41(Param0.f_0), Param0);
	func_38(0, -1, 0);
	unk_0x47DDB3A546F48091(&Local_55, 97);
	if (unk_0x1995B52453EF6537())
	{
		func_4();
	}
	else
	{
		unk_0xD2313F680EE374D3("pb_prostitute", 1);
	}
	unk_0x7E85CEE862B85A74(0);
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1E6D5854F5CCAE3F();
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
				if (!unk_0x1995B52453EF6537())
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
			else if (!unk_0x92DD6B9655D31C6A())
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
		iVar0 = unk_0x1E6D5854F5CCAE3F();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1995B52453EF6537())
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
	else if (!unk_0x92DD6B9655D31C6A())
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
	return Global_1315206;
}

void func_40(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1995B52453EF6537())
	{
		func_35();
	}
	unk_0x6AFFC4188D3C82E8(uParam0, 0, Param1.f_16);
}

int func_41(int iParam0)
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
		
		case 106:
			return 32;
		
		case 107:
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
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 113:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 117:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 2;
		
		case 129:
			return 1;
		
		case 125:
			return 2;
		
		case 126:
			return 4;
		
		case 127:
			return 2;
		
		case 128:
			return 2;
		
		case 110:
			return 1;
		
		case 130:
			return 2;
		
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 0;
		
		case 140:
			return 1;
		
		case 137:
			return 4;
		
		case 138:
			return 16;
		
		case 139:
			return 32;
		
		default:
	}
	return 0;
}

