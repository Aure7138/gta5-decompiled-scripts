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
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 8;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 2;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 8;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	struct<11> Local_85 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_96 = 0;
	struct<3> Local_97[32];
	int iLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
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
	sLocal_17 = "NULL";
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
	iLocal_199 = 20;
	if (unk_0x03A753E2C8458335() && func_62(unk_0x217E9DC48139933D(), 0, 1))
	{
		func_55(ScriptParam_0);
	}
	else
	{
		func_51();
	}
	while (true)
	{
		func_50();
		if (func_40() || func_36(9))
		{
			func_51();
		}
		if (unk_0x2D7C0AC1FF9AFBB7())
		{
			func_51();
		}
		switch (func_35(unk_0x2473988062EBFC53()))
		{
			case 0:
				if (func_34() == 1)
				{
					func_33();
					Local_97[unk_0x2473988062EBFC53() /*3*/] = 1;
				}
				else if (func_34() == 4)
				{
					Local_97[unk_0x2473988062EBFC53() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_34() == 1)
				{
					func_31();
				}
				else if (func_34() == 4)
				{
					Local_97[unk_0x2473988062EBFC53() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_29(&(Local_85.f_10));
				if (func_28(&(Local_85.f_10)))
				{
					Local_97[unk_0x2473988062EBFC53() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_97[unk_0x2473988062EBFC53() /*3*/] = 4;
			
			case 4:
				func_51();
				break;
		}
		if (unk_0x6A4C37E16775564D())
		{
			switch (func_34())
			{
				case 0:
					if (func_27())
					{
						if (func_8())
						{
							Local_85.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_7();
					func_6();
					if (func_1())
					{
						Local_85.f_0 = 4;
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
	if (Local_85.f_9 == 0)
	{
		if (!func_4(Local_85.f_2))
		{
			return 1;
		}
		else if (func_3(Local_85.f_3))
		{
			return 1;
		}
		else
		{
			if (iLocal_202 == 1)
			{
				if (unk_0x4ED6CFDFE8D4131A(Local_85.f_1, 0))
				{
					return 1;
				}
			}
			if (!unk_0x9C8E4D238C999648(unk_0xFD90DE971A4B41BA(Local_85.f_3), unk_0x83F6CF5E03CA5120(Local_85.f_2), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (unk_0xA2821DCDEA6F3851(uParam0))
	{
		return unk_0x6CFF81397164A1D3(unk_0xFD90DE971A4B41BA(uParam0));
	}
	return 1;
}

int func_4(var uParam0)
{
	if (unk_0xA2821DCDEA6F3851(uParam0))
	{
		return !func_5(unk_0x83F6CF5E03CA5120(uParam0));
	}
	return 0;
}

int func_5(var uParam0)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		if (unk_0x7D5B1F88E7504BBA(uParam0))
		{
			return 1;
		}
		else if (!unk_0xB86D29B10F627379(uParam0, 0))
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
	switch (Local_85.f_9)
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
	
	if (iLocal_201 == 0)
	{
		iLocal_202 = 0;
		unk_0xF73FBE4845C43B5B(&(Local_85.f_1), 0);
	}
	if (func_4(Local_85.f_2))
	{
		iVar0 = 1;
	}
	if (unk_0xA21FA760E7F8F050(unk_0x58FF971FC8F2702C(iLocal_201)))
	{
		iVar1 = unk_0xB7D92AD06F1D842B(unk_0x58FF971FC8F2702C(iLocal_201));
		uVar2 = unk_0x275F255ED201B937(iVar1);
		if (func_62(iVar1, 1, 1))
		{
			if (unk_0x4ED6CFDFE8D4131A(Local_85.f_1, 0))
			{
				if (iVar0 == 1)
				{
					if (unk_0xC057F02B837A27F6(uVar2, unk_0x83F6CF5E03CA5120(Local_85.f_2), 250f, 250f, 250f, 0, 1, 0))
					{
						unk_0x7D1D4A3602B6AD4E(&(Local_85.f_1), 0);
					}
				}
				else
				{
					unk_0x7D1D4A3602B6AD4E(&(Local_85.f_1), 0);
				}
			}
		}
	}
	iLocal_201++;
	if (iLocal_201 == unk_0x80FC871DFB777007())
	{
		iLocal_201 = 0;
		iLocal_202 = 1;
	}
}

int func_8()
{
	if (unk_0x01DBA2D2DC2A5AC2(1, 1, 0, 0))
	{
		if (func_26(Local_85.f_4) && func_26(Local_85.f_5))
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
	
	if ((!unk_0xA2821DCDEA6F3851(Local_85.f_3) && func_26(Local_85.f_5)) && unk_0xA2821DCDEA6F3851(Local_85.f_2))
	{
		if (func_4(Local_85.f_2))
		{
			if (func_11(&(Local_85.f_3), Local_85.f_2, 22, Local_85.f_5, -1, 1, 1, 1))
			{
				unk_0x5222F3E172937744(unk_0xFD90DE971A4B41BA(Local_85.f_3), 0);
				if (func_10())
				{
					unk_0x6ECBACF91786FB7A(unk_0xFD90DE971A4B41BA(Local_85.f_3), Global_1574054);
				}
				else
				{
					unk_0x6ECBACF91786FB7A(unk_0xFD90DE971A4B41BA(Local_85.f_3), Global_1574057);
				}
				unk_0x2AD4789CBFD829EC(unk_0xFD90DE971A4B41BA(Local_85.f_3), 1);
				if (func_10())
				{
					iVar0 = unk_0x9C1C462D7B1DD1F9(0, 10);
					if (iVar0 < 5)
					{
						unk_0xCD9726967F38B458(unk_0xFD90DE971A4B41BA(Local_85.f_3), joaat("weapon_pistol"), 25000, func_10());
					}
					else if (iVar0 > 6)
					{
						unk_0xCD9726967F38B458(unk_0xFD90DE971A4B41BA(Local_85.f_3), joaat("weapon_microsmg"), 25000, func_10());
					}
					else
					{
						unk_0xCD9726967F38B458(unk_0xFD90DE971A4B41BA(Local_85.f_3), joaat("weapon_pumpshotgun"), 25000, func_10());
					}
				}
				iVar0 = unk_0x9C1C462D7B1DD1F9(0, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					unk_0x40E19C80775FA738(unk_0xFD90DE971A4B41BA(Local_85.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					unk_0x40E19C80775FA738(unk_0xFD90DE971A4B41BA(Local_85.f_3), 2);
				}
				else
				{
					unk_0x40E19C80775FA738(unk_0xFD90DE971A4B41BA(Local_85.f_3), 1);
				}
				iVar0 = unk_0x9C1C462D7B1DD1F9(0, 4);
				if (iVar0 == 0)
				{
					unk_0x32A582AACCBCAEFE(unk_0xFD90DE971A4B41BA(Local_85.f_3), 5, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0x32A582AACCBCAEFE(unk_0xFD90DE971A4B41BA(Local_85.f_3), 17, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x32A582AACCBCAEFE(unk_0xFD90DE971A4B41BA(Local_85.f_3), 13, 1);
				}
				if (func_10())
				{
					unk_0x32A582AACCBCAEFE(unk_0xFD90DE971A4B41BA(Local_85.f_3), 20, 1);
				}
				if (func_10())
				{
					unk_0x32A582AACCBCAEFE(unk_0xFD90DE971A4B41BA(Local_85.f_3), 2, 1);
				}
				iVar0 = unk_0x9C1C462D7B1DD1F9(0, 4);
				if (iVar0 == 0)
				{
					unk_0x34559010D1FB41F8(unk_0xFD90DE971A4B41BA(Local_85.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					unk_0x34559010D1FB41F8(unk_0xFD90DE971A4B41BA(Local_85.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x34559010D1FB41F8(unk_0xFD90DE971A4B41BA(Local_85.f_3), 3);
				}
				unk_0x0FABE5BEECCDC5F9(unk_0xFD90DE971A4B41BA(Local_85.f_3), 1);
				unk_0xACBDB0607C54C92E(unk_0xFD90DE971A4B41BA(Local_85.f_3), 1);
				unk_0x020E173F318C12DA(unk_0xFD90DE971A4B41BA(Local_85.f_3), 29, 1);
				unk_0x860F3EB3D71920CB(unk_0xFD90DE971A4B41BA(Local_85.f_3), 3);
				unk_0xB25E22832517B44E(unk_0xFD90DE971A4B41BA(Local_85.f_3), unk_0xF2DB717A73826179((200f * Global_262145.f_134)));
				unk_0x9CDFDC6E917CB522(unk_0x83F6CF5E03CA5120(Local_85.f_2), 1);
				unk_0x0723A01D741CF31D(unk_0x83F6CF5E03CA5120(Local_85.f_2), 1);
				func_33();
				unk_0xD59C10966EB589EA(unk_0xFD90DE971A4B41BA(Local_85.f_3), uLocal_195);
				unk_0x4AD96EF928BD4F9A(Local_85.f_5);
			}
		}
	}
	if (!unk_0xA2821DCDEA6F3851(Local_85.f_3))
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (unk_0x4ED6CFDFE8D4131A(unk_0x9C1C462D7B1DD1F9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xAFC5F1443657CDD3(1))
	{
		return 0;
	}
	if (!unk_0xA2821DCDEA6F3851(uParam1))
	{
		return 0;
	}
	if (!unk_0xB86D29B10F627379(unk_0x83F6CF5E03CA5120(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x44426F163DFFF62C(unk_0x63FC6DA06F97F02C(unk_0x83F6CF5E03CA5120(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0xA2821DCDEA6F3851(*uParam0))
	{
		unk_0x740CB4F3F602C9F4(unk_0xFD90DE971A4B41BA(*uParam0), iParam7);
		if (unk_0x38B221D9D7C76AF6(unk_0xFD90DE971A4B41BA(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x20E2E48A70EEC7D1(*uParam0, 1);
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
	
	if (!unk_0xA2821DCDEA6F3851(Local_85.f_2))
	{
		if (func_26(Local_85.f_4))
		{
			if (func_14(&Var0, &uVar3))
			{
				if (func_13(&(Local_85.f_2), Local_85.f_4, Var0, uVar3, 1, 1, 1, 0, 1, 1))
				{
					unk_0xB64CFA14CB9A2E78(unk_0x83F6CF5E03CA5120(Local_85.f_2), 1, 1);
					unk_0x7C5C7A44314CB078(unk_0x83F6CF5E03CA5120(Local_85.f_2), 1);
					unk_0x6C32FC81DFF25C9A(unk_0x83F6CF5E03CA5120(Local_85.f_2), 1);
					unk_0x70D3E526218BF867(unk_0x83F6CF5E03CA5120(Local_85.f_2), "JOYRIDER_GROUP", 0f);
					unk_0x4AD96EF928BD4F9A(Local_85.f_4);
				}
			}
		}
	}
	if (!unk_0xA2821DCDEA6F3851(Local_85.f_2))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x5E83CA0B68E03471(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x894DDE7F2D919046(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xF757863E1E2D8F12(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x50CCD29FA1D9E1DD(uVar0);
	if (unk_0xA2821DCDEA6F3851(*uParam0))
	{
		unk_0x740CB4F3F602C9F4(uVar0, iParam10);
		if (unk_0x38B221D9D7C76AF6(uVar0))
		{
			if (bParam8)
			{
				unk_0x20E2E48A70EEC7D1(*uParam0, 1);
			}
			else
			{
				unk_0x20E2E48A70EEC7D1(*uParam0, 0);
			}
		}
		unk_0x6C32FC81DFF25C9A(uVar0, iParam9);
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
		if (unk_0xBA80190A5EF7F452(&(Local_85.f_6), uParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1))
		{
			unk_0x591B40D4390DB54A(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 1077936128, 0);
			if (iVar1 >= 1 || unk_0xF24B401A3F4A7B73(*uParam0) == joaat("City"))
			{
				if (unk_0x0BE7F4E3CDBAFB28(-1367.557f, -3220.598f, 12.9448f, Local_85.f_6, 1) >= 600f && unk_0x0BE7F4E3CDBAFB28(750f, -3200f, 6f, Local_85.f_6, 1) >= 700f)
				{
					if (unk_0x0BE7F4E3CDBAFB28(func_25(unk_0x217E9DC48139933D()), *uParam0, 1) <= (250f - 50f))
					{
						if (iLocal_200 <= 5)
						{
							if (func_15(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
							{
								bVar0 = true;
							}
						}
						else
						{
							Local_85.f_0 = 4;
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_199 += 4;
		if (iLocal_199 >= 80)
		{
			iLocal_199 = 20;
			iLocal_200++;
		}
	}
	return bVar0;
}

int func_15(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404548 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x5698BA4FD04D39C4(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xEAD6926636D0C1B6(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xEAD6926636D0C1B6(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x65894EC3F0E84F0E(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404548++;
	if (bParam13)
	{
		if (unk_0xF9617BC6FAE61E08(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404548++;
	if (fParam14 > 0f)
	{
		if (func_21(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404548++;
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
	Global_2404548++;
	return 1;
}

int func_16(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_62(unk_0x217E9DC48139933D(), 1, 1))
		{
			if (!unk_0xF5472C80DF2FF847())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0BE7F4E3CDBAFB28(func_25(unk_0x217E9DC48139933D()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x2E941B5FFA2989C6(Param0, fParam3))
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
		if (func_62(iVar1, 1, 1))
		{
			if (!func_18(iVar1, 0) && unk_0x42995AC664A50A48(unk_0x217E9DC48139933D(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x217E9DC48139933D()))
				{
					if ((func_17(iVar1) || !bParam10) && !Global_2414009[iVar1 /*254*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xB464EB6A40C7975B(iVar1) == -1)
							{
								if (unk_0xB464EB6A40C7975B(iVar1) == unk_0xB464EB6A40C7975B(unk_0x217E9DC48139933D()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xB464EB6A40C7975B(iVar1) != unk_0xB464EB6A40C7975B(unk_0x217E9DC48139933D()))) || unk_0xB464EB6A40C7975B(iVar1) == -1)
							{
								if (unk_0x0BE7F4E3CDBAFB28(func_25(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x2DC8540EEEA3B3A3(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xB464EB6A40C7975B(iVar1) != iParam8 || unk_0xB464EB6A40C7975B(iVar1) == -1)
						{
							if (unk_0x0BE7F4E3CDBAFB28(func_25(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x2DC8540EEEA3B3A3(iVar1, Param0, fParam3))
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
	if (unk_0xF213C724E77F321A(unk_0x275F255ED201B937(iParam0)) || Global_2414009[iParam0 /*254*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x217E9DC48139933D())
	{
		bVar0 = func_19(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1DB8366B5C46DA9E(iParam0))
		{
			bVar0 = unk_0xB464EB6A40C7975B(iParam0) == 8;
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

int func_20()
{
	return Global_1312737;
}

int func_21(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x217E9DC48139933D() != iVar1) || iParam8 == 0)
		{
			if (func_62(iVar1, bParam4, bParam5))
			{
				if (unk_0x42995AC664A50A48(unk_0x217E9DC48139933D(), iVar1))
				{
					if (!bParam7 || (!unk_0x6CFF81397164A1D3(unk_0x275F255ED201B937(iVar1)) && func_17(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xB464EB6A40C7975B(unk_0x217E9DC48139933D()) != unk_0xB464EB6A40C7975B(iVar1))) || unk_0xB464EB6A40C7975B(unk_0x217E9DC48139933D()) == -1)
						{
							if (((unk_0xB464EB6A40C7975B(unk_0x217E9DC48139933D()) == -1 && uParam9) && bParam6) && func_22(iVar1))
							{
							}
							else if (unk_0xD42BD6EB2E0F1677(unk_0x275F255ED201B937(iVar1)))
							{
								if (unk_0x0BE7F4E3CDBAFB28(func_25(iVar1), Param0, 1) < fParam3)
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
	if (func_24(unk_0x217E9DC48139933D(), iParam0))
	{
		return 1;
	}
	Global_2445582 = { func_23(iParam0) };
	if (unk_0xAA0167DC94EACB15(&Global_2445582))
	{
		return 1;
	}
	return 0;
}

struct<13> func_23(var uParam0)
{
	struct<13> Var0;
	
	unk_0xA7E9F04BBC5AF355(uParam0, &Var0, 13);
	return Var0;
}

int func_24(int iParam0, var uParam1)
{
	if (unk_0x2C079282730811D0())
	{
		Global_2445582 = { func_23(iParam0) };
		Global_2445595 = { func_23(uParam1) };
		if (unk_0x6BB4EDAA3A4778E8(&Global_2445582))
		{
			if (unk_0x6BB4EDAA3A4778E8(&Global_2445595))
			{
				unk_0x534D7C93C5A1A2C4(&Global_2445512, 35, &Global_2445582);
				unk_0x534D7C93C5A1A2C4(&Global_2445547, 35, &Global_2445595);
				if (Global_2445512 == Global_2445547)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_25(int iParam0)
{
	return unk_0xA86D5F069399F44D(unk_0x275F255ED201B937(iParam0), 0);
}

int func_26(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xFA28FE3A6246FC30(iParam0);
	return unk_0x1283B8B89DD5D1B6(iParam0);
}

bool func_27()
{
	if (!unk_0x4ED6CFDFE8D4131A(uLocal_194, 1))
	{
		if (unk_0x5A6D8DF6FBC5D0C4(func_25(unk_0x217E9DC48139933D()), iLocal_198, &(Local_85.f_6), 4, 1077936128, 0))
		{
			unk_0xF73FBE4845C43B5B(&iLocal_194, 1);
		}
		else
		{
			iLocal_198++;
		}
	}
	return unk_0x4ED6CFDFE8D4131A(iLocal_194, 1);
}

int func_28(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x0C214D5B8A38C828(unk_0x720C9CED76527377(unk_0x6AEB0DF30A9DB9F1(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_29(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x6A4C37E16775564D())
		{
			func_30(uParam0, 0, 0);
		}
	}
}

void func_30(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x03A753E2C8458335() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6AEB0DF30A9DB9F1();
			}
			else
			{
				*uParam0 = unk_0xCCF575E20D375E1B();
			}
		}
		else
		{
			*uParam0 = unk_0x4F67E8ECA7D3F667();
		}
		uParam0->f_1 = 1;
	}
}

void func_31()
{
	switch (Local_97[unk_0x2473988062EBFC53() /*3*/].f_2)
	{
		case 0:
			func_33();
			func_32();
			if (Local_85.f_9 > 0)
			{
				Local_97[unk_0x2473988062EBFC53() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_51();
			break;
	}
}

void func_32()
{
	int iVar0;
	float fVar1;
	
	if (!unk_0x4ED6CFDFE8D4131A(Local_97[unk_0x2473988062EBFC53() /*3*/].f_1, 0))
	{
		if (func_4(Local_85.f_2) && !func_3(Local_85.f_3))
		{
			iVar0 = unk_0x82368787EA73C0F7(unk_0x83F6CF5E03CA5120(Local_85.f_2));
			fVar1 = unk_0xFB6BA510A533DF81(unk_0x83F6CF5E03CA5120(Local_85.f_2));
			if (iVar0 < 200)
			{
				func_33();
				unk_0xD59C10966EB589EA(unk_0xFD90DE971A4B41BA(Local_85.f_3), uLocal_197);
				unk_0xF73FBE4845C43B5B(&(Local_97[unk_0x2473988062EBFC53() /*3*/].f_1), 0);
			}
			else if (fVar1 < 3f)
			{
				if ((((unk_0x109DE3DA41AAD94A(unk_0x83F6CF5E03CA5120(Local_85.f_2)) || unk_0x1ABA9753939503C5(unk_0x83F6CF5E03CA5120(Local_85.f_2), 3, 10000)) || unk_0x1ABA9753939503C5(unk_0x83F6CF5E03CA5120(Local_85.f_2), 1, 10000)) || unk_0x1ABA9753939503C5(unk_0x83F6CF5E03CA5120(Local_85.f_2), 0, 10000)) || unk_0x1ABA9753939503C5(unk_0x83F6CF5E03CA5120(Local_85.f_2), 2, 10000))
				{
					func_33();
					unk_0xD59C10966EB589EA(unk_0xFD90DE971A4B41BA(Local_85.f_3), uLocal_196);
					unk_0xF73FBE4845C43B5B(&(Local_97[unk_0x2473988062EBFC53() /*3*/].f_1), 0);
				}
			}
		}
	}
}

void func_33()
{
	if (!unk_0x4ED6CFDFE8D4131A(iLocal_194, 0))
	{
		if (func_4(Local_85.f_2))
		{
			unk_0xF4BF3E3D7FE56705(&uLocal_195);
			unk_0xC789324646007E32(0, unk_0x83F6CF5E03CA5120(Local_85.f_2), Local_85.f_6, 14, 30f, 786468, 15f, 1f, 0);
			unk_0x02C53261E93C1B87(0, unk_0x83F6CF5E03CA5120(Local_85.f_2), 30f, 786468);
			unk_0xFF7E39890B2840DD(uLocal_195);
			unk_0xF4BF3E3D7FE56705(&uLocal_196);
			unk_0x36DBE8E570B9FBCE(0, 0, 1);
			unk_0xFF7E39890B2840DD(uLocal_196);
			unk_0xF4BF3E3D7FE56705(&uLocal_197);
			unk_0xC789324646007E32(0, unk_0x83F6CF5E03CA5120(Local_85.f_2), Local_85.f_6, 5, 30f, 786468, 99999f, 1f, 0);
			unk_0x36DBE8E570B9FBCE(0, 0, 1);
			unk_0xFF7E39890B2840DD(uLocal_197);
			unk_0xF73FBE4845C43B5B(&iLocal_194, 0);
		}
	}
}

int func_34()
{
	return Local_85.f_0;
}

int func_35(int iParam0)
{
	return Local_97[iParam0 /*3*/];
}

bool func_36(int iParam0)
{
	return !func_37(iParam0);
}

int func_37(int iParam0)
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
			if (Global_262145.f_4996)
			{
				return 0;
			}
			if (func_39(unk_0x217E9DC48139933D(), 7))
			{
				return 0;
			}
			if (unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 0) || unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_4997)
			{
				return 0;
			}
			if (func_39(unk_0x217E9DC48139933D(), 7))
			{
				return 0;
			}
			if (unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 0) || unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_4998)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_4999)
			{
				return 0;
			}
			if (func_39(unk_0x217E9DC48139933D(), 7))
			{
				return 0;
			}
			if (unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 0) || unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_38(4))
			{
				return 0;
			}
			if (func_39(unk_0x217E9DC48139933D(), 7))
			{
				return 0;
			}
			if (unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 0) || unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 18:
			if (func_38(4))
			{
				return 0;
			}
			if (func_39(unk_0x217E9DC48139933D(), 7))
			{
				return 0;
			}
			if (unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 0) || unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_38(4))
			{
				return 0;
			}
			if (func_39(unk_0x217E9DC48139933D(), 7))
			{
				return 0;
			}
			if (unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 0) || unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 1))
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

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_62(unk_0x748B3A65C2604C33(iVar0), 0, 1))
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2414009[iVar0 /*254*/].f_205, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_39(int iParam0, int iParam1)
{
	return unk_0x4ED6CFDFE8D4131A(Global_2414009[iParam0 /*254*/].f_205, iParam1);
}

int func_40()
{
	bool bVar0;
	
	func_47(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!unk_0x03A753E2C8458335())
		{
			return 1;
		}
	}
	if (func_46())
	{
		return 1;
	}
	if (Global_2437058)
	{
		return 1;
	}
	if (func_45())
	{
		return 1;
	}
	if (func_44(157))
	{
		if (!func_43())
		{
			return 1;
		}
	}
	if (func_44(155))
	{
		return 1;
	}
	if (!unk_0x4C82BD446C34CACD())
	{
		return 1;
	}
	if (func_41() != 0)
	{
		if (unk_0x8E34C953364A76DD(func_41()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_41()
{
	switch (func_42())
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

int func_42()
{
	return Global_24444;
}

bool func_43()
{
	return Global_2428131.f_572;
}

int func_44(int iParam0)
{
	if (unk_0xC9F59C0A710ECD34(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_45()
{
	return Global_2435238;
}

bool func_46()
{
	return Global_2428131.f_567;
}

void func_47(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5CE8DE5909565748(1))
	{
		iVar1 = unk_0xA85E614430EFF816(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x57EC5FA4D4D6AFCA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_48(iVar0);
					break;
				
				case 2:
					unk_0x57EC5FA4D4D6AFCA(1, iVar0, &Var4, 3);
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

void func_48(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x57EC5FA4D4D6AFCA(1, iParam0, &Var0, 3))
	{
		if (func_62(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x275F255ED201B937(Var0.f_1);
			if (unk_0xD42BD6EB2E0F1677(uVar3))
			{
				if (unk_0x52BE10F427339B39(uVar3, 0))
				{
					uVar4 = unk_0xB3598EA616C3FFC3(uVar3, 0);
					if (unk_0x0E7910A63E05B12C(uVar4, Var0.f_2) && unk_0xB779D92A280DB7F7())
					{
						if (func_49(uVar4, &bVar5))
						{
							unk_0x745F15A215F2DDF1(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x6C9B2BE03BBD5C98(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_49(var uParam0, var uParam1)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		if (!unk_0x138190F64DB4BBD1(uParam0))
		{
			if (unk_0x3BDB448E5390D817(uParam0))
			{
				unk_0xDC19C288082E586E(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x622B1980CBE13332(uParam0, 0))
		{
			if (unk_0x711DB131BD66A278(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_50()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_51()
{
	func_54();
	if (func_34() == 4 && Local_85.f_4 != 0)
	{
		unk_0x57F925DF866E2CBD(Local_85.f_4, 0);
	}
	if (func_4(Local_85.f_2))
	{
		unk_0x43FB2E98C3D3A62B(unk_0x83F6CF5E03CA5120(Local_85.f_2), 0f);
	}
	unk_0xC27FB879C2B9A2EB("JOYRIDER_RADIO_SCENE");
	func_53(9, 0);
	func_52();
}

void func_52()
{
	unk_0x5E8B6D17FF91CD59();
}

void func_53(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x4ED6CFDFE8D4131A(Global_2414009[unk_0x217E9DC48139933D() /*254*/].f_205, iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(Global_2414009[unk_0x217E9DC48139933D() /*254*/].f_205), iParam0);
		}
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_2414009[unk_0x217E9DC48139933D() /*254*/].f_205, iParam0))
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_2414009[unk_0x217E9DC48139933D() /*254*/].f_205), iParam0);
	}
}

void func_54()
{
	unk_0x5EC7E18324A7D03D(&uLocal_195);
}

void func_55(struct<20> Param0)
{
	int iVar0;
	
	func_60(func_61(Param0.f_0), Param0);
	unk_0xAA95DB4B73C6E7C6(1);
	unk_0x1018FCB1843501C5(1);
	func_58(0, -1, 0);
	unk_0x0EA32F14A91BEC57(&Local_85, 12);
	unk_0x770EF39C9CAA1AEE(&Local_97, 97);
	if (!func_57())
	{
		func_51();
	}
	if (unk_0x03A753E2C8458335())
	{
		unk_0x3215376E79F6EA18(0);
		if (unk_0x6A4C37E16775564D())
		{
			if (Global_2446554.f_4220 == 0)
			{
				iVar0 = unk_0x9C1C462D7B1DD1F9(0, 7);
				switch (iVar0)
				{
					case 0:
						Local_85.f_4 = joaat("stingergt");
						break;
					
					case 1:
						Local_85.f_4 = joaat("entityxf");
						break;
					
					case 2:
						Local_85.f_4 = joaat("feltzer2");
						break;
					
					case 3:
						Local_85.f_4 = joaat("monroe");
						break;
					
					case 4:
						Local_85.f_4 = joaat("cogcabrio");
						break;
					
					case 5:
						Local_85.f_4 = joaat("superd");
						break;
					
					case 6:
						Local_85.f_4 = joaat("infernus");
						break;
				}
			}
			else
			{
				Local_85.f_4 = Global_2446554.f_4220;
				Global_2446554.f_4220 = 0;
			}
			unk_0x57F925DF866E2CBD(Local_85.f_4, 1);
			Local_85.f_5 = func_56(1);
		}
		func_53(9, 1);
		unk_0x5F70787AC4BF7928("JOYRIDER_RADIO_SCENE");
		Local_97[unk_0x2473988062EBFC53() /*3*/] = 0;
	}
	else
	{
		func_51();
	}
}

int func_56(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x9C1C462D7B1DD1F9(0, 32);
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

int func_57()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x03A753E2C8458335())
		{
			return 0;
		}
		if (unk_0x22FE3E741BF116F6())
		{
			return 1;
		}
		if (func_46())
		{
			return 0;
		}
		if (func_44(155))
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

int func_58(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x48A97E77DF5DB711();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_52();
			}
			else
			{
				return 0;
			}
		}
		if (!func_59())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x03A753E2C8458335())
				{
					if (!bParam2)
					{
						func_52();
					}
					else
					{
						return 0;
					}
				}
				if (func_46())
				{
					if (!bParam2)
					{
						func_52();
					}
					else
					{
						return 0;
					}
				}
				if (func_44(155))
				{
					if (!bParam2)
					{
						func_52();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x47499F21458D3AFA())
			{
				if (!bParam2)
				{
					func_52();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x48A97E77DF5DB711();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x03A753E2C8458335())
		{
			if (!bParam2)
			{
				func_52();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x47499F21458D3AFA())
	{
		if (!bParam2)
		{
			func_52();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_59()
{
	return Global_1315874;
}

void func_60(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x03A753E2C8458335())
	{
		func_52();
	}
	unk_0x5543668CEF76D321(uParam0, 0, Param1.f_16);
}

int func_61(int iParam0)
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

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x1DB8366B5C46DA9E(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0xBFFB35986CAAE58C(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422140.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

