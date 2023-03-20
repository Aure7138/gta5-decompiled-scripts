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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	struct<563> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	float fLocal_628 = 0f;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	bool bLocal_631 = 0;
	int iLocal_632 = 0;
	bool bLocal_633 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_622 = iLocal_621;
	iLocal_623 = iLocal_622;
	fLocal_628 = 100f;
	if (unk_0x25531002BCF0D968(joaat("mission_stat_watcher")) > 1)
	{
		unk_0x883793591E631A3B();
	}
	Global_54566 = 0;
	Global_54573 = 0;
	iVar0 = 1;
	if (unk_0x7547D7CF93115D6D(18))
	{
		func_107();
		Global_66667 = 0;
		Global_54567 = 0;
		Global_54593 = 0;
		unk_0x883793591E631A3B();
	}
	iVar1 = 0;
	unk_0x4EDE34FBADD967A6(0);
	func_105();
	while (!Global_54565)
	{
		unk_0x4EDE34FBADD967A6(200);
		if (Global_54573)
		{
			func_107();
			unk_0x883793591E631A3B();
		}
	}
	Global_54580 = 0;
	Global_54567 = 1;
	while (!Global_54566)
	{
		if (Global_66667 > 0)
		{
			func_99();
			if (Global_54600 == -1)
			{
				Global_54600 = unk_0xF976C624234A4AA8();
			}
			else if ((unk_0xF976C624234A4AA8() - Global_54600) > 1000)
			{
				func_98();
			}
		}
		if (Global_54573)
		{
			func_107();
			Global_54567 = 0;
			unk_0x883793591E631A3B();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_54567 = 0;
	if (func_97())
	{
		while (func_97())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	bVar2 = false;
	while (!bVar2)
	{
		if (!Global_54568 == iLocal_630)
		{
			if (Global_54568)
			{
				unk_0x5AE11BC36633DE4E(0);
				iLocal_620 = 0;
				Global_54583 = 0;
			}
			iLocal_630 = Global_54568;
		}
		while (Global_54572)
		{
			unk_0x4EDE34FBADD967A6(1000);
		}
		if (Global_54566 && !Global_54573)
		{
			if (Global_54565 || iLocal_632)
			{
				Global_54570 = 0;
				if (bLocal_631)
				{
				}
				if (Global_54566)
				{
				}
				if (!bLocal_631 == Global_54566)
				{
					func_96(&Local_44);
					Local_44.f_562 = 1;
					func_95();
					func_94();
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < Global_66667)
					{
						if (Global_66668[iVar3 /*9*/] > 0)
						{
							if (Global_54797[Global_66668[iVar3 /*9*/] /*13*/] == 4)
							{
								if (!Global_54797[Global_66668[iVar3 /*9*/] /*13*/].f_7)
								{
									if (Global_54797[Global_66668[iVar3 /*9*/] /*13*/].f_3)
									{
										if (Global_66668[iVar3 /*9*/].f_1 == 0)
										{
											Global_66668[iVar3 /*9*/].f_3 = 5;
										}
									}
								}
							}
						}
						iVar3++;
					}
					bVar4 = false;
					if ((Global_68327 && !Global_54562) || Global_54574)
					{
						bVar4 = true;
					}
					bVar5 = false;
					if (unk_0x8D4100BAA46EE198() || unk_0xC17F446CF864854D())
					{
						bVar5 = true;
					}
					else
					{
						if (Global_89823.f_8)
						{
							bVar5 = true;
						}
						if (Global_54592)
						{
							bVar5 = true;
						}
					}
					if (func_93(0))
					{
						bVar5 = true;
						Global_54592 = 1;
					}
					iVar6 = Global_66818;
					if (Global_54575)
					{
						func_90(Global_54576);
						iVar0 = 2;
						func_89(&Local_44, "HISHPA", &Global_54587, 0);
						if (iVar6 == 69 || iVar6 == 70)
						{
							func_88(&Local_44, 3, "ACTATAKE_AG", "", Global_97173.f_1.f_126[Global_54576 /*23*/], 0, 0, 0);
						}
						else
						{
							func_88(&Local_44, 3, "POTATAKE", "", Global_97173.f_1.f_126[Global_54576 /*23*/], 0, 0, 0);
						}
						iVar7 = 0;
						iVar7 = 0;
						while (iVar7 < Global_86419[Global_54576 /*38*/].f_37)
						{
							if (Global_86419[Global_54576 /*38*/].f_31[iVar7] > 0)
							{
								func_88(&Local_44, 3, func_87(Global_86419[Global_54576 /*38*/].f_25[iVar7]), "", (-1 * Global_86419[Global_54576 /*38*/].f_31[iVar7]), 0, 0, 0);
							}
							iVar7++;
						}
						if ((((Global_97173.f_1.f_126[Global_54576 /*23*/].f_2[0] > 0 || iVar6 == 74) || iVar6 == 75) || iVar6 == 69) || iVar6 == 70)
						{
							func_88(&Local_44, 3, "ACTATAKE_M", "", Global_97173.f_1.f_126[Global_54576 /*23*/].f_2[0], 0, 0, 0);
						}
						if ((Global_97173.f_1.f_126[Global_54576 /*23*/].f_2[1] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_88(&Local_44, 3, "ACTATAKE_F", "", Global_97173.f_1.f_126[Global_54576 /*23*/].f_2[1], 0, 0, 0);
						}
						if ((Global_97173.f_1.f_126[Global_54576 /*23*/].f_2[2] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_88(&Local_44, 3, "ACTATAKE_T", "", Global_97173.f_1.f_126[Global_54576 /*23*/].f_2[2], 0, 0, 0);
						}
						if (Global_86409.f_7 > 0)
						{
							func_88(&Local_44, 3, "ACTATAKE_L", "", Global_86409.f_7, 0, 0, 0);
						}
						iVar8 = func_85(func_86(Global_54576));
						iVar9 = 0;
						iVar10 = 0;
						iVar7 = 0;
						while (iVar7 < Global_86218[iVar8 /*19*/])
						{
							if (!func_84(Global_97173.f_1.f_12[iVar8 /*6*/][iVar7]))
							{
								iVar9 = (iVar9 + Global_97173.f_1.f_126[Global_54576 /*23*/].f_17[iVar7]);
							}
							else
							{
								iVar10 = (iVar10 + Global_97173.f_1.f_126[Global_54576 /*23*/].f_17[iVar7]);
							}
							iVar7++;
						}
						if (iVar6 == 74 || iVar6 == 75)
						{
							func_88(&Local_44, 3, "LACKTAKE", "", iVar9, 0, 0, 0);
						}
						else
						{
							func_88(&Local_44, 3, "CREWTAKE", "", iVar9, 0, 0, 0);
						}
						if (iVar10 > 0)
						{
							if (!func_93(0))
							{
								switch (iVar6)
								{
									case 90:
										unk_0x96B68C67633472DC(joaat("hcs_penalty_jewel_funeral"), iVar10, 1);
										break;
									
									case 93:
										unk_0x96B68C67633472DC(joaat("hcs_penalty_paleto_funeral"), iVar10, 1);
										break;
									
									case 69:
									case 70:
										unk_0x96B68C67633472DC(joaat("hcs_penalty_bureau_funeral"), iVar10, 1);
										break;
									
									case 84:
									case 85:
										unk_0x96B68C67633472DC(joaat("hcs_penalty_bigs_funeral"), iVar10, 1);
										break;
									}
							}
							func_88(&Local_44, 3, "HSTENDPFUN", "", iVar10, 0, 0, 0);
						}
					}
					else
					{
						func_89(&Local_44, "MISHPA", &Global_54587, 0);
					}
					if (Global_66667 > 0)
					{
						func_69(&Local_44);
					}
					if (!Global_54562)
					{
						func_62();
					}
					while (!bVar5)
					{
						if (unk_0x8D4100BAA46EE198() || unk_0xC17F446CF864854D())
						{
							bVar5 = true;
						}
						unk_0x4EDE34FBADD967A6(0);
					}
					if ((bVar5 || Global_54592) && !bVar4)
					{
						if (!Global_54574)
						{
							func_58(&Local_44, 0, 0);
						}
						bVar11 = false;
						if (!Global_66817)
						{
							switch (Global_66818)
							{
								case 50:
								case 51:
								case 52:
									unk_0xD6A45BF901B17F77("HoldMissionCompleteWhenPrepared", 1);
									func_54(1);
									bVar11 = true;
									break;
								
								default:
									unk_0xD6A45BF901B17F77("HoldMissionCompleteWhenPrepared", 1);
									func_54(0);
									bVar11 = true;
									break;
							}
						}
						else
						{
							unk_0xD6A45BF901B17F77("HoldMissionCompleteWhenPrepared", 1);
							func_54(1);
							bVar11 = true;
						}
						iVar1 = func_53();
						unk_0x481B0AD01AC057F7("MISHSTA", 3);
						while (!unk_0x6C741637F73EA9EC(3))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						bLocal_633 = true;
						while (unk_0x3574DD38C5FAC832())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						while (unk_0x3082186EA3CBA463(unk_0x4D82797EF5035A9F()))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						func_58(&Local_44, 1, 0);
						unk_0xD6A45BF901B17F77("HoldMissionCompleteWhenPrepared", 0);
						if (bVar11)
						{
							while (!unk_0x46000C1AB19A9335())
							{
								unk_0x4EDE34FBADD967A6(0);
							}
						}
						unk_0x21FEE1ED00A9086E();
					}
					if (Global_54565)
					{
						iLocal_632 = 1;
						Global_54565 = 0;
					}
					unk_0xC1B1E9A034A63A62(0);
				}
				if (bLocal_633 && !Global_54573)
				{
					if (unk_0x25531002BCF0D968(joaat("appcamera")) > 0)
					{
						func_50(0);
					}
					if (Global_66667 > 0 || Global_54562)
					{
						if (Global_54592)
						{
							unk_0x070F78D7490C1013(7);
						}
						if (iVar1 && !Global_54562)
						{
							Global_35725 = 1;
						}
						if (!Global_54574)
						{
							if (func_21(&Local_44, 0, unk_0xBBDA792448DB5A89(iVar0), 0, 0, 0))
							{
								Global_54573 = 1;
							}
							func_20();
						}
						if (Global_54592)
						{
							unk_0x070F78D7490C1013(7);
						}
					}
					func_19(1);
					if (!unk_0x8D4100BAA46EE198())
					{
						func_17();
					}
					if (!func_16(0))
					{
						switch (func_14("AM_H_PASS"))
						{
							case 2:
								func_11("AM_H_PASS", 3, 2000, 2500, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_10(0);
								break;
							}
						}
				}
				bLocal_631 = Global_54566;
				if (Global_54563)
				{
				}
				else
				{
					unk_0x3082186EA3CBA463(unk_0x4D82797EF5035A9F());
					if (unk_0x5D422B4764FA2ACA(unk_0x687D51F360787909(unk_0x4D82797EF5035A9F())) < 1)
					{
						Global_54574 = 1;
					}
					if (((((func_97() || func_9()) || Global_54573) || Global_68336) || Global_54574) || !bLocal_633)
					{
						Global_54562 = 0;
						Global_54566 = 0;
						iLocal_632 = 0;
						Global_54569 = 0;
						Global_54570 = 0;
						Global_54580 = 0;
						Global_54583 = 0;
						func_19(0);
						func_2();
						Global_54573 = 0;
						bVar2 = true;
					}
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1(&Local_44);
	Global_24693 = 0;
	Global_54577 = 0;
	unk_0x883793591E631A3B();
}

void func_1(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x86FF04BBB2EC839F(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x80AD636AD4184F2B())
		{
			unk_0xF48C88BD1F0007E8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x5D559A5DDC88A4EF(0);
			unk_0xA52FC2467E672B55();
		}
		unk_0x86FF04BBB2EC839F(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x8311E913E07031CD(0);
		uParam0->f_564 = 0;
	}
	if (!Global_68335)
	{
		if (!unk_0x3082186EA3CBA463(unk_0x4D82797EF5035A9F()))
		{
			if (!Global_68336)
			{
				if (unk_0xC2C705ED6124A7C2() && !func_93(0))
				{
					unk_0x662E87A876F1069D(800);
				}
			}
		}
	}
	func_19(0);
}

void func_2()
{
	if (Global_54572)
	{
		return;
	}
	Global_54581 = 0;
	Global_66667 = 0;
	Global_54583 = 0;
	if (Global_54580)
	{
	}
	Global_54580 = 0;
	func_19(0);
	func_8();
	Global_66819 = 0;
	Global_54571 = 1;
	func_6();
	func_5();
	func_4();
	func_3();
	Global_54562 = 0;
	Global_54592 = 0;
	Global_54600 = -1;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_66854[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_66863 = 0;
}

void func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_66820[iVar0 /*2*/] = 0;
		Global_66820[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_66853 = 0;
}

void func_5()
{
	Global_54731 = 0;
}

void func_6()
{
	Global_54591 = 0;
	Global_54595 = func_7(joaat("sp0_shots"));
	Global_54594 = func_7(joaat("sp0_hits"));
	Global_54597 = func_7(joaat("sp1_shots"));
	Global_54596 = func_7(joaat("sp1_hits"));
	Global_54599 = func_7(joaat("sp2_shots"));
	Global_54598 = func_7(joaat("sp2_hits"));
}

int func_7(int iParam0)
{
	var uVar0;
	
	unk_0x55FFE396AA3CA77A(iParam0, &uVar0, -1);
	return uVar0;
}

void func_8()
{
	int iVar0;
	
	Global_54601 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_54602[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

var func_9()
{
	return Global_1315898;
}

void func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_11(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_12(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_12(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xA858564DC37EED5E(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA858564DC37EED5E(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0xF976C624234A4AA8() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0xF976C624234A4AA8() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_13();
	}
}

void func_13()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_14(char* sParam0)
{
	if (unk_0xA858564DC37EED5E(sParam0, &Global_95820))
	{
		return 1;
	}
	if (func_15(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_15(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA858564DC37EED5E(uParam0, &(Global_97173.f_23602[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_17()
{
	unk_0x882182119EAE9ABF();
	func_18();
}

void func_18()
{
	Global_17098.f_134 = 1;
}

void func_19(int iParam0)
{
	Global_68327 = iParam0;
	Global_68328 = iParam0;
}

void func_20()
{
	Global_17098.f_6 = 1;
}

int func_21(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0xE3B6F359045B979E() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0xE3B6F359045B979E();
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x1F214B2198E9D98E(unk_0x687D51F360787909(unk_0x4D82797EF5035A9F()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0x87AF94EA533AA9EA(unk_0x687D51F360787909(unk_0x4D82797EF5035A9F())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0xC2C705ED6124A7C2() || unk_0xF468278E75CA2341())
		{
			unk_0x8311E913E07031CD(1);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
			{
				unk_0x781B097139B80D2A(unk_0xAF65E5A58BE87D95());
			}
		}
	}
	unk_0xD9E638F7F8DCAA60(7);
	unk_0xD9E638F7F8DCAA60(8);
	unk_0xD9E638F7F8DCAA60(9);
	unk_0xD9E638F7F8DCAA60(6);
	unk_0xD9E638F7F8DCAA60(19);
	unk_0x500F4CA776CEBD0A(2, 19, 1);
	unk_0x500F4CA776CEBD0A(0, 37, 1);
	unk_0x500F4CA776CEBD0A(0, 21, 1);
	unk_0x500F4CA776CEBD0A(0, 28, 1);
	unk_0x500F4CA776CEBD0A(0, 29, 1);
	unk_0x500F4CA776CEBD0A(0, 171, 1);
	func_48();
	if (unk_0x30E5EC01C9ACF9BC(2))
	{
		if (unk_0xA9587537C221A5AB() || (unk_0xC2C705ED6124A7C2() && !unk_0xC17F446CF864854D()))
		{
			unk_0xD58155239E9DC61A();
		}
	}
	Global_35459 = 1;
	if (!uParam0->f_563)
	{
		switch (func_45(unk_0x687D51F360787909(unk_0x4D82797EF5035A9F())))
		{
			case 1:
				unk_0x8EEEED91D5DD768C("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x8EEEED91D5DD768C("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x8EEEED91D5DD768C("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + unk_0xF34EE736CF047844((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_44(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_44(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_44((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_44(30f) - func_44(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_19(1);
		uParam0->f_572 = (uParam0->f_572 + unk_0xF2DB717A73826179((0f + (1000f * unk_0x0000000050597EE2()))));
		func_26(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_30 = func_25(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					unk_0xF48C88BD1F0007E8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xA52FC2467E672B55();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_547 = func_25(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0xF48C88BD1F0007E8(uParam0->f_1, "TRANSITION_OUT");
			unk_0xA52FC2467E672B55();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * unk_0x0000000050597EE2())));
				}
			}
		}
		uParam0->f_548 = func_25(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0x00585B724989D978(2))
			{
				if (unk_0xE908465F9CDF4F1A(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_22(uParam0, !uParam0->f_565);
					}
				}
			}
		}
		if (unk_0x58FC9C7DF8FE009B(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0xE908465F9CDF4F1A(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0xF48C88BD1F0007E8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xA52FC2467E672B55();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0xF48C88BD1F0007E8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xA52FC2467E672B55();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_22(uParam0, !uParam0->f_565);
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					unk_0xF48C88BD1F0007E8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xA52FC2467E672B55();
				}
				uParam0->f_559 = func_25((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * unk_0x0000000050597EE2())), 0f, 1f);
				uParam0->f_573 = func_25((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_25((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * unk_0x0000000050597EE2())), 0f, 1f);
			uParam0->f_573 = func_25((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (unk_0x58FC9C7DF8FE009B(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		else
		{
			if (!bVar0)
			{
				func_19(0);
			}
			return !bVar0;
		}
	}
	func_19(0);
	return 1;
}

void func_22(var uParam0, bool bParam1)
{
	unk_0xF48C88BD1F0007E8(uParam0->f_4, "CLEAR_ALL");
	unk_0xA52FC2467E672B55();
	if (unk_0x80AD636AD4184F2B())
	{
		unk_0xF48C88BD1F0007E8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x5D559A5DDC88A4EF(1);
		unk_0xA52FC2467E672B55();
	}
	unk_0xF48C88BD1F0007E8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x876C5D0739031E15(0);
	func_24(unk_0xB588E50C18B98D3F(2, 215, 1));
	func_23("ES_HELP");
	if (unk_0x80AD636AD4184F2B())
	{
		unk_0x5D559A5DDC88A4EF(1);
		unk_0x876C5D0739031E15(215);
	}
	unk_0xA52FC2467E672B55();
	if (bParam1)
	{
		unk_0xF48C88BD1F0007E8(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x876C5D0739031E15(1);
		func_24(unk_0xB588E50C18B98D3F(2, 216, 1));
		func_23("ES_XPAND");
		if (unk_0x80AD636AD4184F2B())
		{
			unk_0x5D559A5DDC88A4EF(1);
			unk_0x876C5D0739031E15(216);
		}
		unk_0xA52FC2467E672B55();
	}
	unk_0xF48C88BD1F0007E8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xA52FC2467E672B55();
}

void func_23(char* sParam0)
{
	unk_0x44F4D219F8513945(sParam0);
	unk_0x113A6F657EE871A3();
}

void func_24(var uParam0)
{
	unk_0x3F8884039D21AA69(uParam0);
}

float func_25(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_26(var uParam0, float fParam1, int iParam2)
{
	int iVar0;
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
	var uVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = unk_0xF2DB717A73826179((uParam0->f_547 * 255f));
	fVar1 = (func_43() * 0.25f);
	if (unk_0xE908465F9CDF4F1A(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0xF48C88BD1F0007E8(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_23(&(uParam0->f_5));
				func_23(&(uParam0->f_13));
				unk_0x876C5D0739031E15(100);
				unk_0x5D559A5DDC88A4EF(1);
				unk_0x876C5D0739031E15(uParam0->f_56);
				unk_0x5D559A5DDC88A4EF(iParam2);
				unk_0x876C5D0739031E15(69);
				unk_0xA52FC2467E672B55();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0xF48C88BD1F0007E8(uParam0->f_1, "TRANSITION_UP");
				unk_0xA8F7908868900538(0.15f);
				unk_0x5D559A5DDC88A4EF(1);
				unk_0xA52FC2467E672B55();
				uParam0->f_3 = 1;
			}
		}
		func_42();
		unk_0x4A383EC377D451D0(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_44((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_43());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	fVar7 = func_41(&(uParam0->f_13));
	if (fVar6 < fVar7)
	{
		fVar6 = (fVar7 + (3f * 0.006f));
	}
	if (unk_0x52696228E705571E(0) < 1.4f)
	{
		fVar6 = (fVar6 * 1.3f);
	}
	fVar7 = func_41(&(uParam0->f_550));
	fVar8 = (((0.119f + 0.05f) / func_43()) / 2.5f);
	if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
	{
		if (fVar6 < (fVar7 + (2.6f * fVar8)))
		{
			fVar6 = (fVar7 + (2.6f * fVar8));
		}
	}
	else if (fVar6 < (fVar7 + (1.9f * fVar8)))
	{
		fVar6 = (fVar7 + (2f * fVar8));
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x0756DDDAD8038AC9(2, 215);
	unk_0x0756DDDAD8038AC9(2, 216);
	unk_0x0756DDDAD8038AC9(2, 200);
	unk_0x500F4CA776CEBD0A(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_38((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * unk_0x0000000050597EE2())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (unk_0xC2C705ED6124A7C2())
			{
				unk_0xB9127039E1155CEF();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0xD9E638F7F8DCAA60(7);
				unk_0xD9E638F7F8DCAA60(8);
				unk_0xD9E638F7F8DCAA60(9);
				unk_0xD9E638F7F8DCAA60(6);
				unk_0x4A383EC377D451D0(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0x500F4CA776CEBD0A(0, 140, 1);
				unk_0x500F4CA776CEBD0A(0, 141, 1);
				unk_0x500F4CA776CEBD0A(0, 142, 1);
				unk_0x500F4CA776CEBD0A(2, 188, 1);
				if (unk_0x02AC213158CF29AE(2, 188))
				{
					unk_0x84795EA8F54230A1(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0x84795EA8F54230A1(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x500F4CA776CEBD0A(2, 187, 1);
				if (unk_0x02AC213158CF29AE(2, 187))
				{
					unk_0x84795EA8F54230A1(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0x84795EA8F54230A1(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x500F4CA776CEBD0A(2, 202, 1);
				if (unk_0x02AC213158CF29AE(2, 202))
				{
					unk_0x84795EA8F54230A1(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0x84795EA8F54230A1(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0xD9E638F7F8DCAA60(7);
				unk_0xD9E638F7F8DCAA60(8);
				unk_0xD9E638F7F8DCAA60(9);
				unk_0xD9E638F7F8DCAA60(6);
				unk_0x500F4CA776CEBD0A(0, 140, 1);
				unk_0x500F4CA776CEBD0A(0, 141, 1);
				unk_0x500F4CA776CEBD0A(0, 142, 1);
				if (unk_0x58FC9C7DF8FE009B(2, 215) || unk_0x02AC213158CF29AE(2, 200))
				{
					unk_0x84795EA8F54230A1(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0x84795EA8F54230A1(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0x761F331974F836D5(1, &uVar13, &uVar14, &uVar15, &iVar16);
	unk_0xAF24EA89F4EF8594(uVar13, uVar14, uVar15, iVar0);
	unk_0xD49409263C7DA1DD(fVar9, fVar10);
	unk_0x5E9A172D8EF0C9ED(0);
	unk_0x8F290D3FB4225BC6(1f, 0.4f);
	fVar1 = (fVar1 - func_44(6f));
	fVar1 = (fVar1 + (func_44(30f) - func_44((2f * 2f))));
	fVar11 = (fVar2 - func_44((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_25((fVar11 / (0.6f * func_44(25f))), 0f, 1f);
		func_42();
		unk_0x545012F14516B7DC(0.5f, (fVar1 - (func_44((2f - 0.5f)) - 0.001388889f)), fVar6, func_37(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_44((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_44((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_43())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_44(25f))), 0f, 1f);
			func_34(uParam0, iVar17, (fVar1 + func_44(2f)), fVar9, fVar10, unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_44(25f));
		iVar17++;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_44((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_43())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_44(2f));
			fVar12 = func_25((fVar11 / (0.6f * func_44(25f))), 0f, 1f);
			func_42();
			unk_0x545012F14516B7DC(0.5f, (fVar1 + func_44((2f * 0.5f))), fVar6, func_37(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_44((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_43())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_44(25f))), 0f, 1f);
			unk_0xAF24EA89F4EF8594(uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			func_29(7, 0, 1, &fVar18, &fVar19);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x7144282F69992119() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_43()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_43()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_43()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_43()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			unk_0xD49409263C7DA1DD(fVar20, fVar21);
			unk_0x5E9A172D8EF0C9ED(1);
			unk_0x8F290D3FB4225BC6(1f, 0.4f);
			func_28(&(uParam0->f_550), fVar20, (fVar1 + func_44((2f * 2f))), 0, 0, 0);
			unk_0xD49409263C7DA1DD(fVar20, fVar21);
			unk_0x5E9A172D8EF0C9ED(2);
			unk_0x8F290D3FB4225BC6(1f, 0.4f);
			unk_0x5FEA64228C897E30(0);
			func_42();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0xD49409263C7DA1DD(fVar20, fVar22);
			unk_0xAF24EA89F4EF8594(uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x55B01783B33A78F6("PERCENTAGE");
					unk_0x844339A27F0F1508(uParam0->f_554);
					unk_0x268B3979E044050D(fVar20, (fVar1 + func_44((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x55B01783B33A78F6("FO_TWO_NUM");
					unk_0x844339A27F0F1508(uParam0->f_554);
					unk_0x844339A27F0F1508(uParam0->f_555);
					unk_0x268B3979E044050D(fVar20, (fVar1 + func_44((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x55B01783B33A78F6("MTPHPER_XPNO");
					unk_0x844339A27F0F1508(uParam0->f_554);
					unk_0x268B3979E044050D(fVar20, (fVar1 + func_44((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						unk_0x761F331974F836D5(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						unk_0x761F331974F836D5(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						unk_0x761F331974F836D5(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_27(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_44(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				unk_0x23546A353B2D8470(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_44(30f) - 2f));
		}
	}
}

float func_27(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_28(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0x5FEA64228C897E30(iParam3);
	unk_0x8DD7836CF491E098(iParam5);
	func_42();
	if (bParam4)
	{
		unk_0x55B01783B33A78F6("STRING");
		unk_0xD1F22DD7F7363AB6(sParam0);
	}
	else
	{
		unk_0x55B01783B33A78F6(sParam0);
	}
	unk_0x268B3979E044050D(fParam1, fParam2, 0);
}

int func_29(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	uVar0 = func_33(iParam0);
	uVar1 = func_31(iParam0, bParam1);
	if (unk_0x3BA42EA02A10243D(uVar1) != 0)
	{
		unk_0xF11D9F31BB92168A(&iVar2, &iVar3);
		Var4 = { unk_0x63A8F87EFE6A0289(uVar0, uVar1) };
		Var4.f_0 = (Var4.f_0 * func_30(iParam0));
		Var4.f_1 = (Var4.f_1 * func_30(iParam0));
		if (!bParam2)
		{
			Var4.f_0 = (Var4.f_0 - 2f);
			Var4.f_1 = (Var4.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var4.f_0 = 288f;
			Var4.f_1 = 106f;
		}
		*fParam3 = ((Var4.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var4.f_1 / IntToFloat(iVar3)) / (Var4.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!unk_0x0F10900B9F5120CA() && iParam0 != 30)
		{
			*fParam3 = (*fParam3 * 1.33f);
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17235)
			{
				*fParam4 = (*fParam4 * (Global_17235 / *fParam3));
				*fParam3 = Global_17235;
			}
		}
		return 1;
	}
	return 0;
}

float func_30(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
			return 0.5f;
			break;
	}
	return 1f;
}

var func_31(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0x8FA72E132AAFA62F(&(Global_17236.f_6048[iParam0 /*16*/])))
	{
		return func_32(&(Global_17236.f_6048[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "Shop_Discount_Icon";
			sVar0[1] = "Shop_Discount_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_32(var uParam0)
{
	return uParam0;
}

char* func_33(int iParam0)
{
	if (!unk_0x8FA72E132AAFA62F(&(Global_17236.f_5263[iParam0 /*16*/])))
	{
		return func_32(&(Global_17236.f_5263[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

void func_34(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0x761F331974F836D5(1, &uVar0, &uVar1, &uVar2, &uVar3);
	unk_0xAF24EA89F4EF8594(uVar0, uVar1, uVar2, iParam5);
	unk_0xD49409263C7DA1DD(fParam3, fParam4);
	unk_0x5E9A172D8EF0C9ED(1);
	unk_0x8F290D3FB4225BC6(1f, func_36(14f));
	unk_0x5FEA64228C897E30(0);
	unk_0x8DD7836CF491E098(0);
	func_42();
	if (uParam0->f_531[iParam1])
	{
		unk_0x55B01783B33A78F6("STRING");
		unk_0xD1F22DD7F7363AB6(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0x55B01783B33A78F6(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x844339A27F0F1508(uParam0->f_489[iParam1]);
		}
	}
	unk_0x268B3979E044050D(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_29(7, 0, 1, &fVar5, &fVar6);
			unk_0x23546A353B2D8470("CommonMenu", func_31(7, 0), (fParam4 - 0.006f), ((fParam2 + func_44(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_29(5, 0, 1, &fVar5, &fVar6);
			unk_0x23546A353B2D8470("CommonMenu", func_31(5, 0), (fParam4 - 0.006f), ((fParam2 + func_44(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_29(6, 0, 1, &fVar5, &fVar6);
			unk_0x23546A353B2D8470("CommonMenu", func_31(6, 0), (fParam4 - 0.006f), ((fParam2 + func_44(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0x5E9A172D8EF0C9ED(1);
	}
	else
	{
		unk_0x5E9A172D8EF0C9ED(2);
	}
	unk_0x8F290D3FB4225BC6(1f, func_36(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0xD49409263C7DA1DD(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0xD49409263C7DA1DD(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0xAF24EA89F4EF8594(uVar0, uVar1, uVar2, iParam5);
	func_35(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_35(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x5FEA64228C897E30(0);
	unk_0x8DD7836CF491E098(0);
	func_42();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0x8F290D3FB4225BC6(1f, func_36(18f));
			unk_0x8DD7836CF491E098(4);
			if (iParam0 < 0)
			{
				unk_0xD43D59AFE59F450F("ESMINDOLLA");
				unk_0x96A7C8F7793B505A((-1 * iParam0), 1);
				fVar1 = unk_0x9B0FAD4ADFA5E05C(0);
			}
			else
			{
				unk_0xD43D59AFE59F450F("ESDOLLA");
				unk_0x96A7C8F7793B505A(iParam0, 1);
				fVar1 = unk_0x9B0FAD4ADFA5E05C(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0x23546A353B2D8470("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x23546A353B2D8470("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x23546A353B2D8470("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x8F290D3FB4225BC6(1f, func_36(14f));
			break;
	}
	unk_0xF51CF48922F85ED5(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x55B01783B33A78F6("PERCENTAGE");
			unk_0x844339A27F0F1508(iParam0);
			break;
		
		case 1:
			unk_0x8DD7836CF491E098(5);
			unk_0x55B01783B33A78F6("FO_NUM");
			unk_0x844339A27F0F1508(iParam0);
			break;
		
		case 2:
			unk_0x8DD7836CF491E098(5);
			unk_0x55B01783B33A78F6("FO_TWO_NUM");
			unk_0x844339A27F0F1508(iParam0);
			unk_0x844339A27F0F1508(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0x8F290D3FB4225BC6(1f, func_36(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x55B01783B33A78F6("ESMINDOLLA");
				unk_0x96A7C8F7793B505A((-1 * iParam0), 1);
			}
			else
			{
				unk_0x55B01783B33A78F6("ESDOLLA");
				unk_0x96A7C8F7793B505A(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x55B01783B33A78F6(sParam4);
			break;
		
		case 7:
			unk_0x55B01783B33A78F6("STRING");
			unk_0xD1F22DD7F7363AB6(sParam4);
			break;
		
		case 8:
			unk_0x8DD7836CF491E098(5);
			unk_0x55B01783B33A78F6("STRING");
			unk_0x5D89BC4A497AE832(iParam0, 14);
			break;
		
		case 9:
			unk_0x8DD7836CF491E098(5);
			unk_0x55B01783B33A78F6("STRING");
			unk_0x5D89BC4A497AE832(iParam0, 6);
			break;
		
		case 10:
			unk_0x8DD7836CF491E098(5);
			unk_0x55B01783B33A78F6("STRING");
			unk_0x5D89BC4A497AE832(iParam0, 2055);
			break;
		
		case 18:
			unk_0x8DD7836CF491E098(5);
			unk_0x55B01783B33A78F6("STRING");
			unk_0x5D89BC4A497AE832(iParam0, 2055);
			break;
		
		case 12:
			unk_0x55B01783B33A78F6("AHD_DIST");
			unk_0x844339A27F0F1508(iParam0);
			break;
		
		case 13:
			unk_0x55B01783B33A78F6(sParam4);
			unk_0x844339A27F0F1508(iParam0);
			unk_0x844339A27F0F1508(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x55B01783B33A78F6(sParam4);
			unk_0x844339A27F0F1508(iParam0);
			unk_0x844339A27F0F1508(iParam1);
			break;
		
		case 16:
			unk_0x55B01783B33A78F6(sParam4);
			unk_0x844339A27F0F1508(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x268B3979E044050D((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0x8F290D3FB4225BC6(1f, func_36(14f));
		}
		else
		{
			unk_0x268B3979E044050D(fParam2, fParam3, 0);
		}
	}
}

float func_36(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_37(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_38(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (iVar0 == -1)
		{
			if (func_40(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328798.f_1 = 1;
		func_39(7, iVar0);
		Global_1328798.f_1664[iVar0] = iParam0;
		StringCopy(&(Global_1328798.f_1664.f_5[iVar0 /*16*/]), sParam1, 64);
		Global_1328798.f_1664.f_70[iVar0] = iParam2;
		Global_1328798.f_1664.f_90[iVar0] = iParam3;
		Global_1328798.f_1664.f_75[iVar0] = iParam4;
		Global_1328798.f_1664.f_80[iVar0] = iParam5;
		Global_1328798.f_1664.f_105[iVar0] = iParam6;
		Global_1328798.f_1664.f_110[iVar0] = iParam7;
		Global_1328798.f_1664.f_85[iVar0] = iParam8;
		Global_1328798.f_1664.f_129[iVar0] = iParam9;
		Global_1328798.f_1664.f_134[iVar0] = iParam10;
		Global_1328798.f_1664.f_148[iVar0] = iParam11;
		Global_1328798.f_1664.f_100[iVar0] = iParam12;
	}
}

void func_39(int iParam0, int iParam1)
{
	unk_0x3DBE2A7AF9E71C82(&(Global_1328798.f_1912[iParam0]), iParam1);
}

bool func_40(int iParam0, int iParam1)
{
	return unk_0x61D8FEAF64881CDA(Global_1328798.f_1912[iParam0], iParam1);
}

float func_41(char* sParam0)
{
	unk_0xD43D59AFE59F450F(sParam0);
	return (unk_0x9B0FAD4ADFA5E05C(1) / 2f);
}

void func_42()
{
	unk_0x070F78D7490C1013(1);
	if (unk_0xF468278E75CA2341() || unk_0xC2C705ED6124A7C2())
	{
		unk_0x070F78D7490C1013(7);
	}
	unk_0xED73E1F1A255F54E(0);
}

float func_43()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x80AD636AD4184F2B())
	{
	}
	return fVar0;
}

float func_44(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)
{
	if (func_47(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_47(int iParam0)
{
	return iParam0 < 3;
}

void func_48()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_49(0))
		{
			func_50(0);
		}
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 2);
	}
}

int func_49(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_50(int iParam0)
{
	if (Global_14551)
	{
		func_52(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
	}
	if (unk_0x49BDC46D7CAD9C63())
	{
		unk_0xD858EC6FECDB4B3F(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 30);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 30);
	}
	if (!func_51())
	{
		Global_14393.f_1 = 3;
	}
}

int func_51()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_52(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_49(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x483F49444BC10CD1(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x22FDA9F8AE4DE11C(Global_14330);
		}
		else
		{
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
}

int func_53()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66667)
	{
		if (Global_66668[iVar0 /*9*/] > 0)
		{
			if (Global_54797[Global_66668[iVar0 /*9*/] /*13*/].f_7 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_54(bool bParam0)
{
	char* sVar0;
	
	unk_0xD19A0D6084034A69(0);
	switch (func_55())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xFC652D72B5D199DB(sVar0);
}

int func_55()
{
	func_56();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_56()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_46(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_45(unk_0x507DA4994C3D8EBD());
			if (func_47(iVar0) && (!func_57(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_47(Global_97173.f_1729.f_539.f_3213))
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

bool func_57(int iParam0)
{
	return Global_34909 == iParam0;
}

int func_58(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_61(uParam0);
	func_60(uParam0);
	if (unk_0xA858564DC37EED5E(&(uParam0->f_550), "SPR_RESULT") || (unk_0xA858564DC37EED5E(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x685EB3667D702B92("CommonMenu", 0);
		unk_0x685EB3667D702B92("MPLeaderboard", 0);
		unk_0x685EB3667D702B92("MPHud", 0);
		uParam0->f_1 = unk_0xAFBDE0BB5C885026("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x7B272A68AB32BF92("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0xE908465F9CDF4F1A(uParam0->f_1) || !unk_0x31920D7070131373("CommonMenu")) || !unk_0x31920D7070131373("MPLeaderboard")) || !unk_0x31920D7070131373("MPHud"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0xE908465F9CDF4F1A(uParam0->f_4))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		if (((!unk_0xE908465F9CDF4F1A(uParam0->f_1) || !unk_0x31920D7070131373("CommonMenu")) || !unk_0x31920D7070131373("MPLeaderboard")) || !unk_0x31920D7070131373("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0xE908465F9CDF4F1A(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_59(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_22(uParam0, 1);
		}
		else
		{
			func_22(uParam0, 0);
		}
	}
	Global_68328 = 1;
	return 1;
}

void func_59(var uParam0)
{
	unk_0xF48C88BD1F0007E8(uParam0->f_4, "CLEAR_ALL");
	unk_0xA52FC2467E672B55();
	if (unk_0x80AD636AD4184F2B())
	{
		unk_0xF48C88BD1F0007E8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x5D559A5DDC88A4EF(1);
		unk_0xA52FC2467E672B55();
	}
	unk_0xF48C88BD1F0007E8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x876C5D0739031E15(2);
	func_24(unk_0xB588E50C18B98D3F(2, 188, 1));
	func_23("ES_HELP_TU");
	unk_0xA52FC2467E672B55();
	unk_0xF48C88BD1F0007E8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x876C5D0739031E15(1);
	func_24(unk_0xB588E50C18B98D3F(2, 187, 1));
	func_23("ES_HELP_TD");
	unk_0xA52FC2467E672B55();
	unk_0xF48C88BD1F0007E8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x876C5D0739031E15(0);
	func_24(unk_0xB588E50C18B98D3F(2, 202, 1));
	func_23("ES_HELP_AB");
	unk_0xA52FC2467E672B55();
	unk_0xF48C88BD1F0007E8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xA52FC2467E672B55();
}

void func_60(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x5E9A172D8EF0C9ED(0);
	unk_0x8F290D3FB4225BC6(1f, func_36(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0xD43D59AFE59F450F("STRING");
			unk_0xD1F22DD7F7363AB6(&(uParam0->f_13));
			fVar0 = unk_0x9B0FAD4ADFA5E05C(1);
		}
		else
		{
			unk_0xD43D59AFE59F450F(&(uParam0->f_13));
			fVar0 = unk_0x9B0FAD4ADFA5E05C(1);
		}
	}
	else
	{
		unk_0xD43D59AFE59F450F("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x844339A27F0F1508(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0x923B18EB34FC2117(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0xD1F22DD7F7363AB6(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x9B0FAD4ADFA5E05C(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_61(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	struct<3> Var80;
	
	if (Global_66667 == 0)
	{
		return;
	}
	if (Global_66818 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66667)
	{
		if (Global_66668[iVar0 /*9*/].f_3 != 0)
		{
			return;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66667)
	{
		iVar3 = Global_66668[iVar0 /*9*/];
		bVar4 = !Global_54797[iVar3 /*13*/].f_7;
		bVar5 = Global_54797[iVar3 /*13*/].f_8;
		uVar6 = Global_54797[iVar3 /*13*/].f_12;
		fVar7 = Global_54797[iVar3 /*13*/].f_9;
		bVar8 = false;
		bVar8 = false;
		if (func_68(iVar3, Global_66668[iVar0 /*9*/].f_1))
		{
			bVar8 = true;
		}
		if (bVar4)
		{
			if (bVar8)
			{
				iVar1 = (iVar1 + 100000000);
			}
		}
		if (bVar5)
		{
			iVar9 = Global_66668[iVar0 /*9*/].f_1;
			iVar10 = unk_0xF34EE736CF047844((IntToFloat(iVar9) * fVar7));
			iVar2 = (iVar2 + iVar10);
			iVar1 = (iVar1 + iVar10);
		}
		iVar0++;
	}
	Global_66813 = iVar1;
	Global_66814 = iVar2;
	if (unk_0x0E4B4CA22DBCFA69())
	{
		if (Global_66817 == 0)
		{
			iVar11 = Global_66818;
			if (iVar11 == 90)
			{
				if (Global_97173.f_7311.f_99.f_200[func_67(0)] == 2)
				{
					Var12.f_2.f_1 = 4;
					Var12.f_0 = 716;
					unk_0xF742066C63650FC1(&Var12);
					unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
					unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
					unk_0xD01F5BCE1469E115(126, 1, 0f);
					unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
					unk_0xD01F5BCE1469E115(135, func_66(810), 0f);
					unk_0xD01F5BCE1469E115(136, func_66(811), 0f);
					unk_0xD01F5BCE1469E115(132, func_66(812), 0f);
					unk_0xD01F5BCE1469E115(2, func_66(813), 0f);
					unk_0xD01F5BCE1469E115(141, func_66(814), 0f);
					unk_0xD01F5BCE1469E115(127, func_66(815), 0f);
					unk_0xD01F5BCE1469E115(137, func_66(816), 0f);
					unk_0xD01F5BCE1469E115(7, func_66(817), 0f);
					unk_0xD01F5BCE1469E115(133, func_66(818), 0f);
					unk_0xD01F5BCE1469E115(90, func_66(819), 0f);
					Var12.f_0 = 717;
					unk_0xF742066C63650FC1(&Var12);
					unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
					unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
					unk_0xD01F5BCE1469E115(126, 1, 0f);
					unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
					unk_0xD01F5BCE1469E115(135, func_66(810), 0f);
					unk_0xD01F5BCE1469E115(136, func_66(811), 0f);
					unk_0xD01F5BCE1469E115(132, func_66(812), 0f);
					unk_0xD01F5BCE1469E115(2, func_66(813), 0f);
					unk_0xD01F5BCE1469E115(141, func_66(814), 0f);
					unk_0xD01F5BCE1469E115(127, func_66(815), 0f);
					unk_0xD01F5BCE1469E115(137, func_66(816), 0f);
					unk_0xD01F5BCE1469E115(7, func_66(817), 0f);
					unk_0xD01F5BCE1469E115(133, func_66(818), 0f);
					unk_0xD01F5BCE1469E115(90, func_66(819), 0f);
				}
				else
				{
					func_64(iVar11);
				}
			}
			else if (iVar11 == 47)
			{
				Var80.f_2.f_1 = 4;
				Var80.f_0 = 673;
				unk_0xF742066C63650FC1(&Var80);
				unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
				unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
				unk_0xD01F5BCE1469E115(126, 1, 0f);
				unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
				unk_0xD01F5BCE1469E115(142, func_66(413), 0f);
				unk_0xD01F5BCE1469E115(1, func_66(414), 0f);
				unk_0xD01F5BCE1469E115(87, func_66(415), 0f);
				unk_0xD01F5BCE1469E115(138, func_66(416), 0f);
				unk_0xD01F5BCE1469E115(133, func_66(417), 0f);
				unk_0xD01F5BCE1469E115(7, func_66(418), 0f);
				unk_0xD01F5BCE1469E115(90, func_66(419), 0f);
				unk_0xD01F5BCE1469E115(92, func_66(420), 0f);
				unk_0xD01F5BCE1469E115(5, func_66(421), 0f);
				unk_0xD01F5BCE1469E115(127, func_66(422), 0f);
				unk_0xD01F5BCE1469E115(139, func_66(423), 0f);
				unk_0xD01F5BCE1469E115(134, func_66(424), 0f);
				unk_0xD01F5BCE1469E115(141, func_66(425), 0f);
				unk_0xD01F5BCE1469E115(137, func_66(426), 0f);
				unk_0xD01F5BCE1469E115(132, func_66(427), 0f);
				unk_0xD01F5BCE1469E115(2, func_66(428), 0f);
				unk_0xD01F5BCE1469E115(140, 0, 0f);
				Var80.f_0 = 672;
				unk_0xF742066C63650FC1(&Var80);
				unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
				unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
				unk_0xD01F5BCE1469E115(126, 1, 0f);
				unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
				unk_0xD01F5BCE1469E115(142, func_66(413), 0f);
				unk_0xD01F5BCE1469E115(1, func_66(414), 0f);
				unk_0xD01F5BCE1469E115(87, func_66(415), 0f);
				unk_0xD01F5BCE1469E115(138, func_66(416), 0f);
				unk_0xD01F5BCE1469E115(133, func_66(417), 0f);
				unk_0xD01F5BCE1469E115(7, func_66(418), 0f);
				unk_0xD01F5BCE1469E115(90, func_66(419), 0f);
				unk_0xD01F5BCE1469E115(92, func_66(420), 0f);
				unk_0xD01F5BCE1469E115(5, func_66(421), 0f);
				unk_0xD01F5BCE1469E115(127, func_66(422), 0f);
				unk_0xD01F5BCE1469E115(139, func_66(423), 0f);
				unk_0xD01F5BCE1469E115(134, func_66(424), 0f);
				unk_0xD01F5BCE1469E115(141, func_66(425), 0f);
				unk_0xD01F5BCE1469E115(135, func_66(426), 0f);
				unk_0xD01F5BCE1469E115(132, func_66(427), 0f);
				unk_0xD01F5BCE1469E115(2, func_66(428), 0f);
				unk_0xD01F5BCE1469E115(140, 0, 0f);
			}
			else
			{
				func_64(iVar11);
			}
			Global_97173.f_7311.f_325[iVar11 /*6*/].f_4 = Global_66813;
		}
		else
		{
			func_63(Global_66818);
		}
	}
}

void func_63(var uParam0)
{
	var uVar0;
	
	uVar0 = uParam0;
	uVar0 = uVar0;
}

void func_64(int iParam0)
{
	struct<3> Var0;
	struct<13> Var68;
	var uVar81;
	
	Var0.f_2.f_1 = 4;
	if (!unk_0x0E4B4CA22DBCFA69())
	{
		return;
	}
	if (unk_0x48005FE1241D4091())
	{
		Var68 = { func_65(unk_0xAF65E5A58BE87D95()) };
		if (unk_0x39606F3949DA3895(&Var68))
		{
			if (unk_0x96899C28EF61DCA9(&uVar81, 35, &Var68))
			{
				Var0.f_1 = uVar81;
			}
		}
	}
	switch (iParam0)
	{
		case 0:
			Var0.f_0 = 577;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(0), 0f);
			unk_0xD01F5BCE1469E115(148, func_66(1), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(2), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(3), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(4), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(5), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(6), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(7), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(8), 0f);
			Var0.f_0 = 913;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(0), 0f);
			unk_0xD01F5BCE1469E115(148, func_66(1), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(2), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(3), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(4), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(5), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(6), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(7), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(8), 0f);
			return;
		
		case 1:
			Var0.f_0 = 576;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(9), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(10), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(11), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(12), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(13), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(14), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(15), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(16), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(17), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(18), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(19), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(20), 0f);
			Var0.f_0 = 575;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(9), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(10), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(11), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(12), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(13), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(14), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(15), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(16), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(17), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(18), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(19), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(20), 0f);
			return;
		
		case 2:
			Var0.f_0 = 579;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(21), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(22), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(23), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(24), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(25), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(26), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(27), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(28), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(29), 0f);
			Var0.f_0 = 578;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(21), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(22), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(23), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(24), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(25), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(26), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(27), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(28), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(29), 0f);
			return;
		
		case 3:
			Var0.f_0 = 797;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(30), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(31), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(32), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(33), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(34), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(35), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(36), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(37), 0f);
			Var0.f_0 = 796;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(30), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(31), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(32), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(33), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(34), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(35), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(36), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(37), 0f);
			return;
		
		case 4:
			Var0.f_0 = 799;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(43), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(44), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(45), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(46), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(47), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(48), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(49), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(50), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(51), 0f);
			Var0.f_0 = 798;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(43), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(44), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(45), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(46), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(47), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(48), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(49), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(50), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(51), 0f);
			return;
		
		case 5:
			Var0.f_0 = 801;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(57), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(58), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(59), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(60), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(61), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(62), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(63), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(64), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(65), 0f);
			Var0.f_0 = 800;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(57), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(58), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(59), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(60), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(61), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(62), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(63), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(64), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(65), 0f);
			return;
		
		case 6:
			Var0.f_0 = 803;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(71), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(72), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(73), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(74), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(75), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(76), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(77), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(78), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(79), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(80), 0f);
			Var0.f_0 = 802;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(71), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(72), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(73), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(74), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(75), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(76), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(77), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(78), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(79), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(80), 0f);
			return;
		
		case 7:
			Var0.f_0 = 805;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(86), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(87), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(88), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(89), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(90), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(91), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(92), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(93), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(94), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(95), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(96), 0f);
			Var0.f_0 = 804;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(86), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(87), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(88), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(89), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(90), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(91), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(92), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(93), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(94), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(95), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(96), 0f);
			return;
		
		case 9:
			Var0.f_0 = 639;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(102), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(103), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(104), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(105), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(106), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(107), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(108), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(109), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(110), 0f);
			Var0.f_0 = 638;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(102), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(103), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(104), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(105), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(106), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(107), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(108), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(109), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(110), 0f);
			return;
		
		case 8:
			Var0.f_0 = 641;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(134, func_66(111), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(112), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(113), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(114), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(115), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(116), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(117), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(118), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(119), 0f);
			Var0.f_0 = 640;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(134, func_66(111), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(112), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(113), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(114), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(115), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(116), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(117), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(118), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(119), 0f);
			return;
		
		case 10:
			Var0.f_0 = 646;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(120), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(121), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(122), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(123), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(124), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(125), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(126), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(127), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(128), 0f);
			Var0.f_0 = 645;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(120), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(121), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(122), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(123), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(124), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(125), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(126), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(127), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(128), 0f);
			return;
		
		case 11:
			Var0.f_0 = 671;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(129), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(130), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(131), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(132), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(133), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(134), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(135), 0f);
			Var0.f_0 = 670;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(129), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(130), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(131), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(132), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(133), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(134), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(135), 0f);
			return;
		
		case 12:
			Var0.f_0 = 603;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(92, func_66(136), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(137), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(138), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(139), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(140), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(141), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(142), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(143), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(144), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(145), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(146), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(147), 0f);
			Var0.f_0 = 602;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(92, func_66(136), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(137), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(138), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(139), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(140), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(141), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(142), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(143), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(144), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(145), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(146), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(147), 0f);
			return;
		
		case 13:
			Var0.f_0 = 605;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(87, func_66(148), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(149), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(150), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(151), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(152), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(153), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(154), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(155), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(156), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(157), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(158), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(159), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(160), 0f);
			Var0.f_0 = 604;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(87, func_66(148), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(149), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(150), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(151), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(152), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(153), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(154), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(155), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(156), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(157), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(158), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(159), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(160), 0f);
			return;
		
		case 14:
			Var0.f_0 = 648;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(1, func_66(161), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(162), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(163), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(164), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(165), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(166), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(167), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(168), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(169), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(170), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(171), 0f);
			Var0.f_0 = 647;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(1, func_66(161), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(162), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(163), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(164), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(165), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(166), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(167), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(168), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(169), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(170), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(171), 0f);
			return;
		
		case 15:
			Var0.f_0 = 650;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(1, func_66(172), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(173), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(174), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(175), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(176), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(177), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(178), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(179), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(180), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(181), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(182), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(183), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(184), 0f);
			Var0.f_0 = 649;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(1, func_66(172), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(173), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(174), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(175), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(176), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(177), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(178), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(179), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(180), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(181), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(182), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(183), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(184), 0f);
			return;
		
		case 16:
			Var0.f_0 = 656;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(185), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(186), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(187), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(188), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(189), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(190), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(191), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(192), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(193), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(194), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(195), 0f);
			Var0.f_0 = 655;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(185), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(186), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(187), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(188), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(189), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(190), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(191), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(192), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(193), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(194), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(195), 0f);
			return;
		
		case 17:
			Var0.f_0 = 583;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(138, func_66(196), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(197), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(198), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(199), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(200), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(201), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(202), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(203), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(204), 0f);
			Var0.f_0 = 582;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(138, func_66(196), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(197), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(198), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(199), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(200), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(201), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(202), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(203), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(204), 0f);
			return;
		
		case 18:
			Var0.f_0 = 585;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(205), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(206), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(207), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(208), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(209), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(210), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(211), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(212), 0f);
			unk_0xD01F5BCE1469E115(140, func_66(213), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(214), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(215), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(216), 0f);
			Var0.f_0 = 584;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(205), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(206), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(207), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(208), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(209), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(210), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(211), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(212), 0f);
			unk_0xD01F5BCE1469E115(140, func_66(213), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(214), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(215), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(216), 0f);
			return;
		
		case 19:
			Var0.f_0 = 587;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(217), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(218), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(219), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(220), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(221), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(222), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(223), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(224), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(225), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(226), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(227), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(228), 0f);
			Var0.f_0 = 586;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(217), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(218), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(219), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(220), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(221), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(222), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(223), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(224), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(225), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(226), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(227), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(228), 0f);
			return;
		
		case 20:
			Var0.f_0 = 609;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(95, func_66(229), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(230), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(231), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(232), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(233), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(234), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(235), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(236), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(237), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(238), 0f);
			Var0.f_0 = 608;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(95, func_66(229), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(230), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(231), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(232), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(233), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(234), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(235), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(236), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(237), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(238), 0f);
			return;
		
		case 21:
			Var0.f_0 = 621;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(239), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(240), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(241), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(242), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(243), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(244), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(245), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(246), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(247), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(248), 0f);
			Var0.f_0 = 620;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(239), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(240), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(241), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(242), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(243), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(244), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(245), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(246), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(247), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(248), 0f);
			return;
		
		case 22:
			Var0.f_0 = 675;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(249), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(250), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(251), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(252), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(253), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(254), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(255), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(256), 0f);
			Var0.f_0 = 674;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(249), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(250), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(251), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(252), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(253), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(254), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(255), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(256), 0f);
			return;
		
		case 26:
			Var0.f_0 = 712;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(257), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(258), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(259), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(260), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(261), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(262), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(263), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(264), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(265), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(266), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(267), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(268), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(269), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(270), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(271), 0f);
			unk_0xD01F5BCE1469E115(103, func_66(272), 0f);
			Var0.f_0 = 711;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(257), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(258), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(259), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(260), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(261), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(262), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(263), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(264), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(265), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(266), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(267), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(268), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(269), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(270), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(271), 0f);
			unk_0xD01F5BCE1469E115(103, func_66(272), 0f);
			return;
		
		case 29:
			Var0.f_0 = 611;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(1, func_66(273), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(274), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(275), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(276), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(277), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(278), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(279), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(280), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(281), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(282), 0f);
			Var0.f_0 = 610;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(1, func_66(273), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(274), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(275), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(276), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(277), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(278), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(279), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(280), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(281), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(282), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 30:
			Var0.f_0 = 615;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(283), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(284), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(285), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(286), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(287), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(288), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(289), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(290), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(291), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(292), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(293), 0f);
			Var0.f_0 = 614;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(283), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(284), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(285), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(286), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(287), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(288), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(289), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(290), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(291), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(292), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(293), 0f);
			return;
		
		case 31:
			Var0.f_0 = 623;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(294), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(295), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(296), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(297), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(298), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(299), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(300), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(301), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(302), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(303), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(304), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(305), 0f);
			Var0.f_0 = 622;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(294), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(295), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(296), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(297), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(298), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(299), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(300), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(301), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(302), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(303), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(304), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(305), 0f);
			return;
		
		case 38:
			Var0.f_0 = 627;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(127, func_66(306), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(307), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(308), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(309), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(310), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(311), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(312), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(313), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(314), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(315), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(316), 0f);
			Var0.f_0 = 626;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(127, func_66(306), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(307), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(308), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(309), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(310), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(311), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(312), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(313), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(314), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(315), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(316), 0f);
			return;
		
		case 33:
			Var0.f_0 = 741;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(317), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(318), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(319), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(320), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(321), 0f);
			Var0.f_0 = 740;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(317), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(318), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(319), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(320), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(321), 0f);
			return;
		
		case 34:
			Var0.f_0 = 745;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(322), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(323), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(324), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(325), 0f);
			Var0.f_0 = 742;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(322), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(323), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(324), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(325), 0f);
			return;
		
		case 39:
			Var0.f_0 = 658;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(326), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(327), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(328), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(329), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(330), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(331), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(332), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(333), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(334), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(335), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(336), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(337), 0f);
			Var0.f_0 = 657;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(326), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(327), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(328), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(329), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(330), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(331), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(332), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(333), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(334), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(335), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(336), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(337), 0f);
			return;
		
		case 40:
			Var0.f_0 = 581;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(338), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(339), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(340), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(341), 0f);
			unk_0xD01F5BCE1469E115(140, func_66(342), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(343), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(344), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(345), 0f);
			Var0.f_0 = 580;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(338), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(339), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(340), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(341), 0f);
			unk_0xD01F5BCE1469E115(140, func_66(342), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(343), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(344), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(345), 0f);
			return;
		
		case 41:
			Var0.f_0 = 619;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(346), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(347), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(348), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(349), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(350), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(351), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(352), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(353), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(354), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(355), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(356), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(357), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(358), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(359), 0f);
			Var0.f_0 = 618;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(346), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(347), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(348), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(349), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(350), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(351), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(352), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(353), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(354), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(355), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(356), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(357), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(358), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(359), 0f);
			return;
		
		case 42:
			Var0.f_0 = 704;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(127, func_66(360), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(361), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(362), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(363), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(364), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(365), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(366), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(367), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(368), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(369), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(370), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(371), 0f);
			Var0.f_0 = 703;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(127, func_66(360), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(361), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(362), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(363), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(364), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(365), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(366), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(367), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(368), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(369), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(370), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(371), 0f);
			return;
		
		case 43:
			Var0.f_0 = 593;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(1, func_66(372), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(373), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(374), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(375), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(376), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(377), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(378), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(379), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(380), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(381), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(382), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(383), 0f);
			Var0.f_0 = 592;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(1, func_66(372), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(373), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(374), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(375), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(376), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(377), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(378), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(379), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(380), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(381), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(382), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(383), 0f);
			return;
		
		case 44:
			Var0.f_0 = 589;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(384), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(385), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(386), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(387), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(388), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(389), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(390), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(391), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(392), 0f);
			Var0.f_0 = 588;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(384), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(385), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(386), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(387), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(388), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(389), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(390), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(391), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(392), 0f);
			return;
		
		case 45:
			Var0.f_0 = 635;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(393), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(394), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(395), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(396), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(397), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(398), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(399), 0f);
			Var0.f_0 = 634;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(393), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(394), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(395), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(396), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(397), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(398), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(399), 0f);
			return;
		
		case 46:
			Var0.f_0 = 669;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(400), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(401), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(402), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(403), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(404), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(405), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(406), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(407), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(408), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(409), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(410), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(411), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(412), 0f);
			Var0.f_0 = 668;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(400), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(401), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(402), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(403), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(404), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(405), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(406), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(407), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(408), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(409), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(410), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(411), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(412), 0f);
			return;
		
		case 47:
			Var0.f_0 = 673;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(142, func_66(413), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(414), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(415), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(416), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(417), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(418), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(419), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(420), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(421), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(422), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(423), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(424), 0f);
			unk_0xD01F5BCE1469E115(141, func_66(425), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(426), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(427), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(428), 0f);
			Var0.f_0 = 672;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(142, func_66(413), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(414), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(415), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(416), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(417), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(418), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(419), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(420), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(421), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(422), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(423), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(424), 0f);
			unk_0xD01F5BCE1469E115(141, func_66(425), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(426), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(427), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(428), 0f);
			return;
		
		case 48:
			Var0.f_0 = 694;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(429), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(430), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(431), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(432), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(433), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(434), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(435), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(436), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(437), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(438), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(439), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(440), 0f);
			Var0.f_0 = 693;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(429), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(430), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(431), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(432), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(433), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(434), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(435), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(436), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(437), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(438), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(439), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(440), 0f);
			return;
		
		case 49:
			Var0.f_0 = 702;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(441), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(442), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(443), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(444), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(445), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(446), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(447), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(448), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(449), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(450), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(451), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(452), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(453), 0f);
			Var0.f_0 = 701;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(441), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(442), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(443), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(444), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(445), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(446), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(447), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(448), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(449), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(450), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(451), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(452), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(453), 0f);
			return;
		
		case 53:
			Var0.f_0 = 714;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(95, func_66(454), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(455), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(456), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(457), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(458), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(459), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(460), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(461), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(462), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(463), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(464), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(465), 0f);
			Var0.f_0 = 713;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(95, func_66(454), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(455), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(456), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(457), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(458), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(459), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(460), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(461), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(462), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(463), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(464), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(465), 0f);
			return;
		
		case 60:
			Var0.f_0 = 809;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(466), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(467), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(468), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(469), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(470), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(471), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(472), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(473), 0f);
			Var0.f_0 = 808;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(466), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(467), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(468), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(469), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(470), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(471), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(472), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(473), 0f);
			return;
		
		case 61:
			Var0.f_0 = 637;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(474), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(475), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(476), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(477), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(478), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(479), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(480), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(481), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(482), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(483), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(484), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(485), 0f);
			Var0.f_0 = 636;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(474), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(475), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(476), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(477), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(478), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(479), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(480), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(481), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(482), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(483), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(484), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(485), 0f);
			return;
		
		case 62:
			Var0.f_0 = 599;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(136, func_66(486), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(487), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(488), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(489), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(490), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(491), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(492), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(493), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(494), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(495), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(496), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(497), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(498), 0f);
			Var0.f_0 = 598;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(136, func_66(486), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(487), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(488), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(489), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(490), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(491), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(492), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(493), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(494), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(495), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(496), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(497), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(498), 0f);
			return;
		
		case 63:
			Var0.f_0 = 601;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(87, func_66(499), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(500), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(501), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(502), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(503), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(504), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(505), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(506), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(507), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(508), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(509), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(510), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(511), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(512), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(513), 0f);
			unk_0xD01F5BCE1469E115(9, func_66(514), 0f);
			Var0.f_0 = 600;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(87, func_66(499), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(500), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(501), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(502), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(503), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(504), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(505), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(506), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(507), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(508), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(509), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(510), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(511), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(512), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(513), 0f);
			unk_0xD01F5BCE1469E115(9, func_66(514), 0f);
			return;
		
		case 64:
			Var0.f_0 = 607;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(87, func_66(515), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(516), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(517), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(518), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(519), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(520), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(521), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(522), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(523), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(524), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(525), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(526), 0f);
			Var0.f_0 = 606;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(87, func_66(515), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(516), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(517), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(518), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(519), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(520), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(521), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(522), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(523), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(524), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(525), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(526), 0f);
			return;
		
		case 66:
			Var0.f_0 = 680;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(527), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(528), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(529), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(530), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(531), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(532), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(533), 0f);
			Var0.f_0 = 676;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(527), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(528), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(529), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(530), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(531), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(532), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(533), 0f);
			return;
		
		case 67:
			Var0.f_0 = 679;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(139, func_66(534), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(535), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(536), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(537), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(538), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(539), 0f);
			Var0.f_0 = 678;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(139, func_66(534), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(535), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(536), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(537), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(538), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(539), 0f);
			return;
		
		case 68:
			Var0.f_0 = 725;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(95, func_66(540), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(541), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(542), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(543), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(544), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(545), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(546), 0f);
			Var0.f_0 = 724;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(95, func_66(540), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(541), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(542), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(543), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(544), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(545), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(546), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 69:
			Var0.f_0 = 686;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(92, func_66(547), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(548), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(549), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(550), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(551), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(552), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(553), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(554), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(555), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(556), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(557), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(558), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(559), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(560), 0f);
			Var0.f_0 = 681;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(92, func_66(547), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(548), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(549), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(550), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(551), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(552), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(553), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(554), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(555), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(556), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(557), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(558), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(559), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(560), 0f);
			return;
		
		case 70:
			Var0.f_0 = 721;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(142, func_66(561), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(562), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(563), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(564), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(565), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(566), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(567), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(568), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(569), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(570), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(571), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(572), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(573), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(574), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(575), 0f);
			Var0.f_0 = 720;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(142, func_66(561), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(562), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(563), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(564), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(565), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(566), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(567), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(568), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(569), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(570), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(571), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(572), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(573), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(574), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(575), 0f);
			return;
		
		case 71:
			Var0.f_0 = 617;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(576), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(577), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(578), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(579), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(580), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(581), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(582), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(583), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(584), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(585), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(586), 0f);
			Var0.f_0 = 616;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(576), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(577), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(578), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(579), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(580), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(581), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(582), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(583), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(584), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(585), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(586), 0f);
			return;
		
		case 72:
			Var0.f_0 = 727;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(138, func_66(587), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(588), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(589), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(590), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(591), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(592), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(593), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(594), 0f);
			Var0.f_0 = 726;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(138, func_66(587), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(588), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(589), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(590), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(591), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(592), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(593), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(594), 0f);
			return;
		
		case 73:
			Var0.f_0 = 729;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(92, func_66(595), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(596), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(597), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(598), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(599), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(600), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(601), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(602), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(603), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(604), 0f);
			Var0.f_0 = 728;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(92, func_66(595), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(596), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(597), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(598), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(599), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(600), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(601), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(602), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(603), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(604), 0f);
			return;
		
		case 74:
			Var0.f_0 = 625;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(87, func_66(605), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(606), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(607), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(608), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(609), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(610), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(611), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(612), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(613), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(614), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(615), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(616), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(617), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(618), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(619), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(620), 0f);
			Var0.f_0 = 624;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(87, func_66(605), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(606), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(607), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(608), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(609), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(610), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(611), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(612), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(613), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(614), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(615), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(616), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(617), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(618), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(619), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(620), 0f);
			return;
		
		case 75:
			Var0.f_0 = 719;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(127, func_66(621), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(622), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(623), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(624), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(625), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(626), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(627), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(628), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(629), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(630), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(631), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(632), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(633), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(634), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(635), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(636), 0f);
			Var0.f_0 = 718;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(127, func_66(621), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(622), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(623), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(624), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(625), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(626), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(627), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(628), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(629), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(630), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(631), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(632), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(633), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(634), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(635), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(636), 0f);
			return;
		
		case 76:
			Var0.f_0 = 667;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(637), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(638), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(639), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(640), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(641), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(642), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(643), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(644), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(645), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(646), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(647), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(648), 0f);
			Var0.f_0 = 666;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(637), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(638), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(639), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(640), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(641), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(642), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(643), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(644), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(645), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(646), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(647), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(648), 0f);
			return;
		
		case 78:
			Var0.f_0 = 735;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(138, func_66(649), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(650), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(651), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(652), 0f);
			Var0.f_0 = 734;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(138, func_66(649), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(650), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(651), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(652), 0f);
			return;
		
		case joaat("mpsv_lp0_31"):
			Var0.f_0 = 737;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(653), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(654), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(655), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(656), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(657), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(658), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(659), 0f);
			Var0.f_0 = 736;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(653), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(654), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(655), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(656), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(657), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(658), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(659), 0f);
			return;
		
		case 84:
			Var0.f_0 = 706;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(660), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(661), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(662), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(663), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(664), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(665), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(666), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(667), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(668), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(669), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(670), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(671), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(672), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(673), 0f);
			Var0.f_0 = 705;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(660), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(661), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(662), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(663), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(664), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(665), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(666), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(667), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(668), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(669), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(670), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(671), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(672), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(673), 0f);
			return;
		
		case 85:
			Var0.f_0 = 723;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(674), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(675), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(676), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(677), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(678), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(679), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(680), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(681), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(682), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(683), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(684), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(685), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(686), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(687), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(688), 0f);
			Var0.f_0 = 722;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(674), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(675), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(676), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(677), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(678), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(679), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(680), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(681), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(682), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(683), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(684), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(685), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(686), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(687), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(688), 0f);
			return;
		
		case 86:
			Var0.f_0 = 595;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(689), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(690), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(691), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(692), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(693), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(694), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(695), 0f);
			Var0.f_0 = 594;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(689), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(690), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(691), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(692), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(693), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(694), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(695), 0f);
			return;
		
		case 87:
			Var0.f_0 = 731;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(90, func_66(696), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(697), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(698), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(699), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(700), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(701), 0f);
			Var0.f_0 = 730;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(90, func_66(696), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(697), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(698), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(699), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(700), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(701), 0f);
			return;
		
		case 88:
			Var0.f_0 = 733;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(95, func_66(702), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(703), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(704), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(705), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(706), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(707), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(708), 0f);
			Var0.f_0 = 732;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(95, func_66(702), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(703), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(704), 0f);
			unk_0xD01F5BCE1469E115(139, func_66(705), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(706), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(707), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(708), 0f);
			return;
		
		case 91:
			Var0.f_0 = 652;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(138, func_66(709), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(710), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(711), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(712), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(713), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(714), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(715), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(716), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(717), 0f);
			Var0.f_0 = 651;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(138, func_66(709), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(710), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(711), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(712), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(713), 0f);
			unk_0xD01F5BCE1469E115(142, func_66(714), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(715), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(716), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(717), 0f);
			return;
		
		case 92:
			Var0.f_0 = 739;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(95, func_66(718), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(719), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(720), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(721), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(722), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(723), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(724), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(725), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(726), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(727), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(728), 0f);
			Var0.f_0 = 738;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(95, func_66(718), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(719), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(720), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(721), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(722), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(723), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(724), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(725), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(726), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(727), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(728), 0f);
			return;
		
		case 93:
			Var0.f_0 = 654;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(729), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(730), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(731), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(732), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(733), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(734), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(735), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(736), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(737), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(738), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(739), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(740), 0f);
			Var0.f_0 = 653;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(7, func_66(729), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(730), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(731), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(732), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(733), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(734), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(735), 0f);
			unk_0xD01F5BCE1469E115(87, func_66(736), 0f);
			unk_0xD01F5BCE1469E115(1, func_66(737), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(738), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(739), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(740), 0f);
			return;
		
		case 90:
			Var0.f_0 = 597;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(135, func_66(810), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(811), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(812), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(813), 0f);
			unk_0xD01F5BCE1469E115(141, func_66(814), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(815), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(816), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(817), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(818), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(819), 0f);
			Var0.f_0 = 596;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(135, func_66(810), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(811), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(812), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(813), 0f);
			unk_0xD01F5BCE1469E115(141, func_66(814), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(815), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(816), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(817), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(818), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(819), 0f);
			return;
		
		case 36:
			Var0.f_0 = 831;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(138, func_66(820), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(821), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(822), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(823), 0f);
			Var0.f_0 = 832;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(138, func_66(820), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(821), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(822), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(823), 0f);
			return;
		
		case 37:
			Var0.f_0 = 833;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(138, func_66(824), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(825), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(826), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(827), 0f);
			Var0.f_0 = 834;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(138, func_66(824), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(825), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(826), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(827), 0f);
			return;
		
		case 24:
			Var0.f_0 = 848;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(846), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(847), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(848), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(849), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(850), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(851), 0f);
			Var0.f_0 = 847;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(846), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(847), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(848), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(849), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(850), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(851), 0f);
			return;
		
		case 25:
			Var0.f_0 = 846;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(852), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(853), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(854), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(855), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(856), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(857), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(858), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(859), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(860), 0f);
			Var0.f_0 = 845;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(852), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(853), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(854), 0f);
			unk_0xD01F5BCE1469E115(5, func_66(855), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(856), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(857), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(858), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(859), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(860), 0f);
			return;
		
		case 59:
			Var0.f_0 = 807;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(861), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(862), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(863), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(864), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(865), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(866), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(867), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(868), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(869), 0f);
			Var0.f_0 = 806;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(861), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(862), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(863), 0f);
			unk_0xD01F5BCE1469E115(135, func_66(864), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(865), 0f);
			unk_0xD01F5BCE1469E115(136, func_66(866), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(867), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(868), 0f);
			unk_0xD01F5BCE1469E115(137, func_66(869), 0f);
			return;
		
		case 65:
			Var0.f_0 = 838;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(870), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(871), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(872), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(873), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(874), 0f);
			Var0.f_0 = 837;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(870), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(871), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(872), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(873), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(874), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 80:
			Var0.f_0 = 917;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(875), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(876), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(877), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(878), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(879), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(880), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(881), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(882), 0f);
			Var0.f_0 = 916;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(875), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(876), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(877), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(878), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(879), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(880), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(881), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(882), 0f);
			return;
		
		case 81:
			Var0.f_0 = 919;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(883), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(884), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(885), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(886), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(887), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(888), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(889), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(890), 0f);
			Var0.f_0 = 918;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(883), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(884), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(885), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(886), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(887), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(888), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(889), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(890), 0f);
			return;
		
		case 82:
			Var0.f_0 = 921;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(891), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(892), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(893), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(894), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(895), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(896), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(897), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(898), 0f);
			Var0.f_0 = 920;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(133, func_66(891), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(892), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(893), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(894), 0f);
			unk_0xD01F5BCE1469E115(138, func_66(895), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(896), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(897), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(898), 0f);
			return;
		
		case 83:
			Var0.f_0 = 923;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(899), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(900), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(901), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(902), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(903), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(904), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(905), 0f);
			Var0.f_0 = 922;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(2, func_66(899), 0f);
			unk_0xD01F5BCE1469E115(134, func_66(900), 0f);
			unk_0xD01F5BCE1469E115(92, func_66(901), 0f);
			unk_0xD01F5BCE1469E115(133, func_66(902), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(903), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(904), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(905), 0f);
			return;
		
		case 89:
			Var0.f_0 = 925;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(138, func_66(906), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(907), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(908), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(909), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(910), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(911), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(912), 0f);
			Var0.f_0 = 924;
			unk_0xF742066C63650FC1(&Var0);
			unk_0xD01F5BCE1469E115(131, Global_66813, 0f);
			unk_0xD01F5BCE1469E115(162, Global_66814, 0f);
			unk_0xD01F5BCE1469E115(126, 1, 0f);
			unk_0xD01F5BCE1469E115(161, Global_66816, 0f);
			unk_0xD01F5BCE1469E115(138, func_66(906), 0f);
			unk_0xD01F5BCE1469E115(2, func_66(907), 0f);
			unk_0xD01F5BCE1469E115(7, func_66(908), 0f);
			unk_0xD01F5BCE1469E115(127, func_66(909), 0f);
			unk_0xD01F5BCE1469E115(95, func_66(910), 0f);
			unk_0xD01F5BCE1469E115(90, func_66(911), 0f);
			unk_0xD01F5BCE1469E115(132, func_66(912), 0f);
			return;
		
		default:
	}
}

struct<13> func_65(var uParam0)
{
	struct<13> Var0;
	
	unk_0x0D7D678636A21203(uParam0, &Var0, 13);
	return Var0;
}

int func_66(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	switch (iParam0)
	{
		case 665:
		case 676:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (Global_97173.f_1.f_126[Global_54576 /*23*/].f_11[iVar0] == 1)
				{
					iVar1 = (iVar1 + Global_97173.f_1.f_126[Global_54576 /*23*/].f_17[iVar0]);
				}
				iVar0++;
			}
			return iVar1;
		
		default:
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66667)
	{
		if (Global_66668[iVar0 /*9*/] == iParam0)
		{
			return Global_66668[iVar0 /*9*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 10;
			break;
		
		case 4:
			return 11;
			break;
	}
	return -1;
}

int func_68(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_54797[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_97173.f_28026[4 /*4*/] == func_55())
	{
		Global_54797[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_54797[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_54797[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_54797[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}

void func_69(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	
	if (Global_54562)
	{
		Global_54577 = 0;
		return;
	}
	iLocal_621 = 0;
	iLocal_622 = 0;
	iVar0 = 0;
	if (func_93(0))
	{
		unk_0x62C5C94888EF3195();
		Global_54564 = 1;
		unk_0x6E055A4B0EFC0A03(33, 33);
	}
	iVar1 = -1;
	iLocal_626 = 0;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < Global_66667)
	{
		switch (Global_66668[iVar0 /*9*/])
		{
			case 852:
			case 846:
				Global_66668[iVar0 /*9*/].f_1 = 1;
				break;
		}
		if (func_80(uParam0, iVar0))
		{
		}
		if (Global_66668[iVar0 /*9*/] >= 0)
		{
			if (!Global_54797[Global_66668[iVar0 /*9*/] /*13*/].f_7)
			{
				iLocal_622++;
				if (Global_66668[iVar0 /*9*/].f_3 == 2)
				{
					bVar2 = true;
				}
			}
		}
		switch (Global_66668[iVar0 /*9*/])
		{
			case 84:
			case 100:
			case 69:
			case 41:
			case 54:
				iVar1 = Global_66668[iVar0 /*9*/].f_1;
				break;
		}
		iVar0++;
	}
	Global_66816 = iLocal_621;
	fVar3 = func_75(uParam0, iLocal_621, iLocal_622, bVar2);
	if (func_93(0))
	{
		unk_0x7160BCAC681232B2(Global_66818);
		unk_0x7160BCAC681232B2(unk_0xF2DB717A73826179(fVar3));
		if (bVar2)
		{
			unk_0x7160BCAC681232B2(1);
		}
		else
		{
			unk_0x7160BCAC681232B2(0);
		}
		if (Global_66817)
		{
			unk_0x7160BCAC681232B2(1);
		}
		else
		{
			unk_0x7160BCAC681232B2(0);
		}
		unk_0xF68C2FF686BD6204();
		Global_54564 = 0;
	}
	Global_54577 = 0;
	if (iVar1 > -1)
	{
		fVar3 = unk_0xBBDA792448DB5A89(iVar1);
	}
	func_70(fVar3, bVar2);
}

void func_70(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Global_66817)
	{
		iVar1 = Global_66818;
		fVar0 = func_74(iVar1);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_97173.f_8237.f_22++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_73(iVar1, fParam0, bParam1);
		}
	}
	else if (Global_66818 == -1)
	{
	}
	else
	{
		iVar2 = Global_66818;
		fVar0 = func_72(iVar2);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_97173.f_8237.f_22++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_71(iVar2, fParam0, bParam1);
		}
	}
}

void func_71(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_97173.f_7311.f_325[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_97173.f_7311.f_325[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_24453 = 1;
}

float func_72(int iParam0)
{
	return Global_97173.f_7311.f_325[iParam0 /*6*/].f_5;
}

void func_73(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_97173.f_16795[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_97173.f_16795[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_24453 = 1;
}

var func_74(int iParam0)
{
	return Global_97173.f_16795[iParam0 /*6*/].f_5;
}

float func_75(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = func_79(iParam1, iParam2, 0);
	iVar1 = func_78(fVar0);
	if (bParam3)
	{
		fVar0 = 50f;
		iVar1 = 1;
	}
	if (fVar0 == 0f)
	{
		func_77(uParam0, 1, "MTPHPER", 0, 0, 0, 0);
		return fVar0;
	}
	iVar2 = 0;
	switch (func_76(iVar1))
	{
		case 109:
			iVar2 = 3;
			break;
		
		case 108:
			iVar2 = 2;
			break;
		
		case 107:
			iVar2 = 1;
			break;
	}
	switch (func_76(iVar1))
	{
		case 109:
			func_77(uParam0, 1, "MTPHPER", unk_0xF2DB717A73826179(fVar0), 0, 0, iVar2);
			break;
		
		case 108:
			func_77(uParam0, 1, "MTPHPER", unk_0xF2DB717A73826179(fVar0), 0, 0, iVar2);
			break;
		
		case 107:
			func_77(uParam0, 1, "MTPHPER", unk_0xF2DB717A73826179(fVar0), 0, 0, iVar2);
			break;
	}
	return fVar0;
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = 107;
	switch (iParam0)
	{
		case 3:
			iVar0 = 109;
			break;
		
		case 2:
			iVar0 = 108;
			break;
		
		case 1:
			iVar0 = 107;
			break;
	}
	return iVar0;
}

void func_77(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
}

int func_78(float fParam0)
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_79(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (unk_0xBBDA792448DB5A89(iParam0) / unk_0xBBDA792448DB5A89(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = unk_0xBBDA792448DB5A89(unk_0x11E019C8F43ACC8A(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

int func_80(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	char* sVar19;
	char* sVar20;
	int iVar21;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (Global_66668[iParam1 /*9*/] >= 0)
	{
	}
	else
	{
		return 0;
	}
	Var2 = { Global_54797[Global_66668[iParam1 /*9*/] /*13*/] };
	if (Var2.f_0 == 15)
	{
		Global_66668[iParam1 /*9*/].f_1 = iLocal_629;
	}
	if (Var2.f_0 == 9)
	{
		Global_66668[iParam1 /*9*/].f_2 = fLocal_628;
	}
	if (Var2.f_0 == 14)
	{
		Global_66668[iParam1 /*9*/].f_1 = unk_0xF34EE736CF047844(Global_66668[iParam1 /*9*/].f_2);
	}
	if (func_68(Global_66668[iParam1 /*9*/], Global_66668[iParam1 /*9*/].f_1))
	{
		fVar0 = 1f;
	}
	if (Global_66668[iParam1 /*9*/].f_3 != 0)
	{
		fVar0 = 0f;
	}
	if (!Var2.f_2 == 0)
	{
		fVar1 = unk_0xBBDA792448DB5A89(unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89(Global_66668[iParam1 /*9*/].f_1) / unk_0xBBDA792448DB5A89(Var2.f_2)) * 100f)));
		if (fVar1 > 100f)
		{
			fVar1 = 100f;
		}
	}
	iVar15 = func_83(Var2.f_4);
	iVar16 = 0;
	switch (Global_66668[iParam1 /*9*/])
	{
		case 42:
		case 55:
		case 85:
		case 70:
		case 101:
			iVar16 = 1;
			break;
		
		case 84:
		case 100:
		case 69:
		case 41:
		case 54:
			iVar16 = 1;
			break;
	}
	if (Global_66668[iParam1 /*9*/].f_3 == 0 || iVar16)
	{
		if (Var2.f_3)
		{
			if ((iVar15 > Global_66668[iParam1 /*9*/].f_1 || iVar15 < 0) || iVar15 == -1)
			{
				func_82(Global_66668[iParam1 /*9*/].f_1, Global_66668[iParam1 /*9*/]);
			}
		}
		else if ((Global_66668[iParam1 /*9*/].f_1 > iVar15 || iVar15 < 0) || iVar15 == -1)
		{
			func_82(Global_66668[iParam1 /*9*/].f_1, Global_66668[iParam1 /*9*/]);
		}
	}
	iVar17 = Global_66668[iParam1 /*9*/].f_1;
	if (Var2.f_7)
	{
		return 1;
	}
	iVar18 = 1;
	if (fVar0 == 1f)
	{
		iLocal_621++;
		iVar18 = 2;
	}
	sVar19 = func_81(Global_66668[iParam1 /*9*/]);
	if (Global_66668[iParam1 /*9*/].f_3 != 0)
	{
		if (!func_93(0))
		{
			func_82(-1, Global_66668[iParam1 /*9*/]);
		}
		sVar20 = "MTPHPERRET";
		switch (Global_66668[iParam1 /*9*/].f_3)
		{
			case 4:
				sVar20 = "MTPHPERCHE";
				break;
			
			case 2:
				sVar20 = "MTPHPERSKI";
				break;
			
			case 3:
				sVar20 = "MTPHPERTAX";
				break;
			
			case 5:
				sVar20 = "MTPHPERNOREC";
				break;
		}
		if (iLocal_626 == Global_66668[iParam1 /*9*/].f_3)
		{
			sVar20 = "";
		}
		iLocal_626 = Global_66668[iParam1 /*9*/].f_3;
		func_88(uParam0, 6, sVar19, sVar20, Global_66668[iParam1 /*9*/].f_1, 0, 3, 0);
	}
	else
	{
		iLocal_626 = 0;
		switch (Var2.f_0)
		{
			case 1:
				func_88(uParam0, 8, sVar19, "", Global_66668[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 2:
				func_88(uParam0, 9, sVar19, "", Global_66668[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 3:
				func_88(uParam0, 0, sVar19, "", Global_66668[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 4:
			case 17:
				func_88(uParam0, 9, sVar19, "", Global_66668[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 5:
				func_88(uParam0, 11, sVar19, "", unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(Global_66668[iParam1 /*9*/].f_1) / unk_0xBBDA792448DB5A89(Var2.f_2)) * 100f)), 0, iVar18, 0);
				break;
			
			case 6:
				func_88(uParam0, 0, sVar19, "", Global_66668[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 7:
				if (iVar17 > Var2.f_2)
				{
					iVar17 = Var2.f_2;
				}
				func_88(uParam0, 2, sVar19, "", iVar17, Var2.f_2, iVar18, 0);
				break;
			
			case 8:
				iVar21 = Global_66668[iParam1 /*9*/].f_1;
				if (iVar21 > Var2.f_2)
				{
					iVar21 = Var2.f_2;
				}
				func_88(uParam0, 2, sVar19, "", iVar21, Var2.f_2, iVar18, 0);
				break;
			
			case 9:
				func_88(uParam0, 11, sVar19, "", unk_0xF2DB717A73826179(Global_66668[iParam1 /*9*/].f_2), 0, iVar18, 0);
				break;
			
			case 10:
			case 15:
			case 16:
				func_88(uParam0, 1, sVar19, "", Global_66668[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 11:
				func_88(uParam0, 11, sVar19, "", Global_66668[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 14:
				func_88(uParam0, 12, sVar19, "", Global_66668[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			case 12:
			case 13:
				func_88(uParam0, 3, sVar19, "", Global_66668[iParam1 /*9*/].f_1, 0, iVar18, 0);
				break;
			
			default:
				break;
			}
	}
	return 0;
}

char* func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MISHSTA_0";
		
		case 9:
			return "MISHSTA_1";
		
		case 10:
			return "MISHSTA_2";
		
		case 21:
			return "MISHSTA_1";
		
		case 22:
			return "MISHSTA_3";
		
		case 338:
			return "MISHSTA_0";
		
		case 339:
			return "MISHSTA_4";
		
		case 196:
			return "MISHSTA_5";
		
		case 197:
			return "MISHSTA_0";
		
		case 205:
			return "MISHSTA_6";
		
		case 206:
			return "MISHSTA_7";
		
		case 207:
			return "MISHSTA_8";
		
		case 218:
			return "MISHSTA_1";
		
		case 217:
			return "MISHSTA_0";
		
		case 384:
			return "MISHSTA_1";
		
		case 385:
			return "MISHSTA_9";
		
		case 372:
			return "MISHSTA_10";
		
		case 373:
			return "MISHSTA_11";
		
		case 375:
			return "MISHSTA_1";
		
		case 374:
			return "MISHSTA_12";
		
		case 486:
			return "MISHSTA_13";
		
		case 487:
			return "MISHSTA_11";
		
		case 488:
			return "MISHSTA_1";
		
		case 489:
			return "MISHSTA_14";
		
		case 490:
			return "MISHSTA_15";
		
		case 499:
			return "MISHSTA_11";
		
		case 500:
			return "MISHSTA_1";
		
		case 501:
			return "MISHSTA_16";
		
		case 502:
			return "MISHSTA_17";
		
		case 515:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 516:
			return "MISHSTA_18";
		
		case 517:
			return "MISHSTA_12";
		
		case 518:
			return "MISHSTA_19";
		
		case 137:
			return "MISHSTA_12";
		
		case 136:
			return "MISHSTA_20";
		
		case 148:
			return "MISHSTA_11";
		
		case 149:
			return "MISHSTA_12";
		
		case 150:
			return "MISHSTA_21";
		
		case 229:
			return "MISHSTA_6";
		
		case 230:
			return "MISHSTA_22";
		
		case 273:
			return "MISHSTA_10";
		
		case 274:
			return "MISHSTA_11";
		
		case 275:
			return "MISHSTA_1";
		
		case 276:
			return "MISHSTA_23";
		
		case 277:
			return "MISHSTA_12";
		
		case 283:
			return "MISHSTA_1";
		
		case 284:
			return "MISHSTA_10";
		
		case 285:
			return "MISHSTA_11";
		
		case 346:
			return "MISHSTA_1";
		
		case 239:
			return "MISHSTA_1";
		
		case 240:
			return "MISHSTA_24";
		
		case 241:
			return "MISHSTA_25";
		
		case 242:
			return "MISHSTA_26";
		
		case 294:
			return "MISHSTA_27";
		
		case 295:
			return "MISHSTA_28";
		
		case 296:
			return "MISHSTA_29";
		
		case 297:
			return "MISHSTA_30";
		
		case 298:
			return "MISHSTA_31";
		
		case 308:
			return "MISHSTA_32";
		
		case 102:
			return "MISHSTA_0";
		
		case 115:
			return "MISHSTA_33";
		
		default:
	}
	switch (iParam0)
	{
		case 114:
			return "MISHSTA_1";
		
		case 111:
			return "MISHSTA_34";
		
		case 112:
			return "MISHSTA_35";
		
		case 113:
			return "MISHSTA_36";
		
		case 396:
			return "MISHSTA_1";
		
		case 393:
			return "MISHSTA_37";
		
		case 394:
			return "MISHSTA_38";
		
		case 395:
			return "MISHSTA_39";
		
		case 120:
			return "MISHSTA_0";
		
		case 121:
			return "MISHSTA_6";
		
		case 122:
			return "MISHSTA_40";
		
		case 123:
			return "MISHSTA_41";
		
		case 124:
			return "MISHSTA_42";
		
		case 161:
			return "MISHSTA_43";
		
		case 172:
			return "MISHSTA_43";
		
		case 173:
			return "MISHSTA_1";
		
		case 174:
			return "MISHSTA_11";
		
		case 175:
			return "MISHSTA_44";
		
		case 185:
			return "MISHSTA_1";
		
		case 186:
			return "MISHSTA_6";
		
		case 187:
			return "MISHSTA_45";
		
		case 326:
			return "MISHSTA_46";
		
		case 129:
			return "MISHSTA_1";
		
		case 130:
			return "MISHSTA_0";
		
		case 466:
			return "MISHSTA_1";
		
		case 400:
			return "MISHSTA_1";
		
		case 401:
			return "MISHSTA_47";
		
		case 413:
			return "MISHSTA_48";
		
		case 414:
			return "MISHSTA_10";
		
		case 415:
			return "MISHSTA_11";
		
		case 416:
			return "MISHSTA_49";
		
		default:
	}
	switch (iParam0)
	{
		case 417:
			return "MISHSTA_50";
		
		case 249:
			return "MISHSTA_1";
		
		case 474:
			return "MISHSTA_1";
		
		case 257:
			return "MISHSTA_1";
		
		case 527:
			return "MISHSTA_51";
		
		case 528:
			return "MISHSTA_52";
		
		case 529:
			return "MISHSTA_53";
		
		case 534:
			return "MISHSTA_54";
		
		case 709:
			return "MISHSTA_55";
		
		case 576:
			return "MISHSTA_1";
		
		case 577:
			return "MISHSTA_56";
		
		case 578:
			return "MISHSTA_57";
		
		case 579:
			return "MISHSTA_58";
		
		case 742:
			return "MISHSTA_59";
		
		case 741:
			return "MISHSTA_60";
		
		case 743:
			return "MISHSTA_61";
		
		case 745:
			return "MISHSTA_62";
		
		case 748:
			return "MISHSTA_62";
		
		case 747:
			return "MISHSTA_63";
		
		case 749:
			return "MISHSTA_64";
		
		case 750:
			return "MISHSTA_65";
		
		case 751:
			return "MISHSTA_66";
		
		case 754:
			return "MISHSTA_67";
		
		case 753:
			return "MISHSTA_68";
		
		case 757:
			return "MISHSTA_69";
		
		case 756:
			return "MISHSTA_70";
		
		case 755:
			return "MISHSTA_71";
		
		case 759:
			return "MISHSTA_72";
		
		case 758:
			return "MISHSTA_73";
		
		case 761:
			return "MISHSTA_74";
		
		case 760:
			return "MISHSTA_75";
		
		default:
	}
	switch (iParam0)
	{
		case 762:
			return "MISHSTA_76";
		
		case 763:
			return "MISHSTA_77";
		
		case 766:
			return "MISHSTA_78";
		
		case 769:
			return "MISHSTA_79";
		
		case 768:
			return "MISHSTA_80";
		
		case 767:
			return "MISHSTA_81";
		
		case 771:
			return "MISHSTA_82";
		
		case 770:
			return "MISHSTA_83";
		
		case 773:
			return "MISHSTA_84";
		
		case 772:
			return "MISHSTA_85";
		
		case 775:
			return "MISHSTA_86";
		
		case 774:
			return "MISHSTA_87";
		
		case 777:
			return "MISHSTA_88";
		
		case 776:
			return "MISHSTA_89";
		
		case 779:
			return "MISHSTA_90";
		
		case 778:
			return "MISHSTA_91";
		
		case 782:
			return "MISHSTA_92";
		
		case 780:
			return "MISHSTA_93";
		
		case 781:
			return "MISHSTA_94";
		
		case 784:
			return "MISHSTA_95";
		
		case 783:
			return "MISHSTA_96";
		
		case 786:
			return "MISHSTA_97";
		
		case 785:
			return "MISHSTA_98";
		
		case 788:
			return "MISHSTA_99";
		
		case 787:
			return "MISHSTA_100";
		
		case 789:
			return "MISHSTA_101";
		
		case 792:
			return "MISHSTA_102";
		
		case 791:
			return "MISHSTA_103";
		
		case 790:
			return "MISHSTA_104";
		
		case 793:
			return "MISHSTA_105";
		
		case 794:
			return "MISHSTA_106";
		
		default:
	}
	switch (iParam0)
	{
		case 795:
			return "MISHSTA_0";
		
		case 796:
			return "MISHSTA_107";
		
		case 797:
			return "MISHSTA_108";
		
		case 798:
			return "MISHSTA_109";
		
		case 799:
			return "MISHSTA_110";
		
		case 800:
			return "MISHSTA_111";
		
		case 801:
			return "MISHSTA_112";
		
		case 802:
			return "MISHSTA_113";
		
		case 803:
			return "MISHSTA_114";
		
		case 804:
			return "MISHSTA_115";
		
		case 805:
			return "MISHSTA_116";
		
		case 806:
			return "MISHSTA_117";
		
		case 807:
			return "MISHSTA_118";
		
		case 808:
			return "MISHSTA_119";
		
		case 809:
			return "MISHSTA_120";
		
		case 429:
			return "MISHSTA_1";
		
		case 441:
			return "MISHSTA_1";
		
		case 4:
			return "MISHSTA_121";
		
		case 13:
			return "MISHSTA_11";
		
		case 341:
			return "MISHSTA_122";
		
		case 5:
			return "MISHSTA_123";
		
		case 6:
			return "MISHSTA_124";
		
		case 20:
			return "MISHSTA_10";
		
		case 169:
			return "MISHSTA_125";
		
		case 731:
			return "MISHSTA_126";
		
		case 737:
			return "MISHSTA_10";
		
		case 145:
			return "MISHSTA_127";
		
		case 159:
			return "MISHSTA_10";
		
		case 353:
			return "MISHSTA_10";
		
		case 357:
			return "MISHSTA_11";
		
		case 605:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 606:
			return "MISHSTA_10";
		
		case 613:
			return "MISHSTA_128";
		
		case 616:
			return "MISHSTA_129";
		
		case 628:
			return "MISHSTA_130";
		
		case 309:
			return "MISHSTA_11";
		
		case 310:
			return "MISHSTA_10";
		
		case 313:
			return "MISHSTA_131";
		
		case 477:
			return "MISHSTA_37";
		
		case 482:
			return "MISHSTA_132";
		
		case 484:
			return "MISHSTA_133";
		
		case 715:
			return "MISHSTA_123";
		
		case 570:
			return "MISHSTA_10";
		
		case 566:
			return "MISHSTA_11";
		
		case 565:
			return "MISHSTA_134";
		
		case 572:
			return "MISHSTA_135";
		
		case 574:
			return "MISHSTA_136";
		
		case 431:
			return "MISHSTA_11";
		
		case 443:
			return "MISHSTA_137";
		
		case 446:
			return "MISHSTA_138";
		
		case 452:
			return "MISHSTA_139";
		
		case 364:
			return "MISHSTA_11";
		
		case 365:
			return "MISHSTA_10";
		
		case 369:
			return "MISHSTA_140";
		
		case 668:
			return "MISHSTA_11";
		
		case 670:
			return "MISHSTA_141";
		
		case 678:
			return "MISHSTA_11";
		
		case 265:
			return "MISHSTA_11";
		
		case 266:
			return "MISHSTA_10";
		
		case 270:
			return "MISHSTA_142";
		
		case 271:
			return "MISHSTA_143";
		
		case 272:
			return "MISHSTA_144";
		
		default:
	}
	switch (iParam0)
	{
		case 765:
			return "MISHSTA_145";
		
		case 764:
			return "MISHSTA_146";
		
		case 330:
			return "MISHSTA_11";
		
		case 331:
			return "MISHSTA_10";
		
		case 643:
			return "MISHSTA_147";
		
		case 644:
			return "MISHSTA_148";
		
		case 645:
			return "MISHSTA_149";
		
		case 646:
			return "MISHSTA_150";
		
		case 404:
			return "MISHSTA_10";
		
		case 721:
			return "MISHSTA_151";
		
		case 752:
			return "MISHSTA_152";
		
		case 147:
			return "MISHSTA_1";
		
		case 336:
			return "MISHSTA_1";
		
		case 371:
			return "MISHSTA_1";
		
		case 557:
			return "MISHSTA_1";
		
		case 575:
			return "MISHSTA_1";
		
		case 629:
			return "MISHSTA_1";
		
		case 647:
			return "MISHSTA_1";
		
		case 685:
			return "MISHSTA_1";
		
		case 693:
			return "MISHSTA_1";
		
		case 738:
			return "MISHSTA_1";
		
		case 650:
			return "MISHSTA_0";
		
		case 649:
			return "MISHSTA_153";
		
		case 825:
			return "MISHSTA_154";
		
		case 824:
			return "MISHSTA_155";
		
		case 821:
			return "MISHSTA_156";
		
		case 820:
			return "MISHSTA_157";
		
		case 319:
			return "MISHSTA_158";
		
		case 318:
			return "MISHSTA_159";
		
		case 317:
			return "MISHSTA_1";
		
		case 322:
			return "MISHSTA_1";
		
		default:
	}
	switch (iParam0)
	{
		case 323:
			return "MISHSTA_0";
		
		case 324:
			return "MISHSTA_160";
		
		case 816:
			return "MISHSTA_161";
		
		case 815:
			return "MISHSTA_162";
		
		case 814:
			return "MISHSTA_163";
		
		case 746:
			return "MISHSTA_164";
		
		case 514:
			return "MISHSTA_165";
		
		case 744:
			return "MISHSTA_166";
		
		case 841:
			return "MISHSTA_167";
		
		case 840:
			return "MISHSTA_1";
		
		case 838:
			return "MISHSTA_167";
		
		case 828:
			return "MISHSTA_1";
		
		case 829:
			return "MISHSTA_167";
		
		case 831:
			return "MISHSTA_1";
		
		case 832:
			return "MISHSTA_167";
		
		case 834:
			return "MISHSTA_1";
		
		case 835:
			return "MISHSTA_167";
		
		case 837:
			return "MISHSTA_1";
		
		case 739:
			return "MISHSTA_168";
		
		case 619:
			return "MISHSTA_169";
		
		case 560:
			return "MISHSTA_170";
		
		case 559:
			return "MISHSTA_171";
		
		case 558:
			return "MISHSTA_172";
		
		case 673:
			return "MISHSTA_10";
		
		case 688:
			return "MISHSTA_10";
		
		case 687:
			return "MISHSTA_173";
		
		case 844:
			return "MISHSTA_174";
		
		case 845:
			return "MISHSTA_175";
		
		case 843:
			return "MISHSTA_176";
		
		case 236:
			return "MISHSTA_177";
		
		case 29:
			return "MISHSTA_178";
		
		default:
	}
	switch (iParam0)
	{
		case 109:
			return "MISHSTA_179";
		
		case 108:
			return "MISHSTA_180";
		
		case 135:
			return "MISHSTA_181";
		
		case 227:
			return "MISHSTA_182";
		
		case 852:
			return "MISHSTA_183";
		
		case 846:
			return "MISHSTA_184";
		
		case 440:
			return "MISHSTA_185";
		
		case 864:
			return "MISHSTA_186";
		
		case 863:
			return "MISHSTA_187";
		
		case 861:
			return "MISHSTA_1";
		
		case 862:
			return "MISHSTA_188";
		
		case 870:
			return "MISHSTA_1";
		
		case 544:
			return "MISHSTA_0";
		
		case 543:
			return "MISHSTA_189";
		
		case 593:
			return "MISHSTA_190";
		
		case 592:
			return "MISHSTA_1";
		
		case 603:
			return "MISHSTA_1";
		
		case 899:
			return "MISHSTA_1";
		
		case 900:
			return "MISHSTA_191";
		
		case 883:
			return "MISHSTA_192";
		
		case 891:
			return "MISHSTA_192";
		
		case 657:
			return "MISHSTA_193";
		
		case 875:
			return "MISHSTA_192";
		
		case 906:
			return "MISHSTA_194";
		
		case 706:
			return "MISHSTA_195";
		
		case 699:
			return "MISHSTA_196";
		
		case 726:
			return "MISHSTA_197";
		
		case 237:
			return "MISHSTA_198";
		
		case 658:
			return "MISHSTA_1";
		
		case 877:
			return "MISHSTA_0";
		
		case 885:
			return "MISHSTA_0";
		
		default:
	}
	switch (iParam0)
	{
		case 893:
			return "MISHSTA_0";
		
		case 694:
			return "MISHSTA_110";
		
		case 881:
			return "MISHSTA_199";
		
		case 889:
			return "MISHSTA_199";
		
		case 897:
			return "MISHSTA_199";
		
		case 633:
			return "MISHSTA_200";
		
		case 632:
			return "MISHSTA_201";
		
		case 38:
			return "MISHSTA_202";
		
		case 41:
			return "MISHSTA_203";
		
		case 39:
			return "MISHSTA_204";
		
		case 40:
			return "MISHSTA_205";
		
		case 42:
			return "MISHSTA_206";
		
		case 56:
			return "MISHSTA_205";
		
		case 52:
			return "MISHSTA_202";
		
		case 53:
			return "MISHSTA_207";
		
		case 54:
			return "MISHSTA_203";
		
		case 55:
			return "MISHSTA_206";
		
		case 70:
			return "MISHSTA_206";
		
		case 69:
			return "MISHSTA_203";
		
		case 67:
			return "MISHSTA_132";
		
		case 68:
			return "MISHSTA_205";
		
		case 66:
			return "MISHSTA_202";
		
		case 81:
			return "MISHSTA_202";
		
		case 82:
			return "MISHSTA_208";
		
		case 84:
			return "MISHSTA_203";
		
		case 83:
			return "MISHSTA_205";
		
		case 85:
			return "MISHSTA_206";
		
		case 97:
			return "MISHSTA_202";
		
		case 98:
			return "MISHSTA_209";
		
		case 100:
			return "MISHSTA_203";
		
		case 99:
			return "MISHSTA_205";
		
		default:
	}
	switch (iParam0)
	{
		case 101:
			return "MISHSTA_206";
		
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

void func_82(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_54797[iParam1 /*13*/].f_4;
	if (iVar0 == 0)
	{
		return;
	}
	Global_54797[iParam1 /*13*/].f_1 = iParam0;
	uVar1 = iParam0 + 1;
	unk_0x96B68C67633472DC(iVar0, uVar1, 1);
	if (func_93(0) && Global_54564)
	{
		unk_0x7160BCAC681232B2(iVar0);
		unk_0x7160BCAC681232B2(iParam0);
		unk_0x7160BCAC681232B2(iParam1);
	}
}

int func_83(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (unk_0x55FFE396AA3CA77A(iParam0, &iVar0, -1))
	{
		return (iVar0 - 1);
	}
	return -1;
}

bool func_84(int iParam0)
{
	return unk_0x61D8FEAF64881CDA(Global_97173.f_1.f_118, iParam0);
}

int func_85(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_99.f_200[iParam0];
}

int func_86(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

char* func_87(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "JCSLMVANR";
		
		case 2:
			return "JCHMDRAZ";
		
		case 3:
			return "HSTAGNCUT";
		
		case 4:
			return "UNSELLWEAP";
		
		case 0:
			return "HSTECUT";
		
		case 5:
			return "HSTSLWLD";
		
		case 6:
			return "HSTCASECUT";
		
		default:
	}
	return "UNSET_HEISTPENALTY";
}

void func_88(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_89(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_90(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (Global_86409.f_3)
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
			Global_97173.f_1.f_126[iParam0 /*23*/].f_1 = 201600000;
			Global_97173.f_1.f_126[iParam0 /*23*/] = 201600000;
			break;
		
		case 3:
			Global_97173.f_1.f_126[iParam0 /*23*/].f_1 = 331985;
			Global_97173.f_1.f_126[iParam0 /*23*/] = 331985;
			break;
		
		case 1:
			Global_97173.f_1.f_126[iParam0 /*23*/] = 20000000;
			Global_97173.f_1.f_126[iParam0 /*23*/].f_1 = 20000000;
			break;
	}
	iVar0 = func_85(func_67(iParam0));
	iVar1 = Global_97173.f_1.f_126[iParam0 /*23*/].f_1;
	switch (iParam0)
	{
		case 0:
			func_92(iParam0, 2, 2500000);
			break;
		
		case 1:
			func_92(iParam0, 4, 20000000);
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		Global_97173.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < Global_86419[iParam0 /*38*/].f_37)
	{
		if (Global_86419[iParam0 /*38*/].f_31[iVar2] > 0)
		{
			iVar3 = (iVar3 + Global_86419[iParam0 /*38*/].f_31[iVar2]);
			Global_97173.f_1.f_126[iParam0 /*23*/].f_1 = (Global_97173.f_1.f_126[iParam0 /*23*/].f_1 - Global_86419[iParam0 /*38*/].f_31[iVar2]);
		}
		iVar2++;
	}
	iVar1 = (iVar1 - iVar3);
	if (iParam0 == 2)
	{
		iVar4 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(Global_97173.f_1.f_126[iParam0 /*23*/].f_1) * 0.78f));
		func_92(iParam0, 3, iVar4);
		Global_97173.f_1.f_126[iParam0 /*23*/].f_1 = (Global_97173.f_1.f_126[iParam0 /*23*/].f_1 - iVar4);
		iVar1 = (iVar1 - iVar4);
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		iVar5 = Global_97173.f_1.f_12[iVar0 /*6*/][iVar2];
		switch (Global_97173.f_1.f_126[iParam0 /*23*/].f_11[iVar2])
		{
			case 1:
			case 2:
			case 0:
				Global_97173.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(Global_86064[iVar5 /*5*/].f_1) * 0.01f) * IntToFloat(Global_97173.f_1.f_126[iParam0 /*23*/].f_1)));
				break;
			
			case 3:
				Global_97173.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(Global_86064[iVar5 /*5*/].f_1) * 0.015f) * IntToFloat(Global_97173.f_1.f_126[iParam0 /*23*/].f_1)));
				break;
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_86218[iVar0 /*19*/])
	{
		iVar1 = (iVar1 - Global_97173.f_1.f_126[iParam0 /*23*/].f_17[iVar2]);
		iVar2++;
	}
	Global_97173.f_1.f_126[0 /*23*/].f_2[0] = 0;
	Global_97173.f_1.f_126[0 /*23*/].f_2[1] = 0;
	Global_97173.f_1.f_126[0 /*23*/].f_2[2] = 0;
	Global_86409.f_7 = 0;
	switch (iParam0)
	{
		case 0:
			Global_97173.f_1.f_126[0 /*23*/].f_6[0] = 0f;
			Global_97173.f_1.f_126[0 /*23*/].f_6[1] = 0f;
			Global_97173.f_1.f_126[0 /*23*/].f_6[2] = -1f;
			Global_97173.f_1.f_126[0 /*23*/].f_2[1] = unk_0x11E019C8F43ACC8A((0.12f * IntToFloat(Global_97173.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_97173.f_1.f_126[0 /*23*/].f_2[1]);
			Global_86409.f_7 = unk_0x11E019C8F43ACC8A((0.14f * IntToFloat(Global_97173.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_86409.f_7);
			Global_86409.f_6 = 14f;
			Global_97173.f_1.f_126[0 /*23*/].f_2[0] = iVar1;
			break;
		
		case 1:
			Global_97173.f_1.f_126[1 /*23*/].f_6[0] = 0f;
			Global_97173.f_1.f_126[1 /*23*/].f_6[1] = 0f;
			Global_97173.f_1.f_126[1 /*23*/].f_6[2] = 0f;
			Global_97173.f_1.f_126[1 /*23*/].f_2[0] = 0;
			Global_97173.f_1.f_126[1 /*23*/].f_2[1] = 0;
			Global_97173.f_1.f_126[1 /*23*/].f_2[2] = 0;
			Global_86409.f_6 = -1f;
			break;
		
		case 2:
			Global_97173.f_1.f_126[2 /*23*/].f_6[0] = 0f;
			Global_97173.f_1.f_126[2 /*23*/].f_6[1] = 0f;
			Global_97173.f_1.f_126[2 /*23*/].f_6[2] = 0f;
			Global_86409.f_7 = unk_0x11E019C8F43ACC8A((0.12f * IntToFloat(Global_97173.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_86409.f_7);
			Global_86409.f_6 = 12f;
			Global_97173.f_1.f_126[2 /*23*/].f_2[0] = (iVar1 / 3);
			Global_97173.f_1.f_126[2 /*23*/].f_2[1] = (iVar1 / 3);
			Global_97173.f_1.f_126[2 /*23*/].f_2[2] = (iVar1 / 3);
			Global_86409.f_6 = 0f;
			break;
		
		case 3:
			Global_97173.f_1.f_126[3 /*23*/].f_6[0] = -1f;
			Global_97173.f_1.f_126[3 /*23*/].f_6[1] = 0f;
			Global_97173.f_1.f_126[3 /*23*/].f_6[2] = 0f;
			Global_86409.f_7 = unk_0x11E019C8F43ACC8A((0.12f * IntToFloat(Global_97173.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_86409.f_7);
			Global_86409.f_6 = 12f;
			Global_97173.f_1.f_126[3 /*23*/].f_2[1] = iVar1;
			break;
		
		case 4:
			Global_97173.f_1.f_126[4 /*23*/].f_6[0] = 0f;
			Global_97173.f_1.f_126[4 /*23*/].f_6[1] = 0f;
			Global_97173.f_1.f_126[4 /*23*/].f_6[2] = 0f;
			Global_86409.f_7 = unk_0x11E019C8F43ACC8A((0.12f * IntToFloat(Global_97173.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_86409.f_7);
			Global_86409.f_6 = 12f;
			Global_97173.f_1.f_126[4 /*23*/].f_2[0] = (iVar1 / 3);
			Global_97173.f_1.f_126[4 /*23*/].f_2[1] = (iVar1 / 3);
			Global_97173.f_1.f_126[4 /*23*/].f_2[2] = (iVar1 / 3);
			Global_86409.f_6 = 0f;
			break;
	}
	iVar6 = Global_97173.f_1.f_126[iParam0 /*23*/].f_1;
	if (Global_97173.f_1.f_126[iParam0 /*23*/].f_6[0] != -1f)
	{
		Global_97173.f_1.f_126[iParam0 /*23*/].f_6[0] = ((unk_0xBBDA792448DB5A89(Global_97173.f_1.f_126[iParam0 /*23*/].f_2[0]) / unk_0xBBDA792448DB5A89(iVar6)) * 100f);
	}
	if (Global_97173.f_1.f_126[iParam0 /*23*/].f_6[1] != -1f)
	{
		Global_97173.f_1.f_126[iParam0 /*23*/].f_6[1] = ((unk_0xBBDA792448DB5A89(Global_97173.f_1.f_126[iParam0 /*23*/].f_2[1]) / unk_0xBBDA792448DB5A89(iVar6)) * 100f);
	}
	if (Global_97173.f_1.f_126[iParam0 /*23*/].f_6[2] != -1f)
	{
		Global_97173.f_1.f_126[iParam0 /*23*/].f_6[2] = ((unk_0xBBDA792448DB5A89(Global_97173.f_1.f_126[iParam0 /*23*/].f_2[2]) / unk_0xBBDA792448DB5A89(iVar6)) * 100f);
	}
	if (Global_86409.f_6 != -1f)
	{
		Global_86409.f_6 = ((unk_0xBBDA792448DB5A89(Global_86409.f_7) / unk_0xBBDA792448DB5A89(iVar6)) * 100f);
	}
	switch (iParam0)
	{
		case 0:
			unk_0x96B68C67633472DC(joaat("jewel_heist_raw_take"), Global_97173.f_1.f_126[iParam0 /*23*/], 1);
			break;
	}
	iVar7 = 0;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		iVar7 = (iVar7 + Global_97173.f_1.f_126[iParam0 /*23*/].f_2[iVar8]);
		iVar8++;
	}
	switch (iParam0)
	{
		case 0:
			func_91(810, Global_97173.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_91(811, iVar7, 1);
			break;
		
		case 1:
			switch (func_85(8))
			{
				case 3:
					func_91(610, Global_97173.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_91(611, iVar7, 1);
					break;
				
				case 4:
					func_91(622, Global_97173.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_91(623, iVar7, 1);
					break;
			}
			break;
		
		case 2:
			func_91(734, Global_97173.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_91(735, iVar7, 1);
			break;
		
		case 3:
			switch (func_85(10))
			{
				case 6:
					break;
				
				case 7:
					break;
			}
			break;
		
		case 4:
			switch (func_85(11))
			{
				case 8:
					func_91(664, Global_97173.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_91(671, iVar7, 1);
					break;
				
				case 9:
					func_91(674, Global_97173.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_91(682, iVar7, 1);
					break;
			}
			break;
	}
	Global_86409.f_3 = 1;
	Global_54572 = 0;
}

void func_91(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66667)
	{
		if (Global_66668[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_66668[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_66668[iVar0 /*9*/].f_1 = (Global_66668[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_66668[iVar0 /*9*/] != -1)
	{
		if (Global_54797[Global_66668[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_66668[iVar0 /*9*/].f_1 > 1)
			{
				Global_66668[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_66668[iVar0 /*9*/].f_1 < 0)
			{
				Global_66668[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_92(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 0)
	{
		return;
	}
	iVar0 = iParam2;
	if (iVar0 < 0)
	{
		iVar0 = (iVar0 * -1);
	}
	bVar1 = false;
	if (Global_86419[iParam0 /*38*/].f_37 == 5)
	{
		bVar1 = true;
	}
	iVar2 = Global_86419[iParam0 /*38*/].f_37;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_86419[iParam0 /*38*/].f_25[iVar3] == iParam1)
		{
			Global_86419[iParam0 /*38*/].f_25[iVar3] = iParam1;
			Global_86419[iParam0 /*38*/].f_31[iVar3] = iVar0;
			return;
		}
		iVar3++;
	}
	if (bVar1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					unk_0x96B68C67633472DC(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
					break;
				
				case 2:
					unk_0x96B68C67633472DC(joaat("hcs_penalty_paleto_drop_money"), iParam2, 1);
					break;
				
				case 4:
					unk_0x96B68C67633472DC(joaat("hcs_penalty_bigs_drop_money"), iParam2, 1);
					break;
			}
			break;
		
		case 1:
			unk_0x96B68C67633472DC(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
			break;
		
		case 2:
			unk_0x96B68C67633472DC(joaat("hcs_penalty_jewel_madr_house"), iParam2, 1);
			break;
		
		case 4:
			unk_0x96B68C67633472DC(joaat("hcs_penalty_docks_unsell_wpn"), iParam2, 1);
			break;
		
		case 3:
			unk_0x96B68C67633472DC(joaat("hcs_penalty_paleto_agent_cut"), iParam2, 1);
			break;
		
		case 5:
			unk_0x96B68C67633472DC(joaat("hcs_penalty_bigs_slow_loading"), iParam2, 1);
			break;
		
		case 6:
			unk_0x96B68C67633472DC(joaat("hcs_penalty_bigs_hostage_gift"), iParam2, 1);
			break;
	}
	Global_86419[iParam0 /*38*/].f_25[Global_86419[iParam0 /*38*/].f_37] = iParam1;
	Global_86419[iParam0 /*38*/].f_31[Global_86419[iParam0 /*38*/].f_37] = iVar0;
	Global_86419[iParam0 /*38*/].f_37++;
}

bool func_93(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

void func_94()
{
	int iVar0;
	int iVar1;
	
	if (Global_66667 > 16)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66667)
	{
		if (Global_66668[iVar0 /*9*/].f_1 == 0)
		{
			if (Global_66668[iVar0 /*9*/].f_2 != 0f)
			{
				Global_66668[iVar0 /*9*/].f_1 = unk_0xF34EE736CF047844(Global_66668[iVar0 /*9*/].f_2);
			}
		}
		iVar1 = Global_66668[iVar0 /*9*/];
		if (iVar1 > 0)
		{
			if (Global_54797[iVar1 /*13*/] == 9)
			{
				Global_66668[iVar0 /*9*/].f_1 = unk_0xF2DB717A73826179(fLocal_628);
			}
			if (Global_54797[iVar1 /*13*/] == 15)
			{
				Global_66668[iVar0 /*9*/].f_1 = iLocal_629;
			}
		}
		iVar0++;
	}
}

void func_95()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_54591)
	{
		return;
	}
	Global_54591 = 1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (func_7(joaat("sp0_shots")) - Global_54595);
	iVar1 = (func_7(joaat("sp0_hits")) - Global_54594);
	iVar0 = (iVar0 + (func_7(joaat("sp1_shots")) - Global_54597));
	iVar1 = (iVar1 + (func_7(joaat("sp1_hits")) - Global_54596));
	iVar0 = (iVar0 + (func_7(joaat("sp2_shots")) - Global_54599));
	iVar1 = (iVar1 + (func_7(joaat("sp2_hits")) - Global_54598));
	unk_0x4EDE34FBADD967A6(0);
	fVar2 = 100f;
	if (!iVar0 == 0)
	{
		fVar3 = unk_0xBBDA792448DB5A89(iVar0);
		fVar4 = unk_0xBBDA792448DB5A89(iVar1);
		fVar2 = unk_0xBBDA792448DB5A89(unk_0xF34EE736CF047844(((fVar4 / fVar3) * 100f)));
		if (fVar2 > 100f)
		{
			fVar2 = 100f;
		}
	}
	fLocal_628 = fVar2;
	iLocal_629 = iVar0;
}

void func_96(var uParam0)
{
	func_61(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

int func_97()
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

void func_98()
{
	int iVar0;
	
	if (Global_24689 == 0 && !Global_24693)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66667)
	{
		Global_66668[iVar0 /*9*/].f_3 = 4;
		iVar0++;
	}
}

void func_99()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	func_100();
	if (((Global_54578 && unk_0x52A84D9C3A400EA8(unk_0x4D82797EF5035A9F())) && !unk_0x22A3749598D2337A()) && !unk_0xBB02FD0C8166DE6D())
	{
		Global_54578 = 0;
	}
	if (Global_54571)
	{
		Global_54571 = 0;
		iLocal_620 = 0;
	}
	bVar0 = true;
	bVar1 = true;
	if (unk_0xBB02FD0C8166DE6D())
	{
		bVar0 = false;
	}
	if (!unk_0xE072F36CB31E9FEB())
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (Global_54578)
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (!unk_0xA54B09EB6B49FA94(unk_0x4D82797EF5035A9F()))
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (bVar0)
	{
		iLocal_620 = unk_0xF2DB717A73826179((unk_0x94B2D2AEAA1D886E() * 1000f));
	}
	iVar2 = 0;
	fVar3 = 0f;
	iVar2 = 0;
	while (iVar2 < Global_66667)
	{
		if (Global_66668[iVar2 /*9*/] >= 0)
		{
			iVar4 = Global_54797[Global_66668[iVar2 /*9*/] /*13*/];
			switch (iVar4)
			{
				case 6:
					if (Global_66668[iVar2 /*9*/].f_6 != 0)
					{
						if (Global_66668[iVar2 /*9*/].f_7 == 1)
						{
							Global_66668[iVar2 /*9*/].f_8 = 0;
							Global_66668[iVar2 /*9*/].f_1 = 0;
							Global_66668[iVar2 /*9*/].f_7 = 0;
						}
						else if (unk_0xFD68187442384158(Global_66668[iVar2 /*9*/].f_6))
						{
							if (!unk_0xE5D56342B0FF1D0D(Global_66668[iVar2 /*9*/].f_6))
							{
								iLocal_624 = Global_66668[iVar2 /*9*/].f_8;
								iLocal_623 = unk_0x5D422B4764FA2ACA(Global_66668[iVar2 /*9*/].f_6);
								iLocal_625 = (iLocal_624 - iLocal_623);
								if (iLocal_625 > 0)
								{
									Global_66668[iVar2 /*9*/].f_1 = (Global_66668[iVar2 /*9*/].f_1 + iLocal_625);
									if (Global_66668[iVar2 /*9*/].f_1 < 0)
									{
										Global_66668[iVar2 /*9*/].f_1 = (Global_66668[iVar2 /*9*/].f_1 * -1);
									}
								}
								Global_66668[iVar2 /*9*/].f_8 = iLocal_623;
							}
						}
						else
						{
							Global_66668[iVar2 /*9*/].f_6 = 0;
						}
					}
					break;
				
				case 1:
					Global_66668[iVar2 /*9*/].f_1 = (Global_66668[iVar2 /*9*/].f_1 + iLocal_620);
					break;
				
				case 2:
					if (Global_54579)
					{
						Global_66668[iVar2 /*9*/].f_1 = (Global_66668[iVar2 /*9*/].f_1 + iLocal_620);
					}
					break;
				
				case 3:
					break;
				
				case 4:
					if (Global_54580)
					{
						if (Global_54582 == -1 || Global_66668[iVar2 /*9*/] == Global_54582)
						{
							if (((Global_66668[iVar2 /*9*/] == 339 || Global_66668[iVar2 /*9*/] == 179) || Global_66668[iVar2 /*9*/] == 342) || Global_66668[iVar2 /*9*/] == 234)
							{
								Global_66668[iVar2 /*9*/].f_1 = (Global_66668[iVar2 /*9*/].f_1 + unk_0xF2DB717A73826179((unk_0x94B2D2AEAA1D886E() * 1000f)));
							}
							else
							{
								Global_66668[iVar2 /*9*/].f_1 = (Global_66668[iVar2 /*9*/].f_1 + iLocal_620);
							}
						}
					}
					break;
				
				case 5:
					if (bVar1)
					{
						if (Global_54584 == -1 || Global_54584 == Global_66668[iVar2 /*9*/])
						{
							if (!Global_54583 == 0)
							{
								if (unk_0xFD68187442384158(Global_54583))
								{
									if (!unk_0xE5D56342B0FF1D0D(Global_54583))
									{
										if (unk_0x1BA544973A67E699(Global_54583))
										{
											fVar3 = unk_0x11F6A4A45943670E(Global_54583);
											if (fVar3 > Global_66668[iVar2 /*9*/].f_2)
											{
												Global_66668[iVar2 /*9*/].f_2 = fVar3;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 7:
					break;
				
				case 8:
					break;
				
				case 9:
					break;
				
				case 13:
					break;
				
				case 12:
					break;
				
				case 10:
				case 11:
				case 14:
					break;
				
				case 16:
					break;
				
				case 17:
					if (func_47(func_55()))
					{
						if (unk_0x5636DF02874259EA(unk_0x4D82797EF5035A9F()) && unk_0xBED4C646F6B66E3A(unk_0x4D82797EF5035A9F()))
						{
							Global_66668[iVar2 /*9*/].f_1 = (Global_66668[iVar2 /*9*/].f_1 + iLocal_620);
						}
					}
					break;
				
				case 15:
					break;
				
				default:
					break;
				}
		}
		iVar2++;
	}
}

void func_100()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if ((((Global_66863 == 0 && Global_66853 == 0) && Global_54731 == 0) && Global_54601 == 0) && !Global_66819)
	{
		return;
	}
	iVar10 = 0;
	if (Global_54601 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_54602[iVar0 /*2*/] != 0)
			{
				if (!unk_0xFD68187442384158(Global_54602[iVar0 /*2*/]))
				{
					Global_54602[iVar0 /*2*/] = 0;
					Global_54601 = (Global_54601 - 1);
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0xB301423C53556EA6(0))
	{
		iVar3 = unk_0xAAB64DCC229F922F(0, iVar0);
		switch (iVar3)
		{
			case 140:
				unk_0x6EDD33D6B8546C95(0, iVar0, &iVar4, 1);
				if (unk_0xFD68187442384158(iVar4))
				{
					unk_0xE5D56342B0FF1D0D(iVar4);
					if (Global_54731 > 0)
					{
						iVar7 = unk_0x26EA758C2A691D06(iVar4);
						iVar1 = 0;
						iVar1 = 0;
						while (iVar1 < Global_54731)
						{
							if (Global_54732[iVar1 /*2*/] == iVar7)
							{
								iVar10 = (iVar10 + Global_54732[iVar1 /*2*/].f_1);
							}
							iVar1++;
						}
					}
					if (unk_0x91F594068DF4424F(iVar4) && unk_0x274BAC44978F9161(iVar4) != unk_0x507DA4994C3D8EBD())
					{
						uVar5 = unk_0x05F3196CF91FEF27(unk_0x274BAC44978F9161(iVar4));
						iVar14 = 0;
						if (unk_0xFD68187442384158(uVar5))
						{
							if (unk_0x1BA544973A67E699(iVar5))
							{
								if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
								{
									iVar15 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
								}
								else
								{
									iVar15 = unk_0xF6EA6ED8FFB5B505();
								}
								if (unk_0xFD68187442384158(iVar15) && unk_0x379620F9B34A512B(iVar5) == iVar15)
								{
									iVar14 = 1;
								}
							}
						}
						if ((unk_0x91F594068DF4424F(iVar5) && unk_0x687D51F360787909(unk_0x4D82797EF5035A9F()) == unk_0x274BAC44978F9161(iVar5)) || iVar14)
						{
							if (unk_0x91F594068DF4424F(iVar5))
							{
								iVar6 = unk_0x9C6ED73266D56543(unk_0x274BAC44978F9161(iVar4));
								if (Global_54601 > 0)
								{
									iVar11 = func_104(iVar4);
									if (iVar11 != -1)
									{
										unk_0x418F1542AE84B559(unk_0x274BAC44978F9161(Global_54602[iVar11 /*2*/]), &iLocal_627);
										if (iLocal_627 == 31086 || iLocal_627 == 39317)
										{
											if (iVar6 != 0 && iVar6 != joaat("weapon_unarmed"))
											{
												func_103();
												Global_54602[iVar11 /*2*/] = 0;
												Global_54601 = (Global_54601 - 1);
											}
										}
									}
								}
								if (Global_66863 > 0)
								{
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < Global_66863)
									{
										if (Global_66854[iVar1 /*2*/] == iVar6)
										{
											func_91(Global_66854[iVar1 /*2*/].f_1, 1, 0);
										}
										iVar1++;
									}
								}
							}
							if (Global_66819)
							{
								iVar12 = unk_0x274BAC44978F9161(iVar4);
								iVar13 = unk_0xF715A8C79E9233AC(iVar12);
								if (!unk_0x73E2404DC70203CD(iVar4) && ((((((!iVar13 == 22 && !iVar13 == 19) && !iVar13 == 17) && !iVar13 == 18) && !iVar13 == 27) && !iVar13 == 29) && !iVar13 == 28))
								{
									iVar9 = unk_0xC4F49DBA1D250447(unk_0x687D51F360787909(unk_0x4D82797EF5035A9F()), unk_0x274BAC44978F9161(iVar4));
									switch (iVar9)
									{
										case 255:
										case 0:
										case 1:
										case 2:
											if (unk_0x93AAE5923D671594(unk_0x274BAC44978F9161(iVar4)))
											{
												func_102();
											}
											break;
										
										default:
											break;
										}
									}
							}
							if (Global_66853 > 0)
							{
								iVar1 = 0;
								iVar2 = Global_66853;
								bVar8 = false;
								while (!bVar8)
								{
									if (Global_66820[iVar1 /*2*/] != 0)
									{
										if (unk_0xFD68187442384158(Global_66820[iVar1 /*2*/]))
										{
											if (unk_0xE5D56342B0FF1D0D(Global_66820[iVar1 /*2*/]))
											{
												if (Global_66820[iVar1 /*2*/] == iVar4)
												{
													func_91(Global_66820[iVar1 /*2*/].f_1, 1, 0);
													Global_66820[iVar1 /*2*/] = 0;
												}
											}
										}
										else
										{
											Global_66820[iVar1 /*2*/] = 0;
										}
										iVar2 = (iVar2 - 1);
									}
									iVar1++;
									if (iVar1 == 16 || iVar2 == 0)
									{
										bVar8 = true;
									}
								}
								if (Global_66853 > 0)
								{
									while (Global_66820[(Global_66853 - 1) /*2*/] == 0 && Global_66853 > 1)
									{
										if (Global_66853 > 1)
										{
											Global_66853 = (Global_66853 - 1);
										}
									}
								}
							}
						}
					}
				}
				break;
		}
		iVar0++;
	}
	if (iVar10 > 0)
	{
		func_101(iVar10);
	}
}

void func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66667)
	{
		iVar1 = Global_66668[iVar0 /*9*/];
		if (Global_54797[iVar1 /*13*/] == 13)
		{
			Global_66668[iVar0 /*9*/].f_1 = (Global_66668[iVar0 /*9*/].f_1 + iParam0);
		}
		iVar0++;
	}
}

void func_102()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66667)
	{
		iVar1 = Global_66668[iVar0 /*9*/];
		if (Global_54797[iVar1 /*13*/] == 16)
		{
			Global_66668[iVar0 /*9*/].f_1++;
		}
		iVar0++;
	}
}

void func_103()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_54601 == 0)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_66667)
	{
		iVar2 = Global_66668[iVar1 /*9*/];
		if (Global_54797[iVar2 /*13*/] == 7)
		{
			Global_66668[iVar1 /*9*/].f_1++;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_104(int iParam0)
{
	int iVar0;
	
	if (Global_54601 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_54602[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_105()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0x17A6DFACDB7D97FF())
	{
		if (unk_0xD0448F8C0E2239C6() == 33)
		{
			if (unk_0xE906ACFF18EEFCCC() == 33)
			{
				iVar0 = unk_0xFF3845B0D94BFB89();
				iVar1 = -1;
				iVar2 = (iVar0 - 4);
				if (((iVar0 - 4) % 3) == 0)
				{
					iVar0 = ((iVar0 - 4) / 3);
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < iVar0)
					{
						iVar4 = unk_0x1AA3B3C5D8DD60B7(iVar3 * 3 + 1);
						iVar5 = unk_0x1AA3B3C5D8DD60B7(iVar3 * 3 + 2);
						switch (iVar5)
						{
							case 84:
							case 100:
							case 69:
							case 41:
							case 54:
								iVar1 = iVar4;
								break;
						}
						func_82(iVar4, iVar5);
						iVar3++;
					}
					uVar6 = unk_0x1AA3B3C5D8DD60B7(iVar2);
					iVar7 = unk_0x1AA3B3C5D8DD60B7(iVar2 + 1);
					bVar8 = false;
					if (unk_0x1AA3B3C5D8DD60B7(iVar2 + 2) > 0)
					{
						bVar8 = true;
					}
					iVar9 = 0;
					if (unk_0x1AA3B3C5D8DD60B7(iVar2 + 3) > 0)
					{
						iVar9 = 1;
					}
					Global_66817 = iVar9;
					Global_66818 = uVar6;
					if (iVar1 == -1)
					{
						func_70(unk_0xBBDA792448DB5A89(iVar7), bVar8);
					}
					else
					{
						func_70(unk_0xBBDA792448DB5A89(iVar1), bVar8);
					}
				}
				func_106();
			}
		}
		if (unk_0xD0448F8C0E2239C6() == 13)
		{
			if (unk_0xE906ACFF18EEFCCC() == 37)
			{
				iVar10 = unk_0xFF3845B0D94BFB89();
				if (iVar10 == 3)
				{
					iVar11 = unk_0x1AA3B3C5D8DD60B7(0);
					iVar12 = unk_0x1AA3B3C5D8DD60B7(1);
					iVar13 = unk_0x1AA3B3C5D8DD60B7(2);
					Global_97173.f_1718[iVar11 /*2*/] = iVar12;
					Global_97173.f_1718[iVar11 /*2*/].f_1 = iVar13;
					func_106();
				}
			}
		}
	}
}

int func_106()
{
	if (func_93(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

void func_107()
{
	Global_68327 = 0;
	Global_68328 = 0;
	Global_54572 = 0;
	unk_0xC1B1E9A034A63A62(0);
	unk_0x5AE11BC36633DE4E(0);
	unk_0x5DC2C7ED9A68FCEF();
	iLocal_620 = 0;
	Global_54568 = 0;
	Global_54582 = -1;
	iLocal_630 = 0;
	Global_54566 = 0;
	Global_54565 = 0;
	iLocal_632 = 0;
	Global_54583 = 0;
	Global_54581 = 0;
	Global_54562 = 0;
	Global_66863 = 0;
	Global_66853 = 0;
	func_4();
	func_3();
	if (bLocal_633)
	{
		func_1(&Local_44);
		bLocal_633 = false;
	}
	if (Global_3)
	{
		unk_0x883793591E631A3B();
	}
	Global_54577 = 0;
	Global_54573 = 0;
}

