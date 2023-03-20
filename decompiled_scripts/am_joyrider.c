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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	struct<11> Local_86 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_97 = 0;
	struct<3> Local_98[32];
	int iLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
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
	sLocal_18 = "NULL";
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
	iLocal_200 = 20;
	if (unk_0x0E063DDE8855EC52() && func_65(unk_0x4D29100D094E5511(), 0, 1))
	{
		func_58(ScriptParam_0);
	}
	else
	{
		func_54();
	}
	while (true)
	{
		func_53();
		if (func_43() || func_39(9))
		{
			func_54();
		}
		if (unk_0x233AF2DB663CF21D())
		{
			func_54();
		}
		switch (func_38(unk_0x7025777635AB04C0()))
		{
			case 0:
				if (func_37() == 1)
				{
					func_36();
					Local_98[unk_0x7025777635AB04C0() /*3*/] = 1;
				}
				else if (func_37() == 4)
				{
					Local_98[unk_0x7025777635AB04C0() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_37() == 1)
				{
					func_34();
				}
				else if (func_37() == 4)
				{
					Local_98[unk_0x7025777635AB04C0() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_32(&(Local_86.f_10));
				if (func_31(&(Local_86.f_10)))
				{
					Local_98[unk_0x7025777635AB04C0() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_98[unk_0x7025777635AB04C0() /*3*/] = 4;
			
			case 4:
				func_54();
				break;
		}
		if (unk_0x96BA6BF1BA1235CC())
		{
			switch (func_37())
			{
				case 0:
					if (func_30())
					{
						if (func_8())
						{
							Local_86.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_7();
					func_6();
					if (func_1())
					{
						Local_86.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_86.f_9 == 0)
	{
		if (!func_4(Local_86.f_2))
		{
			return 1;
		}
		else if (func_3(Local_86.f_3))
		{
			return 1;
		}
		else
		{
			if (iLocal_203 == 1)
			{
				if (unk_0xF426A5DE932B3BEE(Local_86.f_1, 0))
				{
					return 1;
				}
			}
			if (!unk_0x1C48F76B3D032074(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), unk_0x33B21EAFED8C1338(Local_86.f_2), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (unk_0xF1C8C691B49DACEA(uParam0))
	{
		return unk_0xE4F7206742848BAF(unk_0x34BB21E7BEAD2D5A(uParam0));
	}
	return 1;
}

int func_4(var uParam0)
{
	if (unk_0xF1C8C691B49DACEA(uParam0))
	{
		return !func_5(unk_0x33B21EAFED8C1338(uParam0));
	}
	return 0;
}

int func_5(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (unk_0x2006A8C1BA2AFE80(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x0B4DDB992C7BCF57(uParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	switch (Local_86.f_9)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iLocal_202 == 0)
	{
		iLocal_203 = 0;
		unk_0x26545538B51562AD(&(Local_86.f_1), 0);
	}
	if (func_4(Local_86.f_2))
	{
		iVar0 = 1;
	}
	if (unk_0x6985B636BB8652CD(unk_0xA9A38637698616EF(iLocal_202)))
	{
		iVar1 = unk_0xFAA1C60127DA6F80(unk_0xA9A38637698616EF(iLocal_202));
		uVar2 = unk_0xC834A7C58DEB59B4(iVar1);
		if (func_65(iVar1, 1, 1))
		{
			if (unk_0xF426A5DE932B3BEE(Local_86.f_1, 0))
			{
				if (iVar0 == 1)
				{
					if (unk_0xC4F9E3DD5445F8E4(uVar2, unk_0x33B21EAFED8C1338(Local_86.f_2), 250f, 250f, 250f, 0, 1, 0))
					{
						unk_0xF17F4B0641AB2DE1(&(Local_86.f_1), 0);
					}
				}
				else
				{
					unk_0xF17F4B0641AB2DE1(&(Local_86.f_1), 0);
				}
			}
		}
	}
	iLocal_202++;
	if (iLocal_202 == unk_0xD81B83309CFE36FF())
	{
		iLocal_202 = 0;
		iLocal_203 = 1;
	}
}

int func_8()
{
	if (unk_0xD7CD2A7CC1B2D0CF(1, 1, 0, 0))
	{
		if (func_29(Local_86.f_4) && func_29(Local_86.f_5))
		{
			if (func_12() && func_9())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9()
{
	int iVar0;
	
	if ((!unk_0xF1C8C691B49DACEA(Local_86.f_3) && func_29(Local_86.f_5)) && unk_0xF1C8C691B49DACEA(Local_86.f_2))
	{
		if (func_4(Local_86.f_2))
		{
			if (func_11(&(Local_86.f_3), Local_86.f_2, 22, Local_86.f_5, -1, 1, 1, 1))
			{
				unk_0x49A20F75B1327C29(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 0);
				if (func_10())
				{
					unk_0x71065DDFF8D7744C(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), Global_1574232);
				}
				else
				{
					unk_0x71065DDFF8D7744C(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), Global_1574235);
				}
				unk_0x94DC76C688E7D222(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 1);
				if (func_10())
				{
					iVar0 = unk_0x3A5708FEE1B560A9(0, 10);
					if (iVar0 < 5)
					{
						unk_0x19BED2D0C452E293(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), joaat("weapon_pistol"), 25000, func_10());
					}
					else if (iVar0 > 6)
					{
						unk_0x19BED2D0C452E293(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), joaat("weapon_microsmg"), 25000, func_10());
					}
					else
					{
						unk_0x19BED2D0C452E293(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), joaat("weapon_pumpshotgun"), 25000, func_10());
					}
				}
				iVar0 = unk_0x3A5708FEE1B560A9(0, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					unk_0x00E9DE96E168991F(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					unk_0x00E9DE96E168991F(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 2);
				}
				else
				{
					unk_0x00E9DE96E168991F(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 1);
				}
				iVar0 = unk_0x3A5708FEE1B560A9(0, 4);
				if (iVar0 == 0)
				{
					unk_0x7ED3655E5924C6F4(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 5, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0x7ED3655E5924C6F4(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 17, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x7ED3655E5924C6F4(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 13, 1);
				}
				if (func_10())
				{
					unk_0x7ED3655E5924C6F4(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 20, 1);
				}
				if (func_10())
				{
					unk_0x7ED3655E5924C6F4(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 2, 1);
				}
				iVar0 = unk_0x3A5708FEE1B560A9(0, 4);
				if (iVar0 == 0)
				{
					unk_0x2A3F4ACD0DB18011(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					unk_0x2A3F4ACD0DB18011(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x2A3F4ACD0DB18011(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 3);
				}
				unk_0xF36D3BF9A77FCAA0(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 1);
				unk_0xDA128C2F38D83BA1(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 1);
				unk_0x56F64CC9254C2E4F(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 29, 1);
				unk_0x1AD2FE409C8C06B3(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), 3);
				unk_0x51F79AC13D2AD286(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), unk_0xF2DB717A73826179((200f * Global_262145.f_151)));
				unk_0xE3F055109915E09D(unk_0x33B21EAFED8C1338(Local_86.f_2), 1);
				unk_0x7CC4EA4FED507D94(unk_0x33B21EAFED8C1338(Local_86.f_2), 1);
				func_36();
				unk_0x8B8674266D533E9F(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), uLocal_196);
				unk_0x0049DE0B34213B12(Local_86.f_5);
			}
		}
	}
	if (!unk_0xF1C8C691B49DACEA(Local_86.f_3))
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (unk_0xF426A5DE932B3BEE(unk_0x3A5708FEE1B560A9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xC0FA8416DA08599F(1))
	{
		return 0;
	}
	if (!unk_0xF1C8C691B49DACEA(uParam1))
	{
		return 0;
	}
	if (!unk_0x0B4DDB992C7BCF57(unk_0x33B21EAFED8C1338(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x970E0945BD0DD6AC(unk_0x9961770283FB23FE(unk_0x33B21EAFED8C1338(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0xF1C8C691B49DACEA(*uParam0))
	{
		unk_0x77E24407E71C2B27(unk_0x34BB21E7BEAD2D5A(*uParam0), iParam7);
		if (unk_0x2CE3609210ACDFF4(unk_0x34BB21E7BEAD2D5A(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x4F7D17B17C66872A(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_12()
{
	struct<3> Var0;
	var uVar3;
	
	if (!unk_0xF1C8C691B49DACEA(Local_86.f_2))
	{
		if (func_29(Local_86.f_4))
		{
			if (func_14(&Var0, &uVar3))
			{
				if (func_13(&(Local_86.f_2), Local_86.f_4, Var0, uVar3, 1, 1, 1, 0, 1, 1))
				{
					unk_0x8BE1AEC303A057F7(unk_0x33B21EAFED8C1338(Local_86.f_2), 1, 1, 0);
					unk_0x91A55378A6A1A673(unk_0x33B21EAFED8C1338(Local_86.f_2), 1);
					unk_0x11E91887F8A313B1(unk_0x33B21EAFED8C1338(Local_86.f_2), 1);
					unk_0x75C3321388DDC4F1(unk_0x33B21EAFED8C1338(Local_86.f_2), "JOYRIDER_GROUP", 0f);
					unk_0x0049DE0B34213B12(Local_86.f_4);
				}
			}
		}
	}
	if (!unk_0xF1C8C691B49DACEA(Local_86.f_2))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0xD6F7F0651C1EFA56(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xC972AA2C9F94741D(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x4E76306EE6AE7596(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x52E0CABEEF3E4CB3(uVar0);
	if (unk_0xF1C8C691B49DACEA(*uParam0))
	{
		unk_0x77E24407E71C2B27(uVar0, iParam10);
		if (unk_0x2CE3609210ACDFF4(uVar0))
		{
			if (bParam8)
			{
				unk_0x4F7D17B17C66872A(*uParam0, 1);
			}
			else
			{
				unk_0x4F7D17B17C66872A(*uParam0, 0);
			}
		}
		unk_0x11E91887F8A313B1(uVar0, iParam9);
		return 1;
	}
	return 0;
}

bool func_14(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!bVar0)
	{
		if (unk_0x5E089EED05C0643A(&(Local_86.f_6), uParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1))
		{
			unk_0xEFE2D8C4B92E42FD(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 1077936128, 0);
			if (iVar1 >= 1 || unk_0x16B79AA9A479C08D(*uParam0) == joaat("City"))
			{
				if (unk_0x676D4CD42E0837CA(-1367.557f, -3220.598f, 12.9448f, Local_86.f_6, 1) >= 600f && unk_0x676D4CD42E0837CA(750f, -3200f, 6f, Local_86.f_6, 1) >= 700f)
				{
					if (unk_0x676D4CD42E0837CA(func_28(unk_0x4D29100D094E5511()), *uParam0, 1) <= (250f - 50f))
					{
						if (iLocal_201 <= 5)
						{
							if (func_15(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								bVar0 = true;
							}
						}
						else
						{
							Local_86.f_0 = 4;
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_200 += 4;
		if (iLocal_200 >= 80)
		{
			iLocal_200 = 20;
			iLocal_201++;
		}
	}
	return bVar0;
}

int func_15(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404956 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x058784EB5BE12044(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x838311C5B5F34E30(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x838311C5B5F34E30(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x5EDE06C252535A86(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404956++;
	if (bParam13)
	{
		if (unk_0x7E5CC56729CE6D59(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404956++;
	if (fParam14 > 0f)
	{
		if (func_21(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404956++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_16(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404956++;
	return 1;
}

int func_16(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_65(unk_0x4D29100D094E5511(), 1, 1))
		{
			if (!unk_0x3934E959DB2478D3())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x676D4CD42E0837CA(func_28(unk_0x4D29100D094E5511()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x3E55FAB19AD423A2(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_65(iVar1, 1, 1))
		{
			if (!func_18(iVar1, 0) && unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x4D29100D094E5511()))
				{
					if ((func_17(iVar1) || !bParam10) && !Global_2418472[iVar1 /*313*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xEDB589A956C2855F(iVar1) == -1)
							{
								if (unk_0xEDB589A956C2855F(iVar1) == unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xEDB589A956C2855F(iVar1) != unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))) || unk_0xEDB589A956C2855F(iVar1) == -1)
							{
								if (unk_0x676D4CD42E0837CA(func_28(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x116496AC98D7A236(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xEDB589A956C2855F(iVar1) != iParam8 || unk_0xEDB589A956C2855F(iVar1) == -1)
						{
							if (unk_0x676D4CD42E0837CA(func_28(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x116496AC98D7A236(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_17(int iParam0)
{
	if (unk_0xDF5FCBDBA9ECE63C(unk_0xC834A7C58DEB59B4(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return 1;
	}
	return 0;
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		bVar0 = func_19(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			bVar0 = unk_0xEDB589A956C2855F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
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

int func_20()
{
	return Global_1312747;
}

int func_21(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x4D29100D094E5511() != iVar1) || iParam8 == 0)
		{
			if (func_65(iVar1, bParam4, bParam5))
			{
				if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
				{
					if (!bParam7 || (!unk_0xE4F7206742848BAF(unk_0xC834A7C58DEB59B4(iVar1)) && func_17(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) != unk_0xEDB589A956C2855F(iVar1))) || unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1)
						{
							if (((unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1 && uParam9) && bParam6) && func_22(iVar1))
							{
							}
							else if (unk_0xD2CFFE76B625AE55(unk_0xC834A7C58DEB59B4(iVar1)))
							{
								if (unk_0x676D4CD42E0837CA(func_28(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_22(int iParam0)
{
	if (func_27(unk_0x4D29100D094E5511(), iParam0))
	{
		return 1;
	}
	Global_2459440 = { func_26(iParam0) };
	if (unk_0xCD9EF71963819AF0(&Global_2459440))
	{
		return 1;
	}
	if (func_23(unk_0x4D29100D094E5511(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_23(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (!iVar0 == func_24())
	{
		if (iVar0 == func_25(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_24()
{
	return -1;
}

int func_25(int iParam0)
{
	if (iParam0 != func_24())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_24();
}

struct<13> func_26(var uParam0)
{
	struct<13> Var0;
	
	unk_0x224B05ED6725EA52(uParam0, &Var0, 13);
	return Var0;
}

int func_27(int iParam0, var uParam1)
{
	if (unk_0x4A95235C630E7410())
	{
		Global_2459440 = { func_26(iParam0) };
		Global_2459453 = { func_26(uParam1) };
		if (unk_0x5363E9DA9285526E(&Global_2459440))
		{
			if (unk_0x5363E9DA9285526E(&Global_2459453))
			{
				unk_0xCA2992FB3936A00C(&Global_2459370, 35, &Global_2459440);
				unk_0xCA2992FB3936A00C(&Global_2459405, 35, &Global_2459453);
				if (Global_2459370 == Global_2459405)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_28(int iParam0)
{
	return unk_0xA8CFDE65C45F813B(unk_0xC834A7C58DEB59B4(iParam0), 0);
}

int func_29(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x97C59C4E8349D15F(iParam0);
	return unk_0x875098323FCA8FE6(iParam0);
}

bool func_30()
{
	if (!unk_0xF426A5DE932B3BEE(uLocal_195, 1))
	{
		if (unk_0x73C1A9AD53AC8AD8(func_28(unk_0x4D29100D094E5511()), iLocal_199, &(Local_86.f_6), 4, 1077936128, 0))
		{
			unk_0x26545538B51562AD(&iLocal_195, 1);
		}
		else
		{
			iLocal_199++;
		}
	}
	return unk_0xF426A5DE932B3BEE(iLocal_195, 1);
}

int func_31(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_32(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x96BA6BF1BA1235CC())
		{
			func_33(uParam0, 0, 0);
		}
	}
}

void func_33(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x0E063DDE8855EC52() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x20D394965B47B01A();
			}
			else
			{
				*uParam0 = unk_0xBADD1A643AD56F36();
			}
		}
		else
		{
			*uParam0 = unk_0xA0F74982C6AAA9D4();
		}
		uParam0->f_1 = 1;
	}
}

void func_34()
{
	switch (Local_98[unk_0x7025777635AB04C0() /*3*/].f_2)
	{
		case 0:
			func_36();
			func_35();
			if (Local_86.f_9 > 0)
			{
				Local_98[unk_0x7025777635AB04C0() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_54();
			break;
	}
}

void func_35()
{
	int iVar0;
	float fVar1;
	
	if (!unk_0xF426A5DE932B3BEE(Local_98[unk_0x7025777635AB04C0() /*3*/].f_1, 0))
	{
		if (func_4(Local_86.f_2) && !func_3(Local_86.f_3))
		{
			iVar0 = unk_0x4C3235E6E203703D(unk_0x33B21EAFED8C1338(Local_86.f_2));
			fVar1 = unk_0xECC01072E61D2F3A(unk_0x33B21EAFED8C1338(Local_86.f_2));
			if (iVar0 < 200)
			{
				func_36();
				unk_0x8B8674266D533E9F(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), uLocal_198);
				unk_0x26545538B51562AD(&(Local_98[unk_0x7025777635AB04C0() /*3*/].f_1), 0);
			}
			else if (fVar1 < 3f)
			{
				if ((((unk_0x71A741FE7CE9D57A(unk_0x33B21EAFED8C1338(Local_86.f_2)) || unk_0xE06C11511DE39267(unk_0x33B21EAFED8C1338(Local_86.f_2), 3, 10000)) || unk_0xE06C11511DE39267(unk_0x33B21EAFED8C1338(Local_86.f_2), 1, 10000)) || unk_0xE06C11511DE39267(unk_0x33B21EAFED8C1338(Local_86.f_2), 0, 10000)) || unk_0xE06C11511DE39267(unk_0x33B21EAFED8C1338(Local_86.f_2), 2, 10000))
				{
					func_36();
					unk_0x8B8674266D533E9F(unk_0x34BB21E7BEAD2D5A(Local_86.f_3), uLocal_197);
					unk_0x26545538B51562AD(&(Local_98[unk_0x7025777635AB04C0() /*3*/].f_1), 0);
				}
			}
		}
	}
}

void func_36()
{
	if (!unk_0xF426A5DE932B3BEE(iLocal_195, 0))
	{
		if (func_4(Local_86.f_2))
		{
			unk_0x33A0CEA494F4C2A3(&uLocal_196);
			unk_0xC524A07ED2FAC2C2(0, unk_0x33B21EAFED8C1338(Local_86.f_2), Local_86.f_6, 14, 30f, 786468, 15f, 1f, 0);
			unk_0xF55CF905F405E357(0, unk_0x33B21EAFED8C1338(Local_86.f_2), 30f, 786468);
			unk_0x33F83FC0F5F458E3(uLocal_196);
			unk_0x33A0CEA494F4C2A3(&uLocal_197);
			unk_0x550B00F01FC4ADF0(0, 0, 1);
			unk_0x33F83FC0F5F458E3(uLocal_197);
			unk_0x33A0CEA494F4C2A3(&uLocal_198);
			unk_0xC524A07ED2FAC2C2(0, unk_0x33B21EAFED8C1338(Local_86.f_2), Local_86.f_6, 5, 30f, 786468, 99999f, 1f, 0);
			unk_0x550B00F01FC4ADF0(0, 0, 1);
			unk_0x33F83FC0F5F458E3(uLocal_198);
			unk_0x26545538B51562AD(&iLocal_195, 0);
		}
	}
}

int func_37()
{
	return Local_86.f_0;
}

int func_38(int iParam0)
{
	return Local_98[iParam0 /*3*/];
}

bool func_39(int iParam0)
{
	return !func_40(iParam0);
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_5064)
			{
				return 0;
			}
			if (func_42(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			if (unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 0) || unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5065)
			{
				return 0;
			}
			if (func_42(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			if (unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 0) || unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5066)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5067)
			{
				return 0;
			}
			if (func_42(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			if (unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 0) || unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			if (unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 0) || unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			if (unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 0) || unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			if (unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 0) || unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			if (unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 0) || unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_65(unk_0x6EED86A16F7EA8F2(iVar0), 0, 1))
		{
			if (unk_0xF426A5DE932B3BEE(Global_2418472[iVar0 /*313*/].f_206, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_42(int iParam0, int iParam1)
{
	return unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

int func_43()
{
	bool bVar0;
	
	func_50(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315888 == 0)
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			return 1;
		}
	}
	if (func_49())
	{
		return 1;
	}
	if (Global_2445442)
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	if (func_47(157))
	{
		if (!func_46())
		{
			return 1;
		}
	}
	if (func_47(155))
	{
		return 1;
	}
	if (!unk_0x88E055AE81551426())
	{
		return 1;
	}
	if (func_44() != 0)
	{
		if (unk_0xD32535FA4397160F(func_44()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_44()
{
	switch (func_45())
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

int func_45()
{
	return Global_25120;
}

bool func_46()
{
	return Global_2434762.f_574;
}

int func_47(int iParam0)
{
	if (unk_0x9CDCE7BB256E1E4B(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_48()
{
	return Global_2443085;
}

bool func_49()
{
	return Global_2434762.f_569;
}

void func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDDC2E48CCBA23C1D(1))
	{
		iVar1 = unk_0x00D18151DCE3C65E(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xB03A3CBE4F7737B0(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 339:
					func_51(iVar0);
					break;
				
				case 2:
					unk_0xB03A3CBE4F7737B0(1, iVar0, &Var4, 3);
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

void func_51(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xB03A3CBE4F7737B0(1, iParam0, &Var0, 3))
	{
		if (func_65(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xC834A7C58DEB59B4(Var0.f_1);
			if (unk_0xD2CFFE76B625AE55(uVar3))
			{
				if (unk_0x9A4E2270C2271219(uVar3, 0))
				{
					uVar4 = unk_0xD9FFE8E1642C81E2(uVar3, 0);
					if (unk_0x35DBB18680CBB9BD(uVar4, Var0.f_2) && unk_0xA8EFC723756B7650())
					{
						if (func_52(uVar4, &bVar5))
						{
							unk_0xC72E18180AE0A1F0(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9846B4D56971A958(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_52(var uParam0, var uParam1)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (!unk_0xE24B37600DCB21FC(uParam0))
		{
			if (unk_0x2380875F8B6B9911(uParam0))
			{
				unk_0xAF3355298F537BB0(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xFF65D7BC656BA68E(uParam0, 0))
		{
			if (unk_0xFB1CEF9E7943CFF5(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_53()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_54()
{
	func_57();
	if (func_37() == 4 && Local_86.f_4 != 0)
	{
		unk_0x7C898812896A5304(Local_86.f_4, 0);
	}
	if (func_4(Local_86.f_2))
	{
		unk_0xF2B7165E6D968F2D(unk_0x33B21EAFED8C1338(Local_86.f_2), 0f);
	}
	unk_0x354EC40268FD2071("JOYRIDER_RADIO_SCENE");
	func_56(9, 0);
	func_55();
}

void func_55()
{
	unk_0x7C3AA2D27E16E2AD();
}

void func_56(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xF426A5DE932B3BEE(Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_206, iParam0))
		{
			unk_0x26545538B51562AD(&(Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_206), iParam0);
		}
	}
	else if (unk_0xF426A5DE932B3BEE(Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_206, iParam0))
	{
		unk_0xF17F4B0641AB2DE1(&(Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_206), iParam0);
	}
}

void func_57()
{
	unk_0x433C209504FBC7EE(&uLocal_196);
}

void func_58(struct<20> Param0)
{
	int iVar0;
	
	func_63(func_64(Param0.f_0), Param0);
	unk_0xD76663230247F023(1);
	unk_0x50B946C04FF5E5E4(1);
	func_61(0, -1, 0);
	unk_0xE6E20DA4BE6773A1(&Local_86, 12);
	unk_0xEC578E04792A69AD(&Local_98, 97);
	if (!func_60())
	{
		func_54();
	}
	if (unk_0x0E063DDE8855EC52())
	{
		unk_0xF160EBCA8FFA0E2A(0);
		if (unk_0x96BA6BF1BA1235CC())
		{
			if (Global_2460486.f_4245 == 0)
			{
				iVar0 = unk_0x3A5708FEE1B560A9(0, 7);
				switch (iVar0)
				{
					case 0:
						Local_86.f_4 = joaat("stingergt");
						break;
					
					case 1:
						Local_86.f_4 = joaat("entityxf");
						break;
					
					case 2:
						Local_86.f_4 = joaat("feltzer2");
						break;
					
					case 3:
						Local_86.f_4 = joaat("monroe");
						break;
					
					case 4:
						Local_86.f_4 = joaat("cogcabrio");
						break;
					
					case 5:
						Local_86.f_4 = joaat("superd");
						break;
					
					case 6:
						Local_86.f_4 = joaat("infernus");
						break;
				}
			}
			else
			{
				Local_86.f_4 = Global_2460486.f_4245;
				Global_2460486.f_4245 = 0;
			}
			unk_0x7C898812896A5304(Local_86.f_4, 1);
			Local_86.f_5 = func_59(1);
		}
		func_56(9, 1);
		unk_0xF8B012FD1C255840("JOYRIDER_RADIO_SCENE");
		Local_98[unk_0x7025777635AB04C0() /*3*/] = 0;
	}
	else
	{
		func_54();
	}
}

int func_59(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x3A5708FEE1B560A9(0, 32);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_m_m_eastsa_01");
			
			case 1:
				return joaat("a_m_m_bevhills_01");
			
			case 2:
				return joaat("a_m_m_bevhills_02");
			
			case 3:
				return joaat("a_m_m_business_01");
			
			case 4:
				return joaat("a_m_m_malibu_01");
			
			case 5:
				return joaat("a_m_m_eastsa_02");
			
			case 6:
				return joaat("a_m_m_hillbilly_01");
			
			case 7:
				return joaat("a_m_m_hillbilly_02");
			
			case 8:
				return joaat("a_m_m_og_boss_01");
			
			case 9:
				return joaat("a_m_m_stlat_02");
			
			case 10:
				return joaat("a_m_y_beachvesp_01");
			
			case 11:
				return joaat("a_m_y_epsilon_01");
			
			case 12:
				return joaat("a_m_m_prolhost_01");
			
			case 13:
				return joaat("a_m_m_salton_01");
			
			case 14:
				return joaat("a_m_m_skater_01");
			
			case 15:
				return joaat("a_m_y_skater_02");
			
			case 16:
				return joaat("a_m_y_methhead_01");
			
			case 17:
				return joaat("a_m_m_skidrow_01");
			
			case 18:
				return joaat("a_m_m_soucent_01");
			
			case 19:
				return joaat("a_m_m_soucent_02");
			
			case 20:
				return joaat("a_m_m_soucent_03");
			
			case 21:
				return joaat("a_m_y_genstreet_02");
			
			case 22:
				return joaat("a_m_y_roadcyc_01");
			
			case 23:
				return joaat("a_m_m_afriamer_01");
			
			case 24:
				return joaat("a_m_m_beach_01");
			
			case 25:
				return joaat("a_m_m_farmer_01");
			
			case 26:
				return joaat("a_m_m_fatlatin_01");
			
			case 27:
				return joaat("a_m_m_genfat_01");
			
			case 28:
				return joaat("a_m_m_indian_01");
			
			case 29:
				return joaat("a_m_m_ktown_01");
			
			case 30:
				return joaat("a_m_m_socenlat_01");
			
			case 31:
				return joaat("a_m_m_mexlabor_01");
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_f_m_bevhills_01");
			
			case 1:
				return joaat("a_f_m_bevhills_02");
			
			case 2:
				return joaat("a_f_m_beach_01");
			
			case 3:
				return joaat("a_f_m_ktown_02");
			
			case 4:
				return joaat("a_f_m_prolhost_01");
			
			case 5:
				return joaat("a_f_m_bodybuild_01");
			
			case 6:
				return joaat("a_f_m_business_02");
			
			case 7:
				return joaat("a_f_m_downtown_01");
			
			case 8:
				return joaat("a_f_m_eastsa_01");
			
			case 9:
				return joaat("a_f_m_eastsa_02");
			
			case 10:
				return joaat("a_f_m_fatwhite_01");
			
			case 11:
				return joaat("a_f_m_ktown_01");
			
			case 12:
				return joaat("a_f_m_ktown_02");
			
			case 13:
				return joaat("a_f_m_salton_01");
			
			case 14:
				return joaat("a_f_m_skidrow_01");
			
			case 15:
				return joaat("a_f_m_soucent_01");
			
			case 16:
				return joaat("a_f_m_soucent_02");
			
			case 17:
				return joaat("a_f_m_soucentmc_01");
			
			case 18:
				return joaat("a_f_m_tramp_01");
			
			case 19:
				return joaat("a_f_m_trampbeac_01");
			
			case 20:
				return joaat("a_f_y_yoga_01");
			
			case 21:
				return joaat("a_f_y_vinewood_02");
			
			case 22:
				return joaat("a_f_y_vinewood_03");
			
			case 23:
				return joaat("a_f_y_vinewood_04");
			
			case 24:
				return joaat("a_f_y_tennis_01");
			
			case 25:
				return joaat("a_f_y_tourist_01");
			
			case 26:
				return joaat("a_f_y_hipster_01");
			
			case 27:
				return joaat("a_f_y_golfer_01");
			
			case 28:
				return joaat("a_f_y_fitness_01");
			
			case 29:
				return joaat("a_f_y_scdressy_01");
			
			case 30:
				return joaat("a_f_y_epsilon_01");
			
			case 31:
				return joaat("a_f_y_hiker_01");
			
			default:
		}
	}
	return joaat("a_f_m_bevhills_01");
}

int func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x0E063DDE8855EC52())
		{
			return 0;
		}
		if (unk_0x3D3EC4199DF36385())
		{
			return 1;
		}
		if (func_49())
		{
			return 0;
		}
		if (func_47(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_61(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x3F2703DCC0FC2191();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_55();
			}
			else
			{
				return 0;
			}
		}
		if (!func_62())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x0E063DDE8855EC52())
				{
					if (!bParam2)
					{
						func_55();
					}
					else
					{
						return 0;
					}
				}
				if (func_49())
				{
					if (!bParam2)
					{
						func_55();
					}
					else
					{
						return 0;
					}
				}
				if (func_47(155))
				{
					if (!bParam2)
					{
						func_55();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x92CB7725500E696A())
			{
				if (!bParam2)
				{
					func_55();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x3F2703DCC0FC2191();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			if (!bParam2)
			{
				func_55();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x92CB7725500E696A())
	{
		if (!bParam2)
		{
			func_55();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_62()
{
	return Global_1315888;
}

void func_63(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x0E063DDE8855EC52())
	{
		func_55();
	}
	unk_0x9064278EBCD8C84A(uParam0, 0, Param1.f_16);
}

int func_64(int iParam0)
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

int func_65(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x27C9C05A6B4E58D2(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2DB75A8F096AB1F1(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428492.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

