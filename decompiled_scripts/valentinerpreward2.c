#region Local Var
	char* sLocal_0 = NULL;
	var uLocal_1 = 0;
	bool bLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	struct<3> Local_14 = { 0, 0, 0 } ;
	struct<3> Local_17 = { 0, 0, 0 } ;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	bool bLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	bool bLocal_40 = 0;
	int iLocal_41 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "BG_NG 1.31.18";
	iLocal_6 = 1;
	bLocal_22 = true;
	iLocal_24 = -1;
	iLocal_37 = -1;
	iLocal_38 = -1;
	iLocal_39 = -1;
	iLocal_41 = -1;
	unk_0x8A10FCF639EC0104(0);
	unk_0xBD9A2AF38E96A0ED();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1318843 = unk_0xC7C6DDDE84A8E734(sLocal_0);
	iVar0 = unk_0x9D40BBF80D8F5E8A() + 10000;
	while (unk_0x9D40BBF80D8F5E8A() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_108())
		{
			func_107();
			if (bLocal_2)
			{
				unk_0x1C00A83A6321F5E9(0f, 0.23f);
				unk_0x63EBA277B22A4C2D(255, 255, 255, 255);
				func_106(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		if (unk_0x00AAD79B42B3E036())
		{
			func_105();
			func_104();
			func_103();
			func_102();
			func_88();
			func_82();
			func_79();
			func_78();
			func_76();
			func_75();
			func_69();
			func_62();
			func_51();
			func_48();
			func_46();
			func_35();
			func_34();
			func_29();
			func_28();
			func_27();
			func_16();
		}
		func_13();
		func_9();
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x52F20802944F8DCE();
}

void func_1()
{
	if ((unk_0x00AAD79B42B3E036() && !unk_0x6B042133C9334B77()) && unk_0xD18C3CF631455087(unk_0x3F80C6638E3A1A90()))
	{
		if ((func_8(unk_0x3F80C6638E3A1A90(), 1, 1) && func_7(unk_0x3F80C6638E3A1A90(), 2)) && !func_5(unk_0x3F80C6638E3A1A90()))
		{
			if (!func_2(unk_0x3F80C6638E3A1A90(), 1))
			{
				if (iLocal_6)
				{
					if (!unk_0xF6917DE0E003509D(&(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_72)))
					{
						StringCopy(&(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_72), "", 64);
					}
					iLocal_6 = 0;
				}
			}
			else
			{
				iLocal_6 = 1;
			}
		}
	}
	else
	{
		iLocal_6 = 1;
	}
}

bool func_2(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_4(iParam0))
		{
			return 0;
		}
	}
	return Global_1607618[iParam0 /*106*/].f_8 != func_3();
}

int func_3()
{
	return -1;
}

int func_4(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (Global_1607618[iParam0 /*106*/].f_8 != func_3())
		{
			return Global_1607618[iParam0 /*106*/].f_8 == iParam0;
		}
	}
	return 0;
}

int func_5(int iParam0)
{
	if (!func_7(iParam0, 2))
	{
		return 1;
	}
	if (func_7(iParam0, 1))
	{
		return 1;
	}
	if (func_6(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0)
{
	return Global_1607618[iParam0 /*106*/].f_8.f_17;
}

bool func_7(int iParam0, int iParam1)
{
	return unk_0xB519E5386FBF69E5(Global_1607618[iParam0 /*106*/].f_8.f_4, iParam1);
}

int func_8(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xD18C3CF631455087(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2E6D4A0CE8AD9494(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426494.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x00AAD79B42B3E036())
	{
		if (!iLocal_5)
		{
			if (func_8(unk_0x3F80C6638E3A1A90(), 1, 1))
			{
				iLocal_5 = 1;
			}
		}
		else
		{
			iVar0 = unk_0x3F80C6638E3A1A90();
			if (iVar0 != -1 && Global_2426494.f_3[iVar0])
			{
				if (((!unk_0x6B042133C9334B77() && !unk_0xB519E5386FBF69E5(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_4, 30)) && Global_2457699.f_4638 != unk_0x3F80C6638E3A1A90()) && !func_10(unk_0x3F80C6638E3A1A90(), 0))
				{
					if ((unk_0xB519E5386FBF69E5(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_4, 2) && !unk_0xB519E5386FBF69E5(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_4, 1)) && Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_17 == 0)
					{
						unk_0x6BC0ACD0673ACEBE(Global_1312746, &iVar1, &iVar2);
						if (iVar1 != 0 && iVar2 != 0)
						{
							if (Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8 == func_3())
							{
								if (!func_8(unk_0x3F80C6638E3A1A90(), 1, 1))
								{
									unk_0xA3C53804BDB68ED2(0, 1);
								}
							}
						}
					}
				}
				else
				{
					iLocal_5 = 0;
				}
			}
			else
			{
				iLocal_5 = 0;
			}
		}
	}
	else
	{
		iLocal_5 = 0;
	}
}

bool func_10(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		bVar0 = func_11(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586079[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD18C3CF631455087(iParam0))
		{
			bVar0 = unk_0x2CC717AC6CF51F8F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_11(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
	}
	if (Global_1315887[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_12()
{
	return Global_1312746;
}

void func_13()
{
	int iVar0;
	
	if ((unk_0x00AAD79B42B3E036() && !unk_0x6B042133C9334B77()) && unk_0x3F80C6638E3A1A90() != -1)
	{
		if (Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/] == 6)
		{
			if (!Global_2426494.f_2)
			{
				iVar0 = func_14(unk_0x3F80C6638E3A1A90());
				if ((iVar0 == 148 || iVar0 == 163) || iVar0 == 160)
				{
					Global_2426494.f_2 = 1;
					iLocal_4 = 1;
				}
			}
		}
		else if (iLocal_4)
		{
			if (Global_2426494.f_2)
			{
				Global_2426494.f_2 = 0;
			}
			iLocal_4 = 0;
		}
	}
	else
	{
		iLocal_4 = 0;
	}
}

int func_14(int iParam0)
{
	if (func_15(iParam0, 0))
	{
		return Global_1607618[iParam0 /*106*/].f_8.f_26;
	}
	return -1;
}

int func_15(int iParam0, int iParam1)
{
	if (Global_1607618[iParam0 /*106*/].f_8.f_26 != -1 || (iParam1 && Global_1607618[iParam0 /*106*/].f_8.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

void func_16()
{
	if (unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0xFF6891E21E7FC193(joaat("pausemenu_multiplayer")) == 0 && !unk_0x6B042133C9334B77())
		{
			if (Global_1312416.f_1)
			{
				func_17();
			}
		}
	}
}

void func_17()
{
	if (Global_1312416.f_1 == 1)
	{
		func_18(0);
		Global_1312416.f_1 = 0;
	}
}

void func_18(int iParam0)
{
	if (func_26())
	{
		if (iParam0 == 1)
		{
			if (Global_2457699.f_4246 == -1)
			{
				Global_2457699.f_4246 = 60000;
			}
			func_25(&(Global_2457699.f_4244), 0, 0);
			if (Global_2457699.f_4249 == -1)
			{
				Global_2457699.f_4249 = 10000;
			}
			func_25(&(Global_2457699.f_4247), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_24();
		}
		if ((!unk_0x6B042133C9334B77() && !func_23()) && !func_19(unk_0x3F80C6638E3A1A90()))
		{
			Global_976339 = 0;
		}
		Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_7 = 0;
	}
}

int func_19(int iParam0)
{
	if (func_20(iParam0, 1))
	{
		if (Global_1586079[iParam0 /*408*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_20(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_21(iParam0))
		{
			return 1;
		}
	}
	if (Global_1586079[iParam0 /*408*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_21(int iParam0)
{
	return func_22(iParam0);
}

bool func_22(int iParam0)
{
	return unk_0xB519E5386FBF69E5(Global_1586079[iParam0 /*408*/].f_13.f_1, 0);
}

bool func_23()
{
	return Global_2432717.f_712;
}

void func_24()
{
	if (unk_0x00AAD79B42B3E036())
	{
		if (!func_26())
		{
			if (func_8(unk_0x3F80C6638E3A1A90(), 1, 0))
			{
				unk_0xA57E5D17BDE26B40(unk_0xE7869D5D7816A9B6(), 1);
				unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 342, 0);
				unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 122, 0);
			}
			unk_0xC3934CF0279767BB(unk_0x3F80C6638E3A1A90(), 1f);
			unk_0xED40A966289B75CA(0);
			unk_0x9AFB07ACA1457620(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0x1513F08645184D59(0);
			}
		}
		else
		{
			if (func_8(unk_0x3F80C6638E3A1A90(), 1, 1))
			{
				unk_0xA57E5D17BDE26B40(unk_0xE7869D5D7816A9B6(), 0);
				unk_0x36EE5CBF45EC4826(unk_0xE7869D5D7816A9B6(), joaat("weapon_unarmed"), 1);
				unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 342, 1);
				unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 122, 1);
				unk_0xC3934CF0279767BB(unk_0x3F80C6638E3A1A90(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0x1513F08645184D59(1);
				}
			}
			unk_0xED40A966289B75CA(1);
			unk_0x9AFB07ACA1457620(0);
		}
	}
}

void func_25(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x00AAD79B42B3E036() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xC7F926248AF8587B();
		}
		else
		{
			*uParam0 = unk_0xDBD31D1E0E5F2049();
		}
	}
	else
	{
		*uParam0 = unk_0x9D40BBF80D8F5E8A();
	}
	uParam0->f_1 = 1;
}

bool func_26()
{
	return Global_1312416;
}

void func_27()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iLocal_37;
	if (Global_67887)
	{
		iVar0 = unk_0x67D644FA4E5368FE(2);
		if (iVar0 == 0)
		{
		}
		else if (iVar0 < iLocal_37)
		{
			if (iLocal_39 <= 0)
			{
				iLocal_39 = 0;
			}
		}
	}
	switch (iLocal_39)
	{
		case 0:
			bLocal_40 = unk_0xB519E5386FBF69E5(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_1, 0);
			iLocal_41 = Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_27;
			unk_0x9956FB0E4B50ECB8(&(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_1), 0);
			Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_27 = 152;
			iLocal_38 = iLocal_37;
			iLocal_39 = 1;
			break;
		
		case 1:
			bVar1 = false;
			if (!Global_67887)
			{
				bVar1 = true;
			}
			if (iLocal_38 != -1 && iVar0 > iLocal_38)
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				if (bLocal_40)
				{
					unk_0x9956FB0E4B50ECB8(&(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_1), 0);
				}
				else
				{
					unk_0x73817D396768E4C6(&(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_1), 0);
				}
				Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_27 = iLocal_41;
				iLocal_41 = -1;
				iLocal_38 = -1;
				iLocal_39 = -1;
			}
			break;
		
		case -1:
			break;
		
		default:
			iLocal_39 = -1;
			break;
	}
	iLocal_37 = iVar0;
}

void func_28()
{
	unk_0x9956FB0E4B50ECB8(&uLocal_1, 3);
	if (Global_1315842 == 64 && unk_0xFF6891E21E7FC193(joaat("golf_mp")) > 0)
	{
		Global_1315841 = 0;
		Global_1315842 = 65;
	}
}

void func_29()
{
	if (!func_33(&uLocal_34))
	{
		func_32(&uLocal_34, 1, 0);
	}
	else if (func_31(&uLocal_34, 2000, 1))
	{
		if (func_8(unk_0x3F80C6638E3A1A90(), 1, 1))
		{
			if (!unk_0xDF16A5D5874BD0E4())
			{
				if (!unk_0xB756E8D139BDE124(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
					{
						if (func_31(&uLocal_34, 5000, 1))
						{
							unk_0x60365B5AF8BF1FFA(unk_0xE7869D5D7816A9B6(), 1, 0);
							func_30(&uLocal_34);
						}
					}
					else
					{
						func_30(&uLocal_34);
					}
				}
				else
				{
					func_30(&uLocal_34);
				}
			}
			else
			{
				func_30(&uLocal_34);
			}
		}
		else
		{
			func_30(&uLocal_34);
		}
	}
	if (!iLocal_36)
	{
		if (unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 4) && unk_0xB519E5386FBF69E5(Global_2457699.f_355.f_5, 0))
		{
			iLocal_36 = 1;
		}
	}
	else if (unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 4))
	{
		if (unk_0xB519E5386FBF69E5(Global_2457699.f_355.f_5, 4))
		{
			if (!Global_1695165)
			{
				unk_0x73817D396768E4C6(&(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6), 4);
			}
			else
			{
				iLocal_36 = 0;
			}
		}
		else if (!unk_0xB519E5386FBF69E5(Global_2457699.f_355.f_5, 0))
		{
			iLocal_36 = 0;
		}
	}
	else
	{
		iLocal_36 = 0;
	}
}

void func_30(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_31(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_32(uParam0, bParam2, 0);
	if (unk_0x00AAD79B42B3E036() && !bParam2)
	{
		if (unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(unk_0x9D40BBF80D8F5E8A(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_32(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x00AAD79B42B3E036() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xC7F926248AF8587B();
			}
			else
			{
				*uParam0 = unk_0xDBD31D1E0E5F2049();
			}
		}
		else
		{
			*uParam0 = unk_0x9D40BBF80D8F5E8A();
		}
		uParam0->f_1 = 1;
	}
}

bool func_33(var uParam0)
{
	return uParam0->f_1;
}

void func_34()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (((((!unk_0xB519E5386FBF69E5(Global_91077.f_1286[39], 6) && !unk_0xB519E5386FBF69E5(Global_91077.f_1286[40], 6)) && !unk_0xB519E5386FBF69E5(Global_91077.f_1286[41], 6)) && !unk_0xB519E5386FBF69E5(Global_91077.f_1286[42], 6)) && !unk_0xB519E5386FBF69E5(Global_91077.f_1286[43], 6)) && !unk_0xB519E5386FBF69E5(Global_91077.f_1286[44], 6))
		{
		}
		else if (Global_91077.f_389 == 42 || (Global_91077.f_389 == 2 && Global_17257.f_5529 == 69))
		{
			if (Global_262145.f_10196 == 100)
			{
				Global_262145.f_10196 = 90;
			}
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (Global_262145.f_10196 == 90)
		{
			Global_262145.f_10196 = 100;
		}
	}
}

void func_35()
{
	struct<6> Var0;
	
	if (unk_0xFD563D1BF81A2CB8())
	{
		return;
	}
	if (unk_0x6B042133C9334B77())
	{
		if (iLocal_33)
		{
			if (unk_0xD18C3CF631455087(unk_0x3F80C6638E3A1A90()))
			{
				if (func_45())
				{
					iLocal_33 = 0;
				}
				else if (((!func_10(unk_0x3F80C6638E3A1A90(), 0) && !func_42()) && !func_41()) && !func_40())
				{
					if (Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_84 == 3)
					{
						Var0 = { func_39() };
						if (unk_0xF6917DE0E003509D(&Var0) && !func_38())
						{
							iLocal_33 = 0;
							func_37();
							iLocal_32 = Global_262145.f_4128;
							Global_262145.f_4128 = 0;
							iLocal_31 = 1;
						}
						iLocal_33 = 0;
					}
					else if (Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_84 >= 3)
					{
						iLocal_33 = 0;
					}
				}
				else if (iLocal_33)
				{
					iLocal_33 = 0;
				}
			}
		}
	}
	else
	{
		if (iLocal_31)
		{
			if (iLocal_32 != 0)
			{
				Global_262145.f_4128 = iLocal_32;
			}
			iLocal_32 = 0;
			iLocal_31 = 0;
		}
		if (func_36())
		{
			if (Global_2441728)
			{
				if (!unk_0xB519E5386FBF69E5(Global_2432717.f_2, 5))
				{
					unk_0x9956FB0E4B50ECB8(&(Global_2432717.f_2), 5);
					unk_0x9956FB0E4B50ECB8(&Global_2432717, 21);
					iLocal_33 = 1;
				}
			}
			else if (iLocal_33)
			{
				iLocal_33 = 0;
			}
		}
		else if (iLocal_33)
		{
			iLocal_33 = 0;
		}
	}
}

bool func_36()
{
	return unk_0xB519E5386FBF69E5(Global_2432717.f_2, 11);
}

void func_37()
{
	Global_1696037.f_3 = 1;
}

bool func_38()
{
	return unk_0xB519E5386FBF69E5(Global_2432717, 28);
}

struct<6> func_39()
{
	return Global_2432717.f_730;
}

bool func_40()
{
	return Global_1696037.f_3;
}

bool func_41()
{
	return unk_0xB519E5386FBF69E5(Global_2432717, 3);
}

int func_42()
{
	struct<13> Var0;
	
	if (unk_0x6B042133C9334B77())
	{
		return func_44();
	}
	else if (unk_0x4E2C59AC94294AFF())
	{
		Var0 = { func_43() };
		return unk_0x8378536348C9E728(&Var0);
	}
	return 0;
}

struct<13> func_43()
{
	struct<13> Var0;
	
	unk_0x03210B5AE7903ADF(&Var0, 13);
	return Var0;
}

bool func_44()
{
	return unk_0xB519E5386FBF69E5(Global_2433481.f_1.f_2808, 3);
}

bool func_45()
{
	return Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_177 != 0;
}

void func_46()
{
	int iVar0;
	int iVar1;
	struct<21> Var2;
	int iVar57;
	
	Var2.f_20 = 20;
	iVar0 = 0;
	while (iVar0 < unk_0xE4E91039B15CA110(1))
	{
		iVar1 = unk_0xCEDD7FE4546BFC4F(1, iVar0);
		switch (iVar1)
		{
			case 152:
				unk_0x0586E3C97DD61FE4(1, iVar0, &Var2, 55);
				iVar57 = 0;
				iVar57 = 0;
				while (iVar57 < Var2.f_19)
				{
					if (unk_0x04E7E853E31F41A3(unk_0x45FC2042AB85403B(Var2.f_20[iVar57]), "freemode"))
					{
						func_47(Var2.f_16);
					}
					iVar57++;
				}
				break;
		}
		iVar0++;
	}
}

void func_47(int iParam0)
{
	if (iParam0 != unk_0x3F80C6638E3A1A90())
	{
		unk_0x55FCC0C390620314(unk_0x3F80C6638E3A1A90(), iParam0, 1);
		unk_0x55FCC0C390620314(iParam0, unk_0x3F80C6638E3A1A90(), 1);
		unk_0x73817D396768E4C6(&(Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_68), iParam0);
	}
}

void func_48()
{
	bool bVar0;
	
	if (iLocal_29)
	{
		iLocal_29 = 0;
		if (!func_8(unk_0x3F80C6638E3A1A90(), 1, 1))
		{
			bVar0 = true;
		}
	}
	if (func_8(unk_0x3F80C6638E3A1A90(), 1, 1))
	{
		if (func_50())
		{
			if (Global_1312416.f_1 || Global_1312416)
			{
				if (unk_0x4C0203C9C5CF4108() == 0)
				{
					iLocal_29 = 1;
				}
			}
		}
		if (iLocal_30)
		{
			iLocal_30 = 0;
			unk_0xA57E5D17BDE26B40(unk_0xE7869D5D7816A9B6(), 1);
			unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 342, 0);
			unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 122, 0);
		}
	}
	if (bVar0)
	{
		if (unk_0xFF6891E21E7FC193(joaat("am_pi_menu")) > 0)
		{
			unk_0x95559E38029A8A39();
			func_17();
			iLocal_30 = 1;
			unk_0x106C8CF92B6D1DA0();
			unk_0x9BB35AD862694C08(func_49("AM_PI_MENU"));
		}
	}
}

var func_49(char* sParam0)
{
	var uVar0;
	bool bVar1;
	
	unk_0x106C8CF92B6D1DA0();
	while (!bVar1)
	{
		uVar0 = unk_0x79341ED55ECF04FD();
		if (unk_0x04E7E853E31F41A3(unk_0x45FC2042AB85403B(uVar0), sParam0))
		{
			bVar1 = true;
		}
	}
	return uVar0;
}

int func_50()
{
	if (Global_2426494.f_615.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_51()
{
	int iVar0;
	int iVar1;
	
	if ((((((func_8(unk_0x3F80C6638E3A1A90(), 1, 1) && Global_91077.f_297 == 0) && unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90())) && func_58() == 0) && !unk_0x6B042133C9334B77()) && !func_55(unk_0x3F80C6638E3A1A90())) && !func_54(unk_0x3F80C6638E3A1A90(), 1))
	{
		if (unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), uLocal_28)) > 10000)
		{
			iVar1 = func_53();
			iVar0 = 0;
			while (iVar0 < 11)
			{
				if (Global_2097152[iVar1 /*10169*/].f_7698.f_1217[iVar0])
				{
					if (((((func_52(unk_0x0F7E74F307921734(unk_0xE7869D5D7816A9B6(), 11, Global_2097152[iVar1 /*10169*/].f_7698.f_707[iVar0 /*13*/][11], Global_2097152[iVar1 /*10169*/].f_7698.f_851[iVar0 /*13*/][11])) || func_52(unk_0x0F7E74F307921734(unk_0xE7869D5D7816A9B6(), 4, Global_2097152[iVar1 /*10169*/].f_7698.f_707[iVar0 /*13*/][4], Global_2097152[iVar1 /*10169*/].f_7698.f_851[iVar0 /*13*/][4]))) || func_52(unk_0x0F7E74F307921734(unk_0xE7869D5D7816A9B6(), 6, Global_2097152[iVar1 /*10169*/].f_7698.f_707[iVar0 /*13*/][6], Global_2097152[iVar1 /*10169*/].f_7698.f_851[iVar0 /*13*/][6]))) || func_52(unk_0x0F7E74F307921734(unk_0xE7869D5D7816A9B6(), 7, Global_2097152[iVar1 /*10169*/].f_7698.f_707[iVar0 /*13*/][7], Global_2097152[iVar1 /*10169*/].f_7698.f_851[iVar0 /*13*/][7]))) || func_52(unk_0x0F7E74F307921734(unk_0xE7869D5D7816A9B6(), 8, Global_2097152[iVar1 /*10169*/].f_7698.f_707[iVar0 /*13*/][8], Global_2097152[iVar1 /*10169*/].f_7698.f_851[iVar0 /*13*/][8]))) || func_52(unk_0xEFE9C43397BD1F08(unk_0xE7869D5D7816A9B6(), 0, Global_2097152[iVar1 /*10169*/].f_7698.f_995[iVar0 /*10*/][0], Global_2097152[iVar1 /*10169*/].f_7698.f_1106[iVar0 /*10*/][0])))
					{
						Global_2097152[iVar1 /*10169*/].f_7698.f_1217[iVar0] = 0;
					}
				}
				iVar0++;
			}
			if (((((func_52(unk_0x0F7E74F307921734(unk_0xE7869D5D7816A9B6(), 11, unk_0x0CBEED266436AEFF(unk_0xE7869D5D7816A9B6(), 11), unk_0xB9111DA78E2971F6(unk_0xE7869D5D7816A9B6(), 11))) || func_52(unk_0x0F7E74F307921734(unk_0xE7869D5D7816A9B6(), 4, unk_0x0CBEED266436AEFF(unk_0xE7869D5D7816A9B6(), 4), unk_0xB9111DA78E2971F6(unk_0xE7869D5D7816A9B6(), 4)))) || func_52(unk_0x0F7E74F307921734(unk_0xE7869D5D7816A9B6(), 6, unk_0x0CBEED266436AEFF(unk_0xE7869D5D7816A9B6(), 6), unk_0xB9111DA78E2971F6(unk_0xE7869D5D7816A9B6(), 6)))) || func_52(unk_0x0F7E74F307921734(unk_0xE7869D5D7816A9B6(), 7, unk_0x0CBEED266436AEFF(unk_0xE7869D5D7816A9B6(), 7), unk_0xB9111DA78E2971F6(unk_0xE7869D5D7816A9B6(), 7)))) || func_52(unk_0x0F7E74F307921734(unk_0xE7869D5D7816A9B6(), 8, unk_0x0CBEED266436AEFF(unk_0xE7869D5D7816A9B6(), 8), unk_0xB9111DA78E2971F6(unk_0xE7869D5D7816A9B6(), 8)))) || func_52(unk_0xEFE9C43397BD1F08(unk_0xE7869D5D7816A9B6(), 0, unk_0x83058EDD668C4856(unk_0xE7869D5D7816A9B6(), 0), unk_0x377FCFBE04F73608(unk_0xE7869D5D7816A9B6(), 0))))
			{
				if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == joaat("mp_m_freemode_01"))
				{
					unk_0x497AFDFE79EEFE4F(unk_0xE7869D5D7816A9B6(), 3, 97, 0, 0);
				}
				else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == joaat("mp_f_freemode_01"))
				{
					unk_0x497AFDFE79EEFE4F(unk_0xE7869D5D7816A9B6(), 3, 112, 0, 0);
				}
				Global_2456611 = 1;
			}
			uLocal_28 = unk_0xC7F926248AF8587B();
		}
	}
	else
	{
		uLocal_28 = unk_0xBB2C6A88355C6C4A(unk_0xC7F926248AF8587B(), 5000);
	}
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case -1697490107:
		case 1244356498:
		case 863777332:
		case 631674505:
		case -960480251:
		case 1494999230:
		case 1869352282:
		case -13877721:
		case 318989781:
		case joaat("DLC_MP_APA_F_JBIB_4_2"):
		case 2034437041:
		case joaat("DLC_MP_APA_F_JBIB_6_0"):
		case joaat("DLC_MP_APA_F_JBIB_6_1"):
		case -1814618793:
		case -1651429173:
		case -1109205107:
		case -338576534:
		case -644901146:
		case 120812077:
		case joaat("DLC_MP_APA_F_JBIB_8_4"):
		case -181924378:
		case 511598738:
		case -1582242055:
		case -890095237:
		case -1106468944:
		case -766352173:
		case joaat("DLC_MP_APA_F_JBIB_10_1"):
		case 1055178230:
		case 763829051:
		case 1635609351:
		case 1338394521:
		case 1023910428:
		case -1153884555:
		case -815519388:
		case joaat("DLC_MP_APA_F_JBIB_13_0"):
		case -1491335966:
		case 1112376217:
		case 1505799307:
		case 2082926935:
		case joaat("DLC_MP_APA_F_JBIB_16_2"):
		case -705583889:
		case 852450985:
		case 826516320:
		case 495587617:
		case 2026344688:
		case -1778267292:
		case -1472958519:
		case -1313635633:
		case -1023597214:
		case -574530838:
		case -1917302634:
		case 755174499:
		case 981608289:
		case 1278495429:
		case 1578036858:
		case joaat("DLC_MP_APA_F_JBIB_25_0"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 2101691184:
		case -50873153:
		case joaat("DLC_MP_APA_F_LEGS_2_1"):
		case -1397953147:
		case 905707553:
		case -1795207349:
		case -1559893160:
		case 819398396:
		case 1076012435:
		case joaat("DLC_MP_APA_F_LEGS_4_4"):
		case joaat("DLC_MP_APA_F_LEGS_5_0"):
		case joaat("DLC_MP_APA_F_LEGS_5_1"):
		case -2132764550:
		case -210043471:
		case joaat("DLC_MP_APA_F_LEGS_5_4"):
		case joaat("DLC_MP_APA_F_LEGS_6_0"):
		case -460992432:
		case joaat("DLC_MP_APA_F_LEGS_6_2"):
		case 37522365:
		case joaat("DLC_MP_APA_F_LEGS_7_0"):
		case -310078170:
		case joaat("DLC_MP_APA_F_LEGS_8_1"):
		case joaat("DLC_MP_APA_F_LEGS_8_2"):
		case 1479240306:
		case joaat("DLC_MP_APA_F_LEGS_9_0"):
		case joaat("DLC_MP_APA_F_LEGS_12_0"):
		case -664552834:
		case -2037049630:
		case -104399548:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_APA_F_FEET_0_0"):
		case joaat("DLC_MP_APA_F_FEET_2_0"):
		case -2005924878:
		case -1264731975:
		case -958374594:
		case joaat("DLC_MP_APA_F_FEET_3_2"):
		case -1683847485:
		case joaat("DLC_MP_APA_F_FEET_4_0"):
		case 1080804486:
		case 1340826501:
		case 1236260618:
		case 1478849525:
		case 1551220777:
		case 2059205815:
		case 148019428:
		case 405583768:
		case 1852433417:
		case -1299464852:
		case -1076242424:
		case 1469187962:
		case 1698144965:
		case 2061880865:
		case joaat("DLC_MP_APA_F_SPECIAL_1_0"):
		case 285578369:
		case 474786575:
		case 223022352:
		case 386998428:
		case -388479961:
		case -744547915:
		case 1333556044:
		case 609426682:
		case -1565484621:
		case joaat("DLC_MP_APA_F_SPECIAL_3_3"):
		case 153151122:
		case -597586668:
		case joaat("DLC_MP_APA_F_TEETH_0_0"):
		case 653911448:
		case -1519558015:
		case -1509617832:
		case -552962106:
		case 571566700:
		case -801454400:
		case 1577827331:
		case 807355299:
		case joaat("DLC_MP_APA_F_SPECIAL2_1_0"):
		case 573873761:
		case 803879372:
		case -892781945:
		case -1116102680:
		case -564862562:
		case 1775069019:
		case 1550891523:
		case joaat("DLC_MP_APA_F_PHEAD_1_1"):
		case joaat("DLC_MP_APA_F_PHEAD_1_2"):
			return 1;
			break;
		
		case -672134378:
		case -484096606:
		case -681300448:
		case 257695247:
		case 550170193:
		case -360939083:
		case 895522684:
		case joaat("DLC_MP_APA_M_JBIB_4_0"):
		case -739443197:
		case 1647024774:
		case -1198403230:
		case joaat("DLC_MP_APA_M_JBIB_6_0"):
		case joaat("DLC_MP_APA_M_JBIB_6_1"):
		case 1630626729:
		case 941265276:
		case 881446284:
		case 1223489106:
		case 388895445:
		case 660058920:
		case joaat("DLC_MP_APA_M_JBIB_8_4"):
		case -1565801673:
		case -126980421:
		case -971077092:
		case -1509471686:
		case -1054605197:
		case -1798008670:
		case joaat("DLC_MP_APA_M_JBIB_10_1"):
		case -463228985:
		case 103478101:
		case -605293415:
		case -1393289558:
		case -1162694105:
		case -1738379897:
		case 101240891:
		case joaat("DLC_MP_APA_M_JBIB_13_0"):
		case -272483817:
		case 869567566:
		case -1614524187:
		case 964953190:
		case joaat("DLC_MP_APA_M_JBIB_16_2"):
		case 1585040977:
		case 1220846311:
		case -180257876:
		case 773303613:
		case -43531404:
		case -234181454:
		case -532084433:
		case 260597677:
		case -65421104:
		case -1158463868:
		case 67032006:
		case -504937326:
		case -719246586:
		case 258875295:
		case -254090631:
		case joaat("DLC_MP_APA_M_JBIB_24_0"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case -1454134696:
		case 862419088:
		case joaat("DLC_MP_APA_M_LEGS_2_1"):
		case joaat("DLC_MP_APA_M_LEGS_3_0"):
		case -1218262075:
		case -1091214220:
		case joaat("DLC_MP_APA_M_LEGS_4_1"):
		case 1651125087:
		case 1898432730:
		case joaat("DLC_MP_APA_M_LEGS_4_4"):
		case joaat("DLC_MP_APA_M_LEGS_5_0"):
		case -1435769399:
		case -1210220372:
		case -1896730922:
		case joaat("DLC_MP_APA_M_LEGS_5_4"):
		case 485903843:
		case 1251617062:
		case joaat("DLC_MP_APA_M_LEGS_6_2"):
		case 1752687841:
		case joaat("DLC_MP_APA_M_LEGS_7_0"):
		case 1100095433:
		case joaat("DLC_MP_APA_M_LEGS_8_1"):
		case joaat("DLC_MP_APA_M_LEGS_8_2"):
		case 1674798155:
		case joaat("DLC_MP_APA_M_LEGS_9_0"):
		case joaat("DLC_MP_APA_M_LEGS_11_0"):
		case -786201969:
		case -1039866806:
		case -1395344918:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_APA_M_FEET_0_0"):
		case joaat("DLC_MP_APA_M_FEET_2_0"):
		case 1515190786:
		case 1353529084:
		case 1046975089:
		case joaat("DLC_MP_APA_M_FEET_3_2"):
		case 1037209955:
		case 898422318:
		case -428623875:
		case -675964287:
		case -86515515:
		case -324975528:
		case joaat("DLC_MP_APA_M_FEET_5_0"):
		case joaat("DLC_MP_APA_M_FEET_5_1"):
		case -1370961300:
		case 61568300:
		case -773746279:
		case -311430559:
		case -546810286:
		case -1844462682:
		case -2083971303:
		case 738127742:
		case joaat("DLC_MP_APA_M_SPECIAL_1_0"):
		case -654188909:
		case -487067009:
		case -358907450:
		case 115653208:
		case -1646892999:
		case 1879018636:
		case -30928362:
		case 811071093:
		case 530666760:
		case joaat("DLC_MP_APA_M_SPECIAL_3_3"):
		case -1015276349:
		case -696597824:
		case joaat("DLC_MP_APA_M_TEETH_0_0"):
		case 1451524876:
		case -678623961:
		case -1254273277:
		case 1400019890:
		case 432404545:
		case -336716654:
		case -82784224:
		case 1296095987:
		case -510948971:
		case 1666190620:
		case 1943121439:
		case -1923624712:
		case -1626246037:
		case 718375917:
		case -679069478:
		case -1410320276:
		case joaat("DLC_MP_APA_M_PHEAD_1_1"):
		case joaat("DLC_MP_APA_M_PHEAD_1_2"):
			return 1;
			break;
	}
	return 0;
}

int func_53()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_54(int iParam0, int iParam1)
{
	if (Global_1607618[iParam0 /*106*/].f_8.f_27 != -1 || (iParam1 && Global_1607618[iParam0 /*106*/].f_8.f_26 != -1))
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0)
{
	if (func_57(iParam0))
	{
		return 1;
	}
	if (func_56(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_7(iParam0, 9);
	}
	return 0;
}

int func_57(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xB519E5386FBF69E5(Global_1607618[iVar0 /*106*/].f_1, 0);
	}
	return 0;
}

int func_58()
{
	if (func_61(1))
	{
		if (func_60())
		{
			return Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8.f_60;
		}
		else
		{
			return Global_1607618[func_59() /*106*/].f_8.f_60;
		}
	}
	return 0;
}

int func_59()
{
	return Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8;
}

bool func_60()
{
	return func_4(unk_0x3F80C6638E3A1A90());
}

bool func_61(bool bParam0)
{
	return func_2(unk_0x3F80C6638E3A1A90(), bParam0);
}

void func_62()
{
	struct<3> Var0;
	int iVar6;
	struct<3> Var7;
	int iVar13;
	
	if (func_68(unk_0x3F80C6638E3A1A90(), 0) != -1 && unk_0xFF6891E21E7FC193(joaat("am_mp_property_int")) > 0)
	{
		func_63(func_68(unk_0x3F80C6638E3A1A90(), 0), 42, &Var0, 0);
		iVar6 = unk_0xEE756BAA02761E84(Var0, 2f, joaat("prop_bong_01"), 0, 0, 1);
		unk_0x8FD11D9817727405(Var0, 2f, 0, 178, 255, 100);
		if (!unk_0xD51CFE69539DB6D8(iVar6))
		{
			func_63(func_68(unk_0x3F80C6638E3A1A90(), 0), 84, &Var7, 0);
			iVar13 = unk_0xEE756BAA02761E84(Var7, 1f, joaat("prop_wine_glass"), 0, 0, 1);
			unk_0x8FD11D9817727405(Var7, 0.5f, 0, 178, 255, 100);
			if (unk_0xD51CFE69539DB6D8(iVar13))
			{
				if (unk_0x9B5F286CC8377932(iVar13))
				{
					unk_0x20BB4B94CC6DDC9A(iVar13, 0, 1);
					unk_0xD4E454973E16D31B(&iVar13);
				}
			}
		}
	}
}

void func_63(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<6> Var0[2];
	struct<3> Var13;
	
	if (!bParam3)
	{
		Var0[0 /*6*/] = { func_67(-1) };
	}
	else
	{
		Var0[0 /*6*/] = { Global_1289922[iParam0 /*45*/].f_4 };
		Var0[0 /*6*/].f_3 = { 0f, 0f, Global_1289922[iParam0 /*45*/].f_7 };
	}
	if (!bParam3)
	{
		Var0[1 /*6*/] = { func_67(iParam0) };
	}
	else
	{
		Var0[1 /*6*/] = { Global_1289922[iParam0 /*45*/].f_4 };
		Var0[1 /*6*/].f_3 = { 0f, 0f, Global_1289922[iParam0 /*45*/].f_7 };
	}
	*uParam2 = { func_65(iParam1, 86) };
	Var13 = { *uParam2 - Var0[0 /*6*/] };
	Var13 = { func_64(Var13, -Var0[0 /*6*/].f_3.f_2) };
	Var13 = { func_64(Var13, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { unk_0xF919633EBD0639D0(Var0[1 /*6*/], 0f, Var13) };
}

Vector3 func_64(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_65(int iParam0, int iParam1)
{
	return func_66(iParam0, iParam1);
}

struct<6> func_66(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	switch (iParam1)
	{
		case 86:
			switch (iParam0)
			{
				case 451:
					Var0 = { -1412.098f, -3776.824f, 4.6095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 452:
					Var0 = { -1410.334f, -3776.322f, 4.6095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 453:
					Var0 = { -1410.334f, -3776.322f, 4.6095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 454:
					Var0 = { -1409.817f, -3774.685f, 4.6095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 455:
					Var0 = { -1409.817f, -3774.685f, 4.6095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 456:
					Var0 = { -1411.213f, -3773.381f, 4.6095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 457:
					Var0 = { -1412.801f, -3777.227f, 4.6097f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 458:
					Var0 = { -1412.741f, -3773.397f, 4.6097f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 459:
					Var0 = { -1411.074f, -3776.781f, 6.1095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 460:
					Var0 = { -1411.074f, -3776.781f, 6.1095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 461:
					Var0 = { -1409.814f, -3775.525f, 6.1095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 462:
					Var0 = { -1409.814f, -3775.525f, 6.1095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 463:
					Var0 = { -1410.314f, -3773.913f, 6.1095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 464:
					Var0 = { -1410.314f, -3773.913f, 6.1095f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 465:
					Var0 = { -1413.634f, -3776.301f, 6.3597f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 466:
					Var0 = { -1411.531f, -3773.027f, 6.3597f };
					Var0.f_3 = { 0f, 0f, 0f };
					break;
				
				case 42:
					Var0 = { -1469.304f, -3759.843f, 7.99f };
					Var0.f_3 = { 0f, 0f, 70.92f };
					break;
				
				case 84:
					Var0 = { -1481.445f, -3749.58f, 7.98f };
					Var0.f_3 = { 0f, 0f, 139.2f };
					break;
			}
			break;
	}
	return Var0;
}

struct<6> func_67(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
		case default:
			Var0 = { -1478.436f, -3753.538f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		
		case 0:
			Var0 = { -3555.115f, 1473.013f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		
		case 1:
			Var0 = { -3147.049f, 2827.088f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		
		case 2:
			Var0 = { -3277.473f, 2159.85f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		
		case 3:
			Var0 = { -2822.419f, 4054.84f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		
		case 4:
			Var0 = { -3249.849f, 3704.681f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 5:
			Var0 = { -2383.193f, 4685.003f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		
		case 6:
			Var0 = { -3224.686f, -215.9825f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		
		case 7:
			Var0 = { -3447.876f, 291.9275f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 97f };
			break;
		
		case 8:
			Var0 = { -2713.098f, -528.3185f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -33f };
			break;
		
		case 9:
			Var0 = { -1981.618f, -1537.269f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 142f };
			break;
		
		case 10:
			Var0 = { -2100.817f, -2533.233f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -143f };
			break;
		
		case 11:
			Var0 = { -1599.642f, -1891.277f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 112f };
			break;
		
		case 12:
			Var0 = { -733.6151f, -3916.985f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -168f };
			break;
		
		case 13:
			Var0 = { -363.3534f, -3568.56f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		
		case 14:
			Var0 = { -1478.436f, -3753.538f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		
		case 15:
			Var0 = { 1535.974f, -3061.877f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 62f };
			break;
		
		case 16:
			Var0 = { 2471.418f, -2430.93f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 12f };
			break;
		
		case 17:
			Var0 = { 2067.371f, -2813.01f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		
		case 18:
			Var0 = { 3021.088f, -1513.602f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		
		case 19:
			Var0 = { 3025.956f, -704.3854f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 20:
			Var0 = { 2961.863f, -2007.631f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		
		case 21:
			Var0 = { 3398.169f, 1958.521f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 77f };
			break;
		
		case 22:
			Var0 = { 3428.681f, 1202.06f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		
		case 23:
			Var0 = { 3787.83f, 2567.884f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		
		case 24:
			Var0 = { 4235.946f, 4004.252f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -118f };
			break;
		
		case 25:
			Var0 = { 4245.151f, 4595.375f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -68f };
			break;
		
		case 26:
			Var0 = { 4209.057f, 3392.705f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 27:
			Var0 = { 3738.81f, 5768.252f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -43f };
			break;
		
		case 28:
			Var0 = { 3472.966f, 6315.245f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -23f };
			break;
		
		case 29:
			Var0 = { 3693.468f, 5194.659f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 122f };
			break;
		
		case 30:
			Var0 = { 572.9806f, 7142.138f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -58f };
			break;
		
		case 31:
			Var0 = { 2024.036f, 6907.536f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -173f };
			break;
		
		case 32:
			Var0 = { 1377.296f, 6863.23f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		
		case 33:
			Var0 = { -1169.36f, 6000.214f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		
		case 34:
			Var0 = { -759.2205f, 6573.955f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -153f };
			break;
		
		case 35:
			Var0 = { -373.8432f, 6964.86f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -108f };
			break;
	}
	return Var0;
}

int func_68(int iParam0, bool bParam1)
{
	if (func_8(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			return Global_2416794[iParam0 /*303*/].f_256.f_14;
		}
		else
		{
			return Global_2416794[iParam0 /*303*/].f_256.f_15;
		}
	}
	return -1;
}

void func_69()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4[2];
	float fVar11[1];
	int iVar13;
	
	bVar0 = false;
	if ((Global_91077.f_296 > 0 && Global_91077.f_380 != -1) && func_74(Global_91077.f_380))
	{
		if (func_4(unk_0x3F80C6638E3A1A90()) && func_58() != 0)
		{
			iVar1 = unk_0xC7C6DDDE84A8E734("v_gun");
			iVar2 = unk_0xC7C6DDDE84A8E734("v_gun2");
			iVar3 = unk_0xC7C6DDDE84A8E734(func_73(Global_91077.f_380));
			if (iVar3 == iVar1)
			{
				iVar13 = 28;
				Var4[0 /*3*/] = { 19.60441f, -1111.685f, 28.60952f };
				Var4[1 /*3*/] = { 20.73643f, -1108.602f, 30.18384f };
				fVar11[0] = 1.875f;
			}
			else if (iVar3 == iVar2)
			{
				iVar13 = 29;
				Var4[0 /*3*/] = { 1694.618f, 3757.939f, 33.51782f };
				Var4[1 /*3*/] = { 1696.888f, 3755.843f, 35.08032f };
				fVar11[0] = 1.875f;
			}
			func_70(iVar13, Global_91077.f_380, &(Var4[0 /*3*/]));
			func_70(iVar13, Global_91077.f_380, &(Var4[1 /*3*/]));
			if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Var4[0 /*3*/], Var4[1 /*3*/], fVar11[0], 0, 1, 0))
			{
				switch (Global_91077.f_380)
				{
					case 28:
						if (!unk_0xB519E5386FBF69E5(Global_91077.f_1286[28], 8))
						{
							unk_0x9956FB0E4B50ECB8(&(Global_91077.f_1286[28]), 8);
							unk_0x9956FB0E4B50ECB8(&iLocal_27, 0);
							bVar0 = true;
						}
						break;
					
					case 29:
						if (!unk_0xB519E5386FBF69E5(Global_91077.f_1286[29], 8))
						{
							unk_0x9956FB0E4B50ECB8(&(Global_91077.f_1286[29]), 8);
							unk_0x9956FB0E4B50ECB8(&iLocal_27, 1);
							bVar0 = true;
						}
						break;
					
					case 30:
						if (!unk_0xB519E5386FBF69E5(Global_91077.f_1286[30], 8))
						{
							unk_0x9956FB0E4B50ECB8(&(Global_91077.f_1286[30]), 8);
							unk_0x9956FB0E4B50ECB8(&iLocal_27, 2);
							bVar0 = true;
						}
						break;
					
					case 31:
						if (!unk_0xB519E5386FBF69E5(Global_91077.f_1286[31], 8))
						{
							unk_0x9956FB0E4B50ECB8(&(Global_91077.f_1286[31]), 8);
							unk_0x9956FB0E4B50ECB8(&iLocal_27, 3);
							bVar0 = true;
						}
						break;
					
					case 32:
						if (!unk_0xB519E5386FBF69E5(Global_91077.f_1286[32], 8))
						{
							unk_0x9956FB0E4B50ECB8(&(Global_91077.f_1286[32]), 8);
							unk_0x9956FB0E4B50ECB8(&iLocal_27, 4);
							bVar0 = true;
						}
						break;
					
					case 33:
						if (!unk_0xB519E5386FBF69E5(Global_91077.f_1286[33], 8))
						{
							unk_0x9956FB0E4B50ECB8(&(Global_91077.f_1286[33]), 8);
							unk_0x9956FB0E4B50ECB8(&iLocal_27, 5);
							bVar0 = true;
						}
						break;
					
					case 34:
						if (!unk_0xB519E5386FBF69E5(Global_91077.f_1286[34], 8))
						{
							unk_0x9956FB0E4B50ECB8(&(Global_91077.f_1286[34]), 8);
							unk_0x9956FB0E4B50ECB8(&iLocal_27, 6);
							bVar0 = true;
						}
						break;
					
					case 35:
						if (!unk_0xB519E5386FBF69E5(Global_91077.f_1286[35], 8))
						{
							unk_0x9956FB0E4B50ECB8(&(Global_91077.f_1286[35]), 8);
							unk_0x9956FB0E4B50ECB8(&iLocal_27, 7);
							bVar0 = true;
						}
						break;
					
					case 36:
						if (!unk_0xB519E5386FBF69E5(Global_91077.f_1286[36], 8))
						{
							unk_0x9956FB0E4B50ECB8(&(Global_91077.f_1286[36]), 8);
							unk_0x9956FB0E4B50ECB8(&iLocal_27, 8);
							bVar0 = true;
						}
						break;
					
					case 37:
						if (!unk_0xB519E5386FBF69E5(Global_91077.f_1286[37], 8))
						{
							unk_0x9956FB0E4B50ECB8(&(Global_91077.f_1286[37]), 8);
							unk_0x9956FB0E4B50ECB8(&iLocal_27, 9);
							bVar0 = true;
						}
						break;
					
					case 38:
						if (!unk_0xB519E5386FBF69E5(Global_91077.f_1286[38], 8))
						{
							unk_0x9956FB0E4B50ECB8(&(Global_91077.f_1286[38]), 8);
							unk_0x9956FB0E4B50ECB8(&iLocal_27, 10);
							bVar0 = true;
						}
						break;
					}
				}
			}
	}
	if (!bVar0 && iLocal_27 != 0)
	{
		if (unk_0xB519E5386FBF69E5(Global_91077.f_1286[28], 8))
		{
			unk_0x73817D396768E4C6(&(Global_91077.f_1286[28]), 8);
			unk_0x73817D396768E4C6(&iLocal_27, 0);
		}
		if (unk_0xB519E5386FBF69E5(Global_91077.f_1286[29], 8))
		{
			unk_0x73817D396768E4C6(&(Global_91077.f_1286[29]), 8);
			unk_0x73817D396768E4C6(&iLocal_27, 1);
		}
		if (unk_0xB519E5386FBF69E5(Global_91077.f_1286[30], 8))
		{
			unk_0x73817D396768E4C6(&(Global_91077.f_1286[30]), 8);
			unk_0x73817D396768E4C6(&iLocal_27, 2);
		}
		if (unk_0xB519E5386FBF69E5(Global_91077.f_1286[31], 8))
		{
			unk_0x73817D396768E4C6(&(Global_91077.f_1286[31]), 8);
			unk_0x73817D396768E4C6(&iLocal_27, 3);
		}
		if (unk_0xB519E5386FBF69E5(Global_91077.f_1286[32], 8))
		{
			unk_0x73817D396768E4C6(&(Global_91077.f_1286[32]), 8);
			unk_0x73817D396768E4C6(&iLocal_27, 4);
		}
		if (unk_0xB519E5386FBF69E5(Global_91077.f_1286[33], 8))
		{
			unk_0x73817D396768E4C6(&(Global_91077.f_1286[33]), 8);
			unk_0x73817D396768E4C6(&iLocal_27, 5);
		}
		if (unk_0xB519E5386FBF69E5(Global_91077.f_1286[34], 8))
		{
			unk_0x73817D396768E4C6(&(Global_91077.f_1286[34]), 8);
			unk_0x73817D396768E4C6(&iLocal_27, 6);
		}
		if (unk_0xB519E5386FBF69E5(Global_91077.f_1286[35], 8))
		{
			unk_0x73817D396768E4C6(&(Global_91077.f_1286[35]), 8);
			unk_0x73817D396768E4C6(&iLocal_27, 7);
		}
		if (unk_0xB519E5386FBF69E5(Global_91077.f_1286[36], 8))
		{
			unk_0x73817D396768E4C6(&(Global_91077.f_1286[36]), 8);
			unk_0x73817D396768E4C6(&iLocal_27, 8);
		}
		if (unk_0xB519E5386FBF69E5(Global_91077.f_1286[37], 8))
		{
			unk_0x73817D396768E4C6(&(Global_91077.f_1286[37]), 8);
			unk_0x73817D396768E4C6(&iLocal_27, 9);
		}
		if (unk_0xB519E5386FBF69E5(Global_91077.f_1286[38], 8))
		{
			unk_0x73817D396768E4C6(&(Global_91077.f_1286[38]), 8);
			unk_0x73817D396768E4C6(&iLocal_27, 10);
		}
	}
}

void func_70(int iParam0, int iParam1, var uParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (func_72(*uParam2, 0f, 0f, 0f, 0))
	{
		return;
	}
	func_71(iParam0, &Var0, &Var3);
	func_71(iParam1, &Var6, &Var9);
	Var12 = { *uParam2 - Var0 };
	Var12 = { func_64(Var12, -Var3.f_2) };
	Var12 = { func_64(Var12, Var9.f_2) };
	*uParam2 = { unk_0xF919633EBD0639D0(Var6, 0f, Var12) };
}

int func_71(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 28:
			*uParam1 = { 23.6862f, -1106.461f, 29.9159f };
			*uParam2 = { 0f, 0f, 160f };
			break;
		
		case 29:
			*uParam1 = { 1693.572f, 3761.601f, 34.8242f };
			*uParam2 = { 0f, 0f, -132.6081f };
			break;
		
		case 30:
			*uParam1 = { 252.8583f, -51.6284f, 70.06f };
			*uParam2 = { 0f, 0f, 69.9999f };
			break;
		
		case 31:
			*uParam1 = { 841.0564f, -1034.762f, 28.3137f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 32:
			*uParam1 = { -330.2908f, 6085.548f, 31.5737f };
			*uParam2 = { 0f, 0f, -135.0001f };
			break;
		
		case 33:
			*uParam1 = { -660.9294f, -934.1031f, 21.9481f };
			*uParam2 = { 0f, 0f, 180f };
			break;
		
		case 34:
			*uParam1 = { -1304.976f, -395.8181f, 36.8147f };
			*uParam2 = { 0f, 0f, 75.7783f };
			break;
		
		case 35:
			*uParam1 = { -1117.612f, 2700.264f, 18.673f };
			*uParam2 = { 0f, 0f, -138.1729f };
			break;
		
		case 36:
			*uParam1 = { -3172.511f, 1089.412f, 20.9576f };
			*uParam2 = { 0f, 0f, -113.4187f };
			break;
		
		case 37:
			*uParam1 = { 2566.592f, 293.1332f, 108.8538f };
			*uParam2 = { 0f, 0f, 0f };
			break;
		
		case 38:
			*uParam1 = { 808.8609f, -2158.508f, 29.7379f };
			*uParam2 = { 0f, 0f, 0f };
			break;
	}
	if (func_72(*uParam1, 0f, 0f, 0f, 0) && func_72(*uParam2, 0f, 0f, 0f, 0))
	{
		return 0;
	}
	return 1;
}

bool func_72(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

char* func_73(int iParam0)
{
	switch (iParam0)
	{
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
	}
	return "";
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			return 1;
			break;
	}
	return 0;
}

void func_75()
{
	if (!unk_0x6B042133C9334B77())
	{
		if (!iLocal_26)
		{
			if (unk_0xB519E5386FBF69E5(Global_2457699.f_4646, 0))
			{
				if (Global_2426494.f_699 == 1)
				{
					Global_2426494.f_699 = Global_2426494.f_698;
				}
				iLocal_26 = 1;
			}
		}
		else
		{
			if (Global_2426494.f_699 == 1)
			{
				Global_2426494.f_699 = Global_2426494.f_698;
			}
			iLocal_26 = 0;
		}
	}
}

void func_76()
{
	var uVar0;
	
	switch (iLocal_13)
	{
		case 0:
			if ((func_68(unk_0x3F80C6638E3A1A90(), 0) != -1 && unk_0xFF6891E21E7FC193(joaat("am_mp_yacht")) > 0) && Global_25299)
			{
				if (func_77(unk_0xDF9F1D76EB1B8F12(unk_0xE7869D5D7816A9B6()), &uVar0, &Local_14, &Local_17) && unk_0xC47857E5E74EA5AF(unk_0xE7869D5D7816A9B6(), 2106541073) == 1)
				{
					iLocal_10 = uVar0;
					iLocal_13 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_33(&uLocal_11))
			{
				func_32(&uLocal_11, 1, 0);
			}
			else if (func_31(&uLocal_11, 6000, 1))
			{
				if (unk_0xC47857E5E74EA5AF(unk_0xE7869D5D7816A9B6(), 1785177548) != 1)
				{
					iLocal_13 = 2;
				}
				else
				{
					iLocal_13 = 0;
				}
				func_30(&uLocal_11);
			}
			break;
		
		case 2:
			if (func_68(unk_0x3F80C6638E3A1A90(), 0) != -1 && unk_0xFF6891E21E7FC193(joaat("am_mp_yacht")) > 0)
			{
				if (!iLocal_9)
				{
					unk_0x09714949CF524B00(unk_0xE7869D5D7816A9B6(), 0);
					iLocal_9 = 1;
				}
				else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Local_14, Local_17, 1f, 0, 1, 0))
				{
					unk_0x1B7A773B18DF3DB0(10);
					unk_0x8CCCC48313B0F20F(2, 51, 1);
				}
			}
			else
			{
				iLocal_9 = 0;
				iLocal_10 = -1;
				iLocal_13 = 0;
			}
			break;
	}
}

int func_77(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var7;
	
	if (func_68(iParam0, 0) > -1)
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			func_63(func_68(iParam0, 0), (451 + iVar0), &Var1, 0);
			func_63(func_68(iParam0, 0), (459 + iVar0), &Var7, 0);
			if (unk_0x22E902D6AF27E232(unk_0x91B73D905EA38F6B(iParam0), Var1, Var7, 1f, 0, 1, 0))
			{
				*uParam2 = { Var1 };
				*uParam3 = { Var7 };
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_78()
{
	struct<13> Var0;
	struct<99> Var13;
	
	if (Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_177 == 36)
	{
		if (!Global_2432717.f_567)
		{
			Var13.f_9 = 49;
			Var13.f_59 = 2;
			Var13.f_78 = -1;
			Var13.f_95 = -1;
			Var13.f_96 = 1;
			Var13.f_98 = 132;
			Global_2433481.f_5429 = 0;
			Global_2433481.f_5429.f_1 = { Var13 };
			Global_2433481.f_5429.f_100 = { 0f, 0f, 0f };
			Global_2433481.f_5429.f_103 = 0f;
			Global_2433481.f_5429.f_104 = 0;
			Global_2433481.f_5429.f_105 = 0;
			Global_2433481.f_5429.f_106 = 0;
			Global_2433481.f_5429.f_107 = 0;
			Global_2433481.f_5429.f_108 = -2;
			Global_2433481.f_5429.f_109 = { Var0 };
			Global_2433481.f_5429.f_122 = { Var0 };
			Global_2433481.f_5429.f_135 = { Var0 };
			Global_2433481.f_5429.f_148 = { Var0 };
			Global_2433481.f_5429.f_161 = { Var0 };
			Global_2433481.f_5429.f_174 = { Var0 };
			Global_2433481.f_5429.f_187 = { Var0 };
			Global_2433481.f_5429.f_200 = { Var0 };
			Global_2433481.f_5429.f_213 = { Var0 };
			Global_2433481.f_5429.f_226 = { Var0 };
			Global_2433481.f_5429.f_252 = 0;
			Global_2433481.f_5429.f_253 = 0;
			Global_2433481.f_5429.f_255.f_1 = 0;
			Global_2433481.f_5429.f_257.f_1 = 0;
			Global_2433481.f_5429.f_259.f_1 = 0;
			Global_2433481.f_5429.f_261 = 0;
			Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_326 = 0;
			Global_2433481.f_5429.f_262 = 0;
			Global_2433481.f_5429.f_263 = 0;
			Global_2433481.f_5429.f_264 = 0;
			Global_2433481.f_5429.f_265 = 0;
			Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_326.f_1 = 0;
		}
	}
}

void func_79()
{
	struct<3> Var0;
	
	if (unk_0x6B042133C9334B77() && func_81(Global_1612326.f_64748))
	{
		if (Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/] == 0)
		{
			if (iLocal_7 == 0)
			{
				Var0 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0) };
				if ((Var0.f_2 > 100f && Global_976926.f_1 == 9) && func_80())
				{
					iLocal_7 = 1;
				}
			}
		}
		else
		{
			iLocal_7 = 0;
			iLocal_8 = 0;
		}
	}
	else
	{
		iLocal_7 = 0;
		iLocal_8 = 0;
	}
}

int func_80()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (iLocal_7 == 0)
	{
		iVar0 = unk_0x46B0F3CB5DC1CDFC(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 10f, joaat("cargobob4"), 71806);
		if (unk_0xC45A34912542C4EB(iVar0, 0))
		{
			if (unk_0x9B5F286CC8377932(iVar0))
			{
				if (!iLocal_8)
				{
					unk_0x2878EC06B3F897A0(iVar0, 0);
					uVar1 = unk_0x2CAFFCD9F5E16D2F(iVar0);
					unk_0x9CA89729A675E8FF(iVar0, unk_0x1141852D07400777(iVar0, 1), 0, 0, 1);
					unk_0x151F32CB40BE730C(iVar0, uVar1);
					unk_0x6A7A2A686DF429B7(iVar0, 2, 5, 1f);
					iLocal_8 = 1;
					return 0;
				}
				else
				{
					unk_0x2878EC06B3F897A0(iVar0, 0);
					uVar2 = unk_0x2CAFFCD9F5E16D2F(iVar0);
					unk_0x9CA89729A675E8FF(iVar0, unk_0x1141852D07400777(iVar0, 1), 0, 0, 1);
					unk_0x151F32CB40BE730C(iVar0, uVar2);
					unk_0x6A7A2A686DF429B7(iVar0, 2, 5, 1f);
					unk_0x2878EC06B3F897A0(iVar0, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7406[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_82()
{
	if (((func_8(unk_0x3F80C6638E3A1A90(), 1, 1) && func_87(unk_0x3F80C6638E3A1A90(), 0)) && unk_0x7EDEDFB3CB1ACEA0(unk_0xE7869D5D7816A9B6()) == unk_0xC7C6DDDE84A8E734("GTaMloRoom_bar1")) && unk_0x9449AC6115443388() == 0)
	{
		if ((Global_1713788 && unk_0x23741E39BEA32E66()) && func_86("SCLUB_DRNK_TREV"))
		{
			unk_0x8CCCC48313B0F20F(2, 51, 1);
		}
		else if (Global_25303)
		{
			if (func_86("SCLUB_DRNK_TREV"))
			{
				unk_0x1D208E4A4E1D4FFE(1);
			}
			unk_0x8CCCC48313B0F20F(2, 51, 1);
		}
		else if (func_83(unk_0xE7869D5D7816A9B6()) >= 10)
		{
			if (func_86("SCLUB_DRNK_TREV"))
			{
				unk_0x1D208E4A4E1D4FFE(1);
			}
			unk_0x8CCCC48313B0F20F(2, 51, 1);
		}
	}
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 0;
	}
	iVar0 = func_85(iParam0);
	iVar1 = func_84(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36472[iVar1 /*5*/].f_3;
}

int func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36472[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36472[iVar0 /*5*/].f_1)
		{
			return Global_36472[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_86(char* sParam0)
{
	unk_0xAA8D087D7A86072A(sParam0);
	return unk_0x360D41DC76A83E6A(0);
}

int func_87(int iParam0, bool bParam1)
{
	if (func_8(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			if (!Global_2416794[iParam0 /*303*/].f_256.f_14 == -1)
			{
				return 1;
			}
		}
		else if (!Global_2416794[iParam0 /*303*/].f_256.f_15 == -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_88()
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE4E91039B15CA110(1))
	{
		if (unk_0xCEDD7FE4546BFC4F(1, iVar0) == 168)
		{
			unk_0x0586E3C97DD61FE4(1, uVar1, &iVar2, 2);
			if (iVar2 == 439)
			{
				if (unk_0x0586E3C97DD61FE4(1, iVar1, &Var4, 3))
				{
					func_90(Var4.f_2);
					if (bLocal_22)
					{
						if (Var4.f_1 == unk_0x3F80C6638E3A1A90())
						{
							uLocal_25 = unk_0xC7F926248AF8587B();
							iLocal_23 = 1;
							iLocal_24 = Var4.f_2;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bLocal_22)
	{
		if (iLocal_23)
		{
			if (unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), uLocal_25)) > 1000)
			{
				Var4.f_0 = 439;
				Var4.f_1 = -1;
				Var4.f_2 = iLocal_24;
				unk_0xBBEF99A5C6E20CCC(1, &Var4, 3, func_89(1, 1));
				iLocal_23 = 0;
				iLocal_24 = -1;
			}
		}
	}
}

var func_89(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x0F810277E61B87AE(iVar1);
		if (func_8(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x3F80C6638E3A1A90() || iParam0)
			{
				if (bParam1)
				{
					unk_0x9956FB0E4B50ECB8(&uVar0, iVar1);
				}
				else if (!func_10(iVar2, 0))
				{
					unk_0x9956FB0E4B50ECB8(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_90(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_98(iVar0, iParam0, &Var1, &uVar4, 0);
		uVar5 = unk_0x46B0F3CB5DC1CDFC(Var1, 5f, 0, 12294);
		if (unk_0xD51CFE69539DB6D8(uVar5))
		{
			if (unk_0x9B5F286CC8377932(iVar5))
			{
				if (func_91(iVar5, iParam0, 15f))
				{
					if (!unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iVar5, 0))
					{
						if ((unk_0x8FFABA46948DBAD8("PYV_WarpFrom", 3) && unk_0xB7AFC499DA70400A(iVar5, "PYV_WarpFrom")) && unk_0x3947414BC68E5255(iVar5, "PYV_WarpFrom") == iParam0)
						{
						}
						else
						{
							unk_0x20BB4B94CC6DDC9A(iVar5, 0, 1);
							unk_0x9E55BD45B84E7BDC(&iVar5);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_91(int iParam0, int iParam1, float fParam2)
{
	if (func_97(iParam1))
	{
		if (unk_0xD51CFE69539DB6D8(uParam0) && !unk_0x76B2D234F1895632(iParam0))
		{
			if (func_92(unk_0x1141852D07400777(iParam0, 1), iParam1, fParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_92(struct<3> Param0, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	if (func_97(iParam3))
	{
		func_93(iParam3, &Var0, &Var3, &uVar6, fParam4);
		return unk_0xB84E12C6EBFF63A4(Param0, Var0, Var3, uVar6, 0, 1);
	}
	return 0;
}

void func_93(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	var uVar3;
	struct<3> Var4;
	
	Var0 = { func_96(iParam0) };
	uVar3 = func_95(iParam0);
	Var4 = { 0f, 1f, 0f };
	func_94(&Var4, 0f, 0f, uVar3);
	Var4 = { Var4 / FtoV(unk_0x652D2EEEF1D3E62C(Var4)) };
	*uParam1 = { Var0 + Var4 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { Var0 - Var4 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

void func_94(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_0);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_1);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_2);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

var func_95(int iParam0)
{
	return Global_1289922[iParam0 /*45*/].f_7;
}

Vector3 func_96(int iParam0)
{
	return Global_1289922[iParam0 /*45*/].f_4;
}

int func_97(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 36)
	{
		return 1;
	}
	return 0;
}

void func_98(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	if (!bParam4)
	{
		*uParam2 = { func_101(iParam1, Global_1291543[iParam0 /*10*/]) };
		*uParam3 = func_100(iParam1, Global_1291543[iParam0 /*10*/].f_3);
	}
	else if (func_99(iParam0, 1))
	{
		*uParam2 = { Global_1289922[iParam1 /*45*/].f_32[2 /*4*/] };
		*uParam3 = Global_1289922[iParam1 /*45*/].f_32[2 /*4*/].f_3;
	}
	else
	{
		*uParam2 = { Global_1289922[iParam1 /*45*/].f_32[1 /*4*/] };
		*uParam3 = Global_1289922[iParam1 /*45*/].f_32[1 /*4*/].f_3;
	}
}

int func_99(int iParam0, int iParam1)
{
	if ((Global_1291543[iParam0 /*10*/].f_6 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

float func_100(int iParam0, float fParam1)
{
	float fVar0;
	
	fVar0 = func_95(iParam0);
	fParam1 = (fParam1 + fVar0);
	while (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	while (fParam1 >= 360f)
	{
		fParam1 = (fParam1 - 360f);
	}
	return fParam1;
}

Vector3 func_101(int iParam0, struct<3> Param1)
{
	return unk_0xF919633EBD0639D0(func_96(iParam0), func_95(iParam0), Param1);
}

void func_102()
{
	if (unk_0x6B042133C9334B77())
	{
		if (unk_0xB519E5386FBF69E5(Global_2432717.f_2, 31))
		{
			iLocal_20 = 1;
		}
		if (iLocal_20)
		{
			if (!unk_0xB519E5386FBF69E5(uLocal_1, 2))
			{
				if (Global_1612326.f_65056 < 8)
				{
					iLocal_21 = Global_1612326.f_65056;
					Global_1612326.f_65079[Global_1612326.f_65056 /*26*/].f_9 = 3;
					Global_1612326.f_65079[Global_1612326.f_65056 /*26*/][0 /*3*/] = { Global_2433481.f_5404 - Vector(2f, 2f, 2f) };
					Global_1612326.f_65079[Global_1612326.f_65056 /*26*/][1 /*3*/] = { Global_2433481.f_5404 + Vector(2f, 2f, 2f) };
					Global_1612326.f_65056++;
					unk_0x9956FB0E4B50ECB8(&uLocal_1, 2);
				}
				unk_0x9956FB0E4B50ECB8(&(Global_1612326.f_13), 8);
			}
			else if (iLocal_21 != Global_1612326.f_65056)
			{
				unk_0x73817D396768E4C6(&uLocal_1, 2);
			}
		}
	}
	else
	{
		unk_0x73817D396768E4C6(&uLocal_1, 2);
		iLocal_20 = 0;
	}
}

void func_103()
{
	bool bVar0;
	
	if (unk_0x6B042133C9334B77())
	{
		if (!unk_0xB519E5386FBF69E5(uLocal_1, 1))
		{
			unk_0x9956FB0E4B50ECB8(&uLocal_1, 1);
		}
		if (Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_177 == 21 || (Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_177 != 0 && unk_0xB519E5386FBF69E5(Global_2432717.f_545.f_1, 0)))
		{
			bVar0 = unk_0xDC42D9FCCBDAB3D2(joaat("MP_Global"), -942034491);
			unk_0x53542BB09CA85CE0(joaat("MP_Global"), -942034491, &bVar0);
			if (bVar0)
			{
				Global_262145.f_10498 = 1;
			}
		}
		if (func_81(Global_1612326.f_64748))
		{
			if (Global_262145.f_10498)
			{
				Global_262145.f_10498 = 0;
			}
		}
	}
}

void func_104()
{
	if (unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (Global_1572925)
		{
			Global_1572925 = 0;
		}
	}
}

void func_105()
{
	if (Global_2404919.f_1556 != 0)
	{
		unk_0x9956FB0E4B50ECB8(&uLocal_1, 0);
		if (func_91(Global_2404919.f_1556, Global_2404919.f_1551, 0f))
		{
			if (!unk_0xD1C57B32C6DE7BB6(unk_0x1B2DC87EFB36DF80(Global_2404919.f_1556)) && !unk_0xFFD2CE10E8C7E77F(unk_0x1B2DC87EFB36DF80(Global_2404919.f_1556)))
			{
				Global_2404919.f_1556 = 0;
			}
		}
	}
}

void func_106(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x608B6701BEC4527A(sParam2);
	unk_0x05F60BBD20DA0D62(sParam3);
	unk_0x2ED77CF10395403E(fParam0, fParam1, 0);
}

void func_107()
{
	if (!bLocal_2)
	{
		if (unk_0xA57007F9A665F322())
		{
			switch (iLocal_3)
			{
				case 0:
					if (unk_0x958B4351DD28B142(2, 189))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0x958B4351DD28B142(2, 190))
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
					if (unk_0x958B4351DD28B142(2, 189))
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
					if (unk_0x958B4351DD28B142(2, 190))
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
					if (unk_0x958B4351DD28B142(2, 188))
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
	else if (unk_0xA57007F9A665F322())
	{
		switch (iLocal_3)
		{
			case 0:
				if (unk_0x958B4351DD28B142(2, 188))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0x958B4351DD28B142(2, 190))
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
				if (unk_0x958B4351DD28B142(2, 189))
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
				if (unk_0x958B4351DD28B142(2, 190))
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
				if (unk_0x958B4351DD28B142(2, 189))
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

bool func_108()
{
	return unk_0x3442D8DA379C5187(-1762644250);
}

