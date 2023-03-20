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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int* iLocal_38 = NULL;
	int iLocal_39 = 0;
	int* iLocal_40 = NULL;
	int* iLocal_41 = NULL;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_39 = joaat("blimp");
	iLocal_42 = joaat("s_m_m_pilot_02");
	iLocal_44 = joaat("buzzard");
	if (unk_0xB16FCE9DDC7BA182())
	{
		unk_0xD4E8E24955024033(500);
	}
	if (unk_0xC968670BFACE42D9(18))
	{
		func_18();
	}
	unk_0xAA5F02DB48D704B9(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0xBE6B23FFA53FB442(255, 255, 255, 255);
		unk_0x07C837F9A01C34C9(0.75f, 0.9f);
		unk_0x63145D9C883A1A70(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0xBE6B23FFA53FB442(255, 255, 255, 255);
		unk_0x07C837F9A01C34C9(0.4f, 0.45f);
		unk_0x63145D9C883A1A70(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0x7239B21A38F536BA(iLocal_38))
	{
		if ((unk_0x5F9532F3B5CC2551(iLocal_38) || unk_0xEEF059FAD016D209(iLocal_38) <= 0) || unk_0xC45D23BAF168AAB8(iLocal_38) <= 0f)
		{
			func_9(&iLocal_40);
			if (unk_0x1C8A4C2C19E68EEC(iLocal_38))
			{
				unk_0x54833611C17ABDEA(iLocal_38);
			}
			if (iLocal_45 == 1)
			{
				Var0 = { unk_0x3FEF770D40960D5A(iLocal_38, false) };
				func_8(Var0);
			}
			if (iLocal_45 == 1)
			{
				func_7(&iLocal_41);
				func_4(&iLocal_38);
			}
			else
			{
				func_3(&iLocal_41, 1, 0, 1);
				func_2(&iLocal_38);
			}
		}
		else if (unk_0x1C8A4C2C19E68EEC(iLocal_38))
		{
			unk_0x6683AB880E427778(iLocal_38, 0.25f);
		}
	}
}

void func_2(int* iParam0)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		unk_0x5F9532F3B5CC2551(*iParam0);
		if (unk_0x0A7B270912999B3C(*iParam0) && unk_0xDDE6DF5AE89981D2(*iParam0, true))
		{
			unk_0x629BFA74418D6239(iParam0);
		}
	}
}

void func_3(int* iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(*iParam0))
		{
			unk_0x0DC7CABAB1E9B67E(*iParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x176CECF6F920D707(*iParam0);
			}
			unk_0x971D38760FBC02EF(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x9F8AA94D6D97DBF4(*iParam0, false);
			}
		}
		unk_0x2595DD4236549CE3(iParam0);
	}
}

void func_4(int* iParam0)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (!unk_0x0A7B270912999B3C(*iParam0))
		{
			unk_0xAD738C3085FE7E11(*iParam0, true, false);
		}
		if (func_6(*iParam0))
		{
			if (unk_0x0A7B270912999B3C(*iParam0) && unk_0xDDE6DF5AE89981D2(*iParam0, true))
			{
				if (func_5(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), *iParam0, false))
					{
						unk_0x629BFA74418D6239(iParam0);
						return;
					}
				}
				unk_0xEA386986E786A54F(iParam0);
			}
		}
		else
		{
			if (func_5(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), *iParam0, false))
				{
					unk_0x629BFA74418D6239(iParam0);
					return;
				}
			}
			unk_0xEA386986E786A54F(iParam0);
		}
	}
}

int func_5(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_6(int iParam0)
{
	if (func_5(iParam0))
	{
		if (unk_0x4C241E39B23DF959(iParam0, false))
		{
			if (!unk_0x28D3FED7190D3A0B(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int* iParam0)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(*iParam0))
		{
			unk_0x0DC7CABAB1E9B67E(*iParam0, 0);
		}
		if (!unk_0x0A7B270912999B3C(*iParam0))
		{
			unk_0xAD738C3085FE7E11(*iParam0, true, false);
		}
		unk_0x9614299DCB53E54B(iParam0);
	}
}

void func_8(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2[12];
	
	iVar1 = 12;
	Var2[0 /*3*/] = { 5f, 0f, 0f };
	Var2[1 /*3*/] = { 0f, 5f, 0f };
	Var2[2 /*3*/] = { 0f, 0f, 5f };
	Var2[3 /*3*/] = { 5f, 5f, 0f };
	Var2[4 /*3*/] = { 5f, 0f, 5f };
	Var2[5 /*3*/] = { 0f, 5f, 5f };
	Var2[6 /*3*/] = { 20f, 0f, 0f };
	Var2[7 /*3*/] = { 0f, 20f, 0f };
	Var2[8 /*3*/] = { 0f, 0f, 20f };
	Var2[9 /*3*/] = { 20f, 20f, 0f };
	Var2[10 /*3*/] = { 20f, 0f, 20f };
	Var2[11 /*3*/] = { 0f, 20f, 20f };
	unk_0xE3AD2BDBAEE269AC(Param0, 8, 1f, 1, 0, 1065353216);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0xE3AD2BDBAEE269AC(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216);
		iVar0++;
	}
}

void func_9(int* iParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(*iParam0))
	{
		unk_0x4F7D8A9BFB0B43E9(*iParam0, false);
		unk_0x86A652570E5F25DD(iParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x25FBB336DF1804CB(sParam2);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&iLocal_43);
	unk_0x963D27A58DF860AC(iLocal_44);
	while (!unk_0x98A4EB5D89A0C952(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(iLocal_38))
	{
		iLocal_43 = unk_0xAF35D0D2583051B0(iLocal_44, unk_0x1899F328B0E12848(iLocal_38, 50f, 0f, 15f), 0f, 1, 1);
		unk_0xA178472EBB8AE60D(iLocal_43);
		func_12(iLocal_43, iLocal_38);
		if (func_5(unk_0xD80958FC74E988A6()))
		{
			unk_0xF75B0D629E1C063D(unk_0xD80958FC74E988A6(), iLocal_43, -1);
			unk_0x6D0858B8EDFD2B7D(0f, 1f);
			unk_0xB4EC2312F4E5B1F1(0f);
			unk_0xA56F01F3765B93A0(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 500f, true, false, false, false);
		}
	}
	unk_0xE532F5D78798DAAB(iLocal_44);
}

void func_12(int iParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = func_13(unk_0x3FEF770D40960D5A(iParam0, true), unk_0x3FEF770D40960D5A(iParam1, true), 1);
	unk_0x8E2530AA8ADA980E(iParam0, fVar0);
}

float func_13(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x8927CBF9D22261A4(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()
{
	func_9(&iLocal_40);
	if (func_6(iLocal_38))
	{
		iLocal_40 = func_15(iLocal_38, 1, 5);
	}
}

int func_15(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(iParam0))
	{
		iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
		unk_0xAE9FC9EF6A9FAC79(iVar0, iParam2);
		unk_0xD38744167B2FA257(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0x963D27A58DF860AC(iLocal_42);
	while (!unk_0x98A4EB5D89A0C952(iLocal_42))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(iLocal_38))
	{
		iLocal_41 = unk_0x7DD959874C1FD534(iLocal_38, 26, iLocal_42, -1, true, true);
		if (func_5(iLocal_41))
		{
			unk_0x9F8AA94D6D97DBF4(iLocal_41, true);
			unk_0x1913FE4CBF41C463(iLocal_41, 118, false);
			unk_0x1913FE4CBF41C463(iLocal_41, 29, false);
			unk_0x1913FE4CBF41C463(iLocal_41, 116, false);
		}
	}
	if (func_6(iLocal_38))
	{
		unk_0x3F878F92B3A7A071(iLocal_38, 1, "Blimp_City", true);
	}
	unk_0xE532F5D78798DAAB(iLocal_42);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(iLocal_38) && unk_0x1C8A4C2C19E68EEC(iLocal_38))
	{
		unk_0x54833611C17ABDEA(iLocal_38);
	}
	func_9(&iLocal_40);
	func_7(&iLocal_41);
	func_4(&iLocal_38);
	unk_0x963D27A58DF860AC(iLocal_39);
	unk_0xAF514CABE74CBF15(1, "Blimp_City");
	while (!unk_0x98A4EB5D89A0C952(iLocal_39) || !unk_0x300D614A4C785FC4(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0xF0F2103EFAF8CBA7(unk_0x21543C612379DB3C(1, "Blimp_City"), 0f) };
	iLocal_38 = unk_0xAF35D0D2583051B0(iLocal_39, unk_0x92523B76657A517D(unk_0x21543C612379DB3C(1, "Blimp_City"), 0f), Var0.f_2, 1, 1);
	unk_0xE532F5D78798DAAB(iLocal_39);
}

void func_18()
{
	if (func_6(iLocal_38) && unk_0x1C8A4C2C19E68EEC(iLocal_38))
	{
		unk_0x54833611C17ABDEA(iLocal_38);
	}
	unk_0xF1160ACCF98A3FC8(1, "Blimp_city");
	func_9(&iLocal_40);
	func_3(&iLocal_41, 1, 0, 1);
	func_2(&iLocal_38);
	func_2(&iLocal_43);
	unk_0xE532F5D78798DAAB(iLocal_42);
	unk_0xE532F5D78798DAAB(iLocal_39);
	unk_0xE532F5D78798DAAB(iLocal_44);
	unk_0xAA5F02DB48D704B9(6);
	unk_0x1090044AD1DA76FA();
}

