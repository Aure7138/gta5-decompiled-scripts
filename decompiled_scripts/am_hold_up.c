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
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	struct<50> Local_90 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	int iLocal_140 = 0;
	struct<73> Local_141 = { 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_214[32];
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	char* sLocal_538 = NULL;
	int iLocal_539 = 0;
	struct<3> Local_540 = { 0, 0, 0 } ;
	struct<3> Local_543 = { 0, 0, 0 } ;
	float fLocal_546 = 0f;
	int iLocal_547 = 0;
	struct<3> Local_548 = { 0, 0, 0 } ;
	struct<3> Local_551 = { 0, 0, 0 } ;
	int iLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	struct<3> Local_564 = { 0, 0, 0 } ;
	var uLocal_567 = 0;
	struct<3> Local_568 = { 0, 0, 0 } ;
	var uLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	struct<3> Local_584 = { 0, 0, 0 } ;
	struct<3> Local_587 = { 0, 0, 0 } ;
	struct<3> Local_590 = { 0, 0, 0 } ;
	struct<3> Local_593 = { 0, 0, 0 } ;
	var uLocal_596 = 0;
	struct<3> Local_597 = { 0, 0, 0 } ;
	struct<3> Local_600 = { 0, 0, 0 } ;
	float fLocal_603 = 0f;
	var uLocal_604 = 16;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
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
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	int iLocal_769 = 0;
	int iLocal_770[5] = { 0, 0, 0, 0, 0 };
	int iLocal_776[5] = { 0, 0, 0, 0, 0 };
	float fLocal_782 = 0f;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	int iLocal_798 = 0;
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	struct<3> Local_807 = { 0, 0, 0 } ;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
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
	fLocal_86 = ((0.05f + 0.275f) - 0.01f);
	iLocal_539 = joaat("mp_m_shopkeep_01");
	iLocal_547 = -1;
	iLocal_554 = -1;
	iLocal_572 = joaat("prop_till_01");
	iLocal_573 = unk_0xF2DB717A73826179(Global_262145.f_2401);
	iLocal_574 = unk_0xF2DB717A73826179(Global_262145.f_2397) + 1;
	iLocal_575 = 1;
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (!func_398(ScriptParam_0))
		{
			func_394();
		}
		if (func_393(1))
		{
			func_387(unk_0x1788E93557766241(), 0, 98816, 1);
		}
	}
	while (true)
	{
		func_386();
		if (func_376())
		{
			func_394();
		}
		if (!func_375(unk_0x1788E93557766241(), 1, 1))
		{
			iVar0 = 1;
			if (unk_0x889D01384B54BCE3(iLocal_535, 20))
			{
				iVar1 = unk_0xDBED60E4A98E4A0B(-1);
				iVar2 = 0;
				unk_0xD0E2BFCE93AE3ABD(&iVar2, 8);
				unk_0xD0E2BFCE93AE3ABD(&iVar2, 4);
				unk_0xD0E2BFCE93AE3ABD(&iVar2, 1);
				if (iLocal_799 > Global_262145.f_148)
				{
					iLocal_799 = Global_262145.f_148;
				}
				if (iVar1 < iLocal_799)
				{
					if (iVar1 > 0)
					{
						if (func_373(func_374(1)))
						{
							if (!unk_0x889D01384B54BCE3(Global_2446992.f_7, 1))
							{
								if (func_372())
								{
									if (unk_0x76BFB8549D380054(iVar1, 0, 0, 0, &uVar3, -1))
									{
										Global_2446992.f_4530 = iVar1;
										Global_2446992.f_4531 = iVar2;
										Global_2446992.f_4532 = { unk_0xC4C1971ABDF23486(unk_0xA16EC202D9D35357(), 1067030938, 1069547520) };
										func_369(&(Global_2446992.f_4529), -1135378931, 537254313, 1474183246, 1022400740, Global_2446992.f_4530, 1, 3);
										unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_7), 1);
										iLocal_799 = 0;
									}
								}
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
				}
				else if (iLocal_799 > 0)
				{
					if (func_373(func_374(1)))
					{
						if (!unk_0x889D01384B54BCE3(Global_2446992.f_7, 1))
						{
							if (func_372())
							{
								if (unk_0x76BFB8549D380054(iLocal_799, 0, 0, 0, &uVar3, -1))
								{
									Global_2446992.f_4530 = iLocal_799;
									Global_2446992.f_4531 = iVar2;
									Global_2446992.f_4532 = { unk_0xC4C1971ABDF23486(unk_0xA16EC202D9D35357(), 1067030938, 1069547520) };
									func_369(&(Global_2446992.f_4529), -1135378931, 537254313, 1474183246, 1022400740, Global_2446992.f_4530, 1, 3);
									unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_7), 1);
									iLocal_799 = 0;
								}
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			if (iVar0 == 1)
			{
				func_394();
			}
			else
			{
				return;
			}
		}
		if (unk_0x889D01384B54BCE3(Local_141.f_12, 6))
		{
			if (func_393(1))
			{
				func_387(unk_0x1788E93557766241(), 1, 0, 1);
				func_366();
				func_365();
			}
		}
		switch (func_364(unk_0x044A481E863E2F6B()))
		{
			case 0:
				unk_0x3D28909AF30D70F4("mp_am_hold_up");
				if (unk_0x6C47E32491756A1A("mp_am_hold_up"))
				{
					if (func_354())
					{
						unk_0x52964052BC489DDD(func_353(Local_90.f_0), 0);
						if (unk_0x86CB59A6776A7C27(Local_141.f_1))
						{
							if (func_352() > 0)
							{
								if (!func_351(Local_141.f_1))
								{
									func_350(&uLocal_604, 3, unk_0x7A16A8A755F44481(Local_141.f_1), &(Local_141.f_38), 1, 0);
									func_349();
								}
								unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 22);
								Local_214[unk_0x044A481E863E2F6B() /*10*/] = 2;
							}
						}
					}
				}
				if (func_352() == 6)
				{
					Local_214[unk_0x044A481E863E2F6B() /*10*/] = 5;
				}
				break;
			
			case 2:
				func_227();
				func_219();
				if (func_352() == 2)
				{
					func_123();
				}
				else if (func_352() == 6)
				{
					Local_214[unk_0x044A481E863E2F6B() /*10*/] = 5;
				}
				if (!unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_587, 30f, 30f, 30f, 0, 1, 0))
				{
					Local_214[unk_0x044A481E863E2F6B() /*10*/] = 6;
				}
				break;
			
			case 5:
				func_122(&(Local_141.f_61));
				if (func_121(&(Local_141.f_61)))
				{
					Local_214[unk_0x044A481E863E2F6B() /*10*/] = 6;
				}
				break;
			
			case 4:
				Local_214[unk_0x044A481E863E2F6B() /*10*/] = 6;
			
			case 6:
				func_48();
				func_394();
				break;
		}
		if (unk_0xE9849174628A9C50())
		{
			switch (func_352())
			{
				case 0:
					if (!unk_0x889D01384B54BCE3(iLocal_535, 16))
					{
						func_373(func_374(0));
						func_373(func_374(1));
						func_373(func_374(2));
						unk_0x3D28909AF30D70F4("mp_am_hold_up");
						if (unk_0x6C47E32491756A1A("mp_am_hold_up"))
						{
							if (func_354())
							{
								unk_0x84710FE7666EBF7B(Local_548, 1.5f, 0, 1, 0, 1);
								unk_0x84710FE7666EBF7B(Local_543, 1.5f, 0, 1, 0, 1);
								unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 16);
							}
						}
					}
					else if (func_46())
					{
						Local_141.f_0 = 2;
					}
					break;
				
				case 2:
					func_45();
					func_43();
					func_28();
					func_27();
					func_20();
					func_19();
					func_11();
					func_10();
					if (func_4())
					{
						func_1();
						Local_141.f_0 = 6;
					}
					break;
				
				case 6:
					func_1();
					break;
				}
		}
	}
}

void func_1()
{
	if (unk_0x86CB59A6776A7C27(Local_141.f_2))
	{
		if (func_3(Local_141.f_2))
		{
			if (unk_0x5A6F774C8E17AA21(unk_0x9198B14217D71938(Local_141.f_2)))
			{
				unk_0xBF1AB1205B822518(unk_0x9198B14217D71938(Local_141.f_2), 1, 1);
				func_2(&(Local_141.f_2));
			}
		}
	}
}

void func_2(var uParam0)
{
	var uVar0;
	
	if (unk_0xCB5D8B19B62A3B89(*uParam0))
	{
		uVar0 = unk_0xD65CB1FBC5B5BA6A(*uParam0);
		unk_0x5317ED1B1D4BC2F3(&uVar0);
	}
}

int func_3(var uParam0)
{
	if (unk_0x86CB59A6776A7C27(uParam0))
	{
		unk_0x9B863F3140F59B7F(uParam0);
		return unk_0x428E17610BCE75C2(uParam0);
	}
	return 0;
}

int func_4()
{
	if (func_5())
	{
		return 1;
	}
	return 0;
}

int func_5()
{
	if (unk_0x889D01384B54BCE3(Local_141.f_12, 2))
	{
		return 1;
	}
	if (unk_0x889D01384B54BCE3(Local_141.f_12, 3))
	{
		return 1;
	}
	if (!func_9())
	{
		if ((unk_0x889D01384B54BCE3(Local_141.f_12, 11) || unk_0x889D01384B54BCE3(Local_141.f_12, 19)) || (unk_0x889D01384B54BCE3(Local_141.f_12, 9) && !unk_0x889D01384B54BCE3(Local_141.f_12, 20)))
		{
			func_6(iLocal_769, 1, func_7());
			return 1;
		}
		if (unk_0x889D01384B54BCE3(Local_141.f_12, 18))
		{
			func_6(iLocal_769, 1, func_7());
			return 1;
		}
	}
	if (unk_0x889D01384B54BCE3(Local_141.f_12, 18))
	{
		if (!unk_0x889D01384B54BCE3(Local_141.f_13, 7))
		{
			func_6(iLocal_769, 1, func_7());
			unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 7);
		}
	}
	return 0;
}

void func_6(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 21;
	Var0.f_1 = unk_0x1788E93557766241();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0xD311A006D41D0704(1, &Var0, 4, iParam2);
	}
}

int func_7()
{
	return func_8(unk_0xE7CD1A45CD3148E7("freemode", -1, 0));
}

int func_8(int iParam0)
{
	var uVar0;
	
	unk_0xD0E2BFCE93AE3ABD(&uVar0, iParam0);
	return uVar0;
}

int func_9()
{
	if ((unk_0x889D01384B54BCE3(Local_141.f_12, 13) || unk_0x889D01384B54BCE3(Local_141.f_12, 27)) || unk_0x889D01384B54BCE3(Local_141.f_12, 28))
	{
		return 1;
	}
	return 0;
}

void func_10()
{
	var uVar0;
	
	if (!unk_0x889D01384B54BCE3(Local_141.f_12, 21))
	{
		if (func_351(Local_141.f_1))
		{
			Local_141.f_72 = unk_0xAFED5B0023CB8973(Local_141.f_1, &uVar0);
			unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 21);
		}
	}
	if (!unk_0x889D01384B54BCE3(Local_141.f_12, 19))
	{
		if (unk_0x889D01384B54BCE3(Local_141.f_12, 10) && Local_141.f_28 <= 0f)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 19);
		}
	}
	if (!unk_0x889D01384B54BCE3(Local_141.f_13, 17))
	{
		if (unk_0x889D01384B54BCE3(Local_141.f_12, 20))
		{
			if (func_3(Local_141.f_2))
			{
				unk_0xAA427204912D494B(unk_0x9198B14217D71938(Local_141.f_2), 0, 0);
				unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 17);
			}
		}
	}
	if (!unk_0x889D01384B54BCE3(Local_141.f_12, 6))
	{
		if (Global_2446992.f_8 == 1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 6);
			unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 16);
		}
	}
}

int func_11()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE9849174628A9C50() || !unk_0x889D01384B54BCE3(Local_141.f_14, 0))
	{
		return 0;
	}
	if (Local_141.f_58 != 6)
	{
		if (Local_141.f_58 > 0 && func_351(Local_141.f_4))
		{
			Local_141.f_58 = 6;
			return 0;
		}
		switch (Local_141.f_58)
		{
			case 0:
				if (!func_17(&uLocal_795, 10000, 0))
				{
					iVar0 = unk_0xEC27C6D0F632B6E1(Local_597, 20f, 20f, 20f, -1);
					if (!unk_0x2DE0B96E966FD817(iVar0))
					{
						if (!unk_0x22349EC06EA5B08B(iVar0))
						{
							iVar1 = unk_0xA609E58449080951(iVar0);
							if (((((((iVar1 != joaat("mp_m_freemode_01") && iVar1 != joaat("mp_f_freemode_01")) && !unk_0xCA34E4192F6CE2E9(Local_597, 25f, 25f, 25f)) && !unk_0x965556ACF6A83973(iVar0, Local_584, 1f, 1f, 2f, 0, 1, 0)) && !unk_0x14766EFE923CD38F(iVar0, 7)) && !unk_0x202EF5D8203705EF(iVar0, 1)) && unk_0x5A51A300C591798F(iVar0)) && func_16(iVar1))
							{
								unk_0x698EFBBF4B5A5922(iVar0);
								if (unk_0xC7402AE8FD6AACA2(iVar0))
								{
									if (func_15(&(Local_141.f_4), iVar0, 1, 0))
									{
										unk_0x37BEBD1D516179CF(unk_0x7A16A8A755F44481(Local_141.f_4), joaat("weapon_pistol"), 25000, 0);
										unk_0x2686393074E14730(unk_0x7A16A8A755F44481(Local_141.f_4), 1);
										Local_141.f_58 = 1;
										unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_14), 1);
										unk_0xA9465591B42213AE(unk_0x7A16A8A755F44481(Local_141.f_4), Global_1574085);
										unk_0x59FF47176A212235(unk_0x7A16A8A755F44481(Local_141.f_4), 2);
										unk_0x4C31C3561F937348(unk_0x7A16A8A755F44481(Local_141.f_4), unk_0xF2DB717A73826179((200f * Global_262145.f_138)));
										func_350(&uLocal_604, 4, unk_0x7A16A8A755F44481(Local_141.f_4), "StoreHero", 1, 0);
										unk_0x1DCF0D2934DBC782(unk_0x7A16A8A755F44481(Local_141.f_4), func_14(), 0, 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((unk_0x889D01384B54BCE3(Local_141.f_12, 9) || unk_0x889D01384B54BCE3(Local_141.f_12, 5)) || unk_0x889D01384B54BCE3(Local_141.f_12, 4))
				{
					Local_141.f_58 = 2;
				}
				break;
			
			case 2:
				if (func_17(&(Local_141.f_59), 3000, 0) || (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_4), 1227113341) != 0 && unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_4), 1227113341) != 1))
				{
					func_13(&(Local_141.f_59));
					Local_141.f_58 = 3;
				}
				break;
			
			case 3:
				if (((unk_0x889D01384B54BCE3(Local_141.f_12, 5) || unk_0x889D01384B54BCE3(Local_141.f_14, 8)) || unk_0x889D01384B54BCE3(Local_141.f_14, 9)) || func_17(&(Local_141.f_59), 5000, 0))
				{
					if (func_12() || func_17(&(Local_141.f_59), 5000, 0))
					{
						Local_141.f_58 = 4;
					}
					else
					{
						Local_141.f_58 = 5;
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
			}
	}
	return 1;
}

int func_12()
{
	if (unk_0x889D01384B54BCE3(unk_0x444ECD635D5FD45F(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_13(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_14()
{
	int iVar0;
	
	iVar0 = unk_0x444ECD635D5FD45F(0, 100);
	if (iVar0 < 30)
	{
		return "WORLD_HUMAN_SMOKING";
	}
	if (iVar0 >= 30 && iVar0 < 70)
	{
		return "WORLD_HUMAN_HANG_OUT_STREET";
	}
	return "WORLD_HUMAN_STAND_MOBILE";
}

int func_15(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	unk_0x7B9576B4E099FB1F(iParam1, bParam2, iParam3);
	*uParam0 = unk_0x6B69482441007159(iParam1);
	if (unk_0x86CB59A6776A7C27(*uParam0))
	{
		if (bParam2)
		{
			unk_0x59262222326E6883(*uParam0, 1);
		}
		return 1;
	}
	return 0;
}

int func_16(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_17(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
	if (unk_0x1DAD7CE53BEE7710() && !bParam2)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x09560C7DE2A384BD(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1DAD7CE53BEE7710() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x519586565311459B();
			}
			else
			{
				*uParam0 = unk_0x4EAB1171B13C220B();
			}
		}
		else
		{
			*uParam0 = unk_0x09560C7DE2A384BD();
		}
		uParam0->f_1 = 1;
	}
}

void func_19()
{
	if (Local_141.f_21 == 0)
	{
		if (Local_141.f_36 >= 2 && Local_141.f_36 != 9)
		{
			Local_141.f_21 = unk_0xDCB0C424697309E0(99, unk_0xA16EC202D9D35357(), 60000f);
		}
	}
}

void func_20()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0x889D01384B54BCE3(Local_141.f_15, 5))
	{
		if (Local_141.f_32 > 0)
		{
			func_24();
			if (!unk_0x889D01384B54BCE3(Local_141.f_15, 5))
			{
				return;
			}
		}
	}
	if (unk_0x889D01384B54BCE3(Local_141.f_15, 1))
	{
		if (Local_141.f_18 == 3 && !unk_0x889D01384B54BCE3(Local_141.f_12, 9))
		{
			Local_141.f_18 = 0;
		}
		unk_0x29DB79DD4D939B38(&(Local_141.f_15), 1);
	}
	switch (Local_141.f_18)
	{
		case 0:
			if ((((func_3(Local_141.f_1) && !func_351(Local_141.f_1)) && func_3(Local_141.f_5[Local_141.f_16])) && Local_141.f_36 != 8) && Local_141.f_36 != 7)
			{
				if (!unk_0xEAABEAE1DB589285(unk_0x7A16A8A755F44481(Local_141.f_1)))
				{
					if (unk_0x889D01384B54BCE3(Local_141.f_12, 9) || unk_0x889D01384B54BCE3(Local_141.f_15, 4))
					{
						Local_141.f_18 = 2;
						return;
					}
					if (!iLocal_537)
					{
						unk_0x4341FCA05D2E4938(unk_0x7A16A8A755F44481(Local_141.f_1), Local_141.f_33, 1600);
						iLocal_537 = 1;
					}
					if (func_17(&uLocal_785, 100, 0))
					{
						fVar0 = unk_0xD1613577C809E98B(unk_0x7A16A8A755F44481(Local_141.f_1));
						fVar1 = (Local_141.f_33 - 10f);
						fVar2 = (Local_141.f_33 + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_141.f_33 - 10f) + 360f);
							fVar1 = ((Local_141.f_33 + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_141.f_33 - 10f) - 360f);
							fVar1 = ((Local_141.f_33 + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_17(&uLocal_791, 1000, 0)) || func_17(&uLocal_791, 3125, 0))
						{
							unk_0x2A6FA367FED380C2(unk_0x7A16A8A755F44481(Local_141.f_1));
							Local_141.f_17 = unk_0x97E5C7FD3DF5E1C1(unk_0xA783C6007920169C(unk_0x7A16A8A755F44481(Local_141.f_1), -0.65f, 0.87f, -0.02f), Local_551, 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0xFF4E41243D8E887E(unk_0x7A16A8A755F44481(Local_141.f_1), Local_141.f_17, "mp_am_hold_up", func_23(Local_141.f_16), 1.5f, -1.5f, 157, 16, 1148846080, 0);
							if (unk_0x86CB59A6776A7C27(Local_141.f_5[Local_141.f_16]))
							{
								unk_0x423D1EBE54B18555(unk_0x9198B14217D71938(Local_141.f_5[Local_141.f_16]), true);
								unk_0x910B9EFD3AB4F289(unk_0x9198B14217D71938(Local_141.f_5[Local_141.f_16]), Local_141.f_17, "mp_am_hold_up", func_22(Local_141.f_16), 4f, -4f, 8);
							}
							unk_0x25D89B81B1B26B77(Local_141.f_17);
							Local_141.f_18 = 1;
							iLocal_554 = unk_0xC49FDF2081B5FE27(Local_141.f_17);
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0x889D01384B54BCE3(Local_141.f_12, 9) || unk_0x889D01384B54BCE3(Local_141.f_15, 4))
			{
				iLocal_554 = unk_0xC49FDF2081B5FE27(Local_141.f_17);
				if (unk_0xCFC5CE3AD496DA0B(iLocal_554))
				{
					unk_0x0EE6047392209805(Local_141.f_17);
				}
				Local_141.f_18 = 2;
				return;
			}
			if (iLocal_554 >= 0)
			{
				if (unk_0xCFC5CE3AD496DA0B(iLocal_554) || func_17(&uLocal_787, 2000, 0))
				{
					if ((unk_0xCFC5CE3AD496DA0B(iLocal_554) && unk_0x0DF89B3B1CF0FDC1(iLocal_554) == 1f) || func_17(&uLocal_787, 2000, 0))
					{
						if ((func_3(Local_141.f_1) && !func_351(Local_141.f_1)) && !unk_0x889D01384B54BCE3(Local_141.f_12, 9))
						{
							unk_0x937785D9C1929236(unk_0x7A16A8A755F44481(Local_141.f_1));
						}
						unk_0x0EE6047392209805(Local_141.f_17);
						Local_141.f_18 = 2;
					}
				}
			}
			else
			{
				iLocal_554 = unk_0xC49FDF2081B5FE27(Local_141.f_17);
			}
			break;
		
		case 2:
			func_3(Local_141.f_5[Local_141.f_16]);
			if (func_17(&uLocal_793, 1000, 0) && func_3(Local_141.f_5[Local_141.f_16]))
			{
				if (unk_0x538DF9E5B1DF01EB(unk_0x9198B14217D71938(Local_141.f_5[Local_141.f_16])))
				{
					unk_0x423D1EBE54B18555(unk_0x9198B14217D71938(Local_141.f_5[Local_141.f_16]), false);
					unk_0x3CC3106305C40A28(unk_0x9198B14217D71938(Local_141.f_5[Local_141.f_16]), true);
					unk_0x6C43BF7625967266(unk_0x9198B14217D71938(Local_141.f_5[Local_141.f_16]), func_21(Local_141.f_16), 1, 0, 0, 1);
				}
				iLocal_554 = -1;
				iLocal_537 = 0;
				if (unk_0x889D01384B54BCE3(Local_141.f_15, 4))
				{
					unk_0x29DB79DD4D939B38(&(Local_141.f_15), 4);
				}
				func_13(&uLocal_793);
				func_13(&uLocal_787);
				func_13(&uLocal_785);
				func_13(&uLocal_791);
				Local_141.f_18 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_21(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return Local_568 - Vector(1f, 0.2f, 0.1f);
		
		case 1:
			return Local_568 - Vector(1f, 0.2f, 0f);
		
		case 2:
			return Local_568 - Vector(1f, 0.2f, -0.1f);
		
		case 4:
			return Local_568 - Vector(1f, -0.2f, 0.1f);
		
		case 0:
			return Local_568 - Vector(1f, -0.2f, 0f);
		
		case 5:
			return Local_568 - Vector(1f, -0.2f, -0.1f);
		
		default:
	}
	return Local_568 - Vector(1f, 0f, -0.1f);
}

char* func_22(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar";
		
		case 1:
			return "purchase_chocbar";
		
		case 2:
			return "purchase_chocbar";
		
		case 4:
			return "purchase_cigarette";
		
		case 0:
			return "purchase_beer";
		
		case 5:
			return "purchase_energydrink";
		
		default:
	}
	return "purchase_energydrink";
}

char* func_23(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar_shopkeeper";
		
		case 1:
			return "purchase_chocbar_shopkeeper";
		
		case 2:
			return "purchase_chocbar_shopkeeper";
		
		case 4:
			return "purchase_cigarette_shopkeeper";
		
		case 0:
			return "purchase_beer_shopkeeper";
		
		case 5:
			return "purchase_energydrink_shopkeeper";
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_24()
{
	if (((((!unk_0x86CB59A6776A7C27(Local_141.f_5[3]) || !unk_0x86CB59A6776A7C27(Local_141.f_5[1])) || !unk_0x86CB59A6776A7C27(Local_141.f_5[2])) || !unk_0x86CB59A6776A7C27(Local_141.f_5[4])) || !unk_0x86CB59A6776A7C27(Local_141.f_5[0])) || !unk_0x86CB59A6776A7C27(Local_141.f_5[5]))
	{
		if (((((func_373(func_26(3)) && func_373(func_26(1))) && func_373(func_26(2))) && func_373(func_26(4))) && func_373(func_26(0))) && func_373(func_26(5)))
		{
			if (unk_0xA4D22CD12FD67154(0, 0, 6, 0))
			{
				if (!unk_0x86CB59A6776A7C27(Local_141.f_5[3]))
				{
					if (func_25(&(Local_141.f_5[3]), func_26(3), func_21(3), 1, 1, 0, 1))
					{
						unk_0xDB49D536A87723F7(unk_0x9198B14217D71938(Local_141.f_5[3]), unk_0xE60DDD7D0864392E(Local_540));
						unk_0x3CC3106305C40A28(unk_0x9198B14217D71938(Local_141.f_5[3]), true);
						unk_0x423D1EBE54B18555(unk_0x9198B14217D71938(Local_141.f_5[3]), false);
					}
				}
				if (!unk_0x86CB59A6776A7C27(Local_141.f_5[1]))
				{
					if (func_25(&(Local_141.f_5[1]), func_26(1), func_21(1), 1, 1, 0, 1))
					{
						unk_0xDB49D536A87723F7(unk_0x9198B14217D71938(Local_141.f_5[1]), unk_0xE60DDD7D0864392E(Local_540));
						unk_0x3CC3106305C40A28(unk_0x9198B14217D71938(Local_141.f_5[1]), true);
						unk_0x423D1EBE54B18555(unk_0x9198B14217D71938(Local_141.f_5[1]), false);
					}
				}
				if (!unk_0x86CB59A6776A7C27(Local_141.f_5[2]))
				{
					if (func_25(&(Local_141.f_5[2]), func_26(2), func_21(2), 1, 1, 0, 1))
					{
						unk_0xDB49D536A87723F7(unk_0x9198B14217D71938(Local_141.f_5[2]), unk_0xE60DDD7D0864392E(Local_540));
						unk_0x3CC3106305C40A28(unk_0x9198B14217D71938(Local_141.f_5[2]), true);
						unk_0x423D1EBE54B18555(unk_0x9198B14217D71938(Local_141.f_5[2]), false);
					}
				}
				if (!unk_0x86CB59A6776A7C27(Local_141.f_5[4]))
				{
					if (func_25(&(Local_141.f_5[4]), func_26(4), func_21(4), 1, 1, 0, 1))
					{
						unk_0xDB49D536A87723F7(unk_0x9198B14217D71938(Local_141.f_5[4]), unk_0xE60DDD7D0864392E(Local_540));
						unk_0x3CC3106305C40A28(unk_0x9198B14217D71938(Local_141.f_5[4]), true);
						unk_0x423D1EBE54B18555(unk_0x9198B14217D71938(Local_141.f_5[4]), false);
					}
				}
				if (!unk_0x86CB59A6776A7C27(Local_141.f_5[0]))
				{
					if (func_25(&(Local_141.f_5[0]), func_26(0), func_21(0), 1, 1, 0, 1))
					{
						unk_0xDB49D536A87723F7(unk_0x9198B14217D71938(Local_141.f_5[0]), unk_0xE60DDD7D0864392E(Local_540));
						unk_0x3CC3106305C40A28(unk_0x9198B14217D71938(Local_141.f_5[0]), true);
						unk_0x423D1EBE54B18555(unk_0x9198B14217D71938(Local_141.f_5[0]), false);
					}
				}
				if (!unk_0x86CB59A6776A7C27(Local_141.f_5[5]))
				{
					if (func_25(&(Local_141.f_5[5]), func_26(5), func_21(5), 1, 1, 0, 1))
					{
						unk_0xDB49D536A87723F7(unk_0x9198B14217D71938(Local_141.f_5[5]), unk_0xE60DDD7D0864392E(Local_540));
						unk_0x3CC3106305C40A28(unk_0x9198B14217D71938(Local_141.f_5[5]), true);
						unk_0x423D1EBE54B18555(unk_0x9198B14217D71938(Local_141.f_5[5]), false);
					}
				}
			}
		}
	}
	else
	{
		unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_15), 5);
		return 1;
	}
	return 0;
}

int func_25(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8)
{
	if (!unk_0x39858297C572C247(1))
	{
		return 0;
	}
	*uParam0 = unk_0x9727CDE11D5BFC89(unk_0x8AC4394F3C9173EE(iParam1, Param2, iParam6, bParam5, iParam7));
	if (unk_0x86CB59A6776A7C27(*uParam0))
	{
		unk_0x940C6B8BF42B190B(unk_0x9198B14217D71938(*uParam0), iParam8);
		if (unk_0xF5F2A2EAFEFB36D2(unk_0x9198B14217D71938(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x59262222326E6883(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		case 4:
			return joaat("prop_ld_fags_01");
		
		case 0:
			return joaat("prop_ecola_can");
		
		case 5:
			return joaat("prop_amb_beer_bottle");
		
		default:
	}
	return joaat("prop_choc_pq");
}

void func_27()
{
	float fVar0;
	
	if (!unk_0x889D01384B54BCE3(Local_141.f_12, 9))
	{
		if (Global_2446992.f_8 == 1 || unk_0x889D01384B54BCE3(Local_141.f_12, 6))
		{
			if ((((func_3(Local_141.f_2) && func_3(Local_141.f_1)) && !func_351(Local_141.f_1)) && Local_141.f_36 != 8) && Local_141.f_36 != 7)
			{
				if (!unk_0xEAABEAE1DB589285(unk_0x7A16A8A755F44481(Local_141.f_1)))
				{
					if (!unk_0x889D01384B54BCE3(iLocal_535, 30))
					{
						unk_0x4341FCA05D2E4938(unk_0x7A16A8A755F44481(Local_141.f_1), Local_141.f_33, 1600);
						unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 30);
					}
					if (func_17(&uLocal_783, 100, 0))
					{
						fVar0 = unk_0xD1613577C809E98B(unk_0x7A16A8A755F44481(Local_141.f_1));
						if ((fVar0 > (Local_141.f_33 - 20f) && fVar0 < (Local_141.f_33 + 20f)) || func_17(&uLocal_789, 1500, 0))
						{
							unk_0x2A6FA367FED380C2(unk_0x7A16A8A755F44481(Local_141.f_1));
							Local_141.f_20 = unk_0x97E5C7FD3DF5E1C1(Local_548, Local_551, 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0xFF4E41243D8E887E(unk_0x7A16A8A755F44481(Local_141.f_1), Local_141.f_20, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 157, 16, 1148846080, 0);
							if (unk_0x86CB59A6776A7C27(Local_141.f_2))
							{
								unk_0x3CC3106305C40A28(unk_0x9198B14217D71938(Local_141.f_2), false);
								unk_0xC3C39B8BA6AC5807(unk_0x9198B14217D71938(Local_141.f_2), 1);
								unk_0x910B9EFD3AB4F289(unk_0x9198B14217D71938(Local_141.f_2), Local_141.f_20, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (unk_0x86CB59A6776A7C27(Local_141.f_3))
							{
								unk_0x910B9EFD3AB4F289(unk_0x9198B14217D71938(Local_141.f_3), Local_141.f_20, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							unk_0x25D89B81B1B26B77(Local_141.f_20);
							unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 9);
						}
					}
				}
				else
				{
					Local_141.f_36 = 8;
				}
			}
		}
	}
	else if (!unk_0x889D01384B54BCE3(Local_141.f_12, 17))
	{
		iLocal_547 = unk_0xC49FDF2081B5FE27(Local_141.f_20);
		if (iLocal_547 >= 0)
		{
			func_3(Local_141.f_1);
			if (unk_0xCFC5CE3AD496DA0B(iLocal_547))
			{
				unk_0xE05354E13FB48159(unk_0xA16EC202D9D35357(), 0, -1, 0);
				unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 17);
			}
		}
	}
	else if (!unk_0x889D01384B54BCE3(Local_141.f_13, 15))
	{
		iLocal_547 = unk_0xC49FDF2081B5FE27(Local_141.f_20);
		if (iLocal_547 >= 0)
		{
			if (unk_0xCFC5CE3AD496DA0B(iLocal_547))
			{
				func_3(Local_141.f_1);
				if ((unk_0x86CB59A6776A7C27(Local_141.f_2) && func_3(Local_141.f_2)) && func_3(Local_141.f_1))
				{
					if (unk_0x0DF89B3B1CF0FDC1(iLocal_547) > 0.44f)
					{
						unk_0x423D1EBE54B18555(unk_0x9198B14217D71938(Local_141.f_2), true);
						unk_0x6A23C3306A8CF21B(unk_0x9198B14217D71938(Local_141.f_2), true, 0);
						unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 15);
					}
				}
			}
		}
	}
}

int func_28()
{
	int iVar0;
	float fVar1;
	
	if (!unk_0xE9849174628A9C50())
	{
		return 0;
	}
	func_41();
	if (Local_141.f_36 != 9)
	{
		if (func_351(Local_141.f_1))
		{
			Local_141.f_36 = 9;
			return 0;
		}
		if ((unk_0x889D01384B54BCE3(Local_141.f_12, 6) && !unk_0x889D01384B54BCE3(Local_141.f_12, 9)) && Local_141.f_36 < 8)
		{
			if (!unk_0x86CB59A6776A7C27(Local_141.f_2) || !unk_0x86CB59A6776A7C27(Local_141.f_3))
			{
				Local_141.f_36 = 8;
			}
		}
		switch (Local_141.f_36)
		{
			case 0:
				if (!func_351(Local_141.f_1))
				{
					Local_141.f_36 = 1;
				}
				break;
			
			case 1:
				if (unk_0x889D01384B54BCE3(Local_141.f_12, 4))
				{
					Local_141.f_36 = 2;
				}
				else if (unk_0x889D01384B54BCE3(Local_141.f_12, 6) || unk_0x889D01384B54BCE3(Local_141.f_12, 9))
				{
					Local_141.f_36 = 4;
				}
				else if (func_39() || func_33(0))
				{
					Local_141.f_36 = 8;
				}
				else if (func_31())
				{
					Local_141.f_36 = 7;
				}
				break;
			
			case 2:
				if (unk_0x889D01384B54BCE3(Local_141.f_12, 6) || unk_0x889D01384B54BCE3(Local_141.f_12, 9))
				{
					Local_141.f_36 = 4;
				}
				else if (func_39() || func_33(1))
				{
					Local_141.f_36 = 8;
				}
				else if (func_31())
				{
					Local_141.f_36 = 7;
				}
				break;
			
			case 3:
				if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_1), 1920390111) != 0 && unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_1), 1920390111) != 1)
				{
					Local_141.f_36 = 4;
				}
				else if (func_33(1))
				{
					Local_141.f_36 = 8;
				}
				else if (func_31())
				{
					Local_141.f_36 = 7;
				}
				break;
			
			case 4:
				if (unk_0x889D01384B54BCE3(Local_141.f_12, 17))
				{
					iVar0 = 0;
					iLocal_547 = unk_0xC49FDF2081B5FE27(Local_141.f_20);
					if (iLocal_547 >= 0)
					{
						if (unk_0xCFC5CE3AD496DA0B(iLocal_547))
						{
							if (unk_0xF6BC67E137183D3F(Local_540, 3f, 0))
							{
								if (!unk_0x889D01384B54BCE3(Local_141.f_12, 25))
								{
									unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 25);
								}
								Local_141.f_24 = (Local_141.f_24 + 0.35f);
							}
							fVar1 = unk_0x0DF89B3B1CF0FDC1(iLocal_547);
							if (fVar1 >= 0.8f)
							{
								Local_141.f_28 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_141.f_28 = 0f;
							}
							else if (fVar1 > Local_141.f_28)
							{
								Local_141.f_28 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_141.f_28 = 1f;
								iVar0 = 1;
							}
						}
						else
						{
							iVar0 = 1;
						}
					}
					else
					{
						iVar0 = 1;
					}
					if (iVar0 == 1)
					{
						Local_141.f_36 = 6;
					}
					else if (func_33(1))
					{
						Local_141.f_36 = 8;
					}
					else if (func_31())
					{
						Local_141.f_36 = 7;
					}
				}
				break;
			
			case 5:
				if (func_39() || func_33(1))
				{
					Local_141.f_36 = 8;
				}
				break;
			
			case 6:
				func_29();
				if (func_39() || func_33(1))
				{
					Local_141.f_36 = 8;
				}
				else if (func_31())
				{
					Local_141.f_36 = 7;
				}
				else if (unk_0x889D01384B54BCE3(Local_141.f_13, 3))
				{
					if (!unk_0x889D01384B54BCE3(Local_141.f_13, 4))
					{
						Local_141.f_36 = 7;
					}
				}
				break;
			
			case 8:
				func_29();
				break;
			
			case 7:
				break;
		}
	}
	else if (!unk_0x889D01384B54BCE3(Local_141.f_13, 10))
	{
		if (!unk_0x86CB59A6776A7C27(Local_141.f_1))
		{
			Local_141.f_34 = (Local_141.f_34 - 1);
			unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 10);
		}
	}
	return 1;
}

void func_29()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x889D01384B54BCE3(Local_141.f_13, 2))
	{
		iVar0 = unk_0x444ECD635D5FD45F(0, 10);
		iVar1 = (iLocal_575 + func_30());
		if (iVar0 < iVar1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 3);
		}
		unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 2);
	}
}

int func_30()
{
	int iVar0;
	
	iVar0 = (Global_2414327[unk_0x1788E93557766241() /*255*/].f_46 - 1);
	if (iVar0 >= 4)
	{
		return 4;
	}
	return iVar0;
}

int func_31()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1453F50088A91E4E(0, 24) || unk_0x1453F50088A91E4E(0, 257))
	{
		iVar0 = func_32(unk_0xA16EC202D9D35357());
		if ((((((iVar0 != joaat("weapon_unarmed") && iVar0 != 0) && iVar0 != joaat("vehicle_weapon_player_bullet")) && iVar0 != joaat("vehicle_weapon_player_buzzard")) && iVar0 != joaat("vehicle_weapon_player_laser")) && iVar0 != joaat("vehicle_weapon_tank")) && iVar0 != joaat("weapon_flare"))
		{
			iVar1 = unk_0xAE9742BDAD6152B0(iVar0);
			if (((((((unk_0x79B5F1E7D14FF5B0(unk_0xA16EC202D9D35357(), iVar0) == 0 && iVar1 != joaat("GROUP_MELEE")) && iVar1 != 507375312) && iVar1 != 0) && iVar1 != joaat("GROUP_FIREEXTINGUISHER")) && iVar1 != -801780072) && iVar1 != 431593103) && iVar1 != -755518101)
			{
				if (unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == iLocal_580)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_32(int iParam0)
{
	var uVar0;
	
	unk_0xC00D643B16552C4D(iParam0, &uVar0, 1);
	return uVar0;
}

int func_33(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar11;
	int iVar12;
	
	if (func_37(unk_0x1788E93557766241(), 146))
	{
		return 1;
	}
	if (unk_0x889D01384B54BCE3(Local_141.f_12, 5))
	{
		return 1;
	}
	if (unk_0xEAABEAE1DB589285(unk_0x7A16A8A755F44481(Local_141.f_1)))
	{
		return 1;
	}
	if (func_36() || func_35())
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x2C15B7979450724C(1))
	{
		if (unk_0x8B6CEAB2AD1BD1CD(1, iVar0) == 179)
		{
			if (unk_0x6A4B863200ABAA44(1, iVar0, &Var1, 10))
			{
				if (unk_0x538DF9E5B1DF01EB(Var1.f_0) && unk_0xA34B85701D8A1FA8(Var1.f_0))
				{
					iVar11 = unk_0xA7CC89FF539E1376(Var1.f_0);
					if (unk_0x2DE0B96E966FD817(iVar11) && unk_0x05681B6F593F0A9C(iVar11) == iLocal_580)
					{
						if (unk_0x538DF9E5B1DF01EB(Var1.f_1) && unk_0xA34B85701D8A1FA8(Var1.f_1))
						{
							iVar12 = unk_0xA7CC89FF539E1376(Var1.f_1);
							if (iVar12 != unk_0x7A16A8A755F44481(Local_141.f_1))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (!unk_0x889D01384B54BCE3(Local_141.f_13, 5))
		{
			if (unk_0xCA34E4192F6CE2E9(Local_590 - Vector(25f, 25f, 25f), Local_590 + Vector(25f, 25f, 25f)))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 5);
			}
		}
	}
	return 0;
}

int func_34()
{
	if (iLocal_769 >= 15 && iLocal_769 <= 19)
	{
		if (unk_0x8C42D51DE272AC72(9, Local_590, 40f))
		{
			return 1;
		}
	}
	if (unk_0x3B7A29964E53B0C7(-1, Local_590, Local_593, uLocal_596))
	{
		return 1;
	}
	if (unk_0x3B7A29964E53B0C7(-1, Local_597, Local_600, uLocal_603))
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	if ((unk_0xAC9FBE1C00C883AA(Local_597, Local_600, uLocal_603, joaat("weapon_grenade"), 0) || unk_0xAC9FBE1C00C883AA(Local_597, Local_600, uLocal_603, joaat("weapon_molotov"), 0)) || unk_0xAC9FBE1C00C883AA(Local_597, Local_600, uLocal_603, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	if ((unk_0xAC9FBE1C00C883AA(Local_590, Local_593, uLocal_596, joaat("weapon_grenade"), 0) || unk_0xAC9FBE1C00C883AA(Local_590, Local_593, uLocal_596, joaat("weapon_molotov"), 0)) || unk_0xAC9FBE1C00C883AA(Local_590, Local_593, uLocal_596, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0, int iParam1)
{
	if (Global_1602607[iParam0 /*12*/] == iParam1)
	{
		return func_38(iParam0);
	}
	return 0;
}

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_1602607[iVar0 /*12*/].f_1, 0);
	}
	return 0;
}

int func_39()
{
	if (func_40() || func_34())
	{
		return 1;
	}
	return 0;
}

int func_40()
{
	if (unk_0xDE78232605830F0D(Local_590, Local_593, uLocal_596, 0))
	{
		return 1;
	}
	if (unk_0xDE78232605830F0D(Local_597, Local_600, uLocal_603, 0))
	{
		return 1;
	}
	return 0;
}

void func_41()
{
	if (Local_141.f_24 > 0f)
	{
		if (func_42(&(Local_141.f_25), 50, 0))
		{
			Local_141.f_24 = (Local_141.f_24 - 0.02f);
			if (Local_141.f_24 < 0f)
			{
				Local_141.f_24 = 0f;
			}
			func_13(&(Local_141.f_25));
		}
	}
}

int func_42(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
	if (unk_0x1DAD7CE53BEE7710() && !bParam2)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0)) >= iParam1)
		{
			func_13(uParam0);
			return 1;
		}
	}
	else if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x09560C7DE2A384BD(), *uParam0)) >= iParam1)
	{
		func_13(uParam0);
		return 1;
	}
	return 0;
}

void func_43()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iLocal_561)))
	{
		iVar0 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iLocal_561));
		uVar1 = unk_0xFF34D923BFB5E9FB(iVar0);
		if (!unk_0x889D01384B54BCE3(Local_141.f_12, 11))
		{
			if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 5))
			{
				if (unk_0xCB5D8B19B62A3B89(Local_141.f_2))
				{
					if (func_3(Local_141.f_2))
					{
						unk_0xBF1AB1205B822518(unk_0x9198B14217D71938(Local_141.f_2), 1, 1);
						func_44(&(Local_141.f_2));
					}
				}
				else
				{
					Local_141.f_29 = { Local_214[iLocal_561 /*10*/].f_7 };
					Local_141.f_35 = 7;
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 11);
				}
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_141.f_12, 14))
		{
			if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 6))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 14);
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_141.f_12, 15))
		{
			if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 7))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 15);
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_141.f_12, 26))
		{
			if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 24))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 26);
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_141.f_12, 22))
		{
			if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 22))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 22);
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_141.f_12, 23))
		{
			if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 23))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 23);
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_141.f_12, 30))
		{
			if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 25))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 30);
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_141.f_12, 31))
		{
			if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 26))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 31);
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_141.f_13, 6))
		{
			if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 29))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 6);
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_141.f_13, 9))
		{
			if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 31))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 9);
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_141.f_15, 3))
		{
			if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_3, 3))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_15), 3);
			}
		}
		if (unk_0x889D01384B54BCE3(Local_141.f_14, 1))
		{
			if (!unk_0x889D01384B54BCE3(Local_141.f_14, 6))
			{
				if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_2, 1))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_14), 6);
				}
			}
			if (!unk_0x889D01384B54BCE3(Local_141.f_14, 7))
			{
				if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_2, 2))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_14), 7);
				}
			}
			if (!unk_0x889D01384B54BCE3(Local_141.f_14, 5))
			{
				if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_2, 0))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_14), 5);
				}
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_141.f_12, 20))
		{
			if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 11))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 20);
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_141.f_13, 17))
		{
			if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 13))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 17);
			}
		}
		if (func_375(iVar0, 1, 1))
		{
			if (!unk_0x889D01384B54BCE3(Local_141.f_12, 5))
			{
				if (!func_351(Local_141.f_1))
				{
					if (unk_0xBF8ADDCADFC4691E(unk_0x7A16A8A755F44481(Local_141.f_1), uVar1, 1))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 5);
					}
				}
			}
			if (unk_0x889D01384B54BCE3(Local_141.f_14, 1))
			{
				if (!unk_0x889D01384B54BCE3(Local_141.f_14, 8))
				{
					if (!func_351(Local_141.f_4))
					{
						if (unk_0xBF8ADDCADFC4691E(unk_0x7A16A8A755F44481(Local_141.f_4), uVar1, 1))
						{
							unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_14), 8);
						}
					}
				}
				if (!unk_0x889D01384B54BCE3(Local_141.f_14, 9))
				{
					if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_2, 3))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_14), 9);
					}
				}
			}
			if (!unk_0x889D01384B54BCE3(Local_141.f_12, 6))
			{
				if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 1))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 6);
				}
			}
			if (!unk_0x889D01384B54BCE3(Local_141.f_12, 16))
			{
				if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 8))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 16);
				}
			}
			if (!unk_0x889D01384B54BCE3(Local_141.f_13, 1))
			{
				if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 27))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 1);
				}
			}
			if (!unk_0x889D01384B54BCE3(Local_141.f_12, 7))
			{
				if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 0))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 7);
				}
			}
			if (!unk_0x889D01384B54BCE3(Local_141.f_12, 10))
			{
				if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 4))
				{
					if (Local_141.f_36 != 5 && Local_141.f_36 != 6)
					{
						Local_141.f_36 = 5;
					}
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 10);
				}
			}
			if (!unk_0x889D01384B54BCE3(Local_141.f_15, 2))
			{
				if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_3, 2))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_15), 2);
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_15), 4);
					iLocal_563 = iLocal_561;
				}
			}
			else if (!unk_0x889D01384B54BCE3(Local_214[iLocal_563 /*10*/].f_3, 2))
			{
				unk_0x29DB79DD4D939B38(&(Local_141.f_15), 2);
				if (unk_0x889D01384B54BCE3(Local_141.f_15, 3))
				{
					unk_0x29DB79DD4D939B38(&(Local_141.f_15), 3);
				}
			}
			if (!unk_0x889D01384B54BCE3(Local_141.f_13, 8))
			{
				if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 30))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 8);
				}
			}
			if (!unk_0x889D01384B54BCE3(Local_141.f_15, 0))
			{
				if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_3, 0))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_15), 0);
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_15), 1);
					Local_141.f_16 = Local_214[iLocal_561 /*10*/].f_4;
					iLocal_562 = iLocal_561;
				}
			}
			else if (!unk_0x889D01384B54BCE3(Local_214[iLocal_562 /*10*/].f_3, 0))
			{
				unk_0x29DB79DD4D939B38(&(Local_141.f_15), 0);
			}
			if (!unk_0x889D01384B54BCE3(Local_141.f_13, 13))
			{
				if (unk_0x889D01384B54BCE3(Local_214[iLocal_561 /*10*/].f_1, 21))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 13);
				}
			}
		}
	}
	iLocal_561++;
	if (iLocal_561 == unk_0x3F202553F90D4442())
	{
		iLocal_561 = 0;
	}
}

void func_44(var uParam0)
{
	var uVar0;
	
	if (unk_0x86CB59A6776A7C27(*uParam0))
	{
		if (!unk_0x428E17610BCE75C2(*uParam0))
		{
		}
	}
	if (unk_0xCB5D8B19B62A3B89(*uParam0))
	{
		uVar0 = unk_0xD65CB1FBC5B5BA6A(*uParam0);
		unk_0xD5FE44FF1732DF73(&uVar0);
	}
}

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 2);
	unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 3);
	unk_0x29DB79DD4D939B38(&(Local_141.f_12), 13);
	unk_0x29DB79DD4D939B38(&(Local_141.f_12), 27);
	unk_0x29DB79DD4D939B38(&(Local_141.f_12), 28);
	unk_0x29DB79DD4D939B38(&(Local_141.f_13), 4);
	if (!unk_0x889D01384B54BCE3(Local_141.f_12, 18))
	{
		if (func_351(Local_141.f_1))
		{
			if (Local_141.f_28 <= 0f)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 18);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < unk_0x3F202553F90D4442())
	{
		if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iVar0)))
		{
			iVar5 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iVar0));
			iVar6 = unk_0xFF34D923BFB5E9FB(iVar5);
			if (Local_214[iVar0 /*10*/].f_5 > 0)
			{
				Local_141.f_63 = (Local_141.f_63 + Local_214[iVar0 /*10*/].f_5);
				Local_214[iVar0 /*10*/].f_5 = 0;
			}
			if (unk_0x889D01384B54BCE3(Local_141.f_12, 3))
			{
				if (unk_0x965556ACF6A83973(iVar6, Local_587, 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x29DB79DD4D939B38(&(Local_141.f_12), 3);
				}
			}
			if (!unk_0x889D01384B54BCE3(Local_141.f_13, 16))
			{
				if (unk_0x889D01384B54BCE3(Local_214[iVar0 /*10*/].f_1, 12))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 16);
				}
			}
			if (func_375(iVar5, 1, 1))
			{
				if (unk_0x889D01384B54BCE3(Local_141.f_12, 2))
				{
					unk_0x29DB79DD4D939B38(&(Local_141.f_12), 2);
				}
				if (unk_0x05681B6F593F0A9C(iVar6) == iLocal_580)
				{
					if (unk_0xFFF3A70D01F7A468(iVar6) == iLocal_581 || unk_0xFFF3A70D01F7A468(iVar6) == iLocal_582)
					{
						iVar2 = 1;
					}
					else if (unk_0xFFF3A70D01F7A468(iVar6) == iLocal_583)
					{
						unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 13);
					iVar4++;
					if (!unk_0x889D01384B54BCE3(Local_141.f_12, 9) && !unk_0x889D01384B54BCE3(Local_141.f_12, 21))
					{
						if (!unk_0x889D01384B54BCE3(Local_141.f_12, 4))
						{
							if (unk_0xC00D643B16552C4D(iVar6, &iVar1, 1))
							{
								if ((((iVar1 != joaat("weapon_unarmed") && iVar1 != 0) && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare")) && iVar1 != joaat("weapon_snowball"))
								{
									if (Local_141.f_23 == -1)
									{
										Local_141.f_23 = iVar0;
									}
									else if (!unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(Local_141.f_23)))
									{
										Local_141.f_23 = -1;
									}
									unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 4);
									if (!unk_0x889D01384B54BCE3(Local_141.f_12, 12))
									{
										if (unk_0x965556ACF6A83973(iVar6, Local_540, 2.5f, 2.5f, 3f, 0, 1, 0))
										{
											unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 12);
										}
									}
								}
							}
						}
						if (!unk_0x889D01384B54BCE3(Local_141.f_13, 0))
						{
							if (unk_0xD25129559B94E910(iVar5) > 0)
							{
								unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 0);
							}
						}
					}
				}
				else if (unk_0x965556ACF6A83973(iVar6, Local_587, 5f, 5f, 2.5f, 0, 1, 0))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 28);
					iVar4++;
				}
				if (!unk_0x889D01384B54BCE3(Local_141.f_13, 4))
				{
					if (unk_0x889D01384B54BCE3(Local_214[iVar0 /*10*/].f_1, 28))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 4);
					}
				}
				if ((unk_0x889D01384B54BCE3(Local_141.f_12, 9) && !unk_0x889D01384B54BCE3(Local_141.f_12, 20)) && !unk_0x889D01384B54BCE3(Local_141.f_12, 19))
				{
					if (Local_214[iLocal_561 /*10*/].f_6 > Local_141.f_24)
					{
						Local_141.f_24 = Local_214[iVar0 /*10*/].f_6;
						func_13(&(Local_141.f_25));
						if (!unk_0x889D01384B54BCE3(Local_141.f_12, 24))
						{
							if (Local_141.f_24 > (0.55f + 0.2f))
							{
								unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_12), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_141.f_32 != iVar4)
	{
		Local_141.f_32 = iVar4;
	}
}

int func_46()
{
	var uVar0;
	
	if ((!unk_0x86CB59A6776A7C27(Local_141.f_1) || !unk_0x86CB59A6776A7C27(Local_141.f_2)) || !unk_0x86CB59A6776A7C27(Local_141.f_3))
	{
		if ((func_373(iLocal_539) && func_373(func_374(1))) && func_373(func_374(2)))
		{
			if (unk_0xA4D22CD12FD67154(1, 0, 2, 0))
			{
				if (!unk_0x86CB59A6776A7C27(Local_141.f_1))
				{
					if (func_47(&(Local_141.f_1), 4, iLocal_539, Local_540 - Vector(1f, 0f, 0f), Local_141.f_33, 1, 1, 1))
					{
						unk_0x42544C0CC4949BD5(unk_0x7A16A8A755F44481(Local_141.f_1), 0, iLocal_770[0], iLocal_776[0], 0);
						unk_0x42544C0CC4949BD5(unk_0x7A16A8A755F44481(Local_141.f_1), 2, iLocal_770[1], iLocal_776[1], 0);
						unk_0x42544C0CC4949BD5(unk_0x7A16A8A755F44481(Local_141.f_1), 3, iLocal_770[2], iLocal_776[2], 0);
						unk_0x42544C0CC4949BD5(unk_0x7A16A8A755F44481(Local_141.f_1), 4, iLocal_770[3], iLocal_776[3], 0);
						unk_0x42544C0CC4949BD5(unk_0x7A16A8A755F44481(Local_141.f_1), 8, iLocal_770[4], iLocal_776[4], 0);
						unk_0xDB49D536A87723F7(unk_0x7A16A8A755F44481(Local_141.f_1), unk_0xE60DDD7D0864392E(Local_540));
						unk_0x2686393074E14730(unk_0x7A16A8A755F44481(Local_141.f_1), 1);
						unk_0x2C4E82CF88213975(unk_0x7A16A8A755F44481(Local_141.f_1), 1);
						unk_0x8FA0F20D95909AB2(unk_0x7A16A8A755F44481(Local_141.f_1), 1, 0);
						unk_0x778B0968F902CF72(unk_0x7A16A8A755F44481(Local_141.f_1), 16);
						unk_0x62A4933CE1DA58E9(unk_0x7A16A8A755F44481(Local_141.f_1), 0);
						unk_0xDEB0A02F25120B62(unk_0x7A16A8A755F44481(Local_141.f_1), 1024, 1);
						unk_0x277B694318148985(unk_0x7A16A8A755F44481(Local_141.f_1), 1);
						unk_0x4C31C3561F937348(unk_0x7A16A8A755F44481(Local_141.f_1), unk_0xF2DB717A73826179((200f * Global_262145.f_138)));
						if (!unk_0x53D28141CF743B83(unk_0x7A16A8A755F44481(Local_141.f_1), "XP_Blocker"))
						{
							unk_0x4F007328F719079F(unk_0x7A16A8A755F44481(Local_141.f_1), "XP_Blocker", 1);
						}
						func_350(&uLocal_604, 3, unk_0x7A16A8A755F44481(Local_141.f_1), &(Local_141.f_38), 1, 0);
					}
				}
				if (!unk_0x86CB59A6776A7C27(Local_141.f_2))
				{
					uVar0 = unk_0x3759BB80B868470B(joaat("pickup_portable_crate_unfixed_low_glow"), Local_564, 0, func_374(1));
					if (unk_0x538DF9E5B1DF01EB(uVar0))
					{
						Local_141.f_2 = unk_0x9727CDE11D5BFC89(uVar0);
						unk_0x3CC3106305C40A28(unk_0x9198B14217D71938(Local_141.f_2), true);
						unk_0x6A23C3306A8CF21B(unk_0x9198B14217D71938(Local_141.f_2), false, 0);
						unk_0x34639238667C4381(unk_0x9198B14217D71938(Local_141.f_2), uLocal_567);
						unk_0xDB49D536A87723F7(unk_0x9198B14217D71938(Local_141.f_2), unk_0xE60DDD7D0864392E(Local_540));
						unk_0xE31C4C317516E7A7(unk_0x9198B14217D71938(Local_141.f_2), 1);
						unk_0xBA074DE3A3FD535A(unk_0x9198B14217D71938(Local_141.f_2), -0.2f, 1);
						unk_0xAA427204912D494B(unk_0x9198B14217D71938(Local_141.f_2), 1, 0);
						unk_0x423D1EBE54B18555(unk_0x9198B14217D71938(Local_141.f_2), false);
					}
				}
				if (!unk_0x86CB59A6776A7C27(Local_141.f_3))
				{
					if (func_25(&(Local_141.f_3), func_374(2), Local_568 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1))
					{
						unk_0x34639238667C4381(unk_0x9198B14217D71938(Local_141.f_3), uLocal_571);
						unk_0xDB49D536A87723F7(unk_0x9198B14217D71938(Local_141.f_3), unk_0xE60DDD7D0864392E(Local_540));
						unk_0x3CC3106305C40A28(unk_0x9198B14217D71938(Local_141.f_3), true);
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_47(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0x2013F7257D076F89(1))
	{
		return 0;
	}
	uVar0 = unk_0x6F9DE0DE8363ADF1(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x6F85672CC2397A57(uVar0);
	if (unk_0x86CB59A6776A7C27(*uParam0))
	{
		unk_0x940C6B8BF42B190B(uVar0, iParam9);
		if (unk_0xF5F2A2EAFEFB36D2(uVar0))
		{
			if (bParam7)
			{
				unk_0x59262222326E6883(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_48()
{
	if (!unk_0x889D01384B54BCE3(iLocal_535, 20))
	{
		if (unk_0x889D01384B54BCE3(Local_141.f_12, 11) || unk_0x889D01384B54BCE3(Local_141.f_13, 16))
		{
			if (unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == iLocal_580 || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_587, 5f, 5f, 2.5f, 0, 1, 0))
			{
				func_51();
				func_49();
				func_6(iLocal_769, 1, func_7());
				unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 20);
			}
			else
			{
				if ((unk_0x889D01384B54BCE3(iLocal_535, 31) && (unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0 || unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 1))) && unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_587, 20f, 20f, 20f, 0, 1, 0))
				{
					func_51();
				}
				unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 20);
			}
		}
	}
}

void func_49()
{
	int iVar0;
	
	iVar0 = func_50(47);
	Global_2408985[iVar0 /*83*/] = 47;
	StringCopy(&(Global_2408985[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2408985[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2408985[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_51()
{
	int iVar0;
	
	if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0 || unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 1))
	{
		iVar0 = func_120(1176, -1, 0);
		if (!unk_0x889D01384B54BCE3(iVar0, iLocal_769))
		{
			func_119(14, 1, -1);
			unk_0xD0E2BFCE93AE3ABD(&iVar0, iLocal_769);
			func_118(1176, iVar0, -1, 1);
			if (func_117(14, -1) >= 20)
			{
				func_103(44, 1);
			}
			else
			{
				func_102(44, func_117(14, -1));
			}
		}
		func_101(1162, 1, -1);
		func_100(12, 1, -1, 1);
		func_90(19);
		iLocal_798 = 100;
		iLocal_798 = unk_0xF2DB717A73826179((IntToFloat(iLocal_798) * Global_262145.f_4204));
		func_55(2, "XPT_HOLDUP", -1636175450, -235721452, iLocal_798, 1, -1, 0);
		func_52(12, 0);
	}
}

void func_52(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_54(iParam0, iParam1))
	{
		iVar0 = func_53();
		Global_2435463[iVar0] = iParam0;
	}
}

int func_53()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2435463[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_54(int iParam0, var uParam1)
{
	if (Global_1315879)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315891) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_55(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_56(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_56(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_57(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_57(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_89(unk_0x1788E93557766241()) || func_88(unk_0x1788E93557766241()))
	{
		if (Global_262145.f_7316 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7316;
		}
	}
	else if (Global_262145.f_4982 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_4982;
	}
	if (func_87(uParam2))
	{
	}
	if (func_86())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_84(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_83(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_80(0, &iVar1);
					break;
				
				case 3:
					func_80(1, &iVar1);
					break;
				
				case 1:
					func_76(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_101(1159, iVar1, -1);
			if (iParam1 == 0)
			{
				func_68((func_75(unk_0x1788E93557766241()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x449D2838B793CF3B(iVar1, iParam8, iParam9);
				if (Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_2 != -1)
				{
					func_101(1160, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_62(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_58((func_60(unk_0x1788E93557766241()) + iVar1));
			}
			else
			{
				func_58((func_60(unk_0x1788E93557766241()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_58(int iParam0)
{
	if (func_86())
	{
		Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_5 = iParam0;
		func_59(joaat("mpply_globalxp"), iParam0);
	}
}

void func_59(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, uParam1, 1);
	}
}

int func_60(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_375(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1788E93557766241())
			{
				return func_61(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1583725[iParam0 /*334*/].f_188.f_5;
			}
		}
		else
		{
			return func_61(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_62(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_67(unk_0x1788E93557766241()) };
	if (unk_0x70443014BEB6B15D())
	{
		if (unk_0x9A6FFB0772343488(&Var0))
		{
			iVar13 = func_65(func_66(&Var0));
			if (iVar13 == 0)
			{
				func_64(&Global_1336376, iParam0);
				func_63(joaat("mpply_crew_local_xp_0"), Global_1336376);
			}
			else if (iVar13 == 1)
			{
				func_64(&Global_1336377, iParam0);
				func_63(joaat("mpply_crew_local_xp_1"), Global_1336377);
			}
			else if (iVar13 == 2)
			{
				func_64(&Global_1336378, iParam0);
				func_63(joaat("mpply_crew_local_xp_2"), Global_1336378);
			}
			else if (iVar13 == 3)
			{
				func_64(&Global_1336379, iParam0);
				func_63(joaat("mpply_crew_local_xp_3"), Global_1336379);
			}
			else if (iVar13 == 4)
			{
				func_64(&Global_1336380, iParam0);
				func_63(joaat("mpply_crew_local_xp_4"), Global_1336380);
			}
		}
	}
}

void func_63(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1336371 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1336373 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1336373 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1336374 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1336375 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1336376 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1336377 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1336378 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1336379 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1336380 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1336381 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1336382 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1336383 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1336384 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1336385 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1336386 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1336387 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_64(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_65(int iParam0)
{
	if (iParam0 == Global_1336371)
	{
		return 0;
	}
	else if (iParam0 == Global_1336372)
	{
		return 1;
	}
	else if (iParam0 == Global_1336373)
	{
		return 2;
	}
	else if (iParam0 == Global_1336374)
	{
		return 3;
	}
	else if (iParam0 == Global_1336375)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_66(var uParam0)
{
	if (unk_0x70443014BEB6B15D())
	{
		if (unk_0x9A6FFB0772343488(uParam0))
		{
			return Global_2435485;
		}
	}
	return Global_2435485;
}

struct<13> func_67(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBE9A3F2CD3728669(iParam0, &Var0, 13);
	return Var0;
}

void func_68(int iParam0, int iParam1, int iParam2)
{
	if (func_86())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7291 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1336491[func_73(-1)])
				{
					unk_0x449D2838B793CF3B(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1336491[func_73(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7290 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x449D2838B793CF3B(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7290 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x449D2838B793CF3B(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_72(unk_0x1788E93557766241()))
		{
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_1 = iParam0;
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_6 = func_70(iParam0, 1);
		}
		func_69(634, iParam0, -1, 1);
		func_118(635, func_70(iParam0, 1), -1, 1);
		Global_1336491[func_73(-1)] = iParam0;
		func_52(7, 0);
	}
}

void func_69(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_73(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1336437[func_73(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1336443[func_73(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1336449[func_73(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1336455[func_73(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1336413[func_73(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1336419[func_73(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1336425[func_73(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1336431[func_73(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1336389[func_73(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1336395[func_73(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1336401[func_73(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1336407[func_73(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1336461[func_73(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1336467[func_73(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1336473[func_73(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1336479[func_73(iParam2)] = iParam1;
			break;
		
		case 1297:
			Global_1336485[func_73(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1336491[func_73(iParam2)] = iParam1;
			break;
		
		case 1272:
			Global_1336497[func_73(iParam2)] = iParam1;
			break;
		
		case 1869:
			Global_2473821[0 /*6*/][func_73(iParam2)] = iParam1;
			break;
		
		case 2260:
			Global_2473821[1 /*6*/][func_73(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1336503[func_73(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1336509[func_73(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1336515[func_73(iParam2)] = iParam1;
			break;
		
		case 1230:
			Global_1336521[func_73(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_70(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_71(iParam0, 0);
}

int func_71(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_271370[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_271370[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_72(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x889D01384B54BCE3(Global_2422491.f_1, iParam0);
	}
	return 1;
}

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_74();
		if (iVar1 > -1)
		{
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
		}
	}
	return iVar0;
}

int func_74()
{
	return Global_1312729;
}

int func_75(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1788E93557766241())
			{
				return Global_1336491[func_73(-1)];
			}
			else if (func_72(iParam0))
			{
				return Global_1583725[iParam0 /*334*/].f_188.f_1;
			}
		}
	}
	else
	{
		return Global_1336491[func_73(-1)];
	}
	return 0;
}

void func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241());
	iVar0 = 0;
	while (iVar0 < unk_0x3F202553F90D4442())
	{
		iVar4 = unk_0xCADBCF2AA9B38F40(iVar0);
		if (unk_0x0AFA8C49D2EED33A(iVar4))
		{
			iVar5 = unk_0xCE0E12AD191025E5(iVar4);
			if (unk_0xA2D6C1E24AF2E058(iVar5) != -1)
			{
				if (unk_0xA2D6C1E24AF2E058(iVar5) == iVar1 || func_79(unk_0xA2D6C1E24AF2E058(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != unk_0x1788E93557766241())
					{
						if (func_78(unk_0x1788E93557766241(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_77(*iParam0, 100) * (10f * Global_262145.f_4196)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_77(*iParam0, 100) * (20f * Global_262145.f_4189)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_77(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_78(int iParam0, int iParam1)
{
	if (unk_0x70443014BEB6B15D())
	{
		Global_2446020 = { func_67(iParam0) };
		Global_2446033 = { func_67(iParam1) };
		if (unk_0x9A6FFB0772343488(&Global_2446020))
		{
			if (unk_0x9A6FFB0772343488(&Global_2446033))
			{
				unk_0x55FB44C9EE7B72D8(&Global_2445950, 35, &Global_2446020);
				unk_0x55FB44C9EE7B72D8(&Global_2445985, 35, &Global_2446033);
				if (Global_2445950 == Global_2445985)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 0);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 1);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 2);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 4);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 5);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 6);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 8);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 9);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 10);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 12);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 13);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 14);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_80(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x3F202553F90D4442())
		{
			iVar3 = iVar0;
			if (unk_0x0AFA8C49D2EED33A(iVar3))
			{
				iVar4 = unk_0xCE0E12AD191025E5(iVar3);
				if (func_375(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1788E93557766241())
					{
						iVar1++;
						if (func_78(unk_0x1788E93557766241(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_375(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x1788E93557766241())
				{
					if (func_81(unk_0x1788E93557766241(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_78(unk_0x1788E93557766241(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_77(*iParam1, 100) * (10f * Global_262145.f_4196)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_77(*iParam1, 100) * (20f * Global_262145.f_4189)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_81(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_82(iParam0), func_82(iParam1));
	return 0f;
}

Vector3 func_82(int iParam0)
{
	return unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(iParam0), 0);
}

int func_83(int iParam0)
{
	int iVar0;
	
	if (unk_0xE6226327EBCC990E() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_77(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_84(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x045E73D0141F51B4(iParam0) > func_75(unk_0x1788E93557766241()))
		{
			iParam0 = -func_75(unk_0x1788E93557766241());
		}
	}
	if (func_85(8000, 0, 0) > 0)
	{
		if (func_85(8000, 0, 0) < (iParam0 + func_75(unk_0x1788E93557766241())))
		{
			iParam0 = (func_85(8000, 0, 0) - func_75(unk_0x1788E93557766241()));
		}
	}
	return iParam0;
}

int func_85(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_271370[iParam0];
}

int func_86()
{
	return 1;
}

int func_87(var uParam0)
{
	if (unk_0x8CD18E96F1984EE6(uParam0))
	{
		return 1;
	}
	else if (unk_0x9BA82E09A986BA4B(uParam0, "") || unk_0x9BA82E09A986BA4B(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_88(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 2;
}

bool func_89(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 7;
}

void func_90(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_6843)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_99() /*8064*/].f_5756.f_1795[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_99() /*8064*/].f_5756.f_1795[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_99() /*8064*/].f_5756.f_1795[iVar2 /*3*/].f_1)
			{
				func_95(iVar2, 1);
				unk_0xD0E2BFCE93AE3ABD(&Global_2446058, (8 + iVar2));
				func_93(2103, -1);
				func_91(67, -1);
				func_93(2535, -1);
				func_91(69, -1);
				unk_0x732AC1ACE8A38FF5(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0x889D01384B54BCE3(Global_2446058, 12))
					{
						func_52(7, 0);
					}
					else
					{
						func_52(15, 0);
					}
				}
			}
		}
	}
}

void func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_117(iParam0, func_73(iParam1));
	iVar0++;
	func_92(iParam0, iVar0, iParam1);
}

void func_92(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2473157[iParam0 /*5*/][func_73(uParam2)];
	unk_0x680350124CC21957(iVar0, iParam1, 1);
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_120(iParam0, func_73(iParam1), 0);
	iVar0++;
	if (!func_94(iParam0))
	{
		func_118(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_69(iParam0, iVar0, iParam1, 1);
	}
}

int func_94(int iParam0)
{
	if (Global_1336370)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1297:
			case 634:
			case 1272:
			case 759:
			case 760:
			case 761:
			case 1230:
			case 1869:
			case 2260:
				return 1;
				break;
			}
	}
	return 0;
}

void func_95(int iParam0, int iParam1)
{
	if (Global_2097152[func_99() /*8064*/].f_5756.f_1795[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_99() /*8064*/].f_5756.f_1795[iParam0 /*3*/].f_1 = iParam1;
		func_96(func_98(iParam0), iParam1, -1, 1);
	}
}

void func_96(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_97())
	{
		iVar0 = Global_2471573[iParam0 /*5*/][func_73(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xA65D74B65C28C5D7(iVar0, iParam1, iParam3);
		}
	}
}

int func_97()
{
	return 1;
	return 0;
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 169;
		
		case 1:
			return 170;
		
		case 2:
			return 171;
		
		default:
	}
	return 169;
}

int func_99()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_100(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_74();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x63B1C03C36A780A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC59E8D3A53A786C7((iParam0 - 0)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x63B1C03C36A780A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC59E8D3A53A786C7((iParam0 - 192)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x63B1C03C36A780A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC59E8D3A53A786C7((iParam0 - 513)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x63B1C03C36A780A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC59E8D3A53A786C7((iParam0 - 705)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x544FDF5D46658EF4((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC59E8D3A53A786C7((iParam0 - 3111)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x544FDF5D46658EF4((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC59E8D3A53A786C7((iParam0 - 2919)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x681B0EB4863DC6EC((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC59E8D3A53A786C7((iParam0 - 4207)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x681B0EB4863DC6EC((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC59E8D3A53A786C7((iParam0 - 4335)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_101(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_120(iParam0, func_73(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_94(iParam0))
	{
		func_118(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_69(iParam0, iVar0, iParam2, 1);
	}
}

int func_102(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x9BE422A8A4809EB6(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA2D39EF26F970808(iParam0, iParam1);
	}
	return 0;
}

int func_103(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_104(iParam0, iParam1);
}

int func_104(int iParam0, int iParam1)
{
	if (func_116(14) && !func_115(iParam0))
	{
		return 0;
	}
	if (unk_0xA7311613D452D616(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24692 != 0 && !Global_68325)
	{
		return 0;
	}
	if (func_114(&Global_2542838))
	{
		if (func_112(&Global_2542838, iParam0))
		{
			return 0;
		}
		if (func_105(&Global_2542838, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6100B0637DF2BBCA(iParam0))
		{
			return 0;
		}
		if (unk_0xA7311613D452D616(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_105(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_116(14) && !func_115(iParam1))
	{
		return 0;
	}
	if (func_112(uParam0, iParam1))
	{
		return 0;
	}
	if (func_111(uParam0) < 0f)
	{
		func_110(uParam0, 0);
	}
	func_108(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_106(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_106(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_116(14) && !func_115(iParam1))
	{
		return 0;
	}
	if (func_112(uParam0, iParam1))
	{
		return 0;
	}
	if (func_111(uParam0) < 0f)
	{
		func_110(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_107(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_107(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_108(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_109(uParam0, iVar0);
		iVar0++;
	}
	func_110(uParam0, (Global_2542837 - 0.5f));
}

void func_109(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_110(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_111(var uParam0)
{
	return uParam0->f_72;
}

bool func_112(var uParam0, int iParam1)
{
	return func_113(uParam0, iParam1) != -1;
}

int func_113(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_114(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_116(int iParam0)
{
	return Global_34915 == iParam0;
}

int func_117(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2473157[iParam0 /*5*/][func_73(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_118(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_73(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
}

void func_119(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_117(iParam0, func_73(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_92(iParam0, iVar0, iParam2);
}

int func_120(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2455246[iParam0 /*5*/][func_73(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_121(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_122(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xE9849174628A9C50())
		{
			func_18(uParam0, 0, 0);
		}
	}
}

void func_123()
{
	bool bVar0;
	int iVar1;
	
	func_211();
	func_184();
	func_159();
	func_48();
	func_157();
	func_156();
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == iLocal_580)
		{
			if (unk_0xFFF3A70D01F7A468(unk_0xA16EC202D9D35357()) == iLocal_581 || unk_0xFFF3A70D01F7A468(unk_0xA16EC202D9D35357()) == iLocal_582)
			{
				bVar0 = true;
			}
			else if (unk_0xFFF3A70D01F7A468(unk_0xA16EC202D9D35357()) == iLocal_583)
			{
				iVar1 = 1;
			}
		}
	}
	if (!unk_0x889D01384B54BCE3(iLocal_535, 31))
	{
		if ((bVar0 || iVar1) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_587, (5f / 2f), (5f / 2f), (5f / 2f), 0, 1, 0))
		{
			unk_0xB4E8D4EA104CA059(unk_0xA16EC202D9D35357(), joaat("weapon_unarmed"), 1);
			unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 31);
		}
	}
	if (!unk_0x889D01384B54BCE3(iLocal_535, 26) && bVar0)
	{
		if (func_154("SNK_MNU", Local_90.f_0))
		{
			unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 26);
		}
	}
	if (!bVar0 && unk_0x889D01384B54BCE3(iLocal_535, 26))
	{
		if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()) || (unk_0xBAB691F99A2A7346(Local_90.f_1) && unk_0x3C20CCC55C33AC27(Local_90.f_1)))
		{
			unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
			unk_0xC92B5D880C803814(unk_0x1788E93557766241(), true, 0);
			unk_0x20D6E0EA145DF751(0);
			unk_0x60365B850FB7354F(0, 1065353216);
			if (iLocal_800 > 0)
			{
				Local_214[unk_0x044A481E863E2F6B() /*10*/].f_5 = iLocal_800;
				iLocal_800 = 0;
			}
			func_366();
			if (unk_0xBAB691F99A2A7346(Local_90.f_1))
			{
				unk_0x27A62B1C26941E13(Local_90.f_1, 0);
			}
			unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
		}
		func_151(1, Local_90.f_0);
		unk_0x29DB79DD4D939B38(&iLocal_535, 26);
	}
	if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 21))
	{
		if (iVar1 || func_149(unk_0xA16EC202D9D35357(), iLocal_769))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_146();
		func_140();
		func_135();
		func_133(1);
		func_128();
		unk_0xBC2821836EC525D4(unk_0x1788E93557766241());
		unk_0xF9E0EA5A2AF3597D(unk_0x1788E93557766241());
		if (unk_0x889D01384B54BCE3(Global_2446992.f_7, 0))
		{
			unk_0x40D04E5FBE5DAF55(Local_141.f_71);
			func_126(Local_587, func_127(30), 0);
			unk_0x29DB79DD4D939B38(&(Global_2446992.f_7), 0);
		}
	}
	else
	{
		if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_587, 5f, 5f, 2.5f, 0, 1, 0))
		{
			func_133(0);
		}
		if (!unk_0x889D01384B54BCE3(Global_2446992.f_7, 0))
		{
			unk_0xB7CC0B56B5170D0F();
			func_124(Local_587, func_127(30), "");
			unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_7), 0);
		}
	}
	if ((unk_0x889D01384B54BCE3(Local_141.f_12, 22) || unk_0x889D01384B54BCE3(Local_141.f_12, 23)) || unk_0x889D01384B54BCE3(Local_141.f_12, 7))
	{
		unk_0x53F4483D5741E8F9(unk_0x1788E93557766241());
	}
}

int func_124(struct<3> Param0, char* sParam3, char* sParam4)
{
	int iVar0;
	
	if (!unk_0x06771AF7795B3ECF(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0x9BA82E09A986BA4B(&(Global_2446992.f_3809[iVar0 /*26*/].f_4), sParam3))
			{
				if (unk_0x06771AF7795B3ECF(&(Global_2446992.f_3809[iVar0 /*26*/].f_4)))
				{
					Global_2446992.f_3809[iVar0 /*26*/] = 1;
					Global_2446992.f_3809[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2446992.f_3809[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2446992.f_3809[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_125(Global_2446992.f_3809[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2446992.f_3809[iVar0 /*26*/] = 1;
				Global_2446992.f_3809[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2446992.f_3809[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2446992.f_3809[iVar0 /*26*/].f_10), sParam4, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_125(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_126(struct<3> Param0, char* sParam3, int iParam4)
{
	int iVar0;
	
	if (!unk_0x06771AF7795B3ECF(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0x9BA82E09A986BA4B(&(Global_2446992.f_3809[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_125(Global_2446992.f_3809[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2446992.f_3809[iVar0 /*26*/] = 0;
					Global_2446992.f_3809[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2446992.f_3809[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2446992.f_3809[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_127(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_128()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x29DB79DD4D939B38(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 28);
	if (!func_351(Local_141.f_1) && func_375(unk_0x1788E93557766241(), 1, 1))
	{
		if (unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar0, 1))
		{
			if (((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_flare")) && iVar0 != joaat("weapon_snowball"))
			{
				if ((((unk_0xC121BFE894DB4BDB(unk_0x1788E93557766241()) && unk_0x68E6C2D89A534992(unk_0xA16EC202D9D35357(), unk_0x7A16A8A755F44481(Local_141.f_1), 45f)) && unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), unk_0x7A16A8A755F44481(Local_141.f_1), 5f, 5f, 2f, 0, 1, 0)) || unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), unk_0x7A16A8A755F44481(Local_141.f_1))) || unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), unk_0x7A16A8A755F44481(Local_141.f_1)))
				{
					if (!func_132() && !func_38(unk_0x1788E93557766241()))
					{
						if (func_130(unk_0x1788E93557766241(), unk_0x7A16A8A755F44481(Local_141.f_1)) || unk_0x80A6B1667CA4E74D(unk_0x1788E93557766241()))
						{
							if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 1))
							{
								func_129(func_8(unk_0xCE0E12AD191025E5(unk_0xEFFAB8253FA8403C())));
								unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 1);
							}
							if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 8))
							{
								unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 8);
							}
						}
						unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 28);
					}
				}
			}
		}
	}
	if (!unk_0x889D01384B54BCE3(iLocal_535, 28))
	{
		if (unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 28))
		{
			if (unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1))
			{
				if (iVar1 != 0 && iVar1 != joaat("weapon_snowball"))
				{
					iVar2 = unk_0xAE9742BDAD6152B0(iVar1);
					if (iVar2 == joaat("GROUP_PISTOL"))
					{
						sLocal_538 = "hold_up_head_additive_pistol";
						unk_0x5B5659C49032B96C(unk_0xA16EC202D9D35357(), "mp_am_hold_up", sLocal_538, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else if ((((iVar2 == joaat("GROUP_MG") || iVar2 == joaat("GROUP_RIFLE")) || iVar2 == joaat("GROUP_SHOTGUN")) || iVar2 == joaat("GROUP_SNIPER")) || iVar2 == joaat("GROUP_SMG"))
					{
						sLocal_538 = "hold_up_head_additive_rifle";
						unk_0x5B5659C49032B96C(unk_0xA16EC202D9D35357(), "mp_am_hold_up", sLocal_538, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else
					{
						sLocal_538 = "";
					}
					unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 28);
				}
			}
		}
	}
	else if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 28) || unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
	{
		if (!unk_0x06771AF7795B3ECF(sLocal_538))
		{
			if (unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "mp_am_hold_up", sLocal_538, 3))
			{
				unk_0x5A8C213A1384C077(unk_0xA16EC202D9D35357(), "mp_am_hold_up", sLocal_538, -1056964608);
			}
		}
		unk_0x29DB79DD4D939B38(&iLocal_535, 28);
	}
	if (unk_0x889D01384B54BCE3(Local_141.f_14, 1))
	{
		if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_2, 3))
		{
			if (!func_351(Local_141.f_4) && func_375(unk_0x1788E93557766241(), 1, 1))
			{
				if (unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar3, 1))
				{
					if ((((iVar3 != joaat("weapon_unarmed") && iVar3 != joaat("object")) && iVar3 != joaat("weapon_flare")) && iVar3 != joaat("weapon_snowball")) && !func_132())
					{
						if (unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), unk_0x7A16A8A755F44481(Local_141.f_4)) || unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), unk_0x7A16A8A755F44481(Local_141.f_4)))
						{
							if (func_130(unk_0x1788E93557766241(), unk_0x7A16A8A755F44481(Local_141.f_4)) || unk_0x80A6B1667CA4E74D(unk_0x1788E93557766241()))
							{
								unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_2), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_129(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 24;
	Var0.f_1 = unk_0x1788E93557766241();
	if (!iParam0 == 0)
	{
		unk_0xD311A006D41D0704(1, &Var0, 2, iParam0);
	}
}

int func_130(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	if (func_375(iParam0, 1, 1))
	{
		Var0 = { func_82(iParam0) };
	}
	if (!unk_0x2DE0B96E966FD817(iParam1))
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 1) };
	}
	Var9 = { Var3 - Var0 };
	if (!unk_0x2DE0B96E966FD817(iParam1))
	{
		Var6 = { unk_0xA783C6007920169C(iParam1, 0f, 7f, 0f) };
		Var12 = { Var6 - Var3 };
	}
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	fVar15 = func_131(Var9, Var12);
	if (fVar15 < -0.1f)
	{
		return 1;
	}
	return 0;
}

float func_131(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_132()
{
	if (unk_0x16CDA1894CFE0781(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_133(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x1788E93557766241() != Global_2446992.f_4624)
	{
		if (!unk_0x889D01384B54BCE3(iLocal_535, 6))
		{
			if (iParam0 == 1)
			{
				if (unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar2, 1))
				{
					if ((((iVar2 != joaat("weapon_unarmed") && iVar2 != 0) && iVar2 != joaat("object")) && iVar2 != joaat("weapon_flare")) && iVar2 != joaat("weapon_snowball"))
					{
						if (!unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_540, 2.5f, 2.5f, 3f, 0, 1, 0))
						{
							iVar1 = 1;
						}
						iVar0 = 1;
					}
				}
				if ((((iVar1 == 1 || unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 5)) || (iVar0 == 1 && Local_141.f_36 >= 3)) || (iVar0 == 1 && unk_0x889D01384B54BCE3(Local_141.f_13, 16))) || unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 12))
				{
					if (((!unk_0x889D01384B54BCE3(Local_141.f_12, 12) || Local_141.f_36 >= 3) || unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 12)) || (iVar0 == 1 && unk_0x889D01384B54BCE3(Local_141.f_13, 16)))
					{
						Global_2414327[unk_0x1788E93557766241() /*255*/].f_46++;
						func_13(&(Global_2422491.f_3127));
						func_18(&(Global_2422491.f_3127), 0, 0);
						if (Global_2414327[unk_0x1788E93557766241() /*255*/].f_46 <= 2)
						{
							unk_0xD7A7E942CB6FFB85(unk_0x1788E93557766241(), 37, unk_0xF182CA32D6388B28(2));
						}
						else if (Global_2414327[unk_0x1788E93557766241() /*255*/].f_46 >= 5)
						{
							unk_0xD7A7E942CB6FFB85(unk_0x1788E93557766241(), 37, unk_0xF182CA32D6388B28(4));
						}
						else
						{
							unk_0xD7A7E942CB6FFB85(unk_0x1788E93557766241(), 37, unk_0xF182CA32D6388B28(3));
						}
						if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 1))
						{
							unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 2);
						}
						unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 6);
						unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 25);
					}
				}
			}
			if (!unk_0x889D01384B54BCE3(iLocal_535, 27) && !unk_0x889D01384B54BCE3(iLocal_535, 6))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					if (func_17(&uLocal_578, 2000, 0) || unk_0x726E0522B436F9A2(unk_0xA16EC202D9D35357()))
					{
						unk_0xD7A7E942CB6FFB85(unk_0x1788E93557766241(), 37, unk_0xF182CA32D6388B28(1));
						unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 27);
						unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 27);
						unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 25);
						if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 1))
						{
							unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 2);
						}
					}
				}
				else if (func_134(&uLocal_578))
				{
					func_13(&uLocal_578);
				}
			}
		}
		if (!unk_0x889D01384B54BCE3(iLocal_535, 24))
		{
			if (unk_0x889D01384B54BCE3(iLocal_535, 31))
			{
				if (func_351(Local_141.f_1))
				{
					unk_0xD7A7E942CB6FFB85(unk_0x1788E93557766241(), 13, unk_0xF182CA32D6388B28(3));
					unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 24);
					if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 1))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 2);
					}
				}
			}
		}
	}
}

bool func_134(var uParam0)
{
	return uParam0->f_1;
}

void func_135()
{
	int iVar0;
	int iVar1;
	
	if (func_375(unk_0x1788E93557766241(), 1, 1))
	{
		if (!unk_0x889D01384B54BCE3(iLocal_535, 23) && unk_0x889D01384B54BCE3(Local_141.f_12, 17))
		{
			if (!func_351(Local_141.f_1))
			{
				iLocal_547 = unk_0xC49FDF2081B5FE27(Local_141.f_20);
				if (iLocal_547 >= 0)
				{
					if (unk_0xCFC5CE3AD496DA0B(iLocal_547))
					{
						if ((!unk_0x889D01384B54BCE3(Global_1681282, 15) && func_139()) && func_138())
						{
							unk_0xD0E2BFCE93AE3ABD(&Global_1681282, 15);
						}
						if (!unk_0x11A809BBE3889742())
						{
							iVar0 = func_120(1185, -1, 0);
							if (!unk_0x889D01384B54BCE3(iVar0, 3))
							{
								if (unk_0x0DF89B3B1CF0FDC1(iLocal_547) < 0.4f && unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == iLocal_580)
								{
									func_137("FHU_HELP3", -1);
									unk_0xD0E2BFCE93AE3ABD(&iVar0, 3);
									func_118(1185, iVar0, -1, 1);
								}
							}
							else if (!unk_0x889D01384B54BCE3(iVar0, 5) || !unk_0x889D01384B54BCE3(iVar0, 6))
							{
								if (unk_0x0DF89B3B1CF0FDC1(iLocal_547) < 0.7f && unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == iLocal_580)
								{
									func_137("FHU_HELP4", -1);
									unk_0xD0E2BFCE93AE3ABD(&iVar0, 5);
									func_118(1185, iVar0, -1, 1);
									unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 23);
								}
							}
							else
							{
								unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 23);
							}
						}
					}
				}
			}
		}
		if (!func_37(unk_0x1788E93557766241(), 146))
		{
			if (!unk_0x889D01384B54BCE3(iLocal_536, 1))
			{
				if (!unk_0x11A809BBE3889742())
				{
					if (((((func_351(Local_141.f_1) || Local_141.f_36 > 7) && !unk_0x889D01384B54BCE3(Local_141.f_12, 20)) && !unk_0x889D01384B54BCE3(Local_141.f_12, 11)) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 5)) && unk_0xDBC834909DE748A2(Local_548, 1.5f) == 0)
					{
						iVar1 = func_120(1185, -1, 0);
						if (!unk_0x889D01384B54BCE3(iVar1, 20) || !unk_0x889D01384B54BCE3(iVar1, 21))
						{
							func_137("FHU_HELPM", -1);
							if (!unk_0x889D01384B54BCE3(iVar1, 20))
							{
								unk_0xD0E2BFCE93AE3ABD(&iVar1, 20);
							}
							else
							{
								unk_0xD0E2BFCE93AE3ABD(&iVar1, 21);
							}
							func_118(1185, iVar1, -1, 1);
							unk_0xD0E2BFCE93AE3ABD(&iLocal_536, 1);
						}
						else
						{
							unk_0xD0E2BFCE93AE3ABD(&iLocal_536, 1);
						}
					}
				}
			}
			else if (func_136("FHU_HELPM"))
			{
				if ((unk_0x889D01384B54BCE3(Local_141.f_12, 20) || unk_0x889D01384B54BCE3(Local_141.f_12, 11)) || unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 5))
				{
					unk_0xFD1E0AEC770DAF2E(1);
				}
			}
		}
	}
}

bool func_136(char* sParam0)
{
	unk_0x38DB30583B2DE025(sParam0);
	return unk_0x2DB019D515966DF9(0);
}

void func_137(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

bool func_138()
{
	return unk_0x889D01384B54BCE3(Global_2446992.f_1623, 21);
}

bool func_139()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_128, 3);
}

void func_140()
{
	float fVar0;
	float fVar1;
	
	if (Local_141.f_36 == 4)
	{
		if (func_375(unk_0x1788E93557766241(), 1, 1))
		{
			if (!func_351(Local_141.f_1))
			{
				iLocal_547 = unk_0xC49FDF2081B5FE27(Local_141.f_20);
				if (iLocal_547 >= 0)
				{
					if (unk_0xCFC5CE3AD496DA0B(iLocal_547))
					{
						fVar0 = unk_0x0DF89B3B1CF0FDC1(iLocal_547);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_141(unk_0xF2DB717A73826179(fVar0), 890, "HUP_PROG", func_145(unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241())), 0, 1);
						}
						fVar1 = unk_0x7B99AAFDF268C93D(unk_0x1788E93557766241());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_214[unk_0x044A481E863E2F6B() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_141(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5)
{
	func_142(iParam0, iParam1, sParam2, uParam3, iParam4, 2, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0);
}

void func_142(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_144(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328903.f_1 = 1;
		func_143(0, iVar0);
		Global_1328903.f_946[iVar0] = uParam0;
		Global_1328903.f_946.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1328903.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1328903.f_946.f_194[iVar0] = uParam3;
		Global_1328903.f_946.f_183[iVar0] = uParam4;
		Global_1328903.f_946.f_216[iVar0] = iParam5;
		Global_1328903.f_946.f_227[iVar0 /*3*/] = fParam6;
		Global_1328903.f_946.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1328903.f_946.f_258[iVar0] = iParam8;
		Global_1328903.f_946.f_269[iVar0] = uParam9;
		Global_1328903.f_946.f_312[iVar0] = iParam10;
		Global_1328903.f_946.f_323[iVar0] = iParam11;
		Global_1328903.f_946.f_334[iVar0] = iParam12;
		Global_1328903.f_946.f_345[iVar0] = iParam13;
		Global_1328903.f_941 = 1;
		Global_1328903.f_946.f_356[iVar0] = iParam14;
		Global_1328903.f_946.f_367[iVar0] = iParam15;
	}
}

void func_143(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1328903.f_4506[iParam0]), iParam1);
}

bool func_144(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_1328903.f_4506[iParam0], iParam1);
}

int func_145(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_146()
{
	if (!unk_0x889D01384B54BCE3(iLocal_536, 2))
	{
		unk_0x3D28909AF30D70F4("oddjobs@shop_robbery@rob_till");
		unk_0x3D28909AF30D70F4(func_147());
		if (unk_0x6C47E32491756A1A("oddjobs@shop_robbery@rob_till") && unk_0x6C47E32491756A1A(func_147()))
		{
			unk_0xD0E2BFCE93AE3ABD(&iLocal_536, 2);
		}
	}
}

char* func_147()
{
	if (func_148(unk_0x1788E93557766241()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_148(int iParam0)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return 1;
	}
	return Global_2414327[iParam0 /*255*/].f_226;
}

int func_149(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar6 = 0f;
	func_150(iParam1, &Var0, &Var3, &fVar6);
	if (unk_0x0852C405AF94F670(iParam0, Var0, Var3, fVar6, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_150(int iParam0, var uParam1, var uParam2, float fParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1390.033f, 3605.529f, 33.98091f };
		*uParam2 = { 1394.412f, 3607.156f, 36.38288f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3041.675f, 583.5931f, 6.908931f };
		*uParam2 = { -3037.284f, 585.0375f, 9.521532f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3245.184f, 1000.124f, 11.83071f };
		*uParam2 = { -3240.504f, 999.7783f, 14.46645f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 549.5332f, 2668.464f, 41.15651f };
		*uParam2 = { 548.9114f, 2673.108f, 43.7766f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2554.316f, 380.8569f, 107.623f };
		*uParam2 = { 2558.98f, 380.6908f, 110.2684f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2675.476f, 3280.807f, 54.24115f };
		*uParam2 = { 2679.577f, 3278.526f, 56.8955f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1729.145f, 6417.834f, 34.03724f };
		*uParam2 = { 1727.07f, 6413.635f, 36.66442f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1958.61f, 3742.512f, 31.34376f };
		*uParam2 = { 1960.958f, 3738.465f, 33.98634f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 24.51093f, -1344.449f, 28.49703f };
		*uParam2 = { 24.52224f, -1349.084f, 31.14272f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 373.296f, 329.2379f, 102.5664f };
		*uParam2 = { 372.1347f, 324.6985f, 105.214f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1168.183f, 2711.203f, 37.06316f };
		*uParam2 = { 1163.144f, 2711.246f, 40.16688f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2966.142f, 388.6418f, 14.04331f };
		*uParam2 = { -2965.812f, 393.6473f, 17.17248f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1223.599f, -909.8984f, 11.32635f };
		*uParam2 = { -1219.443f, -907.0756f, 14.45929f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.524f, -980.3087f, 45.41582f };
		*uParam2 = { 1134.22f, -985.284f, 48.53235f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.413f, -379.3236f, 39.16341f };
		*uParam2 = { -1487.954f, -375.7666f, 42.28885f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1699.447f, 4921.57f, 41.06366f };
		*uParam2 = { 1695.64f, 4924.245f, 44.22165f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -705.7869f, -911.6997f, 18.2156f };
		*uParam2 = { -705.7026f, -916.374f, 21.33545f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.26995f, -1756.669f, 28.42101f };
		*uParam2 = { -48.26036f, -1760.285f, 31.56342f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1164.697f, -320.7587f, 68.2051f };
		*uParam2 = { 1165.463f, -325.0899f, 71.37893f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1821.205f, 795.8699f, 137.0893f };
		*uParam2 = { -1818.041f, 792.3982f, 140.1836f };
		*fParam3 = 2.25f;
	}
}

void func_151(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_153(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17238.f_7207)
	{
		unk_0x2F2EE906A0CF46A3(15);
		Global_17238.f_7207 = 0;
	}
	unk_0x1F4FE6D0BB9E338B(0f);
	if (Global_17238.f_4886[iVar0])
	{
		unk_0x3D3D5DB8C3B816AF(9, 0);
		Global_17238.f_4886[iVar0] = 0;
	}
	if (Global_17238.f_4879[iVar0])
	{
		unk_0x4A79FCCDF915C20B("CommonMenu");
		Global_17238.f_4879[iVar0] = 0;
	}
	if (bParam0)
	{
		func_152(&(Global_17238.f_4918[iVar0 /*10*/]));
		Global_17238.f_4979[iVar0] = 0;
	}
	else
	{
		Global_17238.f_4979[iVar0] = 0;
	}
}

void func_152(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xC8378A96673BCC40(*uParam0))
		{
			unk_0x7559DFAB61B017F2(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_153(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x1DAD7CE53BEE7710() && unk_0x93C72DAC35C5D38C())
		{
			iParam2 = unk_0x2302EAFD9CA5D9DC();
		}
	}
	StringCopy(&cVar0, unk_0x7E5A426328F6E635(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xB793F1A0B6CC4AE1(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17238.f_4979[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17238.f_4979[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17238.f_4979[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

bool func_154(char* sParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_153(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17238.f_4893[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x06771AF7795B3ECF(&(Global_17238.f_4893[iVar0 /*4*/])))
	{
		unk_0x95AB598E6554985B(&(Global_17238.f_4893[iVar0 /*4*/]), 9);
		Global_17238.f_4886[iVar0] = 1;
		if (!unk_0xB1ED4163AEBBDE95(&(Global_17238.f_4893[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x52964052BC489DDD("CommonMenu", 0);
	Global_17238.f_4879[iVar0] = 1;
	if (!unk_0xDC8071F347A8DD3F("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_17238.f_4918[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_155(&(Global_17238.f_4918[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_155(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xC8378A96673BCC40(*uParam0))
			{
				*uParam0 = unk_0x36ECDA4DD9A3F08D(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xC8378A96673BCC40(*uParam0))
					{
						uParam0->f_8 = unk_0x09560C7DE2A384BD();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x09560C7DE2A384BD();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xC8378A96673BCC40(*uParam0))
			{
				uParam0->f_8 = unk_0x09560C7DE2A384BD();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xC8378A96673BCC40(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_156()
{
	if (unk_0x1788E93557766241() != Global_2446992.f_4624)
	{
		if (!unk_0x889D01384B54BCE3(iLocal_535, 24))
		{
			if (Local_141.f_72 == unk_0x1788E93557766241() || (unk_0x889D01384B54BCE3(iLocal_535, 31) && unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_590, 20f, 20f, 20f, 0, 1, 0)))
			{
				if (func_351(Local_141.f_1))
				{
					unk_0xD7A7E942CB6FFB85(unk_0x1788E93557766241(), 13, unk_0xF182CA32D6388B28(3));
					unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 24);
					if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 1))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 2);
					}
				}
			}
		}
	}
}

int func_157()
{
	if (!unk_0x889D01384B54BCE3(Local_141.f_14, 0))
	{
		return 0;
	}
	if (func_351(Local_141.f_4))
	{
		if (unk_0x5660C8AFDD9C1721(uLocal_797))
		{
			unk_0xB6FB9702660D84F6(&uLocal_797);
		}
		return 0;
	}
	if (Local_141.f_58 == 4)
	{
		if (!unk_0x5660C8AFDD9C1721(uLocal_797))
		{
			uLocal_797 = unk_0xDF78B7F06503567E(unk_0x7A16A8A755F44481(Local_141.f_4));
			unk_0x1AD45E3CF020D50D(uLocal_797, 1);
			unk_0xBE97A5A41C1F5C4C(uLocal_797, 0.7f);
		}
	}
	if (!unk_0x428E17610BCE75C2(Local_141.f_4))
	{
		return 0;
	}
	switch (Local_141.f_58)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_4), 713668775) != 0)
			{
				if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_4), 713668775) != 1)
				{
					if (func_375(unk_0x1788E93557766241(), 1, 1))
					{
						unk_0xF3B924DCFDECDB4B(unk_0x7A16A8A755F44481(Local_141.f_4), unk_0xA16EC202D9D35357(), -1, 4f, 2f, 1073741824, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x889D01384B54BCE3(Local_141.f_14, 5) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_2, 0))
			{
				if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_4), 1227113341) != 0 && unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_4), 1227113341) != 1)
				{
					unk_0x1CAB36EC4E43E586(unk_0x7A16A8A755F44481(Local_141.f_4), unk_0xA16EC202D9D35357(), 10000);
					unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_2), 0);
				}
			}
			if ((!unk_0x889D01384B54BCE3(Local_141.f_14, 6) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_2, 1)) && !func_158())
			{
				func_350(&uLocal_604, 4, unk_0x7A16A8A755F44481(Local_141.f_4), "StoreHero", 1, 0);
				unk_0xD550A19A432377FF(unk_0x7A16A8A755F44481(Local_141.f_4), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_2), 1);
			}
			break;
		
		case 4:
			if ((!unk_0x889D01384B54BCE3(Local_141.f_14, 7) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_2, 2)) && !func_158())
			{
				func_350(&uLocal_604, 4, unk_0x7A16A8A755F44481(Local_141.f_4), "StoreHero", 1, 0);
				unk_0xD550A19A432377FF(unk_0x7A16A8A755F44481(Local_141.f_4), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_2), 2);
			}
			if (unk_0x889D01384B54BCE3(Local_141.f_14, 7) || unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_2, 2))
			{
				if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_4), -1442466670) != 0 && unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_4), -1442466670) != 1)
				{
					unk_0x937785D9C1929236(unk_0x7A16A8A755F44481(Local_141.f_4));
					unk_0xA9465591B42213AE(unk_0x7A16A8A755F44481(Local_141.f_4), Global_1574086);
					unk_0x28F7FDF6BC8BA514(unk_0x7A16A8A755F44481(Local_141.f_4), 20f, 0);
					unk_0x2686393074E14730(unk_0x7A16A8A755F44481(Local_141.f_4), 1);
				}
			}
			break;
		
		case 5:
			if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_4), 242628503) != 0 && unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_4), 242628503) != 1)
			{
				unk_0x937785D9C1929236(unk_0x7A16A8A755F44481(Local_141.f_4));
				unk_0x0891776D0327B77A(unk_0x7A16A8A755F44481(Local_141.f_4), uLocal_556);
				unk_0x2686393074E14730(unk_0x7A16A8A755F44481(Local_141.f_4), 1);
			}
			else if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_4), -875674219) != 1 && unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_4), -875674219) != 0)
			{
				if (func_17(&uLocal_576, 5000, 0))
				{
					func_13(&uLocal_576);
					unk_0x1CAB36EC4E43E586(unk_0x7A16A8A755F44481(Local_141.f_4), unk_0xA16EC202D9D35357(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_158()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

void func_159()
{
	if (Local_141.f_36 == 4)
	{
		if ((!unk_0x889D01384B54BCE3(Local_141.f_12, 10) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 4)) && unk_0x889D01384B54BCE3(Local_141.f_12, 17))
		{
			if (unk_0x86CB59A6776A7C27(Local_141.f_2))
			{
				if (unk_0x428E17610BCE75C2(Local_141.f_2) || (!unk_0x3D7D0EF6EB39605F(Local_141.f_2) && unk_0xE9849174628A9C50()))
				{
					if (!func_351(Local_141.f_1))
					{
						if (unk_0xEAABEAE1DB589285(unk_0x7A16A8A755F44481(Local_141.f_1)))
						{
							unk_0x6A23C3306A8CF21B(unk_0x9198B14217D71938(Local_141.f_2), true, 0);
							unk_0xC3C39B8BA6AC5807(unk_0x9198B14217D71938(Local_141.f_2), 1);
							unk_0x9A8988482828F78C(unk_0x9198B14217D71938(Local_141.f_2), 0f, 0f, -1f);
							unk_0x778B0968F902CF72(unk_0x7A16A8A755F44481(Local_141.f_1), 16);
							unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 4);
						}
					}
					else
					{
						unk_0x6A23C3306A8CF21B(unk_0x9198B14217D71938(Local_141.f_2), true, 0);
						unk_0xC3C39B8BA6AC5807(unk_0x9198B14217D71938(Local_141.f_2), 1);
						unk_0x9A8988482828F78C(unk_0x9198B14217D71938(Local_141.f_2), 0f, 0f, -1f);
						unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 4);
					}
				}
			}
		}
	}
	func_160();
}

void func_160()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x86CB59A6776A7C27(Local_141.f_2))
	{
		if (!unk_0xE44A580B551C3645(unk_0x9198B14217D71938(Local_141.f_2)))
		{
			if ((!unk_0x889D01384B54BCE3(Local_141.f_12, 11) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 5)) && Local_141.f_28 > 0f)
			{
				if (((func_183() || func_182(0.87f)) || Local_141.f_36 >= 5) || unk_0x889D01384B54BCE3(Local_141.f_12, 10))
				{
					if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 11))
					{
						if (unk_0x428E17610BCE75C2(Local_141.f_2))
						{
							unk_0xAA427204912D494B(unk_0x9198B14217D71938(Local_141.f_2), 0, 0);
							unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 13);
						}
						unk_0x22ECB2536E15FBE0(func_374(1), 1);
						unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 11);
					}
					if (unk_0x59F7AAEE0CBA2C9F(unk_0x9198B14217D71938(Local_141.f_2), unk_0xA16EC202D9D35357()))
					{
						Local_214[unk_0x044A481E863E2F6B() /*10*/].f_7 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
						unk_0x21B0D803C4C9C45E(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_7, &(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_7.f_2), 0);
						if (unk_0x428E17610BCE75C2(Local_141.f_2))
						{
							unk_0xBF1AB1205B822518(unk_0x9198B14217D71938(Local_141.f_2), 1, 1);
							func_44(&(Local_141.f_2));
						}
						iVar0 = unk_0x444ECD635D5FD45F(iLocal_573, iLocal_574);
						if (unk_0x889D01384B54BCE3(Local_141.f_12, 10))
						{
							iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Local_141.f_28));
						}
						if (Local_141.f_63 > 1000)
						{
							Local_141.f_63 = 1000;
						}
						iVar0 = (iVar0 + Local_141.f_63);
						iVar0 = func_181(iVar0, 1);
						if (iVar0 > Global_262145.f_148)
						{
							iVar0 = Global_262145.f_148;
						}
						if (func_180(unk_0x1788E93557766241()) && func_178(func_179(unk_0x1788E93557766241())) < 1f)
						{
							if (Global_262145.f_4205 > 1f)
							{
								Global_262145.f_4205 = 1f;
							}
							iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4205));
						}
						if (func_372())
						{
							func_177(1734805203, iVar0, &uVar1, 0, 0);
						}
						else
						{
							func_173(iVar0, 1, 1, 1092616192);
							unk_0x1D381F39045E63E6(iVar0);
						}
						iLocal_799 = (iLocal_799 + iVar0);
						func_172(3);
						if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 5))
						{
							func_171(Local_141.f_29, iVar0);
						}
						else
						{
							func_162(unk_0xA16EC202D9D35357(), iVar0);
						}
						func_161(1, iVar0);
						unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 5);
					}
				}
			}
		}
	}
}

void func_161(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2446992.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4932)
		{
			iParam1 = Global_262145.f_4932;
		}
		Global_2446992.f_270 = iParam1;
		Global_2446992.f_271 = 0;
	}
}

void func_162(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { func_169(unk_0xA16EC202D9D35357(), 1) };
	if (iParam0 == func_168(unk_0xA16EC202D9D35357()))
	{
		func_167(1);
	}
	func_163(Var0, iParam1, 7, 0);
}

void func_163(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2422491.f_739[iVar0 /*29*/].f_6 == 0 || Global_2422491.f_739[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2422491.f_739[iVar1 /*29*/] = { Param0 };
			Global_2422491.f_739[iVar1 /*29*/].f_6 = 1;
			Global_2422491.f_739[iVar1 /*29*/].f_4 = func_166(Global_2422491.f_739[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2422491.f_739[iVar1 /*29*/].f_7 = unk_0x519586565311459B();
			Global_2422491.f_739[iVar1 /*29*/].f_3 = iParam3;
			Global_2422491.f_739[iVar1 /*29*/].f_8 = iParam4;
			Global_2422491.f_739[iVar1 /*29*/].f_9 = func_165();
			Global_2422491.f_739[iVar1 /*29*/].f_10 = func_164();
			StringCopy(&(Global_2422491.f_739[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_164()
{
	if (Global_2422491.f_1320)
	{
		Global_2422491.f_1320 = 0;
		return 1;
	}
	Global_2422491.f_1320 = 0;
	return 0;
}

var func_165()
{
	var uVar0;
	
	uVar0 = Global_2422491.f_1322;
	Global_2422491.f_1322 = 1;
	return uVar0;
}

float func_166(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x4970185D4CC64616(unk_0x8F759040B8D528AF(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

void func_167(int iParam0)
{
	Global_2422491.f_1320 = iParam0;
}

int func_168(int iParam0)
{
	return iParam0;
}

Vector3 func_169(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_170(unk_0xA16EC202D9D35357()) && unk_0x95AD511976EEFC6B(unk_0x862704CFD32408F9()) == 4)
	{
		Var0 = { unk_0xA783C6007920169C(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		fVar3 = unk_0xD1613577C809E98B(iParam0);
	}
	unk_0xD7CB63D07AABC54F(unk_0xA609E58449080951(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_170(var uParam0)
{
	return uParam0;
}

void func_171(struct<3> Param0, int iParam3)
{
	func_163(Param0, iParam3, 6, 0);
}

void func_172(int iParam0)
{
	Global_2422491.f_1322 = iParam0;
}

void func_173(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_174(iParam0, iParam1, iParam2, fParam3);
}

void func_174(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_175(iParam0, iParam1, iParam2, fParam3);
}

void func_175(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = unk_0xF34EE736CF047844((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_4 = iVar1;
	Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_3 = (Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_176(iVar1, 0);
	}
}

void func_176(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_177(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_372())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
			if (iParam1 > 0)
			{
				func_369(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
			func_369(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

float func_178(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0f;
		
		case 144:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1602607[iVar0 /*12*/];
	}
	return -1;
}

int func_180(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1602607[iVar0 /*12*/] != -1;
	}
	return 0;
}

int func_181(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(iParam0) * Global_262145);
				iParam0 = unk_0xF2DB717A73826179(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_182(float fParam0)
{
	iLocal_547 = unk_0xC49FDF2081B5FE27(Local_141.f_20);
	if (iLocal_547 >= 0)
	{
		if (unk_0xCFC5CE3AD496DA0B(iLocal_547))
		{
			if (unk_0x0DF89B3B1CF0FDC1(iLocal_547) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_183()
{
	iLocal_547 = unk_0xC49FDF2081B5FE27(Local_141.f_20);
	if (iLocal_547 >= 0)
	{
		if (unk_0xCFC5CE3AD496DA0B(iLocal_547))
		{
			if (unk_0x0DF89B3B1CF0FDC1(iLocal_547) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_184()
{
	func_185();
}

int func_185()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x428E17610BCE75C2(Local_141.f_1))
	{
		return 0;
	}
	if (func_351(Local_141.f_1))
	{
		if (!unk_0x889D01384B54BCE3(iLocal_536, 3))
		{
			unk_0xC645CDA4EE3EECBC(unk_0x7A16A8A755F44481(Local_141.f_1));
			unk_0xD0E2BFCE93AE3ABD(&iLocal_536, 3);
		}
		return 0;
	}
	switch (Local_141.f_36)
	{
		case 0:
			unk_0x117411595F7E531A(unk_0x7A16A8A755F44481(Local_141.f_1), 71, 1);
			break;
		
		case 1:
			if (!unk_0x889D01384B54BCE3(Local_141.f_12, 4) && !unk_0x889D01384B54BCE3(Local_141.f_12, 12))
			{
				if (unk_0x889D01384B54BCE3(Local_141.f_12, 13))
				{
					if (!unk_0x889D01384B54BCE3(iLocal_535, 17))
					{
						unk_0x778B0968F902CF72(unk_0x7A16A8A755F44481(Local_141.f_1), 16);
						unk_0x4745F9C50C63A48C(unk_0x7A16A8A755F44481(Local_141.f_1), unk_0xA16EC202D9D35357(), -1, 0, 2);
						if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
						{
							func_192(10);
						}
						else if (unk_0x889D01384B54BCE3(Local_141.f_13, 0))
						{
							if (!unk_0x889D01384B54BCE3(Local_141.f_13, 11))
							{
								if (!unk_0x889D01384B54BCE3(Local_141.f_13, 12))
								{
									func_192(13);
								}
								else
								{
									func_192(20);
								}
							}
							else
							{
								func_192(17);
							}
							unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 25);
						}
						else if (!unk_0x889D01384B54BCE3(Local_141.f_13, 11))
						{
							if (!unk_0x889D01384B54BCE3(Local_141.f_13, 12))
							{
								func_192(0);
							}
							else
							{
								func_192(18);
							}
						}
						else
						{
							func_192(15);
						}
						unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 17);
					}
					else if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_1), -875674219) != 1 && unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_1), -875674219) != 0)
					{
						if (func_17(&uLocal_576, 5000, 0))
						{
							func_13(&uLocal_576);
							if (!iLocal_537)
							{
								unk_0x1CAB36EC4E43E586(unk_0x7A16A8A755F44481(Local_141.f_1), unk_0xA16EC202D9D35357(), 10000);
							}
							unk_0x4745F9C50C63A48C(unk_0x7A16A8A755F44481(Local_141.f_1), unk_0xA16EC202D9D35357(), -1, 0, 2);
						}
					}
				}
			}
			unk_0x117411595F7E531A(unk_0x7A16A8A755F44481(Local_141.f_1), 71, 1);
			break;
		
		case 2:
			if (!unk_0x889D01384B54BCE3(Local_141.f_12, 7) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 0))
			{
				uVar1 = unk_0xA16EC202D9D35357();
				if (Local_141.f_23 > -1)
				{
					if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(Local_141.f_23)))
					{
						iVar0 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(Local_141.f_23));
						uVar1 = unk_0xFF34D923BFB5E9FB(iVar0);
					}
				}
				if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					unk_0x4745F9C50C63A48C(unk_0x7A16A8A755F44481(Local_141.f_1), uVar1, -1, 0, 2);
					unk_0x778B0968F902CF72(unk_0x7A16A8A755F44481(Local_141.f_1), 16);
					unk_0x5B5659C49032B96C(unk_0x7A16A8A755F44481(Local_141.f_1), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, -1, 49, 0, 0, 0, 0);
					unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 0);
				}
			}
			else if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_1), -875674219) != 1 && unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_1), -875674219) != 0)
			{
				if (func_17(&uLocal_576, 5000, 0))
				{
					iVar1 = unk_0xA16EC202D9D35357();
					if (Local_141.f_23 > -1)
					{
						if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(Local_141.f_23)))
						{
							iVar0 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(Local_141.f_23));
							iVar1 = unk_0xFF34D923BFB5E9FB(iVar0);
						}
					}
					func_13(&uLocal_576);
					unk_0x1CAB36EC4E43E586(unk_0x7A16A8A755F44481(Local_141.f_1), iVar1, 10000);
					unk_0x4745F9C50C63A48C(unk_0x7A16A8A755F44481(Local_141.f_1), iVar1, -1, 0, 2);
				}
			}
			if (unk_0x889D01384B54BCE3(Local_141.f_12, 16))
			{
				unk_0x778B0968F902CF72(unk_0x7A16A8A755F44481(Local_141.f_1), 16);
			}
			unk_0x117411595F7E531A(unk_0x7A16A8A755F44481(Local_141.f_1), 71, 1);
			break;
		
		case 3:
			if (!unk_0x889D01384B54BCE3(iLocal_535, 25))
			{
				if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_1), 1920390111) != 0 && unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_1), 1920390111) != 1)
				{
					unk_0x2686393074E14730(unk_0x7A16A8A755F44481(Local_141.f_1), 1);
					unk_0xDEB0A02F25120B62(unk_0x7A16A8A755F44481(Local_141.f_1), 2, 0);
					unk_0xDEB0A02F25120B62(unk_0x7A16A8A755F44481(Local_141.f_1), 8, 1);
					unk_0xDEB0A02F25120B62(unk_0x7A16A8A755F44481(Local_141.f_1), 16, 1);
					unk_0x778B0968F902CF72(unk_0x7A16A8A755F44481(Local_141.f_1), 16);
					unk_0x4341FCA05D2E4938(unk_0x7A16A8A755F44481(Local_141.f_1), Local_141.f_33, -1);
					unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 25);
				}
			}
			break;
		
		case 4:
			if (!unk_0x889D01384B54BCE3(Local_141.f_12, 17) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 3))
			{
				if (unk_0xE9849174628A9C50())
				{
					Global_2446992.f_8 = 1;
				}
				uVar2 = unk_0xA16EC202D9D35357();
				if (Global_2446992.f_9 != func_191())
				{
					if (func_375(Global_2446992.f_9, 1, 1))
					{
						uVar2 = unk_0xFF34D923BFB5E9FB(Global_2446992.f_9);
					}
				}
				unk_0x4745F9C50C63A48C(unk_0x7A16A8A755F44481(Local_141.f_1), uVar2, 30000, 0, 3);
				unk_0xBEB7C924FCBF3C50(unk_0x7A16A8A755F44481(Local_141.f_1), "mood_stressed_1", 0);
				unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 3);
			}
			else
			{
				iLocal_547 = unk_0xC49FDF2081B5FE27(Local_141.f_20);
				if (iLocal_547 >= 0)
				{
					if (unk_0xCFC5CE3AD496DA0B(iLocal_547))
					{
						fLocal_782 = (Local_141.f_24 + 0.6f);
						if (fLocal_782 < 0.75f)
						{
							fLocal_782 = 0.75f;
						}
						if (unk_0x889D01384B54BCE3(Local_141.f_13, 4))
						{
							fLocal_782 = (fLocal_782 + 0.25f);
						}
						if (fLocal_782 > 1.75f)
						{
							fLocal_782 = 1.75f;
						}
						unk_0x3FE6A7FDB9B13D87(iLocal_547, fLocal_782);
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 10))
			{
				if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_1), 242628503) != 0 && unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_1), 242628503) != 1)
				{
					if (!unk_0xEAABEAE1DB589285(unk_0x7A16A8A755F44481(Local_141.f_1)))
					{
						iLocal_547 = unk_0xC49FDF2081B5FE27(Local_141.f_20);
						if ((iLocal_547 >= 0 && !unk_0xCFC5CE3AD496DA0B(iLocal_547)) || iLocal_547 < 0)
						{
							unk_0x0891776D0327B77A(unk_0x7A16A8A755F44481(Local_141.f_1), uLocal_556);
							unk_0x778B0968F902CF72(unk_0x7A16A8A755F44481(Local_141.f_1), 16);
							unk_0x2686393074E14730(unk_0x7A16A8A755F44481(Local_141.f_1), 1);
							unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 10);
						}
					}
				}
			}
			else if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_1), -875674219) != 1 && unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_1), -875674219) != 0)
			{
				if (func_17(&uLocal_576, 5000, 0))
				{
					func_13(&uLocal_576);
					iVar1 = unk_0xA16EC202D9D35357();
					if (Local_141.f_23 > -1)
					{
						if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(Local_141.f_23)))
						{
							iVar0 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(Local_141.f_23));
							iVar1 = unk_0xFF34D923BFB5E9FB(iVar0);
						}
					}
					unk_0x1CAB36EC4E43E586(unk_0x7A16A8A755F44481(Local_141.f_1), iVar1, 10000);
					unk_0x4745F9C50C63A48C(unk_0x7A16A8A755F44481(Local_141.f_1), unk_0xA16EC202D9D35357(), -1, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 10))
			{
				if ((iLocal_547 < 0 || !unk_0xCFC5CE3AD496DA0B(iLocal_547)) || unk_0x0DF89B3B1CF0FDC1(iLocal_547) >= 0.95f)
				{
					func_190();
					iVar1 = unk_0xA16EC202D9D35357();
					if (Local_141.f_23 > -1)
					{
						if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(Local_141.f_23)))
						{
							iVar0 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(Local_141.f_23));
							iVar1 = unk_0xFF34D923BFB5E9FB(iVar0);
						}
					}
					unk_0xE3E2D9DEE27396C5(unk_0x7A16A8A755F44481(Local_141.f_1), -1, iVar1, -1, 1);
					unk_0x30D76463BF50C618(unk_0x7A16A8A755F44481(Local_141.f_1), 0, 0);
					unk_0x778B0968F902CF72(unk_0x7A16A8A755F44481(Local_141.f_1), 16);
					unk_0x2686393074E14730(unk_0x7A16A8A755F44481(Local_141.f_1), 1);
					unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 10);
				}
			}
			break;
		
		case 7:
			if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_1), -1442466670) != 0 && unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_1), -1442466670) != 1)
			{
				if (!func_158())
				{
					func_189();
					unk_0x937785D9C1929236(unk_0x7A16A8A755F44481(Local_141.f_1));
					unk_0x28F7FDF6BC8BA514(unk_0x7A16A8A755F44481(Local_141.f_1), 20f, 0);
					func_192(4);
				}
			}
			break;
		
		case 8:
			if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 9))
			{
				func_190();
				iLocal_547 = unk_0xC49FDF2081B5FE27(Local_141.f_20);
				if ((iLocal_547 >= 0 && !unk_0xCFC5CE3AD496DA0B(iLocal_547)) || iLocal_547 < 0)
				{
					if ((!unk_0x889D01384B54BCE3(Local_141.f_12, 27) && !func_36()) && !func_35())
					{
						if (unk_0x889D01384B54BCE3(Local_141.f_13, 2))
						{
							if (!unk_0x889D01384B54BCE3(Local_141.f_13, 3))
							{
								unk_0x0891776D0327B77A(unk_0x7A16A8A755F44481(Local_141.f_1), uLocal_558);
								iVar3 = 1;
							}
							else
							{
								func_189();
								unk_0x0891776D0327B77A(unk_0x7A16A8A755F44481(Local_141.f_1), uLocal_559);
								iVar3 = 1;
							}
						}
					}
					else
					{
						unk_0x0676D83B2FE460E1(unk_0x7A16A8A755F44481(Local_141.f_1), Local_543, 250f, -1, 1, 0);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_192(25);
						unk_0x2686393074E14730(unk_0x7A16A8A755F44481(Local_141.f_1), 1);
						func_6(iLocal_769, 1, func_7());
						unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 9);
					}
				}
			}
			else if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 19))
			{
				iVar4 = unk_0x59F687939B212878(unk_0x7A16A8A755F44481(Local_141.f_1));
				if (iVar4 == 3)
				{
					unk_0x2A6FA367FED380C2(unk_0x7A16A8A755F44481(Local_141.f_1));
					unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 19);
				}
				else if (iVar4 == 2)
				{
					unk_0x937785D9C1929236(unk_0x7A16A8A755F44481(Local_141.f_1));
					if (!unk_0x889D01384B54BCE3(Local_141.f_13, 3))
					{
						unk_0x0891776D0327B77A(unk_0x7A16A8A755F44481(Local_141.f_1), uLocal_560);
					}
					else
					{
						unk_0x28F7FDF6BC8BA514(unk_0x7A16A8A755F44481(Local_141.f_1), 20f, 0);
					}
					unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 19);
				}
			}
			break;
	}
	func_186();
	return 1;
}

void func_186()
{
	if ((Local_141.f_36 != 8 && Local_141.f_36 != 7) && Local_141.f_18 == 3)
	{
		if ((((!unk_0x889D01384B54BCE3(Local_141.f_12, 14) || !unk_0x889D01384B54BCE3(Local_141.f_12, 15)) || !unk_0x889D01384B54BCE3(Local_141.f_12, 22)) || !unk_0x889D01384B54BCE3(Local_141.f_12, 23)) || !unk_0x889D01384B54BCE3(Local_141.f_12, 30))
		{
			iLocal_547 = unk_0xC49FDF2081B5FE27(Local_141.f_20);
			if (iLocal_547 >= 0)
			{
				if (unk_0xCFC5CE3AD496DA0B(iLocal_547))
				{
					if (!func_158())
					{
						if (!unk_0x889D01384B54BCE3(Local_141.f_12, 14) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 6))
						{
							func_192(2);
							unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 6);
						}
						if (!unk_0x889D01384B54BCE3(Local_141.f_12, 15) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 7))
						{
							if (unk_0x0DF89B3B1CF0FDC1(iLocal_547) > 0.87f)
							{
								func_192(3);
								unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 7);
							}
						}
						if (!unk_0x889D01384B54BCE3(Local_141.f_12, 22) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 22))
						{
							if (unk_0x889D01384B54BCE3(Local_141.f_12, 24) && !func_158())
							{
								func_192(11);
								unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 22);
							}
						}
						if (!unk_0x889D01384B54BCE3(Local_141.f_12, 23) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 23))
						{
							if (unk_0x889D01384B54BCE3(Local_141.f_12, 25) && !func_158())
							{
								func_192(12);
								unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 23);
							}
						}
					}
				}
			}
		}
		if (!unk_0x889D01384B54BCE3(Local_141.f_12, 9))
		{
			if (!unk_0x889D01384B54BCE3(Local_141.f_12, 26) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 24))
			{
				if (unk_0x889D01384B54BCE3(Local_141.f_12, 7))
				{
					if (!func_158())
					{
						if (!unk_0x889D01384B54BCE3(Local_141.f_13, 11))
						{
							if (!unk_0x889D01384B54BCE3(Local_141.f_13, 12))
							{
								func_192(1);
							}
							else
							{
								func_192(19);
							}
						}
						else
						{
							func_192(16);
						}
						unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 24);
						return;
					}
					else
					{
						func_187();
						return;
					}
				}
			}
			if (((!unk_0x889D01384B54BCE3(Local_141.f_12, 30) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 25)) && !unk_0x889D01384B54BCE3(Local_141.f_12, 7)) && !unk_0x889D01384B54BCE3(Local_141.f_12, 4))
			{
				if (unk_0x889D01384B54BCE3(Local_141.f_13, 0) && !func_158())
				{
					if ((unk_0x889D01384B54BCE3(Local_141.f_12, 7) && unk_0x889D01384B54BCE3(Local_141.f_12, 4)) || (!unk_0x889D01384B54BCE3(Local_141.f_12, 7) && !unk_0x889D01384B54BCE3(Local_141.f_12, 4)))
					{
						if (!unk_0x889D01384B54BCE3(Local_141.f_13, 11))
						{
							if (!unk_0x889D01384B54BCE3(Local_141.f_13, 12))
							{
								func_192(13);
							}
							else
							{
								func_192(20);
							}
						}
						else
						{
							func_192(17);
						}
						unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 25);
						return;
					}
				}
			}
			if (!unk_0x889D01384B54BCE3(Local_141.f_12, 31) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 26))
			{
				if (unk_0x889D01384B54BCE3(Local_141.f_13, 1) && !func_158())
				{
					func_192(14);
					unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 26);
					return;
				}
			}
			if (!unk_0x889D01384B54BCE3(Local_141.f_13, 9) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 31))
			{
				if (unk_0x889D01384B54BCE3(Local_141.f_13, 8) && !func_158())
				{
					func_192(22);
					unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 31);
					return;
				}
			}
			if (!unk_0x889D01384B54BCE3(Local_141.f_15, 3) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3, 3))
			{
				if (unk_0x889D01384B54BCE3(Local_141.f_15, 2) && !func_158())
				{
					func_192(24);
					unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3), 3);
					return;
				}
			}
			if (!unk_0x889D01384B54BCE3(Local_141.f_13, 14) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 20))
			{
				if (unk_0x889D01384B54BCE3(Local_141.f_13, 13) && !func_158())
				{
					func_192(23);
					unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 20);
					return;
				}
			}
		}
	}
	if (!unk_0x889D01384B54BCE3(Local_141.f_13, 6) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 29))
	{
		if (unk_0x889D01384B54BCE3(Local_141.f_13, 5))
		{
			if (!func_158())
			{
				func_192(21);
				unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 29);
				return;
			}
		}
	}
}

void func_187()
{
	Global_14559 = 0;
	func_188();
}

void func_188()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
	}
}

void func_189()
{
	int iVar0;
	
	iVar0 = unk_0x444ECD635D5FD45F(0, 12);
	if (iVar0 < 3)
	{
		unk_0x37BEBD1D516179CF(unk_0x7A16A8A755F44481(Local_141.f_1), joaat("weapon_pistol"), 25000, 0);
		unk_0xE97E86766A24F0FA(unk_0x7A16A8A755F44481(Local_141.f_1), unk_0x444ECD635D5FD45F(10, 35));
	}
	else if (iVar0 < 6)
	{
		unk_0x37BEBD1D516179CF(unk_0x7A16A8A755F44481(Local_141.f_1), joaat("weapon_combatpistol"), 25000, 0);
		unk_0xE97E86766A24F0FA(unk_0x7A16A8A755F44481(Local_141.f_1), unk_0x444ECD635D5FD45F(15, 40));
	}
	else if (iVar0 == 6)
	{
		unk_0x37BEBD1D516179CF(unk_0x7A16A8A755F44481(Local_141.f_1), joaat("weapon_microsmg"), 25000, 0);
		unk_0xE97E86766A24F0FA(unk_0x7A16A8A755F44481(Local_141.f_1), unk_0x444ECD635D5FD45F(10, 25));
	}
	else if (iVar0 == 7)
	{
		unk_0x37BEBD1D516179CF(unk_0x7A16A8A755F44481(Local_141.f_1), joaat("weapon_combatmg"), 25000, 0);
		unk_0xE97E86766A24F0FA(unk_0x7A16A8A755F44481(Local_141.f_1), unk_0x444ECD635D5FD45F(5, 15));
	}
	else if (iVar0 == 8)
	{
		unk_0x37BEBD1D516179CF(unk_0x7A16A8A755F44481(Local_141.f_1), joaat("weapon_bat"), 25000, 0);
		unk_0xE97E86766A24F0FA(unk_0x7A16A8A755F44481(Local_141.f_1), unk_0x444ECD635D5FD45F(20, 40));
	}
	else if (iVar0 == 9)
	{
		unk_0x37BEBD1D516179CF(unk_0x7A16A8A755F44481(Local_141.f_1), joaat("weapon_assaultrifle"), 25000, 0);
		unk_0xE97E86766A24F0FA(unk_0x7A16A8A755F44481(Local_141.f_1), unk_0x444ECD635D5FD45F(5, 30));
	}
	else if (iVar0 == 10)
	{
		unk_0x37BEBD1D516179CF(unk_0x7A16A8A755F44481(Local_141.f_1), joaat("weapon_sawnoffshotgun"), 25000, 0);
		unk_0xE97E86766A24F0FA(unk_0x7A16A8A755F44481(Local_141.f_1), unk_0x444ECD635D5FD45F(5, 20));
	}
	else
	{
		unk_0x37BEBD1D516179CF(unk_0x7A16A8A755F44481(Local_141.f_1), joaat("weapon_pumpshotgun"), 25000, 0);
		unk_0xE97E86766A24F0FA(unk_0x7A16A8A755F44481(Local_141.f_1), unk_0x444ECD635D5FD45F(10, 25));
	}
	func_6(iLocal_769, 1, func_7());
	unk_0xA9465591B42213AE(unk_0x7A16A8A755F44481(Local_141.f_1), Global_1574086);
	unk_0x0BE10D97E4F82D1F(unk_0x7A16A8A755F44481(Local_141.f_1), 1);
	unk_0x59FF47176A212235(unk_0x7A16A8A755F44481(Local_141.f_1), 1);
	unk_0xE5F54904AB00D1C1(unk_0x7A16A8A755F44481(Local_141.f_1), Local_540, 20f, 0, 0);
	unk_0x2686393074E14730(unk_0x7A16A8A755F44481(Local_141.f_1), 1);
}

void func_190()
{
	iLocal_547 = unk_0xC49FDF2081B5FE27(Local_141.f_20);
	if (iLocal_547 >= 0)
	{
		if (unk_0xCFC5CE3AD496DA0B(iLocal_547))
		{
			unk_0x0EE6047392209805(Local_141.f_20);
		}
	}
}

int func_191()
{
	return -1;
}

void func_192(int iParam0)
{
	struct<2> Var0;
	int iVar4;
	
	if (unk_0x889D01384B54BCE3(Local_141.f_12, 13))
	{
		if (!func_351(Local_141.f_1))
		{
			if (unk_0x428E17610BCE75C2(Local_141.f_1) || (!unk_0x3D7D0EF6EB39605F(Local_141.f_1) && unk_0xE9849174628A9C50()))
			{
				if (!unk_0xEAABEAE1DB589285(unk_0x7A16A8A755F44481(Local_141.f_1)))
				{
					if (Local_141.f_37 == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_141.f_37 == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_141.f_22, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (unk_0x9BA82E09A986BA4B(&Var0, "RB_SH241"))
					{
						if (unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar4, 1))
						{
							if ((((((iVar4 == joaat("weapon_unarmed") || iVar4 == 0) || iVar4 == joaat("object")) || iVar4 == joaat("weapon_flare")) || iVar4 == joaat("weapon_snowball")) || func_210(iVar4)) || func_209(iVar4))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_350(&uLocal_604, 3, unk_0x7A16A8A755F44481(Local_141.f_1), &(Local_141.f_38), 1, 0);
					switch (iParam0)
					{
						case 0:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_GREET", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 1:
							func_193(&uLocal_604, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_193(&uLocal_604, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_193(&uLocal_604, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_BRAVE", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 10:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_REMOVE_VEHICLE", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 11:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_REACT_TO_SHOUT", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 12:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_HURRYING", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 13:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_NO_COPS", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 14:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_THREATENED", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 15:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_GREET_START", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 16:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_SCARED_START", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 17:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_NO_COPS_START", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 18:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_GREET_END", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 19:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_SCARED_END", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 20:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_NO_COPS_END", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 21:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_COPS_ARRIVED", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 22:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_SELL", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 23:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_NO_ENTRY", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 24:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SHOP_STEAL", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 25:
							unk_0xB3DDF1AA38C87006(unk_0x7A16A8A755F44481(Local_141.f_1), "SCREAM_PANIC", &(Local_141.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						}
					}
				}
			}
	}
}

int func_193(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_208(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_194(sParam2, iParam3, 0);
}

int func_194(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x0D68C13151B68364(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_207();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xD47B332729054512())
		{
			return 0;
		}
		if (func_206(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_205();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
			if (bParam2)
			{
				func_199();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_198())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
					{
						return 0;
					}
				}
			}
			if (func_197())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
				{
					return 0;
				}
			}
			func_196();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_195();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_207();
	}
	return 0;
}

void func_195()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0D68C13151B68364(0);
	Global_15693 = 1;
}

void func_196()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
}

int func_197()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_198()
{
	int iVar0;
	int iVar1;
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_199()
{
	if (func_116(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_200();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

var func_200()
{
	func_201();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_201()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_204(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_203(unk_0xA16EC202D9D35357());
			if (func_202(iVar0) && (!func_116(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_202(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_202(int iParam0)
{
	return iParam0 < 3;
}

int func_203(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_204(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_204(int iParam0)
{
	if (func_202(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_205()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_206(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_207()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

void func_208(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = uParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
	}
	return 0;
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
			return 1;
			break;
	}
	return 0;
}

void func_211()
{
	int iVar0;
	
	iVar0 = unk_0x024C856772216145(false);
	if (Local_141.f_34 != iVar0)
	{
		if (Local_141.f_34 < iVar0 || func_218(Local_141.f_34, 0, 1))
		{
			unk_0x1EB75D4128DBB6C4(Local_141.f_34);
		}
	}
	iVar0 = unk_0x61868BC711B05123(false);
	if (Local_141.f_35 != iVar0)
	{
		if (Local_141.f_35 < iVar0 || func_212(Local_141.f_35, 0, 1))
		{
			unk_0x992F36F53DC17762(Local_141.f_35);
		}
	}
}

int func_212(int iParam0, bool bParam1, bool bParam2)
{
	return func_213(2, iParam0, 1, bParam1, bParam2);
}

int func_213(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x889D01384B54BCE3(Global_1337502, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_217(iParam0) - func_216(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_216(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_217(iParam0) - func_215(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_216(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_217(iParam0) - func_216(iParam0, 1));
		}
		if (!bParam4 && Global_1583725[unk_0x1788E93557766241() /*334*/] != 3)
		{
			iVar1 = (iVar1 - func_214(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_214(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1337502.f_1;
			break;
		
		case 1:
			return Global_1337502.f_2;
			break;
		
		case 2:
			return Global_1337502.f_3;
			break;
	}
	return 0;
}

int func_216(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x1788E93557766241();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x93C72DAC35C5D38C())
			{
				return Global_2414327[iVar0 /*255*/].f_206;
			}
			else
			{
				return unk_0x024C856772216145(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x93C72DAC35C5D38C())
			{
				return Global_2414327[iVar0 /*255*/].f_207;
			}
			else
			{
				return unk_0xE3D4C4A7B97ADBA6(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x93C72DAC35C5D38C())
			{
				return Global_2414327[iVar0 /*255*/].f_208;
			}
			else
			{
				return unk_0x61868BC711B05123(!bParam1);
			}
			break;
	}
	return 0;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1337510;
			break;
		
		case 1:
			return Global_1337511;
			break;
		
		case 2:
			return Global_1337512;
			break;
	}
	return 0;
}

int func_218(int iParam0, bool bParam1, bool bParam2)
{
	return func_213(0, iParam0, 1, bParam1, bParam2);
}

void func_219()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	switch (iLocal_801)
	{
		case 0:
			if (!unk_0x889D01384B54BCE3(iLocal_536, 0))
			{
				if (unk_0x86CB59A6776A7C27(Local_141.f_3))
				{
					if (func_226(Local_807))
					{
						Local_807 = { unk_0xA783C6007920169C(unk_0x9198B14217D71938(Local_141.f_3), 0f, -0.5f, 0f) };
						unk_0xD0E2BFCE93AE3ABD(&iLocal_536, 0);
					}
				}
			}
			if ((((unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_807, 0.5f, 0.5f, 1f, 0, 1, 0) && (func_351(Local_141.f_1) || Local_141.f_36 > 7)) && !unk_0x889D01384B54BCE3(Local_141.f_12, 20)) && !unk_0x889D01384B54BCE3(Local_141.f_12, 11)) && unk_0xDBC834909DE748A2(Local_548, 1.5f) == 0)
			{
				if (((((!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && !func_225(0)) && !func_224()) && !unk_0x2B0FFD431FD5A9FA()) && !func_37(unk_0x1788E93557766241(), 146)) && unk_0x86CB59A6776A7C27(Local_141.f_3))
				{
					func_137("FHU_MANR", -1);
					iLocal_801 = 1;
				}
			}
			break;
		
		case 1:
			if (((((!unk_0x889D01384B54BCE3(Local_141.f_13, 16) && !unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 12)) && !unk_0x889D01384B54BCE3(Local_141.f_12, 20)) && !unk_0x889D01384B54BCE3(Local_141.f_12, 11)) && unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_807, 0.5f, 0.5f, 1f, 0, 1, 0)) && !func_38(unk_0x1788E93557766241()))
			{
				if (((unk_0x1453F50088A91E4E(0, 51) && !func_223(0)) && !func_224()) && !unk_0x2B0FFD431FD5A9FA())
				{
					if (func_136("FHU_MANR"))
					{
						unk_0xFD1E0AEC770DAF2E(1);
					}
					unk_0xC92B5D880C803814(unk_0xA495B6AB6F2BF8C7(), false, 640);
					unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 12);
					iLocal_801 = 2;
				}
				else if ((unk_0x09560C7DE2A384BD() % 1000) < 50)
				{
					if (iLocal_806 == 0)
					{
						func_220(&iLocal_806, 4, "FHU_MANR", 0, 0, 0);
					}
				}
			}
			else if (func_136("FHU_MANR"))
			{
				unk_0xFD1E0AEC770DAF2E(1);
			}
			break;
		
		case 2:
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				Var3 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
				Local_807.f_2 = (Var3.f_2 - 1f);
				unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), Local_807, 1, 0, 0, 1);
				unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), unk_0x3C616B96B92181C5((Local_568.f_0 - Local_807.f_0), (Local_568.f_1 - Local_807.f_1)));
				unk_0x2AF68ED52DC74B7D(&uVar6);
				unk_0x6D98AA46076A68BE(&uVar6);
				unk_0x5B5659C49032B96C(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				unk_0x5B5659C49032B96C(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 262145, 0, 0, 0, 0);
				unk_0x5B5659C49032B96C(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				unk_0x963BB7C99350D827(uVar6);
				unk_0x0891776D0327B77A(unk_0xA16EC202D9D35357(), uVar6);
				unk_0xE05354E13FB48159(unk_0xA16EC202D9D35357(), 0, -1, 0);
				unk_0x117411595F7E531A(unk_0xA16EC202D9D35357(), 200, 1);
				unk_0x117411595F7E531A(unk_0xA16EC202D9D35357(), 71, 1);
				bVar2 = unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iLocal_805, 1);
				if (bVar2)
				{
					unk_0xB4E8D4EA104CA059(unk_0xA16EC202D9D35357(), joaat("weapon_unarmed"), 1);
				}
				unk_0x30D76463BF50C618(unk_0xA16EC202D9D35357(), 0, 0);
				if (!unk_0xBAB691F99A2A7346(uLocal_802))
				{
					uLocal_802 = unk_0xA47810FFA850D19A(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0xA3CCB6D1FDD0DF5D(uLocal_802, unk_0xA16EC202D9D35357(), -0.1878f, 3.0635f, 0.68f, 1);
				unk_0x47DDFF70FB12A8C3(uLocal_802, unk_0xA16EC202D9D35357(), -0.0129f, 0.0927f, 0.3008f, 1);
				unk_0xFDD170140EFC9F4C(uLocal_802, 35f);
				unk_0x47FDCDDCBDC99BBB(uLocal_802, "HAND_SHAKE", 0.1f);
				unk_0xC8CEF95C63B283EC(uLocal_802, 1);
				unk_0x00B28313F1FACD2D(1, 0, 3000, 1, 0, 0);
			}
			iLocal_801 = 3;
			break;
		
		case 3:
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (!unk_0xBAB691F99A2A7346(uLocal_803))
				{
					uLocal_803 = unk_0xA47810FFA850D19A(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0xA3CCB6D1FDD0DF5D(uLocal_803, unk_0xA16EC202D9D35357(), -1.0346f, 2.9183f, 0.68f, 1);
				unk_0x47DDFF70FB12A8C3(uLocal_803, unk_0xA16EC202D9D35357(), -0.0574f, 0.1074f, 0.3008f, 1);
				unk_0xFDD170140EFC9F4C(uLocal_803, 35f);
				unk_0x47FDCDDCBDC99BBB(uLocal_803, "HAND_SHAKE", 0.1f);
				unk_0x0069D19E3A367524(uLocal_803, uLocal_802, 6000, 1, 1);
				unk_0x117411595F7E531A(unk_0xA16EC202D9D35357(), 71, 1);
				unk_0xE05354E13FB48159(unk_0xA16EC202D9D35357(), 0, -1, 0);
				unk_0x117411595F7E531A(unk_0xA16EC202D9D35357(), 200, 1);
			}
			iLocal_801 = 4;
			break;
		
		case 4:
			if (!unk_0x544E3534E1E68C44(uLocal_803))
			{
				iLocal_801 = 5;
			}
			else if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95EDB2DEFA5BB405(unk_0xA16EC202D9D35357(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = unk_0x4CB0BCFFEC712BA2(unk_0xA16EC202D9D35357(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_804)
						{
							iVar7 = unk_0xF2DB717A73826179(((IntToFloat(iLocal_573) * 0.75f) / 4f));
							iVar8 = unk_0xF2DB717A73826179(((IntToFloat(iLocal_574) * 0.75f) / 4f));
							iVar1 = unk_0x444ECD635D5FD45F(iVar7, iVar8 + 1);
							iVar1 = func_181(iVar1, 1);
							if (iVar1 > (Global_262145.f_148 / 4))
							{
								iVar1 = (Global_262145.f_148 / 4);
							}
							if (func_180(unk_0x1788E93557766241()) && func_178(func_179(unk_0x1788E93557766241())) < 1f)
							{
								if (Global_262145.f_4205 > 1f)
								{
									Global_262145.f_4205 = 1f;
								}
								iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_4205));
							}
							if (func_372())
							{
								func_177(1734805203, iVar1, &uVar9, 0, 0);
							}
							else
							{
								func_173(iVar1, 1, 1, 1092616192);
								unk_0x1D381F39045E63E6(iVar1);
							}
							iLocal_799 = (iLocal_799 + iVar1);
							func_161(1, iLocal_799);
							unk_0xC2E1777941B4536E(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
							iLocal_804 = 1;
						}
					}
					else if (iLocal_804)
					{
						iLocal_804 = 0;
					}
				}
				unk_0x117411595F7E531A(unk_0xA16EC202D9D35357(), 71, 1);
				unk_0xE05354E13FB48159(unk_0xA16EC202D9D35357(), 0, -1, 0);
				unk_0x117411595F7E531A(unk_0xA16EC202D9D35357(), 200, 1);
			}
			break;
		
		case 5:
			if (iLocal_805 != joaat("weapon_unarmed") && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				unk_0xB4E8D4EA104CA059(unk_0xA16EC202D9D35357(), iLocal_805, 1);
			}
			unk_0xE05354E13FB48159(unk_0xA16EC202D9D35357(), 1, -1, 0);
			unk_0x20D6E0EA145DF751(0);
			unk_0x60365B850FB7354F(0, 1065353216);
			if (unk_0xBAB691F99A2A7346(uLocal_802))
			{
				unk_0x27A62B1C26941E13(uLocal_802, 0);
			}
			if (unk_0xBAB691F99A2A7346(uLocal_803))
			{
				unk_0x27A62B1C26941E13(uLocal_803, 0);
			}
			unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
			unk_0xC92B5D880C803814(unk_0x1788E93557766241(), true, 0);
			iLocal_801 = 7;
			break;
		
		case 6:
			unk_0xC8CEF95C63B283EC(uLocal_803, 0);
			unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				unk_0x9AB8F163FA160890(unk_0xA16EC202D9D35357());
			}
			iLocal_801 = 5;
			break;
	}
}

void func_220(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0x16CDA1894CFE0781(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xB4B5BF5882A555F9())
	{
		if (!*iParam0 == -1)
		{
			func_221(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_35615[iVar0 /*19*/])
		{
			Global_35615[iVar0 /*19*/] = 1;
			Global_35615[iVar0 /*19*/].f_1 = Global_35738;
			Global_35738++;
			Global_35615[iVar0 /*19*/].f_4 = 0;
			Global_35615[iVar0 /*19*/].f_17 = 0;
			Global_35615[iVar0 /*19*/].f_5 = 0;
			Global_35615[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_35615[iVar0 /*19*/].f_8), sParam2, 16);
			Global_35615[iVar0 /*19*/].f_6 = iParam3;
			Global_35615[iVar0 /*19*/].f_18 = unk_0x60C807BBCBE66CC7();
			Global_35615[iVar0 /*19*/].f_7 = 0;
			Global_35615[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0x06771AF7795B3ECF(sParam4))
			{
				Global_35615[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_35615[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_35615[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_35615[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_221(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_222(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35615[iVar0 /*19*/])
		{
			Global_35615[iVar0 /*19*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_222(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35615[iVar0 /*19*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_223(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
			{
				if (Global_14393 == 1)
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
		else
		{
			return 0;
		}
	}
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_14393 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_14394.f_1 > 3)
	{
		if (Global_14393 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_224()
{
	return unk_0x09560C7DE2A384BD() <= Global_17238.f_5130 + 100;
}

int func_225(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_226(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_227()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	char* sVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	
	if (((Local_141.f_63 >= 1000 || (Local_141.f_63 + iLocal_800) >= 1000) || func_348()) || (func_134(&(Global_2446992.f_10)) && !func_347(Global_2446992.f_10, 300000, 0)))
	{
		if (func_134(&(Global_2446992.f_10)))
		{
			if ((unk_0x09560C7DE2A384BD() % 2500) < 50)
			{
			}
		}
		if (!Local_90.f_34)
		{
			Local_90.f_34 = 1;
			if (!func_134(&(Global_2446992.f_10)))
			{
				func_18(&(Global_2446992.f_10), 0, 0);
			}
		}
	}
	else
	{
		if (func_134(&(Global_2446992.f_10)))
		{
			func_13(&(Global_2446992.f_10));
		}
		if (Local_90.f_34)
		{
			Local_90.f_34 = 0;
		}
	}
	if ((unk_0x09560C7DE2A384BD() % 5000) < 50)
	{
	}
	if ((((((Local_141.f_36 < 2 && func_375(unk_0x1788E93557766241(), 1, 1)) && unk_0x889D01384B54BCE3(iLocal_535, 26)) && !func_346(-1082130432)) && unk_0xD25129559B94E910(unk_0x1788E93557766241()) < 1) && !unk_0x0852C405AF94F670(unk_0x7A16A8A755F44481(Local_141.f_1), Local_597, Local_600, uLocal_603, 0, 1, 0)) && !func_351(Local_141.f_1))
	{
		iVar7 = 0;
		if ((unk_0x2B0FFD431FD5A9FA() && iLocal_89 != 0) && !unk_0xEEF4BA306EA3EC77())
		{
			iLocal_89 = 0;
			func_345();
		}
		switch (iLocal_89)
		{
			case 0:
				if ((((!unk_0x2B0FFD431FD5A9FA() && !unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1)) && !unk_0x878FD309D6FA88D0(unk_0xA16EC202D9D35357())) && !func_38(unk_0x1788E93557766241())) && !func_344(unk_0x1788E93557766241(), 21))
				{
					if (func_343(Local_90.f_0, &Local_548, Local_551.f_2, &(Local_90.f_16[0 /*3*/]), &(Local_90.f_16[1 /*3*/]), &(Local_90.f_23), &(Local_90.f_26)))
					{
						Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
						Var4 = { unk_0xBF8499F46AD9093A(unk_0x7A16A8A755F44481(Local_141.f_1), 1) };
						if ((unk_0x4970185D4CC64616(Var1, Local_90.f_23, 1) < 5f && unk_0x3545D662A0A53653((Var1.f_2 - Var4.f_2)) < 0.25f) || func_393(1))
						{
							if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_90.f_16[0 /*3*/], Local_90.f_16[1 /*3*/], Local_90.f_26, 0, 1, 0) || func_393(1))
							{
								if (unk_0xCF34027511646228(unk_0xA16EC202D9D35357(), Local_90.f_23, 135f) || func_393(1))
								{
									if (Local_90.f_34)
									{
										if (func_393(1))
										{
											func_365();
										}
										if (((!func_136("SHR_HOLDUP_1") && !func_136("SHR_MENU")) && !func_342()) && func_341())
										{
											func_137("SHR_SOLD_OUT", -1);
											iLocal_89 = 10;
										}
									}
									else
									{
										if (func_393(1))
										{
										}
										Local_90.f_14 = -1;
										func_220(&(Local_90.f_14), 4, "SHR_MENU", 0, 0, 0);
										iLocal_89 = 2;
									}
								}
								else if ((unk_0x09560C7DE2A384BD() % 8000) < 50)
								{
								}
							}
							else if ((unk_0x09560C7DE2A384BD() % 8000) < 50)
							{
							}
						}
						else if ((unk_0x09560C7DE2A384BD() % 8000) < 50)
						{
						}
					}
				}
				else
				{
					if (func_136("SHR_MENU"))
					{
						unk_0xFD1E0AEC770DAF2E(1);
					}
					if (func_38(unk_0x1788E93557766241()))
					{
						if (!unk_0x889D01384B54BCE3(iLocal_536, 4))
						{
							func_137("SHR_FM_CRIT", -1);
							unk_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
							unk_0xD0E2BFCE93AE3ABD(&iLocal_536, 4);
						}
					}
					if ((unk_0x09560C7DE2A384BD() % 8000) < 50)
					{
					}
				}
				break;
			
			case 2:
				Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
				Var4 = { unk_0xBF8499F46AD9093A(unk_0x7A16A8A755F44481(Local_141.f_1), 1) };
				if ((!unk_0xCF34027511646228(unk_0xA16EC202D9D35357(), Local_90.f_23, 135f) || unk_0x3545D662A0A53653((Var1.f_2 - Var4.f_2)) >= 0.25f) && !func_393(1))
				{
					if (func_136("SHR_MENU"))
					{
						unk_0xFD1E0AEC770DAF2E(1);
					}
					func_221(&(Local_90.f_14));
					iLocal_89 = 0;
				}
				if (unk_0x2B0FFD431FD5A9FA())
				{
					if (func_136("SHR_MENU"))
					{
						unk_0xFD1E0AEC770DAF2E(1);
					}
					func_221(&(Local_90.f_14));
					iLocal_89 = 0;
				}
				if (!unk_0x878FD309D6FA88D0(unk_0xA16EC202D9D35357()))
				{
					if (func_340(Local_90.f_14, 1) || func_393(1))
					{
						if (func_393(1))
						{
							func_365();
						}
						if (func_136("SHR_MENU"))
						{
							unk_0xFD1E0AEC770DAF2E(1);
						}
						func_338(&(Local_90.f_44));
						func_221(&(Local_90.f_14));
						func_332(0, 0);
						func_387(unk_0x1788E93557766241(), 0, 66048, 1);
						unk_0xB0F2C1CA020DA7DA();
						if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && !func_351(Local_141.f_1))
						{
							unk_0x1CAB36EC4E43E586(unk_0xA16EC202D9D35357(), unk_0x7A16A8A755F44481(Local_141.f_1), 0);
							unk_0x29DB79DD4D939B38(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3), 1);
						}
						func_331();
						iLocal_89 = 3;
					}
				}
				break;
			
			case 3:
				if (!unk_0xBAB691F99A2A7346(Local_90.f_1))
				{
					Local_90.f_1 = unk_0xA47810FFA850D19A(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
					func_330(Local_90.f_0, &(Local_90.f_2), &(Local_90.f_5), &uVar9);
					unk_0x7A77F1D5EE07F7AD(Local_90.f_1, Local_90.f_2);
					unk_0x2F60BEC0103AB8D0(Local_90.f_1, Local_90.f_5, 2);
					unk_0xFDD170140EFC9F4C(Local_90.f_1, uVar9);
					unk_0x47FDCDDCBDC99BBB(Local_90.f_1, "HAND_SHAKE", 0.1f);
					unk_0xC8CEF95C63B283EC(Local_90.f_1, 1);
					unk_0x00B28313F1FACD2D(1, 0, 3000, 1, 0, 0);
				}
				if (unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
				{
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), false, 0);
				}
				Local_90.f_37 = func_353(Local_90.f_0);
				Local_90.f_13 = 6;
				func_329(0);
				func_328(1, 1, 0, 0, 0);
				func_327(1, 2, 1, 1, 1);
				func_326("SNK_ITEM");
				func_324(1, Local_90.f_37, Local_90.f_37);
				iVar10 = 0;
				while (iVar10 < Local_90.f_13)
				{
					func_320(iVar10, func_323(iVar10), 0, 1, 0, 0);
					if (Local_141.f_64[iVar10] >= 10 || ((func_134(&(Global_2446992.f_12[iVar10 /*2*/])) && !func_347(Global_2446992.f_12[iVar10 /*2*/], 150000, 0)) && Local_90.f_0 == Global_2446992.f_27))
					{
						func_320(iVar10, "", 1, 1, 0, 0);
						func_319(15, 0);
						if (func_134(&(Global_2446992.f_12[iVar10 /*2*/])) && !func_347(Global_2446992.f_12[iVar10 /*2*/], 150000, 0))
						{
							Local_141.f_64[iVar10] = 10;
						}
						if (!func_134(&(Global_2446992.f_12[iVar10 /*2*/])))
						{
							Global_2446992.f_27 = Local_90.f_0;
							func_18(&(Global_2446992.f_12[iVar10 /*2*/]), 0, 0);
						}
					}
					else if (func_316(iVar10))
					{
						func_320(iVar10, "SNK_FULL", 0, 1, 0, 0);
					}
					else
					{
						func_320(iVar10, "ITEM_COST", 1, 1, 0, 0);
						func_312(func_315(iVar10), 0);
					}
					iVar10++;
				}
				func_311(0);
				func_310(Local_90.f_12, 1, 1);
				if (Local_90.f_35)
				{
					func_309("SNK_BOUGHT", 0, 0);
				}
				else if (Local_141.f_64[Local_90.f_12] >= 10)
				{
					func_309("SNK_SOUT", 0, 0);
				}
				else
				{
					func_309(func_308(Local_90.f_12), 0, 0);
				}
				func_307(201, "ITEM_SELECT", -1);
				func_307(202, "ITEM_BACK", -1);
				func_307(203, "SNK_LIFT", -1);
				func_276(1, Local_90.f_0, 1, 0, 1, -1082130432, 0, 0);
				iLocal_89 = 4;
				break;
			
			case 4:
				if (unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
				{
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), false, 0);
				}
				if (unk_0x221AC1EF116F6053(unk_0xA16EC202D9D35357(), -875674219) == 7)
				{
					if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3, 1))
					{
						func_387(unk_0x1788E93557766241(), 0, 98816, 1);
						unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3), 1);
					}
				}
				iVar7 = 0;
				if (unk_0xF6BAF9F0C2863FFE())
				{
					if (unk_0x7F7F8EB2E78C69E9(2))
					{
						unk_0x4B404C739A9AFC7A(0, 1, 1);
						unk_0x4B404C739A9AFC7A(0, 2, 1);
						unk_0x7D98754083C1D605(0, 237, 1);
						unk_0x7D98754083C1D605(0, 238, 1);
						unk_0x7D98754083C1D605(0, 241, 1);
						unk_0x7D98754083C1D605(0, 242, 1);
						func_272(0, 0, 0, 1);
						func_271(0, -1);
						if (func_270())
						{
							if (Global_2541359 != Local_90.f_12)
							{
								unk_0xC2E1777941B4536E(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								Local_90.f_12 = Global_2541359;
								func_310(Local_90.f_12, 1, 1);
								Local_90.f_27 = 0;
								Local_90.f_29 = 0;
								Local_90.f_30 = 0;
								Local_90.f_32 = 0;
								sVar8 = func_308(Local_90.f_12);
								if (unk_0xC929DDA58687736B(sVar8))
								{
									func_309(sVar8, 0, 0);
								}
							}
							else
							{
								iVar7 = 1;
							}
						}
					}
				}
				func_276(1, Local_90.f_0, 1, 0, 1, -1082130432, 0, 0);
				func_259();
				if ((Local_141.f_18 > 2 && unk_0x889D01384B54BCE3(Local_141.f_15, 0)) && unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3, 0))
				{
					unk_0x29DB79DD4D939B38(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3), 0);
				}
				if ((unk_0x1453F50088A91E4E(2, 201) || iVar7 == 1) || Local_90.f_47)
				{
					if (!Local_90.f_47)
					{
						Local_90.f_27 = 1;
						Local_90.f_29 = 0;
						Local_90.f_30 = 0;
						Local_90.f_32 = 0;
						func_338(&(Local_90.f_44));
					}
					if ((Local_90.f_28 && Local_90.f_31) && Local_90.f_33)
					{
						if (func_372())
						{
							Local_90.f_47 = 1;
							Local_90.f_48 = 0;
							Local_90.f_49 = -1;
							func_248(&(Local_90.f_49), -1303831698, 537254313, func_315(Local_90.f_12));
							iLocal_89 = 5;
						}
						else
						{
							Local_90.f_35 = 1;
							unk_0xC2E1777941B4536E(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							Local_141.f_64[Local_90.f_12]++;
							iLocal_89 = 6;
						}
					}
					else
					{
						Local_90.f_35 = 0;
						if (!Local_90.f_28 && !Local_90.f_36)
						{
							func_247(unk_0xB793F1A0B6CC4AE1(func_308(Local_90.f_12)), func_315(Local_90.f_12), 0);
							func_240(0, 31, 3);
							iLocal_89 = 11;
						}
						unk_0xC2E1777941B4536E(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					if (!Local_90.f_33)
					{
						iLocal_89 = 3;
					}
				}
				if (unk_0x1453F50088A91E4E(2, 203) && !Local_90.f_47)
				{
					Local_90.f_27 = 1;
					if (Local_141.f_64[Local_90.f_12] < 10)
					{
						Local_90.f_33 = 1;
					}
					else
					{
						Local_90.f_33 = 0;
					}
					func_338(&(Local_90.f_44));
					if (!Local_90.f_33)
					{
						unk_0xC2E1777941B4536E(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					else if (!Local_90.f_31)
					{
						unk_0xC2E1777941B4536E(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					else
					{
						unk_0x5B5659C49032B96C(unk_0xA16EC202D9D35357(), func_147(), func_239(), 8f, -8f, -1, 1048576, 0, 0, 0, 0);
						iLocal_89 = 8;
						Local_90.f_15 = unk_0x09560C7DE2A384BD();
						unk_0xC2E1777941B4536E(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						func_345();
					}
				}
				if (unk_0x1453F50088A91E4E(2, 202) || unk_0x51104159A21A8E40(2, 238))
				{
					if (func_393(1))
					{
						func_365();
					}
					iLocal_89 = 9;
					Local_90.f_15 = unk_0x09560C7DE2A384BD();
					unk_0xC2E1777941B4536E(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_345();
				}
				if (Local_90.f_34)
				{
					iLocal_89 = 10;
					Local_90.f_15 = unk_0x09560C7DE2A384BD();
					func_345();
					func_137("SHR_SOLD_OUT", -1);
				}
				iVar11 = 0;
				while (iVar11 < Local_90.f_13)
				{
					if (func_134(&(Global_2446992.f_12[iVar11 /*2*/])) && func_347(Global_2446992.f_12[iVar11 /*2*/], 150000, 0))
					{
						func_13(&(Global_2446992.f_12[iVar11 /*2*/]));
						Local_141.f_64[iVar11] = 0;
						iLocal_89 = 3;
					}
					iVar11++;
				}
				break;
			
			case 5:
				func_276(1, Local_90.f_0, 1, 0, 1, -1082130432, 0, 0);
				if (func_248(&(Local_90.f_49), -1303831698, 537254313, func_315(Local_90.f_12)))
				{
				}
				else
				{
					switch (Local_90.f_49)
					{
						case 0:
							Local_90.f_35 = 0;
							if (!Local_90.f_28 && !Local_90.f_36)
							{
								func_247(unk_0xB793F1A0B6CC4AE1(func_308(Local_90.f_12)), func_315(Local_90.f_12), 0);
								func_240(0, 31, 3);
								func_238();
								func_237();
								iLocal_89 = 11;
							}
							else
							{
								if (func_393(1))
								{
									func_365();
								}
								iLocal_89 = 9;
								Local_90.f_15 = unk_0x09560C7DE2A384BD();
								unk_0xC2E1777941B4536E(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
								func_345();
							}
							break;
						
						case 2:
							Local_90.f_35 = 1;
							unk_0xC2E1777941B4536E(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							Local_141.f_64[Local_90.f_12]++;
							iLocal_89 = 6;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 6:
				func_276(1, Local_90.f_0, 1, 0, 1, -1082130432, 0, 0);
				if (func_372())
				{
					unk_0xE221412506263516(func_235(func_236()));
				}
				switch (Local_90.f_12)
				{
					case 3:
						iVar0 = func_315(Local_90.f_12);
						func_101(1269, 1, -1);
						func_100(16, 1, -1, 1);
						unk_0xCEFE51575F93998B(iVar0, unk_0xB793F1A0B6CC4AE1("SNK_ITEM1"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 1:
						iVar0 = func_315(Local_90.f_12);
						func_101(1270, 1, -1);
						func_100(15, 1, -1, 1);
						unk_0xCEFE51575F93998B(iVar0, unk_0xB793F1A0B6CC4AE1("SNK_ITEM2"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 2:
						iVar0 = func_315(Local_90.f_12);
						func_100(14, 1, -1, 1);
						func_101(1271, 1, -1);
						unk_0xCEFE51575F93998B(iVar0, unk_0xB793F1A0B6CC4AE1("SNK_ITEM3"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 4:
						iVar0 = func_315(Local_90.f_12);
						iLocal_140 = 20;
						if (func_120(1092, -1, 0) + 20 > 20)
						{
							iLocal_140 = (20 - func_120(1092, -1, 0));
						}
						func_101(1092, iLocal_140, -1);
						unk_0xCEFE51575F93998B(iVar0, unk_0xB793F1A0B6CC4AE1("SNK_ITEM4"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 0:
						iVar0 = func_315(Local_90.f_12);
						func_101(65, 1, -1);
						unk_0xCEFE51575F93998B(iVar0, unk_0xB793F1A0B6CC4AE1("SNK_ITEM5"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 5:
						iVar0 = func_315(Local_90.f_12);
						func_101(66, 1, -1);
						unk_0xCEFE51575F93998B(iVar0, unk_0xB793F1A0B6CC4AE1("SNK_ITEM6"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
				}
				if (func_372())
				{
					func_233(func_236());
				}
				func_232(-iVar0, 0);
				iLocal_800 = (iLocal_800 + iVar0);
				if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 30))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 30);
				}
				if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3, 0))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3), 0);
					Local_214[unk_0x044A481E863E2F6B() /*10*/].f_4 = Local_90.f_12;
				}
				if (Local_90.f_34 || iLocal_800 >= 1000)
				{
					iLocal_89 = 10;
					func_345();
					func_137("SHR_SOLD_OUT", -1);
				}
				else if (Local_141.f_64[Local_90.f_12] >= 10 || func_316(Local_90.f_12))
				{
					iLocal_89 = 3;
				}
				else
				{
					iLocal_89 = 4;
				}
				break;
			
			case 8:
				func_167(1);
				switch (Local_90.f_12)
				{
					case 3:
						func_230(0, 1f, 3);
						func_101(1269, 1, -1);
						func_100(13, 1, -1, 1);
						break;
					
					case 1:
						func_230(1, 1f, 3);
						func_101(1270, 1, -1);
						func_100(13, 1, -1, 1);
						break;
					
					case 2:
						func_230(2, 1f, 3);
						func_101(1271, 1, -1);
						func_100(13, 1, -1, 1);
						break;
					
					case 4:
						iLocal_140 = 20;
						if (func_120(1092, -1, 0) + 20 > 20)
						{
							iLocal_140 = (20 - func_120(1092, -1, 0));
						}
						func_230(5, unk_0xBBDA792448DB5A89(iLocal_140), 3);
						func_101(1092, iLocal_140, -1);
						break;
					
					case 0:
						func_230(3, 1f, 3);
						func_101(65, 1, -1);
						break;
					
					case 5:
						func_230(4, 1f, 3);
						func_101(66, 1, -1);
						break;
				}
				func_387(unk_0x1788E93557766241(), 1, 0, 1);
				if (unk_0xD25129559B94E910(unk_0x1788E93557766241()) < 1 && !func_228(unk_0x1788E93557766241()))
				{
					unk_0xD7A7E942CB6FFB85(unk_0x1788E93557766241(), 37, unk_0xF182CA32D6388B28(1));
					unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 25);
					if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 1))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1), 2);
					}
				}
				if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3, 2))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3), 2);
				}
				iLocal_89 = 12;
				break;
			
			case 11:
				if (!Global_90094.f_1323 && !unk_0xEEF4BA306EA3EC77())
				{
					iLocal_89 = 4;
				}
				break;
			
			case 10:
				func_387(unk_0x1788E93557766241(), 1, 0, 1);
				if ((unk_0x09560C7DE2A384BD() - Local_90.f_15) > 1000)
				{
					iLocal_89 = 12;
				}
				else
				{
					unk_0xA6ED15B28077401E(2, 203);
					unk_0xA6ED15B28077401E(2, 202);
					unk_0xA6ED15B28077401E(2, 188);
					unk_0xA6ED15B28077401E(2, 187);
					unk_0xA6ED15B28077401E(2, 189);
					unk_0xA6ED15B28077401E(2, 190);
				}
				break;
			
			case 9:
				if ((unk_0x09560C7DE2A384BD() - Local_90.f_15) > 1000)
				{
					iLocal_89 = 0;
				}
				else
				{
					unk_0xA6ED15B28077401E(2, 203);
					unk_0xA6ED15B28077401E(2, 202);
					unk_0xA6ED15B28077401E(2, 188);
					unk_0xA6ED15B28077401E(2, 187);
					unk_0xA6ED15B28077401E(2, 189);
					unk_0xA6ED15B28077401E(2, 190);
				}
				break;
			
			case 12:
				if (unk_0x889D01384B54BCE3(Local_141.f_15, 3))
				{
					if (unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3, 2))
					{
						unk_0x29DB79DD4D939B38(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3), 2);
					}
					if (unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3, 3))
					{
						unk_0x29DB79DD4D939B38(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3), 3);
					}
				}
				break;
		}
	}
	else
	{
		if ((unk_0x09560C7DE2A384BD() % 8000) < 50)
		{
		}
		if (unk_0x889D01384B54BCE3(Local_141.f_15, 3))
		{
			if (unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3, 2))
			{
				unk_0x29DB79DD4D939B38(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3), 2);
			}
			if (unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3, 3))
			{
				unk_0x29DB79DD4D939B38(&(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_3), 3);
			}
		}
		if ((iLocal_89 != 12 && unk_0x889D01384B54BCE3(iLocal_535, 26)) && !unk_0xEEF4BA306EA3EC77())
		{
			if ((((iLocal_89 == 4 || iLocal_89 == 3) || iLocal_89 == 6) || iLocal_89 == 11) || iLocal_89 == 5)
			{
				func_345();
			}
			iLocal_89 = 12;
		}
		if (Local_90.f_14 != -1)
		{
			func_221(&(Local_90.f_14));
		}
	}
}

int func_228(int iParam0)
{
	if ((func_38(iParam0) || func_229(iParam0)) && func_178(func_179(iParam0)) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_1602607[iVar0 /*12*/].f_1, 7);
	}
	return 0;
}

void func_230(int iParam0, float fParam1, int iParam2)
{
	struct<8> Var0;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	
	if (fParam1 > 0f)
	{
		if (func_231(iParam0, &Var0))
		{
			Var8 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0) };
			func_167(1);
			iVar12 = -1;
			iVar11 = 0;
			while (iVar11 < 20)
			{
				if (Global_2422491.f_739[iVar11 /*29*/].f_6 == 0 || Global_2422491.f_739[iVar11 /*29*/].f_6 == 6)
				{
					iVar12 = iVar11;
					iVar11 = 20;
				}
				iVar11++;
			}
			if (iVar12 != -1)
			{
				Global_2422491.f_739[iVar12 /*29*/] = { Var8 };
				Global_2422491.f_739[iVar12 /*29*/].f_6 = 1;
				Global_2422491.f_739[iVar12 /*29*/].f_4 = func_166(Global_2422491.f_739[iVar12 /*29*/], &Global_1312317, &Global_1312318);
				Global_2422491.f_739[iVar12 /*29*/].f_5 = fParam1;
				Global_2422491.f_739[iVar12 /*29*/].f_7 = unk_0x519586565311459B();
				Global_2422491.f_739[iVar12 /*29*/].f_8 = iParam2;
				Global_2422491.f_739[iVar12 /*29*/].f_14 = { Var0 };
				Global_2422491.f_739[iVar12 /*29*/].f_9 = func_165();
				Global_2422491.f_739[iVar12 /*29*/].f_10 = func_164();
			}
		}
	}
}

int func_231(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "PU_REWARD_S1", 32);
			return 1;
		
		case 1:
			StringCopy(sParam1, "PU_REWARD_S2", 32);
			return 1;
		
		case 2:
			StringCopy(sParam1, "PU_REWARD_S3", 32);
			return 1;
		
		case 3:
			StringCopy(sParam1, "PU_REWARD_D1", 32);
			return 1;
		
		case 4:
			StringCopy(sParam1, "PU_REWARD_D2", 32);
			return 1;
		
		case 5:
			StringCopy(sParam1, "PU_REWARD_11", 32);
			return 1;
		
		case 6:
			StringCopy(sParam1, "PU_REWARD_PC", 32);
			return 1;
		
		default:
	}
	return 0;
}

void func_232(int iParam0, int iParam1)
{
	func_175(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_176(iParam0, 0);
	}
}

void func_233(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_372())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_234(iParam0))
		{
			if (!bVar0)
			{
				unk_0xBDF871285913783C();
			}
		}
		else if (!bVar0)
		{
			unk_0xE4B5006C2633FD81(Global_2537915[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2537915[iParam0 /*69*/] = { Var1 };
	}
}

int func_234(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2537915[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

int func_235(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2537915[iParam0 /*69*/];
	}
	return -1;
}

int func_236()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_235(iVar0) != 2147483647)
		{
			if (func_234(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_237()
{
	Global_2428577.f_656.f_32 = 1;
}

void func_238()
{
	Global_2428577.f_656.f_28 = 1;
	Global_2428577.f_656.f_32 = 0;
	Global_2428577.f_656.f_31 = unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635());
	func_13(&(Global_2428577.f_656.f_29));
}

char* func_239()
{
	if (func_12())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_240(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x24B49BD31222C694())
	{
		return;
	}
	if (unk_0x1DAD7CE53BEE7710() && func_244(unk_0x1788E93557766241(), 1))
	{
		return;
	}
	if (unk_0xF49761626882E968(2, 199) || unk_0x4E151C54AB29940C(2, 199))
	{
		return;
	}
	if (unk_0xB0E35FF1A90C8FAA() != 0)
	{
		return;
	}
	if (unk_0x2B0FFD431FD5A9FA())
	{
		return;
	}
	if (unk_0xE1AFDE60BC297214())
	{
		return;
	}
	if (unk_0x34CC8D9406FED489())
	{
		return;
	}
	if (func_243())
	{
		return;
	}
	if (!func_241())
	{
		return;
	}
	if (unk_0x1DAD7CE53BEE7710() || iParam0)
	{
		if (!Global_90094.f_1323 && !unk_0xEEF4BA306EA3EC77())
		{
			iVar0 = 18;
			unk_0xDC38CC1E35B6A5D7("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_2436179 = iParam1;
			Global_90094.f_1323 = 1;
			Global_90094.f_1324 = iParam2;
		}
	}
}

int func_241()
{
	if (func_242())
	{
		return 0;
	}
	if (unk_0xECA1708601B2AF8E() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_242()
{
	return Global_2435628;
}

bool func_243()
{
	return Global_2436286;
}

int func_244(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_245(iParam0))
		{
			return 1;
		}
	}
	if (Global_1583725[iParam0 /*334*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_245(int iParam0)
{
	return func_246(iParam0);
}

bool func_246(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_13.f_1, 0);
}

void func_247(int iParam0, int iParam1, int iParam2)
{
	Global_90094.f_1325 = iParam0;
	Global_90094.f_1326 = iParam1;
	Global_90094.f_1327 = iParam2;
}

int func_248(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char* sVar4;
	
	if (Local_90.f_47)
	{
		switch (Local_90.f_48)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (unk_0xEADB7AB703FF2133() > 0)
				{
					if (unk_0xEADB7AB703FF2133() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - unk_0xEADB7AB703FF2133()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (unk_0xDBED60E4A98E4A0B(-1) > 0)
					{
						if (unk_0xDBED60E4A98E4A0B(-1) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - unk_0xDBED60E4A98E4A0B(-1)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_323(Local_90.f_12);
				func_257(&sVar4, cVar3, func_258());
				if (func_253(78225582, iParam1, unk_0xB793F1A0B6CC4AE1(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_251())
					{
						unk_0x1556C5E72984CE43(1);
						unk_0x3810BD4DBF2CEF99(-iVar0, -iVar1);
						Local_90.f_48 = 1;
					}
					else
					{
						Local_90.f_48 = 3;
					}
				}
				else
				{
					Local_90.f_48 = 3;
				}
				break;
			
			case 1:
				if (func_250(func_236()))
				{
					if (func_249(func_236()) == 2)
					{
						Local_90.f_48 = 2;
					}
					else
					{
						Local_90.f_48 = 3;
					}
				}
				break;
			
			case 2:
				Local_90.f_47 = 0;
				Local_90.f_48 = 0;
				unk_0x1556C5E72984CE43(0);
				unk_0x8A5A9834DB717F2D(13);
				*uParam0 = 2;
				return 0;
				break;
			
			case 3:
				func_233(func_236());
				Local_90.f_47 = 0;
				Local_90.f_48 = 0;
				unk_0x1556C5E72984CE43(0);
				unk_0x8A5A9834DB717F2D(13);
				*uParam0 = 0;
				return 0;
				break;
		}
		return 1;
	}
	Local_90.f_48 = 0;
	*uParam0 = -1;
	return 0;
}

int func_249(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2537915[iParam0 /*69*/].f_2;
	}
	return 0;
}

int func_250(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2537915[iParam0 /*69*/].f_2 != 1;
	}
	return 0;
}

int func_251()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (!func_372())
	{
		bVar0 = true;
	}
	iVar1 = func_236();
	if (iVar1 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xC9345B47FCA589CF(func_74()) || unk_0x4E4D77A008D3DA63())
		{
			if (func_252(Global_2537915[iVar1 /*69*/].f_6, Global_2537915[iVar1 /*69*/].f_4, Global_2537915[iVar1 /*69*/].f_1) == 1)
			{
				Global_2538376 = 1;
			}
			return 0;
		}
		if (Global_2436286)
		{
			if (Global_2537915[iVar1 /*69*/].f_6 == 1067618600 || Global_2537915[iVar1 /*69*/].f_6 == -1303831698)
			{
				Global_2538377 = 1;
				return 0;
			}
		}
	}
	iVar2 = func_235(iVar1);
	if (iVar2 != 2147483647)
	{
		if (bVar0 || unk_0x625C87495B033820(iVar2))
		{
			if (bVar0)
			{
				Global_2537915[iVar1 /*69*/].f_62 = 1;
			}
			Global_2537915[iVar1 /*69*/].f_68 = 0;
			Global_2538373 = 1;
			return 1;
		}
	}
	return 0;
}

int func_252(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case 1982688246:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_253(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_372())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xC9345B47FCA589CF(func_74()) || unk_0x4E4D77A008D3DA63())
		{
			Global_2538376 = 1;
			return 0;
		}
		if (Global_2436286)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2538377 = 1;
				return 0;
			}
		}
	}
	iVar1 = func_236();
	if (iVar1 == -1)
	{
		if (!func_255(&iVar1, iParam0, iParam1, uParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_254(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_2537915[iVar1 /*69*/].f_66 = Var2.f_0;
		Global_2537915[iVar1 /*69*/].f_67 = Var2.f_1;
		if (bVar0 || unk_0xA2878282ECA2A4A1(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
			return 1;
			break;
	}
	return 0;
}

int func_255(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_372())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xC9345B47FCA589CF(func_74()) || unk_0x4E4D77A008D3DA63())
		{
			Global_2538376 = 1;
			return 0;
		}
		if (Global_2436286)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_2538377 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2537915[iVar1 /*69*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_2537915[iVar1 /*69*/].f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (bVar0 || unk_0x6A1E14BD8E1858BE(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_256(iVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5);
		return 1;
	}
	return 0;
}

int func_256(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2537915[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_372())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2537915[iVar0 /*69*/].f_2 = 1;
			Global_2537915[iVar0 /*69*/].f_1 = iParam5;
			Global_2537915[iVar0 /*69*/].f_3 = uParam1;
			Global_2537915[iVar0 /*69*/].f_4 = iParam2;
			Global_2537915[iVar0 /*69*/].f_7 = uParam3;
			Global_2537915[iVar0 /*69*/].f_5 = 0;
			Global_2537915[iVar0 /*69*/] = iParam0;
			Global_2537915[iVar0 /*69*/].f_6 = iParam4;
			Global_2537915[iVar0 /*69*/].f_65 = uParam8;
			Global_2537915[iVar0 /*69*/].f_64 = uParam7;
			Global_2537915[iVar0 /*69*/].f_68 = 0;
			Global_2538373 = 0;
			if (bParam6)
			{
				Global_2537915[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_257(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_258()
{
	if (iLocal_769 >= 10 && iLocal_769 <= 14)
	{
		return 0;
	}
	else if (iLocal_769 >= 15 && iLocal_769 <= 19)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

void func_259()
{
	char* sVar0;
	
	if (!Local_90.f_29)
	{
	}
	if (func_269())
	{
		Local_90.f_27 = 0;
		func_268(&(Local_90.f_44));
		Local_90.f_12 = (Local_90.f_12 - 1);
		if (Local_90.f_12 < 0)
		{
			Local_90.f_12 = (Local_90.f_13 - 1);
		}
		unk_0xC2E1777941B4536E(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_310(Local_90.f_12, 1, 1);
		sVar0 = func_308(Local_90.f_12);
		Local_90.f_29 = 0;
		Local_90.f_30 = 0;
		Local_90.f_32 = 0;
		if (unk_0xC929DDA58687736B(sVar0))
		{
			func_309(sVar0, 0, 0);
		}
	}
	if (func_265())
	{
		Local_90.f_27 = 0;
		func_268(&(Local_90.f_44));
		Local_90.f_12++;
		if (Local_90.f_12 > (Local_90.f_13 - 1))
		{
			Local_90.f_12 = 0;
		}
		unk_0xC2E1777941B4536E(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_310(Local_90.f_12, 1, 1);
		sVar0 = func_308(Local_90.f_12);
		Local_90.f_29 = 0;
		Local_90.f_30 = 0;
		Local_90.f_32 = 0;
		if (unk_0xC929DDA58687736B(sVar0))
		{
			func_309(sVar0, 0, 0);
		}
	}
	if (!Local_90.f_29)
	{
		if (func_264(1) >= func_315(Local_90.f_12))
		{
			if (unk_0x2E094DC76A24609A(func_315(Local_90.f_12), 0, 1, 0, -1))
			{
				Local_90.f_28 = 1;
			}
			else
			{
				Local_90.f_28 = 0;
				Local_90.f_36 = 1;
			}
		}
		else
		{
			Local_90.f_28 = 0;
			Local_90.f_36 = 0;
		}
		Local_90.f_29 = 1;
	}
	if (!Local_90.f_30)
	{
		Local_90.f_31 = 1;
		if (Local_90.f_12 == 3)
		{
			Local_90.f_31 = func_120(1269, -1, 0) < 30;
		}
		else if (Local_90.f_12 == 1)
		{
			Local_90.f_31 = func_120(1270, -1, 0) < 15;
		}
		else if (Local_90.f_12 == 2)
		{
			Local_90.f_31 = func_120(1271, -1, 0) < 5;
		}
		else if (Local_90.f_12 == 4)
		{
			Local_90.f_31 = func_120(1092, -1, 0) < 20;
		}
		else if (Local_90.f_12 == 0)
		{
			Local_90.f_31 = func_120(65, -1, 0) < 10;
		}
		else if (Local_90.f_12 == 5)
		{
			Local_90.f_31 = func_120(66, -1, 0) < 10;
		}
		Local_90.f_30 = 1;
	}
	if (!Local_90.f_32)
	{
		if (Local_141.f_64[Local_90.f_12] < 10)
		{
			Local_90.f_33 = 1;
		}
		else
		{
			Local_90.f_33 = 0;
			func_309("SNK_SOUT", 0, 0);
		}
		Local_90.f_32 = 1;
	}
	if (Local_90.f_27)
	{
		if (func_260(&(Local_90.f_44)) < 3f)
		{
			if (Local_90.f_35)
			{
				func_309("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_90.f_28)
			{
				func_309("SNK_AFFORD", 0, 0);
			}
			else if (!Local_90.f_33)
			{
				func_309("SNK_SOUT", 0, 0);
			}
			else if (!Local_90.f_31)
			{
				if (Local_90.f_12 == 3)
				{
					func_309("SNK_SNK1FU", 0, 0);
				}
				else if (Local_90.f_12 == 1)
				{
					func_309("SNK_SNK2FU", 0, 0);
				}
				else if (Local_90.f_12 == 2)
				{
					func_309("SNK_SNK3FU", 0, 0);
				}
				else if (Local_90.f_12 == 4)
				{
					func_309("SNK_SMOKFU", 0, 0);
				}
				else if (Local_90.f_12 == 0)
				{
					func_309("SNK_DRK1FU", 0, 0);
				}
				else if (Local_90.f_12 == 5)
				{
					func_309("SNK_DRK2FU", 0, 0);
				}
				else
				{
					func_309("SNK_NEEDED", 0, 0);
				}
			}
		}
		else
		{
			Local_90.f_27 = 0;
			Local_90.f_35 = 0;
			func_268(&(Local_90.f_44));
			sVar0 = func_308(Local_90.f_12);
			if (unk_0xC929DDA58687736B(sVar0))
			{
				func_309(sVar0, 0, 0);
			}
		}
	}
}

float func_260(var uParam0)
{
	if (func_263(uParam0))
	{
		if (func_262(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_261(unk_0x889D01384B54BCE3(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_261(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()) / 1000f);
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		iVar0 = unk_0x519586565311459B();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()) / 1000f);
}

bool func_262(var uParam0)
{
	return unk_0x889D01384B54BCE3(*uParam0, 2);
}

bool func_263(var uParam0)
{
	return unk_0x889D01384B54BCE3(*uParam0, 1);
}

int func_264(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = unk_0xEADB7AB703FF2133();
	}
	iVar0 = (iVar0 + unk_0xDBED60E4A98E4A0B(-1));
	return iVar0;
}

int func_265()
{
	float fVar0;
	
	fVar0 = unk_0x652812E02A8A71D6(2, 219);
	if ((fVar0 > 0.8f || unk_0xF49761626882E968(2, 187)) || unk_0x1453F50088A91E4E(2, 242))
	{
		if (!func_263(&(Local_90.f_41)))
		{
			func_267(&(Local_90.f_41));
			return 1;
		}
		else if (func_266(&(Local_90.f_41)) > 0.25f)
		{
			func_338(&(Local_90.f_41));
			return 1;
		}
	}
	else if (func_263(&(Local_90.f_41)))
	{
		func_268(&(Local_90.f_41));
	}
	return 0;
}

float func_266(var uParam0)
{
	if (func_263(uParam0))
	{
		if (func_262(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_261(unk_0x889D01384B54BCE3(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_267(var uParam0)
{
	if (!func_263(uParam0))
	{
		func_338(uParam0);
	}
}

void func_268(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_269()
{
	float fVar0;
	
	fVar0 = unk_0x652812E02A8A71D6(2, 219);
	if ((fVar0 < -0.8f || unk_0xF49761626882E968(2, 188)) || unk_0x1453F50088A91E4E(2, 241))
	{
		if (!func_263(&(Local_90.f_38)))
		{
			func_267(&(Local_90.f_38));
			return 1;
		}
		else if (func_266(&(Local_90.f_38)) > 0.25f)
		{
			func_338(&(Local_90.f_38));
			return 1;
		}
	}
	else if (func_263(&(Local_90.f_38)))
	{
		func_268(&(Local_90.f_38));
	}
	return 0;
}

int func_270()
{
	if (unk_0x3E512F3AB14225D6(2))
	{
		if (Global_2541359 > -1)
		{
			if (unk_0x1453F50088A91E4E(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_271(int iParam0, int iParam1)
{
	if (!unk_0x3E512F3AB14225D6(2))
	{
		return 0;
	}
	if (unk_0x2B0FFD431FD5A9FA() || unk_0x34CC8D9406FED489())
	{
		return 0;
	}
	unk_0x6FCAB92159B80585();
	if (Global_2541359 == -6)
	{
		unk_0xEA881E880194550C(4);
		if (iParam0 && unk_0xF49761626882E968(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2541359 = -1;
			return 0;
		}
	}
	if (((Global_2541359 > -1 || Global_2541359 == -3) || Global_2541359 == -2) || unk_0xE0449C72C968CF8D())
	{
		unk_0xEA881E880194550C(1);
		return 0;
	}
	if (Global_2541359 == -1 && iParam0)
	{
		if (unk_0xF49761626882E968(2, 237))
		{
			unk_0xEA881E880194550C(4);
			Global_2541359 = -6;
			return 1;
		}
		else
		{
			unk_0xEA881E880194550C(3);
			return 0;
		}
	}
	unk_0xEA881E880194550C(1);
	return 0;
}

void func_272(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x3E512F3AB14225D6(2))
	{
		Global_2541359 = -1;
		return;
	}
	unk_0xDFCDE7E4BB655DCA(1);
	fVar0 = Global_17235;
	fVar2 = (fVar0 + Global_17237);
	fVar3 = Global_17238.f_4988;
	fVar1 = (Global_17238.f_4988 - (IntToFloat(Global_17238.f_4990) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17238.f_4990 < 1)
	{
		fVar1 = (Global_17238.f_4988 - 0.034722f);
	}
	unk_0xD56181B43A801B45(76, 84);
	unk_0x005186B9591984A5(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xFB06D9C36A569046(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xFB06D9C36A569046(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xD599E2B13BA25D7B();
	func_275();
	if (Global_2541359 == -6)
	{
		return;
	}
	Global_2541359 = -1;
	fVar7 = Global_2541353;
	fVar8 = Global_2541354;
	if (Global_17238.f_4991 > Global_17238.f_4990)
	{
		if (((Global_2541353 >= fVar0 && Global_2541353 <= fVar2) && Global_2541354 >= fVar3) && Global_2541354 < (fVar3 + fVar6))
		{
			Global_2541359 = -2;
			if (bParam3)
			{
				func_274(0);
			}
			return;
		}
		if (((Global_2541353 >= fVar0 && Global_2541353 <= fVar2) && Global_2541354 >= (fVar3 + fVar6)) && Global_2541354 < (fVar3 + 0.034722f))
		{
			Global_2541359 = -3;
			if (bParam3)
			{
				func_274(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17238.f_4991 == -1)
		{
			Global_2541359 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17238.f_4990);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xD56181B43A801B45(76, 84);
				unk_0x005186B9591984A5(-0.05f, -0.05f, 0f, 0f);
				func_273(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17237, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0xD599E2B13BA25D7B();
			}
		}
		Global_2541359 = Global_17238.f_6833[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2541359 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2541359 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2541359 = -4;
		return;
	}
	Global_2541359 = -1;
}

void func_273(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x7EEA32490EAB9FA4((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_274(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17235;
	fVar1 = Global_17238.f_4988;
	unk_0xD56181B43A801B45(76, 84);
	unk_0x005186B9591984A5(-0.05f, -0.05f, 0f, 0f);
	if (Global_2541359 == -2)
	{
		func_273(fVar0, fVar1, Global_17237, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2541359 == -3)
	{
		func_273(fVar0, (fVar1 + fVar2), Global_17237, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xD599E2B13BA25D7B();
}

void func_275()
{
	Global_2541355 = Global_2541353;
	Global_2541356 = Global_2541354;
	Global_2541353 = unk_0x4A8C8B3AD253A58F(2, 239);
	Global_2541354 = unk_0x4A8C8B3AD253A58F(2, 240);
	Global_2541357 = (Global_2541353 - Global_2541355);
	Global_2541358 = (Global_2541354 - Global_2541356);
}

void func_276(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	int iVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!func_153(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_305(0, bParam6))
	{
		return;
	}
	unk_0xD56181B43A801B45(76, 84);
	unk_0x005186B9591984A5(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17238)
	{
		if (func_303(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17238 = 0;
		}
	}
	if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_1)) == unk_0xB793F1A0B6CC4AE1("HIDE"))
	{
		fVar56 = Global_17236;
	}
	else
	{
		fVar56 = (((Global_17236 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17237;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		unk_0x8C31DEE1FBBA2653(&iVar57, &iVar58);
		fVar60 = unk_0x649F384939D0D134(0);
		if (func_302())
		{
			iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) * fVar60));
		}
		fVar61 = (unk_0xBBDA792448DB5A89(iVar57) / unk_0xBBDA792448DB5A89(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (func_302())
		{
			fVar59 = 1f;
		}
		iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar57) / fVar59));
		iVar58 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) / fVar59));
	}
	else
	{
		unk_0xBD535F1B4794167F(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17238.f_4986)
		{
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_1)) == unk_0xB793F1A0B6CC4AE1("HIDE"))
			{
				fVar49 = Global_17236;
			}
			else
			{
				if (Global_17238)
				{
					unk_0xC4280B4C4EEB3807(func_301(29), func_299(29, 1), (Global_17235 + (fParam5 * 0.5f)), (Global_17236 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17238.f_7177)
				{
					iVar1 = Global_17238.f_7173;
					iVar2 = Global_17238.f_7174;
					iVar3 = Global_17238.f_7175;
					iVar4 = Global_17238.f_7176;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_273(Global_17235, (Global_17236 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17236 + fVar55) + 0.034722f) + 0f);
				if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_1)) != 0)
				{
					func_298();
					unk_0xC428E1247B8480C3(&(Global_17238.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17238.f_68)
					{
						if (Global_17238.f_5[iVar14] == 2)
						{
							unk_0x53B64327E3305DCB(Global_17238.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17238.f_5[iVar14] == 3)
						{
							unk_0xC8C41AD5B003B30B(Global_17238.f_14[iVar16], Global_17238.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17238.f_5[iVar14] == 1)
						{
							unk_0x4498E0CBD76B2D72(&(Global_17238.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17238.f_5[iVar14] == 8)
						{
							unk_0x4498E0CBD76B2D72(&(Global_17238.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17238.f_5[iVar14] == 5)
						{
							unk_0x94E086BCAE8856C1(&(Global_17238.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17238.f_5[iVar14] == 6)
						{
							unk_0x4498E0CBD76B2D72(&(Global_17238.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17238.f_5[iVar14] == 7)
						{
							unk_0x94E086BCAE8856C1(&(Global_17238.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x68E2B15AC7135C83((Global_17235 + 0.00390625f), ((Global_17236 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17238.f_4989 > Global_17238.f_4499)
				{
					if (Global_17238.f_4992 != 0)
					{
						func_298();
						func_296((((Global_17235 + fParam5) - 0.00390625f) - func_297("CM_ITEM_COUNT", Global_17238.f_4992, Global_17238.f_4991)), ((Global_17236 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17238.f_4992, Global_17238.f_4991);
					}
				}
			}
			iVar6 = Global_17238.f_4993;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17238.f_7187)
			{
				iVar1 = Global_17238.f_7183;
				iVar2 = Global_17238.f_7184;
				iVar3 = Global_17238.f_7185;
				iVar4 = Global_17238.f_7186;
			}
			else
			{
				unk_0x6C42276FEC08CCF9(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17238.f_4499 && iVar6 <= Global_17238.f_4492)
			{
				if (iVar6 >= 0)
				{
					if (Global_17238.f_4753[iVar6])
					{
						if (Global_17238.f_4627[iVar6] && iVar6 != Global_17238.f_4993)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17238.f_5000[iVar6] != 0f)
						{
							fVar54 = Global_17238.f_5000[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 = (fVar49 + fVar54);
					iVar9++;
					if (Global_17238.f_4492 <= 1)
					{
						Global_17238.f_4492++;
					}
					iVar52 = 1;
				}
			}
			unk_0xC4280B4C4EEB3807("CommonMenu", "Gradient_Bgd", (Global_17235 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17238.f_4989 > Global_17238.f_4499)
			{
				if (Global_17238.f_7192)
				{
					iVar1 = Global_17238.f_7188;
					iVar2 = Global_17238.f_7189;
					iVar3 = Global_17238.f_7190;
					iVar4 = Global_17238.f_7191;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_273(Global_17235, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x2BA2BECD21B523A8("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17238.f_7205)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x6C42276FEC08CCF9(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xC4280B4C4EEB3807("CommonMenu", "shop_arrows_upANDdown", (Global_17235 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), (Var37.f_0 / IntToFloat(iVar57)), (Var37.f_1 / IntToFloat(iVar58)), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_3969)) != 0 && Global_17238.f_4043 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17235 + 0.0046875f);
				if (Global_17238.f_4045 != 0)
				{
					func_303(Global_17238.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17235 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_295(fVar41);
				unk_0x7037B434CD6C43C2(&(Global_17238.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17238.f_4039)
				{
					if (Global_17238.f_3973[iVar14] == 2)
					{
						unk_0x53B64327E3305DCB(Global_17238.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17238.f_3973[iVar14] == 3)
					{
						unk_0xC8C41AD5B003B30B(Global_17238.f_3982[iVar16], Global_17238.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17238.f_3973[iVar14] == 1)
					{
						unk_0x4498E0CBD76B2D72(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_3973[iVar14] == 5)
					{
						unk_0x94E086BCAE8856C1(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_3973[iVar14] == 6)
					{
						unk_0x4498E0CBD76B2D72(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_3973[iVar14] == 7)
					{
						unk_0x94E086BCAE8856C1(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x3BCFF5D2F376E6A4(fVar41, (fVar49 + 0.00277776f));
				unk_0x6C42276FEC08CCF9(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_273(Global_17235, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17238.f_7197)
				{
					iVar1 = Global_17238.f_7193;
					iVar2 = Global_17238.f_7194;
					iVar3 = Global_17238.f_7195;
					iVar4 = Global_17238.f_7196;
				}
				else
				{
					unk_0x6C42276FEC08CCF9(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xC4280B4C4EEB3807("CommonMenu", "Gradient_Bgd", (Global_17235 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9A4D7A4AF1373FB1(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9A4D7A4AF1373FB1(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_295(fVar41);
				unk_0xC428E1247B8480C3(&(Global_17238.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17238.f_4039)
				{
					if (Global_17238.f_3973[iVar14] == 2)
					{
						unk_0x53B64327E3305DCB(Global_17238.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17238.f_3973[iVar14] == 3)
					{
						unk_0xC8C41AD5B003B30B(Global_17238.f_3982[iVar16], Global_17238.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17238.f_3973[iVar14] == 1)
					{
						unk_0x4498E0CBD76B2D72(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_3973[iVar14] == 5)
					{
						unk_0x94E086BCAE8856C1(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_3973[iVar14] == 6)
					{
						unk_0x4498E0CBD76B2D72(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_3973[iVar14] == 7)
					{
						unk_0x94E086BCAE8856C1(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_3973[iVar14] == 8)
					{
						unk_0x4498E0CBD76B2D72(&(Global_17238.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x68E2B15AC7135C83(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17238.f_4045 != 0)
				{
					func_303(Global_17238.f_4045, 1, 1, &fVar35, &fVar36, bParam7);
					func_294(Global_17238.f_4045, 1, &iVar46, &iVar47, &iVar48);
					unk_0xC4280B4C4EEB3807(func_301(Global_17238.f_4045), func_299(Global_17238.f_4045, 1), ((Global_17235 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x9A4D7A4AF1373FB1(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17238.f_4043 > 0)
				{
					if ((unk_0x09560C7DE2A384BD() - Global_17238.f_4044) > Global_17238.f_4043)
					{
						StringCopy(&(Global_17238.f_3969), "", 16);
						Global_17238.f_4043 = -1;
					}
				}
			}
			if (unk_0xB793F1A0B6CC4AE1(&(Global_2541283.f_21)) != 0 && Global_2541283.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17235 + 0.0046875f);
				if (Global_2541283.f_67 != 0)
				{
					func_303(Global_2541283.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17235 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_295(fVar41);
				unk_0x7037B434CD6C43C2(&(Global_2541283.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2541283.f_61)
				{
					if (Global_2541283.f_25[iVar14] == 2)
					{
						unk_0x53B64327E3305DCB(Global_2541283.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2541283.f_25[iVar14] == 3)
					{
						unk_0xC8C41AD5B003B30B(Global_2541283.f_34[iVar16], Global_2541283.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2541283.f_25[iVar14] == 1)
					{
						unk_0x4498E0CBD76B2D72(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2541283.f_25[iVar14] == 5)
					{
						unk_0x94E086BCAE8856C1(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2541283.f_25[iVar14] == 6)
					{
						unk_0x4498E0CBD76B2D72(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2541283.f_25[iVar14] == 7)
					{
						unk_0x94E086BCAE8856C1(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2541283.f_25[iVar14] == 8)
					{
						unk_0x4498E0CBD76B2D72(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x3BCFF5D2F376E6A4(fVar41, (fVar49 + 0.00277776f));
				unk_0x6C42276FEC08CCF9(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_273(Global_17235, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17238.f_7197)
				{
					iVar1 = Global_17238.f_7193;
					iVar2 = Global_17238.f_7194;
					iVar3 = Global_17238.f_7195;
					iVar4 = Global_17238.f_7196;
				}
				else
				{
					unk_0x6C42276FEC08CCF9(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xC4280B4C4EEB3807("CommonMenu", "Gradient_Bgd", (Global_17235 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9A4D7A4AF1373FB1(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9A4D7A4AF1373FB1(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_295(fVar41);
				unk_0xC428E1247B8480C3(&(Global_2541283.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2541283.f_61)
				{
					if (Global_2541283.f_25[iVar14] == 2)
					{
						unk_0x53B64327E3305DCB(Global_2541283.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2541283.f_25[iVar14] == 3)
					{
						unk_0xC8C41AD5B003B30B(Global_2541283.f_34[iVar16], Global_2541283.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2541283.f_25[iVar14] == 1)
					{
						unk_0x4498E0CBD76B2D72(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2541283.f_25[iVar14] == 8)
					{
						unk_0x4498E0CBD76B2D72(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2541283.f_25[iVar14] == 5)
					{
						unk_0x94E086BCAE8856C1(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2541283.f_25[iVar14] == 6)
					{
						unk_0x4498E0CBD76B2D72(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2541283.f_25[iVar14] == 7)
					{
						unk_0x94E086BCAE8856C1(&(Global_2541283.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x68E2B15AC7135C83(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2541283.f_67 != 0)
				{
					func_303(Global_2541283.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_294(Global_2541283.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xC4280B4C4EEB3807(func_301(Global_2541283.f_67), func_299(Global_2541283.f_67, 1), ((Global_17235 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x9A4D7A4AF1373FB1(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2541283.f_65 > 0)
				{
					if ((unk_0x09560C7DE2A384BD() - Global_2541283.f_66) > Global_2541283.f_65)
					{
						StringCopy(&(Global_2541283.f_21), "", 16);
						Global_2541283.f_65 = -1;
					}
				}
			}
			func_287(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xD56181B43A801B45(76, 84);
			unk_0x005186B9591984A5(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17238.f_4986)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar63 = Global_17238.f_4492;
			if (Global_17238.f_4987)
			{
				iVar63 = (Global_17238.f_4990 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17238.f_5000[iVar6] != 0f)
				{
					fVar54 = Global_17238.f_5000[iVar6];
				}
				if (Global_17238.f_4987)
				{
					iVar6 = Global_17238.f_6833[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17238.f_4993 && iVar9 < Global_17238.f_4499)
				{
					bVar32 = true;
					if (Global_17238.f_4994 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17238.f_4627[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17238.f_5131[iVar6] = fVar34;
				fVar33 = (Global_17235 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17238.f_4994 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17238.f_7199)
					{
						unk_0x6C42276FEC08CCF9(Global_17238.f_7198, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0x6C42276FEC08CCF9(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0xC4280B4C4EEB3807("CommonMenu", "Gradient_Nav", (Global_17235 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17238.f_5129 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_285(bVar31, 1, 0, 0, 0, 0);
					unk_0xC428E1247B8480C3("DFLT_MNU_OPT");
					unk_0x68E2B15AC7135C83(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17238.f_4500)
					{
						if (unk_0x889D01384B54BCE3(Global_17238.f_4366[iVar6], iVar8) || Global_17238.f_4333[iVar8] == 5)
						{
							if (Global_17238.f_4987)
							{
								iVar19 = Global_17238.f_6844[((iVar9 * Global_17238.f_4500) + iVar8)];
								iVar20 = Global_17238.f_6885[((iVar9 * Global_17238.f_4500) + iVar8)];
								iVar21 = Global_17238.f_6926[((iVar9 * Global_17238.f_4500) + iVar8)];
								iVar22 = Global_17238.f_6967[((iVar9 * Global_17238.f_4500) + iVar8)];
								iVar23 = Global_17238.f_7008[((iVar9 * Global_17238.f_4500) + iVar8)];
							}
							else
							{
								Global_17238.f_6844[((iVar9 * Global_17238.f_4500) + iVar8)] = iVar19;
								Global_17238.f_6885[((iVar9 * Global_17238.f_4500) + iVar8)] = iVar20;
								Global_17238.f_6926[((iVar9 * Global_17238.f_4500) + iVar8)] = iVar21;
								Global_17238.f_6967[((iVar9 * Global_17238.f_4500) + iVar8)] = iVar22;
								Global_17238.f_7008[((iVar9 * Global_17238.f_4500) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17238.f_5260[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17238.f_5257[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17238.f_5260[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17238.f_5257[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17238.f_4339[iVar8] != -1f)
							{
								fVar33 = ((Global_17235 + 0.0046875f) + Global_17238.f_4339[iVar8]);
							}
							if ((iVar8 < 4 && Global_17238.f_4339[iVar8 + 1] != -1f) && fVar33 < Global_17238.f_4339[iVar8 + 1])
							{
								fVar45 = (Global_17238.f_4339[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17235 + Global_17237) - 0.0046875f) - fVar33);
							}
							if ((Global_17238.f_4352[iVar8] && Global_17238.f_5126) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17238.f_4333[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17238.f_4987)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17238.f_1576[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_285(bVar31, Global_17238.f_1074[iVar24], Global_17238.f_1325[iVar24], bVar53, iVar70, bVar50);
												unk_0x65CC688E5B978C02(&(Global_17238.f_73[iVar24 /*4*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x4498E0CBD76B2D72(&(Global_17238.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x4498E0CBD76B2D72(&(Global_17238.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x94E086BCAE8856C1(&(Global_2435665[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x4498E0CBD76B2D72(&(Global_2435665[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x94E086BCAE8856C1(&(Global_2435665[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x53B64327E3305DCB(Global_17238.f_3340[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xC8C41AD5B003B30B(Global_17238.f_3591[(iVar21 + iVar27)], Global_17238.f_3717[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
											{
												fVar42 = unk_0xFBF0574D26E9F943(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_303(Global_17238.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17238.f_3843[(iVar22 + iVar14)] == 2)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17238.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17238.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17238.f_7049[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar41;
											Global_17238.f_7090[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar42;
											Global_17238.f_7131[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17238.f_7049[((iVar9 * Global_17238.f_4500) + iVar8)];
											fVar42 = Global_17238.f_7090[((iVar9 * Global_17238.f_4500) + iVar8)];
											fVar43 = Global_17238.f_7131[((iVar9 * Global_17238.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_303(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17238.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_303(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_294(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC4280B4C4EEB3807(func_301(26), func_299(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_303(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_303(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_294(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC4280B4C4EEB3807(func_301(27), func_299(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17238.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_285(bVar31, Global_17238.f_1074[iVar24], Global_17238.f_1325[iVar24], bVar53, 0, bVar50);
											if (Global_17238.f_7203 && Global_17238.f_7204 == iVar6)
											{
												func_284(bVar31);
											}
											unk_0xC428E1247B8480C3(&(Global_17238.f_73[iVar24 /*4*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x4498E0CBD76B2D72(&(Global_17238.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x4498E0CBD76B2D72(&(Global_17238.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x94E086BCAE8856C1(&(Global_2435665[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x4498E0CBD76B2D72(&(Global_2435665[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x94E086BCAE8856C1(&(Global_2435665[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x53B64327E3305DCB(Global_17238.f_3340[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xC8C41AD5B003B30B(Global_17238.f_3591[(iVar21 + iVar27)], Global_17238.f_3717[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17238.f_3843[(iVar22 + iVar28)] == 2)
												{
													if (func_303(Global_17238.f_3843[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_303(Global_17238.f_3843[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_294(Global_17238.f_3843[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17238.f_4360[iVar8] == 2)
															{
																unk_0xC4280B4C4EEB3807(func_301(Global_17238.f_3843[(iVar22 + iVar28)]), func_299(Global_17238.f_3843[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xC4280B4C4EEB3807(func_301(Global_17238.f_3843[(iVar22 + iVar28)]), func_299(Global_17238.f_3843[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															fVar41 = (fVar41 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[iVar24 /*4*/])) != 0)
										{
											if (iVar30 == 4 && Global_17238.f_4360[iVar8] == 2)
											{
												unk_0x68E2B15AC7135C83(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x68E2B15AC7135C83((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17238.f_3843[(iVar22 + iVar14)] != 2)
												{
													if (func_303(Global_17238.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_303(Global_17238.f_3843[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_294(Global_17238.f_3843[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17238.f_3843[(iVar22 + iVar14)] == 30)
															{
																unk_0xC4280B4C4EEB3807(func_301(Global_17238.f_3843[(iVar22 + iVar14)]), func_299(Global_17238.f_3843[(iVar22 + iVar14)], bVar31), (Global_17235 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17238.f_4360[iVar8] == 2)
															{
																unk_0xC4280B4C4EEB3807(func_301(Global_17238.f_3843[(iVar22 + iVar14)]), func_299(Global_17238.f_3843[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xC4280B4C4EEB3807(func_301(Global_17238.f_3843[(iVar22 + iVar14)]), func_299(Global_17238.f_3843[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
														}
														fVar41 = (fVar41 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17238.f_1576[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17238.f_4987)
										{
											func_285(bVar31, Global_17238.f_1074[iVar24], Global_17238.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17238.f_7203 && Global_17238.f_7204 == iVar6)
											{
												func_284(bVar31);
											}
											unk_0x65CC688E5B978C02("NUMBER");
											unk_0x53B64327E3305DCB(Global_17238.f_3340[iVar20]);
											fVar42 = unk_0xFBF0574D26E9F943(1);
											fVar41 = 0f;
											if (Global_17238.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17238.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17238.f_7049[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar41;
											Global_17238.f_7090[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17238.f_7049[((iVar9 * Global_17238.f_4500) + iVar8)];
											fVar42 = Global_17238.f_7090[((iVar9 * Global_17238.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_303(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17238.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_303(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_294(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC4280B4C4EEB3807(func_301(26), func_299(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_303(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_303(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_294(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC4280B4C4EEB3807(func_301(27), func_299(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_285(bVar31, Global_17238.f_1074[iVar24], Global_17238.f_1325[iVar24], bVar53, 0, 0);
										func_283((fVar33 + fVar41), fVar34, "NUMBER", Global_17238.f_3340[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17238.f_4987)
										{
											func_285(bVar31, Global_17238.f_1074[iVar24], Global_17238.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17238.f_7203 && Global_17238.f_7204 == iVar6)
											{
												func_284(bVar31);
											}
											unk_0x65CC688E5B978C02("NUMBER");
											unk_0xC8C41AD5B003B30B(Global_17238.f_3591[iVar21], Global_17238.f_3717[iVar21]);
											fVar42 = unk_0xFBF0574D26E9F943(1);
											fVar41 = 0f;
											if (Global_17238.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17238.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17238.f_7049[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar41;
											Global_17238.f_7090[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17238.f_7049[((iVar9 * Global_17238.f_4500) + iVar8)];
											fVar42 = Global_17238.f_7090[((iVar9 * Global_17238.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_303(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17238.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_303(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_294(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC4280B4C4EEB3807(func_301(26), func_299(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_303(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_303(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_294(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xC4280B4C4EEB3807(func_301(27), func_299(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_285(bVar31, Global_17238.f_1074[iVar24], Global_17238.f_1325[iVar24], bVar53, 0, 0);
										func_282((fVar33 + fVar41), fVar34, "NUMBER", Global_17238.f_3591[iVar21], Global_17238.f_3717[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_303(Global_17238.f_3843[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17238.f_4987)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17238.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17238.f_4360[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17238.f_7049[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar41;
												Global_17238.f_7131[((iVar9 * Global_17238.f_4500) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17238.f_7049[((iVar9 * Global_17238.f_4500) + iVar8)];
												fVar43 = Global_17238.f_7131[((iVar9 * Global_17238.f_4500) + iVar8)];
											}
											if (bVar51)
											{
												if (func_303(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17238.f_4360[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_303(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_294(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xC4280B4C4EEB3807(func_301(26), func_299(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_303(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_303(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_294(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xC4280B4C4EEB3807(func_301(27), func_299(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_303(Global_17238.f_3843[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_294(Global_17238.f_3843[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xC4280B4C4EEB3807(func_301(Global_17238.f_3843[iVar22]), func_299(Global_17238.f_3843[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_281(Global_17238.f_3843[iVar22])), (fVar36 * func_281(Global_17238.f_3843[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									bVar40 = true;
									iVar22++;
									break;
								
								case 5:
									bVar40 = true;
									break;
							}
							if (Global_17238.f_4333[iVar8] == 5)
							{
								if (Global_17238.f_4345[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17238.f_4345[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17238.f_4345[iVar8]);
								if (Global_17238.f_4352[iVar8])
								{
									if (func_303(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17238.f_4345[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17238.f_6833[iVar9] = iVar6;
						Global_17238.f_4995 = iVar6;
						iVar9++;
						if (Global_17238.f_4627[iVar6])
						{
							iVar13++;
						}
						if (Global_17238.f_5000[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17238.f_5000[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17238.f_4986)
					{
						Global_17238.f_4753[iVar6] = 1;
						if (Global_17238.f_4501[iVar6])
						{
							if (bVar31)
							{
								Global_17238.f_4992 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17238.f_4992 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17238.f_4986)
			{
				Global_17238.f_4988 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17238.f_4991 = iVar11;
				Global_17238.f_4989 = iVar10;
				Global_17238.f_4986 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17238.f_4987)
	{
		Global_17238.f_4990 = iVar9;
		Global_17238.f_4987 = 1;
	}
	Global_17238.f_5128 = fVar49;
	Global_17238.f_5130 = unk_0x09560C7DE2A384BD();
	unk_0x1F4FE6D0BB9E338B(Global_17238.f_5128);
	if (!Global_17238.f_7172)
	{
		func_278();
	}
	Global_17238.f_7172 = 0;
	if (bParam2)
	{
		unk_0x8A5A9834DB717F2D(10);
	}
	unk_0x8A5A9834DB717F2D(6);
	unk_0x8A5A9834DB717F2D(7);
	unk_0x8A5A9834DB717F2D(9);
	unk_0x8A5A9834DB717F2D(8);
	if (bParam0)
	{
		func_277(1);
	}
	unk_0xD599E2B13BA25D7B();
}

void func_277(int iParam0)
{
	Global_1328903.f_932 = iParam0;
}

void func_278()
{
	if (!Global_14394.f_1 == 1)
	{
		if (func_225(0))
		{
			func_279(0);
		}
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 2);
	}
}

void func_279(int iParam0)
{
	if (Global_14552)
	{
		func_280(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
	}
	if (unk_0xBE029393332523D7())
	{
		unk_0x0D68C13151B68364(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 30);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 30);
	}
	if (!func_197())
	{
		Global_14394.f_1 = 3;
	}
}

void func_280(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_225(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x42F219BEF3DE3A7F(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0x6CE18C954519D281(Global_14331);
		}
		else
		{
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
}

float func_281(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_282(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xC428E1247B8480C3(sParam2);
	unk_0xC8C41AD5B003B30B(uParam3, uParam4);
	unk_0x68E2B15AC7135C83(fParam0, fParam1, 0);
}

void func_283(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xC428E1247B8480C3(sParam2);
	unk_0x53B64327E3305DCB(iParam3);
	unk_0x68E2B15AC7135C83(fParam0, fParam1, iParam4);
}

void func_284(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x6C42276FEC08CCF9(Global_17238.f_7200[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x6C42276FEC08CCF9(Global_17238.f_7200[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xB8662CE6B21E98E9(iVar0, iVar1, iVar2, 255);
}

void func_285(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_286(Global_17238.f_5260[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x6C42276FEC08CCF9(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xB8662CE6B21E98E9(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x6C42276FEC08CCF9(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xB8662CE6B21E98E9(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x6C42276FEC08CCF9(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xB8662CE6B21E98E9(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xB8662CE6B21E98E9(155, 155, 155, 255);
		}
		else
		{
			unk_0xB8662CE6B21E98E9(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xB8662CE6B21E98E9(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x6C42276FEC08CCF9(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xB8662CE6B21E98E9(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xB8662CE6B21E98E9(155, 155, 155, 255);
	}
	else
	{
		unk_0xB8662CE6B21E98E9(155, 155, 155, 255);
	}
	unk_0x892A8C0426DC3D40(0f, 0.35f);
	unk_0x608269ED9D57DF58(1);
	if (bParam5)
	{
		unk_0x892A8C0426DC3D40(0f, 0.425f);
		unk_0xDF9D373BEABBC157(4);
	}
	else
	{
		unk_0xDF9D373BEABBC157(0);
	}
	unk_0x8C9F4BAAC8A43A07(0f, 1f);
	unk_0x47D98CEF75CC51B3(0);
	unk_0x3547043C94E650B3(0, 0, 0, 0, 0);
	unk_0x5FC53677129F4597(0, 0, 0, 0, 0);
}

void func_286(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_287(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_153(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_305(bParam4, bParam8))
	{
		return;
	}
	if (func_292())
	{
		return;
	}
	if (unk_0x6E6ED37B068198D0())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_290(unk_0x1788E93557766241(), 0))
		{
			return;
		}
	}
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0xCB70128095B6956E() == 0 || unk_0x6E6ED37B068198D0())
		{
			return;
		}
	}
	if (Global_17238.f_4046 != 0)
	{
		if (unk_0xABDBD87CEACB4A79(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17238.f_4046)
			{
				if (Global_17238.f_4303[iVar1] != 335)
				{
					StringCopy(&(Global_17238.f_4048[iVar1 /*16*/]), unk_0xA71FB26FF9682F08(2, Global_17238.f_4303[iVar1], 1), 64);
				}
				else if (Global_17238.f_4316[iVar1] != 31)
				{
					StringCopy(&(Global_17238.f_4048[iVar1 /*16*/]), unk_0x8766516556CDFB2B(2, Global_17238.f_4316[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17238.f_4047 = 0;
		}
		if (!Global_17238.f_4047)
		{
			unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xD3DF251F2DF3B257();
			unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x50050D925C27B388((1f - (Global_17238.f_4358 / 100f)));
			unk_0xD3DF251F2DF3B257();
			if (unk_0xF6BAF9F0C2863FFE())
			{
				unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xF34EF2C628F5B47B(1);
				unk_0xD3DF251F2DF3B257();
			}
			iVar1 = 0;
			while (iVar1 < Global_17238.f_4046)
			{
				if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_4241[iVar1 /*4*/])) != unk_0xB793F1A0B6CC4AE1("PREV"))
				{
					unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x26221D1D76579618(iVar1);
					func_289(&(Global_17238.f_4048[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_4241[iVar2 /*4*/])) == unk_0xB793F1A0B6CC4AE1("PREV"))
					{
						func_289(&(Global_17238.f_4048[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17238.f_4290[iVar1] == -1)
					{
						func_288(&(Global_17238.f_4241[iVar1 /*4*/]));
					}
					else
					{
						unk_0xEBC0B3BDAD1250BE(&(Global_17238.f_4241[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xECACDB29F7B53568(iParam2, 70);
						}
						else
						{
							unk_0x53B64327E3305DCB(iParam2);
						}
						unk_0x9F94C7B5E8C04AB3();
					}
					if (unk_0xF6BAF9F0C2863FFE())
					{
						if (Global_17238.f_4303[iVar1] != 335 && unk_0x889D01384B54BCE3(Global_17238.f_4329, iVar1))
						{
							unk_0xF34EF2C628F5B47B(1);
							unk_0x26221D1D76579618(Global_17238.f_4303[iVar1]);
						}
						else
						{
							unk_0xF34EF2C628F5B47B(0);
							unk_0x26221D1D76579618(335);
						}
					}
					unk_0xD3DF251F2DF3B257();
				}
				iVar1++;
			}
			if (unk_0xB793F1A0B6CC4AE1(&(Global_2541283.f_16)) != unk_0xB793F1A0B6CC4AE1(""))
			{
				unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x26221D1D76579618(Global_17238.f_4046);
				func_289(&Global_2541283);
				if (Global_2541283.f_20 == -1)
				{
					func_288(&(Global_2541283.f_16));
				}
				else
				{
					unk_0xEBC0B3BDAD1250BE(&(Global_2541283.f_16));
					if (bParam5)
					{
						unk_0xECACDB29F7B53568(iParam2, 70);
					}
					else
					{
						unk_0x53B64327E3305DCB(iParam2);
					}
					unk_0x9F94C7B5E8C04AB3();
				}
				unk_0xD3DF251F2DF3B257();
			}
			unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x26221D1D76579618(0);
			unk_0x26221D1D76579618(0);
			unk_0x26221D1D76579618(0);
			unk_0x26221D1D76579618(80);
			unk_0xD3DF251F2DF3B257();
			unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17238.f_4359)
			{
				unk_0x26221D1D76579618(1);
			}
			else
			{
				unk_0x26221D1D76579618(0);
			}
			unk_0xD3DF251F2DF3B257();
			Global_17238.f_4047 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17238.f_4046)
		{
			if (Global_17238.f_4290[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x26221D1D76579618(iVar1);
					unk_0xEBC0B3BDAD1250BE(&(Global_17238.f_4241[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xECACDB29F7B53568(iParam2, 70);
					}
					else
					{
						unk_0x53B64327E3305DCB(iParam2);
					}
					unk_0x9F94C7B5E8C04AB3();
					unk_0xD3DF251F2DF3B257();
				}
			}
			iVar1++;
		}
		if (Global_2541283.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xB067107D878E9585(Global_17238.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x26221D1D76579618(iVar1);
				unk_0xEBC0B3BDAD1250BE(&(Global_2541283.f_16));
				if (bParam5)
				{
					unk_0xECACDB29F7B53568(iParam2, 70);
				}
				else
				{
					unk_0x53B64327E3305DCB(iParam2);
				}
				unk_0x9F94C7B5E8C04AB3();
				unk_0xD3DF251F2DF3B257();
			}
		}
		unk_0xD56181B43A801B45(76, 66);
		unk_0x005186B9591984A5(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17238.f_7207)
			{
				unk_0xAD871E75FA8292BF(15, 0f, -0.0375f);
				Global_17238.f_7207 = 1;
			}
		}
		else if (Global_17238.f_7207)
		{
			unk_0x2F2EE906A0CF46A3(15);
			Global_17238.f_7207 = 0;
		}
		unk_0xD599E2B13BA25D7B();
		if (Global_17238.f_4332)
		{
			unk_0xD56181B43A801B45(82, 66);
			unk_0x005186B9591984A5(0f, 0f, 0f, 0f);
			unk_0x782CAB485999E384(Global_17238.f_4918[iVar0 /*10*/], Global_17238.f_4330, Global_17238.f_4331, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xD599E2B13BA25D7B();
		}
		else
		{
			unk_0x27BDF28219C810BA(Global_17238.f_4918[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_288(var uParam0)
{
	unk_0xEBC0B3BDAD1250BE(uParam0);
	unk_0x9F94C7B5E8C04AB3();
}

void func_289(var uParam0)
{
	unk_0xB51F3A5C13620EE6(uParam0);
}

bool func_290(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_291(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1583725[iParam0 /*334*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x38FA37FE3518BA38(iParam0))
		{
			bVar0 = unk_0xA2D6C1E24AF2E058(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_291(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_74();
	}
	if (Global_1315869[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_292()
{
	struct<3> Var0;
	
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	if (func_293())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x42F219BEF3DE3A7F(&Var0);
		if (Global_14339 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_293()
{
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_294(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0x6C42276FEC08CCF9(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_295(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x6C42276FEC08CCF9(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xDF9D373BEABBC157(0);
	unk_0x892A8C0426DC3D40(0f, 0.35f);
	unk_0x6C98E2D18D37F459(2);
	unk_0xB8662CE6B21E98E9(iVar0, iVar1, iVar2, iVar3);
	unk_0x8C9F4BAAC8A43A07(fParam0, ((Global_17235 + Global_17237) - 0.0046875f));
	unk_0x47D98CEF75CC51B3(0);
	unk_0x3547043C94E650B3(0, 0, 0, 0, 0);
	unk_0x5FC53677129F4597(0, 0, 0, 0, 0);
}

void func_296(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xC428E1247B8480C3(sParam2);
	unk_0x53B64327E3305DCB(uParam3);
	unk_0x53B64327E3305DCB(uParam4);
	unk_0x68E2B15AC7135C83(fParam0, fParam1, 0);
}

float func_297(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x8CD18E96F1984EE6(sParam0))
	{
		if (unk_0xB793F1A0B6CC4AE1(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_298();
	unk_0x65CC688E5B978C02(sParam0);
	unk_0x53B64327E3305DCB(uParam1);
	unk_0x53B64327E3305DCB(uParam2);
	return unk_0xFBF0574D26E9F943(1);
}

void func_298()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x6C42276FEC08CCF9(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17238.f_7182)
	{
		iVar0 = Global_17238.f_7178;
		iVar1 = Global_17238.f_7179;
		iVar2 = Global_17238.f_7180;
		iVar3 = Global_17238.f_7181;
	}
	unk_0xDF9D373BEABBC157(0);
	unk_0x892A8C0426DC3D40(0f, 0.35f);
	unk_0xB8662CE6B21E98E9(iVar0, iVar1, iVar2, iVar3);
	unk_0x8C9F4BAAC8A43A07((Global_17235 + 0.0046875f), ((Global_17235 + Global_17237) - 0.0046875f));
	unk_0x47D98CEF75CC51B3(0);
	unk_0x3547043C94E650B3(0, 0, 0, 0, 0);
	unk_0x5FC53677129F4597(0, 0, 0, 0, 0);
}

var func_299(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0x06771AF7795B3ECF(&(Global_17238.f_6048[iParam0 /*16*/])))
	{
		return func_300(&(Global_17238.f_6048[iParam0 /*16*/]));
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

var func_300(var uParam0)
{
	return uParam0;
}

char* func_301(int iParam0)
{
	if (!unk_0x06771AF7795B3ECF(&(Global_17238.f_5263[iParam0 /*16*/])))
	{
		return func_300(&(Global_17238.f_5263[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_302()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x8C31DEE1FBBA2653(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_303(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_301(iParam0);
	sVar1 = func_299(iParam0, bParam1);
	if (unk_0xB793F1A0B6CC4AE1(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x8C31DEE1FBBA2653(&iVar2, &iVar3);
			fVar5 = unk_0x649F384939D0D134(0);
			if (func_302())
			{
				iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar5));
			}
			fVar6 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_302())
			{
				fVar4 = 1f;
			}
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0xBD535F1B4794167F(&iVar2, &iVar3);
		}
		Var7 = { unk_0x2BA2BECD21B523A8(uVar0, sVar1) };
		Var7.f_0 = (Var7.f_0 * (func_304(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_304(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.f_0 = (Var7.f_0 - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.f_0 = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x4766AC67087E1839() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17237)
			{
				*fParam4 = (*fParam4 * (Global_17237 / *fParam3));
				*fParam3 = Global_17237;
			}
		}
		return 1;
	}
	return 0;
}

float func_304(int iParam0)
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

int func_305(bool bParam0, bool bParam1)
{
	if (Global_2422491.f_1323.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x83B393DE31BAC8F0() || (func_206(8, -1) && func_306() != 64)) || (unk_0xB0E35FF1A90C8FAA() != 0 && !bParam1)) || (unk_0xB4B5BF5882A555F9() && !bParam0)) || unk_0xEEF4BA306EA3EC77()) || Global_68585) || Global_17238.f_7206) || unk_0x34CC8D9406FED489()) || Global_90094.f_1323)
	{
		return 0;
	}
	return 1;
}

int func_306()
{
	return Global_1315824;
}

void func_307(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xA71FB26FF9682F08(2, iParam0, 1);
	if (Global_17238.f_4046 >= 12)
	{
		StringCopy(&Global_2541283, sVar0, 64);
		StringCopy(&(Global_2541283.f_16), sParam1, 16);
		Global_2541283.f_20 = iParam2;
		return;
		return;
	}
	unk_0xD0E2BFCE93AE3ABD(&(Global_17238.f_4329), Global_17238.f_4046);
	StringCopy(&(Global_17238.f_4048[Global_17238.f_4046 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17238.f_4241[Global_17238.f_4046 /*4*/]), sParam1, 16);
	Global_17238.f_4290[Global_17238.f_4046] = iParam2;
	Global_17238.f_4303[Global_17238.f_4046] = iParam0;
	Global_17238.f_4316[Global_17238.f_4046] = 31;
	Global_17238.f_4046++;
}

char* func_308(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 6;
	}
	switch (iVar0)
	{
		case 6:
			return "SNK_AFFORD";
		
		case 3:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		case 4:
			return "SNK_ITEM4_D";
		
		case 0:
			return "SNK_ITEM5_D";
		
		case 5:
			return "SNK_ITEM6_D";
		
		default:
	}
	return "";
}

void func_309(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17238.f_3969), sParam0, 16);
	Global_17238.f_4039 = 0;
	Global_17238.f_4040 = 0;
	Global_17238.f_4041 = 0;
	Global_17238.f_4042 = 0;
	Global_17238.f_4043 = iParam1;
	Global_17238.f_4044 = unk_0x09560C7DE2A384BD();
	Global_17238.f_4045 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17238.f_3973[iVar0] = 0;
		iVar0++;
	}
}

void func_310(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17238.f_4994 = uParam0;
	Global_17238.f_5126 = iParam2;
	if (Global_17238.f_4994 < Global_17238.f_4993)
	{
		Global_17238.f_4993 = Global_17238.f_4994;
	}
	else if ((Global_17238.f_4987 && Global_17238.f_4994 > Global_17238.f_4995) || (!Global_17238.f_4987 && Global_17238.f_4994 >= (Global_17238.f_4993 + Global_17238.f_4499)))
	{
		iVar0 = Global_17238.f_4993;
		while (iVar0 <= Global_17238.f_4994)
		{
			if (iVar0 >= 0 && iVar0 < 124)
			{
				if (Global_17238.f_4366[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17238.f_4499 && Global_17238.f_4993 < 125)
		{
			Global_17238.f_4993++;
			iVar1 = 0;
			iVar0 = Global_17238.f_4993;
			while (iVar0 <= Global_17238.f_4994)
			{
				if (iVar0 >= 0 && iVar0 < 124)
				{
					if (Global_17238.f_4366[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17238.f_4986 = 0;
	Global_17238.f_4987 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17238.f_3969), "", 16);
		StringCopy(&(Global_2541283.f_21), "", 16);
	}
}

void func_311(int iParam0)
{
	Global_17238.f_4993 = iParam0;
}

void func_312(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17238.f_4496 >= 250)
	{
		return;
	}
	if (Global_17238.f_4998 >= 4)
	{
		return;
	}
	if (Global_17238.f_4999 != 1)
	{
		return;
	}
	if (Global_17238.f_4998 >= Global_17238.f_4996)
	{
		return;
	}
	Global_17238.f_3340[Global_17238.f_4496] = uParam0;
	Global_17238.f_4496++;
	Global_17238.f_1576[Global_17238.f_4997 /*5*/][Global_17238.f_4998] = 2;
	Global_17238.f_4998++;
	if (Global_17238.f_4998 >= Global_17238.f_4996)
	{
		fVar0 = func_314();
		if (Global_17238.f_4352[Global_17238.f_4493] && Global_17238.f_4998 == Global_17238.f_4996)
		{
			func_303(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17238.f_4345[(Global_17238.f_4493 - 1)])
		{
			Global_17238.f_4345[(Global_17238.f_4493 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17238.f_4998 >= Global_17238.f_4996)
		{
			fVar3 = func_313();
			if (fVar3 > Global_17238.f_5000[Global_17238.f_4492])
			{
				Global_17238.f_5000[Global_17238.f_4492] = fVar3;
			}
		}
	}
}

float func_313()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17238.f_4998)
	{
		if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17238.f_3843[((Global_17238.f_4498 - iVar1) + iVar0)] != 0)
		{
			if (func_303(Global_17238.f_3843[((Global_17238.f_4498 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x9A4D7A4AF1373FB1(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x9A4D7A4AF1373FB1(0.35f, 0);
}

float func_314()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17238.f_4998)
	{
		if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_285(0, 1, 0, 0, 0, iVar6 > 0);
	if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
	{
		unk_0x65CC688E5B978C02(&(Global_17238.f_73[Global_17238.f_4997 /*4*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17238.f_4998)
	{
		if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
			{
				unk_0x4498E0CBD76B2D72(&(Global_17238.f_73[(Global_17238.f_4997 + iVar8) /*4*/]));
			}
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
			{
				unk_0x4498E0CBD76B2D72(&(Global_17238.f_73[(Global_17238.f_4997 + iVar8) /*4*/]));
			}
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 2)
		{
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
			{
				unk_0x53B64327E3305DCB(Global_17238.f_3340[((Global_17238.f_4496 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 3)
		{
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
			{
				unk_0xC8C41AD5B003B30B(Global_17238.f_3591[((Global_17238.f_4497 - iVar4) + iVar10)], Global_17238.f_3717[((Global_17238.f_4497 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 5)
		{
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
			{
				unk_0x94E086BCAE8856C1(&(Global_2435665[((Global_17238.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 6)
		{
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
			{
				unk_0x4498E0CBD76B2D72(&(Global_2435665[((Global_17238.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17238.f_1576[Global_17238.f_4997 /*5*/][iVar7] == 7)
		{
			if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
			{
				unk_0x94E086BCAE8856C1(&(Global_2435665[((Global_17238.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0xB793F1A0B6CC4AE1(&(Global_17238.f_73[Global_17238.f_4997 /*4*/])) != 0)
	{
		fVar0 = unk_0xFBF0574D26E9F943(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17238.f_3843[((Global_17238.f_4498 - iVar5) + iVar7)] != 0)
		{
			func_303(Global_17238.f_3843[((Global_17238.f_4498 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_315(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (func_258())
	{
		case 0:
			switch (iVar0)
			{
				case 3:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 5;
				
				case 4:
					return 7;
				
				case 0:
					return 2;
				
				case 5:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 4:
					return 8;
				
				case 0:
					return 2;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 4;
				
				case 4:
					return 6;
				
				case 0:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_316(int iParam0)
{
	if (func_120(func_318(iParam0), -1, 0) >= func_317(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_317(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 30;
		
		case 1:
			return 15;
		
		case 2:
			return 5;
		
		case 4:
			return 20;
		
		case 0:
			return 10;
		
		case 5:
			return 10;
		
		default:
	}
	return 0;
}

int func_318(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 1269;
		
		case 1:
			return 1270;
		
		case 2:
			return 1271;
		
		case 4:
			return 1092;
		
		case 0:
			return 65;
		
		case 5:
			return 66;
		
		default:
	}
	return 3025;
}

void func_319(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17238.f_4498 >= 125)
	{
		return;
	}
	if (Global_17238.f_4998 >= 4)
	{
		return;
	}
	if (Global_17238.f_4999 != 1)
	{
		return;
	}
	if (Global_17238.f_4998 >= Global_17238.f_4996)
	{
		return;
	}
	Global_17238.f_3843[Global_17238.f_4498] = iParam0;
	Global_17238.f_4498++;
	Global_17238.f_1576[Global_17238.f_4997 /*5*/][Global_17238.f_4998] = 4;
	Global_17238.f_4998++;
	if (Global_17238.f_4998 >= Global_17238.f_4996)
	{
		fVar0 = func_314();
		if (Global_17238.f_4352[Global_17238.f_4493] && Global_17238.f_4998 == Global_17238.f_4996)
		{
			func_303(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17238.f_4345[(Global_17238.f_4493 - 1)])
		{
			Global_17238.f_4345[(Global_17238.f_4493 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17238.f_4998 >= Global_17238.f_4996)
		{
			fVar3 = func_313();
			if (fVar3 > Global_17238.f_5000[Global_17238.f_4492])
			{
				Global_17238.f_5000[Global_17238.f_4492] = fVar3;
			}
		}
	}
}

void func_320(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17238.f_4492 > iParam0)
	{
		return;
	}
	if (Global_17238.f_4492 >= 125)
	{
		return;
	}
	if (Global_17238.f_4494 >= 250)
	{
		return;
	}
	if (Global_17238.f_4998 < Global_17238.f_4996)
	{
		return;
	}
	if (Global_17238.f_4492 != iParam0)
	{
		Global_17238.f_4492 = iParam0;
		Global_17238.f_4493 = 0;
	}
	iVar0 = Global_17238.f_4333[Global_17238.f_4493];
	if (iVar0 != 1)
	{
		while (Global_17238.f_4493 < 4 && iVar0 != 1)
		{
			Global_17238.f_4493++;
			iVar0 = Global_17238.f_4333[Global_17238.f_4493];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17238.f_73[Global_17238.f_4494 /*4*/]), sParam1, 16);
	Global_17238.f_1074[Global_17238.f_4494] = iParam3;
	Global_17238.f_1325[Global_17238.f_4494] = iParam4;
	Global_17238.f_4494++;
	if (iParam2 == 0)
	{
		fVar1 = func_322(sParam1);
		if (Global_17238.f_4352[Global_17238.f_4493])
		{
			func_303(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17238.f_4345[Global_17238.f_4493])
		{
			Global_17238.f_4345[Global_17238.f_4493] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_321(sParam1);
			if (fVar4 > Global_17238.f_5000[iParam0])
			{
				Global_17238.f_5000[iParam0] = fVar4;
			}
		}
	}
	unk_0xD0E2BFCE93AE3ABD(&(Global_17238.f_4366[iParam0]), Global_17238.f_4493);
	Global_17238.f_4493++;
	Global_17238.f_4999 = 1;
	Global_17238.f_4997 = (Global_17238.f_4494 - 1);
	Global_17238.f_4998 = 0;
	Global_17238.f_4996 = iParam2;
}

float func_321(char* sParam0)
{
	if (!unk_0xC929DDA58687736B(sParam0))
	{
	}
	return unk_0x9A4D7A4AF1373FB1(0.35f, 0);
}

float func_322(char* sParam0)
{
	if (!unk_0x8CD18E96F1984EE6(sParam0))
	{
		if (unk_0xB793F1A0B6CC4AE1(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_285(0, 1, 0, 0, 0, 0);
	unk_0x65CC688E5B978C02(sParam0);
	return unk_0xFBF0574D26E9F943(1);
}

char* func_323(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		default:
	}
	return "";
}

void func_324(int iParam0, char* sParam1, char* sParam2)
{
	Global_17238 = iParam0;
	func_325(29, sParam1, sParam2);
}

void func_325(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17238.f_5263[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17238.f_6048[iParam0 /*16*/]), sParam2, 64);
}

void func_326(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17238.f_1), sParam0, 16);
	Global_17238.f_68 = 0;
	Global_17238.f_69 = 0;
	Global_17238.f_70 = 0;
	Global_17238.f_71 = 0;
	Global_17238.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17238.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_327(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17238.f_4360[0] = iParam0;
	Global_17238.f_4360[1] = iParam1;
	Global_17238.f_4360[2] = iParam2;
	Global_17238.f_4360[3] = iParam3;
	Global_17238.f_4360[4] = iParam4;
}

void func_328(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17238.f_4333[0] = iParam0;
	Global_17238.f_4333[1] = iParam1;
	Global_17238.f_4333[2] = iParam2;
	Global_17238.f_4333[3] = iParam3;
	Global_17238.f_4333[4] = iParam4;
	Global_17238.f_4500 = 0;
	if (iParam0 != 0)
	{
		Global_17238.f_4500++;
	}
	if (iParam1 != 0)
	{
		Global_17238.f_4500++;
	}
	if (iParam2 != 0)
	{
		Global_17238.f_4500++;
	}
	if (iParam3 != 0)
	{
		Global_17238.f_4500++;
	}
	if (iParam4 != 0)
	{
		Global_17238.f_4500++;
	}
}

void func_329(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 250)
	{
		StringCopy(&(Global_17238.f_73[iVar0 /*4*/]), "", 16);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17238.f_1576[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2435665[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 250)
	{
		Global_17238.f_3340[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17238.f_3591[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17238.f_3843[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17238.f_4366[iVar0] = 0;
		Global_17238.f_4501[iVar0] = 0;
		Global_17238.f_4627[iVar0] = 0;
		Global_17238.f_5131[iVar0] = 0f;
		Global_17238.f_4753[iVar0] = 0;
		Global_17238.f_5000[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17238.f_4333[iVar0] = 0;
		Global_17238.f_4345[iVar0] = 0f;
		Global_17238.f_4339[iVar0] = -1f;
		Global_17238.f_4352[iVar0] = 0;
		Global_17238.f_4360[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17238.f_4241[iVar0 /*4*/]), "", 16);
		Global_17238.f_4290[iVar0] = -1;
		Global_17238.f_4303[iVar0] = 335;
		Global_17238.f_4316[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&(Global_17238.f_5263[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17238.f_6048[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2541283.f_16), "", 16);
	Global_2541283.f_20 = -1;
	Global_17238 = 0;
	Global_17238.f_4492 = 0;
	Global_17238.f_4493 = 0;
	Global_17238.f_4494 = 0;
	Global_17238.f_4496 = 0;
	Global_17238.f_4497 = 0;
	Global_17238.f_4498 = 0;
	Global_17238.f_4495 = 0;
	Global_17238.f_5126 = 0;
	Global_17238.f_4994 = 0;
	Global_17238.f_4993 = 0;
	Global_17238.f_4995 = 0;
	StringCopy(&(Global_17238.f_3969), "", 16);
	Global_17238.f_4039 = 0;
	Global_17238.f_4040 = 0;
	Global_17238.f_4041 = 0;
	Global_17238.f_4042 = 0;
	Global_17238.f_4043 = 0;
	Global_17238.f_4044 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17238.f_3973[iVar0] = 0;
		iVar0++;
	}
	Global_17238.f_4045 = 0;
	StringCopy(&(Global_2541283.f_21), "", 16);
	Global_2541283.f_61 = 0;
	Global_2541283.f_62 = 0;
	Global_2541283.f_63 = 0;
	Global_2541283.f_64 = 0;
	Global_2541283.f_65 = 0;
	Global_2541283.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2541283.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2541283.f_67 = 0;
	StringCopy(&(Global_17238.f_1), "", 16);
	Global_17238.f_4351 = 0f;
	Global_17238.f_68 = 0;
	Global_17238.f_69 = 0;
	Global_17238.f_70 = 0;
	Global_17238.f_71 = 0;
	Global_17238.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17238.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17238.f_4999 = 0;
	Global_17238.f_4998 = 0;
	Global_17238.f_4996 = 0;
	Global_17238.f_4997 = 0;
	Global_17238.f_4046 = 0;
	Global_17238.f_4047 = 0;
	Global_17238.f_4499 = 10;
	Global_17238.f_4500 = 0;
	Global_17238.f_5128 = 0f;
	Global_17238.f_5129 = 0f;
	Global_17238.f_4986 = 0;
	Global_17238.f_4987 = 0;
	Global_17238.f_4988 = 0f;
	Global_17238.f_4989 = 0;
	Global_17238.f_4991 = 0;
	Global_17238.f_4990 = 0;
	Global_17238.f_4992 = 0;
	Global_17238.f_7203 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17238.f_5257[iVar0] = -1;
		Global_17238.f_5260[iVar0] = -1;
		iVar0++;
	}
	Global_17238.f_4358 = 0f;
	Global_17238.f_4329 = 0;
	Global_17238.f_4359 = 0;
	Global_17238.f_7182 = 0;
	Global_17238.f_7177 = 0;
	Global_17238.f_7187 = 0;
	Global_17238.f_7192 = 0;
	Global_17238.f_7197 = 0;
	Global_17238.f_7199 = 0;
	Global_17238.f_7205 = 0;
	Global_17235 = 0.05f;
	Global_17236 = 0.05f;
	Global_17237 = 0.225f;
	fVar2 = unk_0x649F384939D0D134(0);
	if (bParam0)
	{
		Global_17237 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17237 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17237 = 0.225f;
	}
}

int func_330(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	float fVar3;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = { unk_0xCC6B7A025E72F529(-706.6382f, -913.6887f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 1:
			*uParam1 = { unk_0xCC6B7A025E72F529(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 2:
			*uParam1 = { unk_0xCC6B7A025E72F529(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 3:
			*uParam1 = { unk_0xCC6B7A025E72F529(1698.307f, 4923.371f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 4:
			*uParam1 = { unk_0xCC6B7A025E72F529(-1820.465f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 5:
			Var0 = { 1165.958f, 2710.201f, 38.14286f };
			fVar3 = -1.15f;
			*uParam1 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			Var0 = { -2967.027f, 390.9038f, 15.02f };
			fVar3 = -94.76f;
			*uParam1 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			Var0 = { -1222.331f, -907.8234f, 12.31f };
			fVar3 = -147.297f;
			*uParam1 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			Var0 = { 1134.811f, -982.3615f, 46.4f };
			fVar3 = 96.68562f;
			*uParam1 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			Var0 = { -1486.673f, -378.4638f, 40.15f };
			fVar3 = -46.229f;
			*uParam1 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			Var0 = { -3244.573f, 1000.658f, 12.83f };
			fVar3 = 175.074f;
			*uParam1 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			Var0 = { -3041.357f, 584.2665f, 7.9f };
			fVar3 = -162.241f;
			*uParam1 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			Var0 = { 548.9015f, 2668.941f, 42.15f };
			fVar3 = -82.5f;
			*uParam1 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			Var0 = { 2554.875f, 381.3857f, 108.62f };
			fVar3 = 177.716f;
			*uParam1 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			Var0 = { 2676.212f, 3280.969f, 55.24f };
			fVar3 = 150.87f;
			*uParam1 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			Var0 = { 1729.329f, 6417.123f, 35.03f };
			fVar3 = 63.641f;
			*uParam1 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			Var0 = { 1959.323f, 3742.29f, 32.34f };
			fVar3 = 120f;
			*uParam1 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			Var0 = { 24.94562f, -1344.954f, 29.49f };
			fVar3 = 90f;
			*uParam1 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			Var0 = { 373.5954f, 328.5892f, 103.56f };
			fVar3 = 75.885f;
			*uParam1 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case -2:
			*uParam1 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam2 = { -3.6091f, 0.022f, -8.6461f };
			*uParam3 = 35f;
			break;
	}
	return 1;
}

void func_331()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		unk_0x81A67526504056C0(0.325f, 0.3f);
	}
}

void func_332(int iParam0, int iParam1)
{
	if (!func_244(unk_0x1788E93557766241(), 1) || iParam1)
	{
		if (!func_337())
		{
			Global_1312416.f_1 = 1;
			if (iParam0 == 1)
			{
				Global_1312416.f_2 = 1;
			}
			func_333();
		}
	}
}

void func_333()
{
	if (!func_337())
	{
		Global_1312416 = 1;
		func_336();
		if (((!unk_0x7A75BEF6DA1EDF3D() && !func_335()) && !func_334(unk_0x1788E93557766241())) && !func_38(unk_0x1788E93557766241()))
		{
			Global_973956 = 1;
		}
		Global_1602607[unk_0x1788E93557766241() /*12*/].f_7 = 1;
	}
}

int func_334(int iParam0)
{
	if (func_244(iParam0, 1))
	{
		if (Global_1583725[iParam0 /*334*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_335()
{
	return Global_2428577.f_711;
}

void func_336()
{
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (!func_337())
		{
			if (func_375(unk_0x1788E93557766241(), 1, 1))
			{
				unk_0x3F376CC691816BEF(unk_0xA16EC202D9D35357(), 1);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 342, 0);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 122, 0);
			}
			unk_0xCCB05A9C3FAB04CA(unk_0x1788E93557766241(), 1f);
			unk_0x7622D42AC5B41A4A(0);
			unk_0x5687AEB601657A7E(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0xAD7D800044E4059F(0);
			}
		}
		else
		{
			if (func_375(unk_0x1788E93557766241(), 1, 1))
			{
				unk_0x3F376CC691816BEF(unk_0xA16EC202D9D35357(), 0);
				unk_0xB4E8D4EA104CA059(unk_0xA16EC202D9D35357(), joaat("weapon_unarmed"), 1);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 342, 1);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 122, 1);
				unk_0xCCB05A9C3FAB04CA(unk_0x1788E93557766241(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xAD7D800044E4059F(1);
				}
			}
			unk_0x7622D42AC5B41A4A(1);
			unk_0x5687AEB601657A7E(0);
		}
	}
}

bool func_337()
{
	return Global_1312416;
}

void func_338(var uParam0)
{
	func_339(uParam0, 0f);
}

void func_339(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_261(unk_0x889D01384B54BCE3(*uParam0, 4)) - fParam1);
	unk_0xD0E2BFCE93AE3ABD(uParam0, 1);
	unk_0x29DB79DD4D939B38(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_340(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_222(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x2AF80829930084FD(unk_0xA495B6AB6F2BF8C7()))
	{
		return 0;
	}
	if (func_225(0))
	{
		return 0;
	}
	if (unk_0xEC35DAD55FA4EEF2())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35615[iVar0 /*19*/] == 1 && Global_35615[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_35615[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_35615[iVar0 /*19*/].f_5 = 1;
			Global_35615[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_35615[iVar0 /*19*/] == 0)
			{
			}
			if (Global_35615[iVar0 /*19*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_341()
{
	if (Global_97439.f_23635.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

bool func_342()
{
	return Global_17097;
}

int func_343(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0xCC6B7A025E72F529(*uParam1, uParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0xCC6B7A025E72F529(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0xCC6B7A025E72F529(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0xCC6B7A025E72F529(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0xCC6B7A025E72F529(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0xCC6B7A025E72F529(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0xCC6B7A025E72F529(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0xCC6B7A025E72F529(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0xCC6B7A025E72F529(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

bool func_344(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_205, iParam1);
}

void func_345()
{
	unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
	func_387(unk_0x1788E93557766241(), 1, 0, 1);
	unk_0x20D6E0EA145DF751(0);
	unk_0x60365B850FB7354F(0, 1065353216);
	if (iLocal_800 > 0)
	{
		Local_214[unk_0x044A481E863E2F6B() /*10*/].f_5 = iLocal_800;
		iLocal_800 = 0;
	}
	func_366();
	if (func_136("SHR_MENU"))
	{
		unk_0xFD1E0AEC770DAF2E(1);
	}
	if (Local_90.f_14 != -1)
	{
		func_221(&(Local_90.f_14));
	}
	if (unk_0xBAB691F99A2A7346(Local_90.f_1))
	{
		unk_0x27A62B1C26941E13(Local_90.f_1, 0);
	}
	unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
}

int func_346(float fParam0)
{
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()) && !unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (fParam0 <= 0f)
		{
			return unk_0xF5BB8F2901EE017C(unk_0xA16EC202D9D35357()) > 0;
		}
		else
		{
			return unk_0x81EF00133F312C5D(unk_0xA16EC202D9D35357(), unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), fParam0) > 0;
		}
	}
	return 0;
}

int func_347(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x1DAD7CE53BEE7710() && !bParam3)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x09560C7DE2A384BD(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_348()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Local_141.f_64[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_349()
{
	unk_0x6D98AA46076A68BE(&uLocal_556);
	unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 0, 2);
	unk_0x5B5659C49032B96C(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0, 0, 0, 0);
	unk_0x5B5659C49032B96C(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0, 0, 0, 0);
	unk_0x963BB7C99350D827(uLocal_556);
	unk_0x6D98AA46076A68BE(&uLocal_557);
	unk_0x5B5659C49032B96C(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0, 0, 0, 0);
	unk_0x963BB7C99350D827(uLocal_557);
	unk_0x6D98AA46076A68BE(&uLocal_558);
	unk_0x353F4B963593F141(0, Local_543, 2f, -1, 0.25f, 0, fLocal_546);
	unk_0x5B5659C49032B96C(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	unk_0x5B5659C49032B96C(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	unk_0x0676D83B2FE460E1(0, Local_543, 250f, -1, 1, 0);
	unk_0xD0E3F3C3AC2874C4(0, 0);
	unk_0x963BB7C99350D827(uLocal_558);
	unk_0x6D98AA46076A68BE(&uLocal_560);
	unk_0x5B5659C49032B96C(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	unk_0x5B5659C49032B96C(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	unk_0xD0E3F3C3AC2874C4(0, 0);
	unk_0x963BB7C99350D827(uLocal_560);
	unk_0x6D98AA46076A68BE(&uLocal_559);
	unk_0x353F4B963593F141(0, Local_543, 2f, -1, 0.25f, 0, (fLocal_546 - 180f));
	unk_0xFE441ED6C6E65375(0, 1);
	unk_0x28F7FDF6BC8BA514(0, 20f, 0);
	unk_0x963BB7C99350D827(uLocal_559);
}

void func_350(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(iParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(iParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 1);
			}
		}
	}
}

int func_351(var uParam0)
{
	if (unk_0x86CB59A6776A7C27(uParam0))
	{
		return unk_0x2DE0B96E966FD817(unk_0x7A16A8A755F44481(uParam0));
	}
	return 1;
}

int func_352()
{
	return Local_141.f_0;
}

char* func_353(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

int func_354()
{
	struct<3> Var0;
	
	if (func_362(&iLocal_769))
	{
		func_360(iLocal_769, &iLocal_580, &iLocal_581, &iLocal_582, &iLocal_583, &Local_584, &Local_587);
		func_359(iLocal_769, &Local_590, &Local_593, &uLocal_596);
		func_358(iLocal_769, &Local_597, &Local_600, &fLocal_603);
		switch (iLocal_769)
		{
			case 0:
				Local_548 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				Local_551 = { 0f, 0f, 21.89f };
				iLocal_539 = func_374(0);
				Local_543 = { 1394.852f, 3609.509f, 33.9809f };
				fLocal_546 = 116.5329f;
				iLocal_575 = 1;
				if (func_356(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				break;
			
			case 1:
				Local_551 = { 0f, 0f, -160f };
				Local_548 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_539 = func_374(0);
				Local_543 = { -3047.512f, 588.9807f, 6.9089f };
				fLocal_546 = 178.8753f;
				iLocal_575 = 1;
				if (func_356(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				break;
			
			case 2:
				Local_548 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				Local_551 = { 0f, 0f, 175.52f };
				iLocal_539 = func_374(0);
				Local_543 = { -3249.114f, 1006.558f, 11.8307f };
				fLocal_546 = 191.594f;
				iLocal_575 = 1;
				if (func_356(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				break;
			
			case 3:
				Local_551 = { 0f, 0f, -82.38f };
				Local_548 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_539 = func_374(0);
				Local_543 = { 543.0796f, 2663.967f, 41.1565f };
				fLocal_546 = 228.4295f;
				iLocal_575 = 1;
				if (func_356(6, 18))
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				break;
			
			case 4:
				Local_551 = { 0f, 0f, 180f };
				Local_548 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_539 = func_374(0);
				Local_543 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_546 = 197.2994f;
				iLocal_575 = 1;
				if (func_356(6, 18))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				break;
			
			case 5:
				Local_551 = { 0f, 0f, 155f };
				Local_548 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_539 = func_374(0);
				Local_543 = { 2671.351f, 3283.136f, 54.2411f };
				fLocal_546 = 296.5427f;
				iLocal_575 = 1;
				if (func_356(6, 18))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				break;
			
			case 6:
				Local_551 = { 0f, 0f, 63.3f };
				Local_548 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_539 = func_374(0);
				Local_543 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_546 = 130.9518f;
				iLocal_575 = 1;
				if (func_356(6, 18))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 2;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				break;
			
			case 7:
				Local_551 = { 0f, 0f, 117f };
				Local_548 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_539 = func_374(0);
				Local_543 = { 1958.92f, 3746.267f, 31.3438f };
				fLocal_546 = 73.6245f;
				iLocal_575 = 1;
				if (func_356(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				break;
			
			case 8:
				Local_551 = { 0f, 0f, 92f };
				Local_548 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_539 = func_374(0);
				Local_543 = { 30.5721f, -1339.782f, 28.4939f };
				fLocal_546 = 110.7699f;
				iLocal_575 = 1;
				if (func_356(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				break;
			
			case 9:
				Local_551 = { 0f, 0f, 75f };
				Local_548 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_539 = func_374(0);
				Local_543 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_546 = 52.0064f;
				iLocal_575 = 1;
				if (func_356(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 2;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				break;
			
			case 10:
				Local_551 = { 0f, 0f, 0f };
				Local_548 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_539 = func_374(0);
				Local_543 = { 1168.971f, 2719.118f, 36.0632f };
				fLocal_546 = 136.5945f;
				iLocal_575 = 3;
				if (func_356(10, 22))
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 11:
				Local_551 = { 0f, 0f, -92f };
				Local_548 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_539 = func_374(0);
				Local_543 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_546 = 176.1174f;
				iLocal_575 = 3;
				if (func_356(10, 22))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 12:
				Local_551 = { 0f, 0f, -145f };
				Local_548 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_539 = func_374(0);
				Local_543 = { -1218.283f, -915.7103f, 10.3264f };
				fLocal_546 = 43.8031f;
				iLocal_575 = 3;
				if (func_356(10, 22))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 13:
				Local_551 = { 0f, 0f, 103f };
				Local_548 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_539 = func_374(0);
				Local_543 = { 1130.155f, -979.2816f, 45.4158f };
				fLocal_546 = 269.2587f;
				iLocal_575 = 3;
				if (func_356(10, 22))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 2;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 14:
				Local_551 = { 0f, 0f, -41f };
				Local_548 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_539 = func_374(0);
				Local_543 = { -1479.163f, -375.0302f, 38.1633f };
				fLocal_546 = 36.5415f;
				iLocal_575 = 3;
				if (func_356(10, 22))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 15:
				Local_551 = { 0f, 0f, 145f };
				Local_548 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_539 = func_374(0);
				Local_543 = { 1707.303f, 4918.31f, 41.0636f };
				fLocal_546 = 24.9178f;
				iLocal_575 = 2;
				if (func_356(8, 20))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 16:
				Local_551 = { 0f, 0f, -87f };
				Local_548 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_539 = func_374(0);
				Local_543 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_546 = 291.6504f;
				iLocal_575 = 2;
				if (func_356(8, 20))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 2;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 17:
				Local_551 = { 0f, 0f, -125f };
				Local_548 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_539 = func_374(0);
				Local_543 = { -40.42f, -1751.423f, 28.421f };
				fLocal_546 = 145.6553f;
				iLocal_575 = 2;
				if (func_356(8, 20))
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 18:
				Local_551 = { 0f, 0f, -74f };
				Local_548 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_539 = func_374(0);
				Local_543 = { 1159.682f, -314.254f, 68.2051f };
				fLocal_546 = 232.6337f;
				iLocal_575 = 2;
				if (func_356(8, 20))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 19:
				Local_548 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				Local_551 = { 0f, 0f, -47.3f };
				iLocal_539 = func_374(0);
				Local_543 = { -1828.907f, 799.6096f, 137.1776f };
				fLocal_546 = 247.1234f;
				iLocal_575 = 2;
				if (func_356(8, 20))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
		}
		Local_548 = { unk_0xCC6B7A025E72F529(Local_548, Local_551.f_2, 0f, 0.075f, 0f) };
		Local_540 = { unk_0xAD51FEBE0DA69044("mp_am_hold_up", "holdup_victim_20s", Local_548, Local_551, 0, 2) };
		Var0 = { unk_0x9872CF8BE2A9A01E("mp_am_hold_up", "holdup_victim_20s", Local_548, Local_551, 0, 2) };
		Local_141.f_33 = Var0.f_2;
		Local_564 = { unk_0xAD51FEBE0DA69044("mp_am_hold_up", "holdup_victim_20s_bag", Local_548, Local_551, 0, 2) };
		Var0 = { unk_0x9872CF8BE2A9A01E("mp_am_hold_up", "holdup_victim_20s_bag", Local_548, Local_551, 0, 2) };
		uLocal_567 = Var0.f_2;
		Local_568 = { unk_0xAD51FEBE0DA69044("mp_am_hold_up", "holdup_victim_20s_till", Local_548, Local_551, 0, 2) };
		Var0 = { unk_0x9872CF8BE2A9A01E("mp_am_hold_up", "holdup_victim_20s_till", Local_548, Local_551, 0, 2) };
		uLocal_571 = Var0.f_2;
		Local_90.f_0 = func_355(iLocal_769);
		if (unk_0xE9849174628A9C50())
		{
			Local_141.f_37 = iLocal_770[0];
			if (Local_141.f_37 == 0)
			{
				StringCopy(&(Local_141.f_42), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_141.f_38), "StoreOwner2", 16);
			}
			else if (Local_141.f_37 == 1)
			{
				StringCopy(&(Local_141.f_42), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_141.f_38), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_141.f_42), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_141.f_38), "StoreOwner3", 16);
			}
		}
		if (!unk_0x889D01384B54BCE3(iLocal_535, 29))
		{
			unk_0x168B293008FF4D5C(Local_548, 0.5f, iLocal_572, 1);
			unk_0xD0E2BFCE93AE3ABD(&iLocal_535, 29);
		}
		return 1;
	}
	return 0;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 15:
			return 3;
		
		case 19:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 9;
		
		case 2:
			return 10;
		
		case 1:
			return 11;
		
		case 3:
			return 12;
		
		case 4:
			return 13;
		
		case 5:
			return 14;
		
		case 6:
			return 15;
		
		case 7:
			return 16;
		
		case 8:
			return 17;
		
		case 9:
			return 18;
		
		case 0:
			return -2;
		
		default:
	}
	return -1;
}

bool func_356(int iParam0, int iParam1)
{
	return func_357(unk_0xBE59E3811BD4FDD7(), iParam0, iParam1);
}

int func_357(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_358(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1393.091f, 3607.383f, 33.9809f };
		*uParam2 = { 1391.178f, 3612.516f, (38.3614f - 0.2f) };
		*uParam3 = 12.5f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3045.013f, 585.9666f, (10.35421f - 0.2f) };
		*uParam2 = { -3048.714f, 584.7961f, 6.948262f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3247.313f, 1003.657f, (15.27433f - 0.2f) };
		*uParam2 = { -3251.157f, 1003.984f, 11.83501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 546.5474f, 2665.642f, (44.60108f - 0.2f) };
		*uParam2 = { 547.054f, 2661.794f, 41.15667f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2552f, 384.2527f, (111.0656f - 0.2f) };
		*uParam2 = { 2548.145f, 384.4133f, 107.6241f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2674.946f, 3284.833f, (57.68088f - 0.2f) };
		*uParam2 = { 2671.569f, 3286.699f, 54.24464f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1733.119f, 6418.579f, (37.48002f - 0.2f) };
		*uParam2 = { 1734.839f, 6422.032f, 34.03751f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1960.224f, 3746.258f, (34.7878f - 0.2f) };
		*uParam2 = { 1958.295f, 3749.599f, 31.34522f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 27.71382f, -1341.968f, (31.93314f - 0.2f) };
		*uParam2 = { 27.71049f, -1338.109f, 28.49479f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 377.0183f, 330.808f, (106.0112f - 0.2f) };
		*uParam2 = { 377.9499f, 334.5523f, 102.567f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1167.015f, 2711.601f, (40.66147f - 0.2f) };
		*uParam2 = { 1167.082f, 2720.243f, 36.06501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2965.705f, 389.6696f, (17.64162f - 0.2f) };
		*uParam2 = { -2957.095f, 389.139f, 13.04323f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1222.402f, -909.5575f, (14.92466f - 0.2f) };
		*uParam2 = { -1217.682f, -916.7974f, 10.33735f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.284f, -981.473f, (49.01414f - 0.2f) };
		*uParam2 = { 1124.708f, -982.6027f, 44.42008f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.883f, -378.2694f, (42.76172f - 0.2f) };
		*uParam2 = { -1478.771f, -372.1664f, 38.16948f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1704.556f, 4921.806f, (44.02687f - 0.2f) };
		*uParam2 = { 1708.285f, 4919.196f, 41.06359f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -709.019f, -907.7159f, (21.17918f - 0.2f) };
		*uParam2 = { -709.0177f, -903.1516f, 18.21618f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.16617f, -1751.578f, (31.37973f - 0.2f) };
		*uParam2 = { -42.22961f, -1748.09f, 28.42099f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1160.825f, -317.4214f, (71.16085f - 0.2f) };
		*uParam2 = { 1160.033f, -312.932f, 68.20509f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1826.218f, 796.6393f, (140.1334f - 0.2f) };
		*uParam2 = { -1829.301f, 799.9996f, 137.18f };
		*uParam3 = 4f;
	}
}

void func_359(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1395.548f, 3600.575f, 33.98914f };
		*uParam2 = { 1392.08f, 3609.983f, (37.33543f - 0.2f) };
		*uParam3 = 12.25f;
	}
	if (iParam0 == 1)
	{
		*uParam1 = { -3038.657f, 589.5176f, 6.904751f };
		*uParam2 = { -3045.476f, 587.4066f, (11.31222f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 2)
	{
		*uParam1 = { -3240.032f, 1004.482f, 11.8307f };
		*uParam2 = { -3247.188f, 1005.107f, (16.25224f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 3)
	{
		*uParam1 = { 544.2278f, 2672.5f, 41.1565f };
		*uParam2 = { 545.201f, 2665.442f, (45.69155f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 4)
	{
		*uParam1 = { 2559.176f, 385.3936f, 107.623f };
		*uParam2 = { 2552.054f, 385.6057f, (112.1638f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 5)
	{
		*uParam1 = { 2681.864f, 3282.603f, 54.24114f };
		*uParam2 = { 2675.586f, 3285.981f, (58.79021f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 6)
	{
		*uParam1 = { 1731.237f, 6411.557f, 34.03723f };
		*uParam2 = { 1734.383f, 6417.952f, (38.58461f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 7)
	{
		*uParam1 = { 1964.999f, 3740.795f, 31.34375f };
		*uParam2 = { 1961.384f, 3746.928f, (35.89571f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 8)
	{
		*uParam1 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
		*uParam2 = { Vector(33.03834f, -1341.382f, 27.05614f) - Vector(0.2f, 0.2f, 0.2f) + Vector(0f, -0.4f, 2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 9)
	{
		*uParam1 = { 376.6309f, 323.5533f, 102.5664f };
		*uParam2 = { 378.3253f, 330.4793f, (107.1095f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 10)
	{
		*uParam1 = { 1166.497f, 2703.756f, 37.06307f };
		*uParam2 = { 1166.525f, 2711.974f, (41.66307f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 11)
	{
		*uParam1 = { -2973.512f, 390.7873f, 14.04322f };
		*uParam2 = { -2965.288f, 390.2452f, (18.54322f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 12)
	{
		*uParam1 = { -1226.417f, -902.6738f, 11.33496f };
		*uParam2 = { -1221.765f, -909.5887f, (15.82626f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 13)
	{
		*uParam1 = { 1141.35f, -980.9322f, 45.41594f };
		*uParam2 = { 1132.976f, -982.0952f, (49.91574f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 14)
	{
		*uParam1 = { -1490.949f, -383.4771f, 39.16332f };
		*uParam2 = { -1485.006f, -377.6167f, (43.66332f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 15)
	{
		*uParam1 = { 1698.98f, 4929.093f, 41.06357f };
		*uParam2 = { 1705.233f, 4924.578f, (45.60386f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 16)
	{
		*uParam1 = { -711.77f, -916.4685f, 18.21557f };
		*uParam2 = { -711.7368f, -908.7517f, (22.76488f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 17)
	{
		*uParam1 = { -52.90452f, -1756.474f, 28.42097f };
		*uParam2 = { -47.92523f, -1750.614f, (32.94246f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 18)
	{
		*uParam1 = { 1159.633f, -326.5087f, 68.20507f };
		*uParam2 = { 1158.335f, -318.9123f, (72.74828f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 19)
	{
		*uParam1 = { -1822.373f, 788.2851f, 137.1876f };
		*uParam2 = { -1827.484f, 794.0739f, (141.6933f - 0.2f) };
		*uParam3 = 14f;
	}
}

void func_360(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_361(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x7B6124E1230469E9(*uParam5, "v_methlab");
			}
			*uParam2 = joaat("V_39_ShopRm");
			*uParam4 = joaat("V_39_StairsRm");
			*uParam3 = -1;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x7B6124E1230469E9(*uParam5, "v_shop_247");
			}
			*uParam2 = joaat("V_66_ShopRm");
			*uParam4 = joaat("V_66_BackRm");
			*uParam3 = -1;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x7B6124E1230469E9(*uParam5, "v_gen_liquor");
			}
			*uParam2 = joaat("liquor_front");
			*uParam4 = joaat("liquor_back");
			*uParam3 = -1;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x7B6124E1230469E9(*uParam5, "v_gasstation");
			}
			*uParam2 = joaat("V_68_GasRm");
			*uParam4 = joaat("V_68_BackRm");
			*uParam3 = joaat("V_68_Toilets");
			break;
	}
}

void func_361(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1394.169f, 3599.86f, 34.0121f };
			*uParam2 = { 1395.548f, 3600.575f, 33.98914f };
			break;
		
		case 1:
			*uParam1 = { -3038.908f, 589.5187f, 6.9048f };
			*uParam2 = { -3038.657f, 589.5176f, 6.904751f };
			break;
		
		case 2:
			*uParam1 = { -3240.317f, 1004.433f, 11.8307f };
			*uParam2 = { -3240.032f, 1004.482f, 11.8307f };
			break;
		
		case 3:
			*uParam1 = { 544.2802f, 2672.811f, 41.1566f };
			*uParam2 = { 544.2278f, 2672.5f, 41.1565f };
			break;
		
		case 4:
			*uParam1 = { 2559.247f, 385.5266f, 107.623f };
			*uParam2 = { 2559.176f, 385.3936f, 107.623f };
			break;
		
		case 5:
			*uParam1 = { 2682.003f, 3282.543f, 54.2411f };
			*uParam2 = { 2681.864f, 3282.603f, 54.24114f };
			break;
		
		case 6:
			*uParam1 = { 1731.21f, 6411.403f, 34.0372f };
			*uParam2 = { 1731.237f, 6411.557f, 34.03723f };
			break;
		
		case 7:
			*uParam1 = { 1965.054f, 3740.555f, 31.3448f };
			*uParam2 = { 1964.999f, 3740.795f, 31.34375f };
			break;
		
		case 8:
			*uParam1 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			*uParam2 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 9:
			*uParam1 = { 376.6533f, 323.6471f, 102.5664f };
			*uParam2 = { 376.6309f, 323.5533f, 102.5664f };
			break;
		
		case 10:
			*uParam1 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			*uParam2 = { 1166.497f, 2703.756f, 37.06307f };
			break;
		
		case 11:
			*uParam1 = { -2973.262f, 390.8184f, 14.0433f };
			*uParam2 = { -2973.512f, 390.7873f, 14.04322f };
			break;
		
		case 12:
			*uParam1 = { -1226.464f, -902.5864f, 11.2783f };
			*uParam2 = { -1226.417f, -902.6738f, 11.33496f };
			break;
		
		case 13:
			*uParam1 = { 1141.36f, -980.8802f, 45.4155f };
			*uParam2 = { 1141.35f, -980.9322f, 45.41594f };
			break;
		
		case 14:
			*uParam1 = { -1491.057f, -383.5728f, 39.1706f };
			*uParam2 = { -1490.949f, -383.4771f, 39.16332f };
			break;
		
		case 15:
			*uParam1 = { 1698.808f, 4929.198f, 41.0783f };
			*uParam2 = { 1698.98f, 4929.093f, 41.06357f };
			break;
		
		case 16:
			*uParam1 = { -711.721f, -916.6965f, 18.2145f };
			*uParam2 = { -711.77f, -916.4685f, 18.21557f };
			break;
		
		case 17:
			*uParam1 = { -53.124f, -1756.405f, 28.421f };
			*uParam2 = { -52.90452f, -1756.474f, 28.42097f };
			break;
		
		case 18:
			*uParam1 = { 1159.542f, -326.6986f, 67.923f };
			*uParam2 = { 1159.633f, -326.5087f, 68.20507f };
			break;
		
		case 19:
			*uParam1 = { -1822.287f, 788.006f, 137.1859f };
			*uParam2 = { -1822.373f, 788.2851f, 137.1876f };
			break;
	}
}

int func_362(int iParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 9999.9f;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		fVar0 = unk_0x4970185D4CC64616(func_82(unk_0x1788E93557766241()), func_363(iVar2), 1);
		if (fVar0 < fVar1)
		{
			fVar1 = fVar0;
			*iParam0 = iVar2;
		}
		iVar2++;
	}
	return 1;
}

Vector3 func_363(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	
	func_361(iParam0, &Var0, &uVar3);
	return Var0;
}

int func_364(int iParam0)
{
	return Local_214[iParam0 /*10*/];
}

void func_365()
{
	Global_2428577.f_656.f_28 = 0;
}

void func_366()
{
	if (Global_1312416.f_1 == 1)
	{
		func_367(0);
		Global_1312416.f_1 = 0;
	}
}

void func_367(int iParam0)
{
	if (func_337())
	{
		if (iParam0 == 1)
		{
			if (Global_2446992.f_4236 == -1)
			{
				Global_2446992.f_4236 = 60000;
			}
			func_368(&(Global_2446992.f_4234), 0, 0);
			if (Global_2446992.f_4239 == -1)
			{
				Global_2446992.f_4239 = 10000;
			}
			func_368(&(Global_2446992.f_4237), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_336();
		}
		if ((!unk_0x7A75BEF6DA1EDF3D() && !func_335()) && !func_334(unk_0x1788E93557766241()))
		{
			Global_973956 = 0;
		}
		Global_1602607[unk_0x1788E93557766241() /*12*/].f_7 = 0;
	}
}

void func_368(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1DAD7CE53BEE7710() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x519586565311459B();
		}
		else
		{
			*uParam0 = unk_0x4EAB1171B13C220B();
		}
	}
	else
	{
		*uParam0 = unk_0x09560C7DE2A384BD();
	}
	uParam0->f_1 = 1;
}

int func_369(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_372())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xC9345B47FCA589CF(func_74()) || unk_0x4E4D77A008D3DA63())
		{
			Global_2538376 = 1;
			return 0;
		}
		if (Global_2436286)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2538377 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2537915[iVar1 /*69*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0xC9C87AEBA01C419B(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x625C87495B033820(iVar3))
		{
			*uParam0 = func_256(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2537915[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2538373 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2538375 = 1;
			Global_2538378 = iParam4;
			Global_2538380 = iParam3;
			Global_2538381 = 1;
			Global_2538379 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2538378 = iParam4;
			Global_2538380 = iParam3;
			Global_2538381 = 1;
			Global_2538379 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_371(1, iParam4);
			Global_2538375 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_370(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_370(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xD0E2BFCE93AE3ABD(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_233(iParam0);
	}
}

void func_371(int iParam0, var uParam1)
{
	Global_2437461 = uParam1;
	Global_2437460 = iParam0;
}

int func_372()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		return 1;
	}
	return 0;
}

int func_373(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x939DA7EBCC6588FF(iParam0);
	return unk_0x5494F37F35C1D7D7(iParam0);
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("mp_m_shopkeep_01");
		
		case 1:
			return joaat("p_poly_bag_01_s");
		
		case 2:
			return joaat("p_till_01_s");
		
		default:
	}
	return joaat("mp_m_shopkeep_01");
}

int func_375(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x38FA37FE3518BA38(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2AF80829930084FD(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422491.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_376()
{
	bool bVar0;
	
	func_383(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315866 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 1;
		}
	}
	if (func_382())
	{
		return 1;
	}
	if (Global_2437386)
	{
		return 1;
	}
	if (func_381())
	{
		return 1;
	}
	if (func_380(157))
	{
		if (!func_379())
		{
			return 1;
		}
	}
	if (func_380(155))
	{
		return 1;
	}
	if (!unk_0x54CE0989F263D8A3())
	{
		return 1;
	}
	if (func_377() != 0)
	{
		if (unk_0x16CDA1894CFE0781(func_377()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_377()
{
	switch (func_378())
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

int func_378()
{
	return Global_24446;
}

bool func_379()
{
	return Global_2428577.f_572;
}

int func_380(int iParam0)
{
	if (unk_0xA519E4AC66148E87(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_381()
{
	return Global_2435556;
}

bool func_382()
{
	return Global_2428577.f_567;
}

void func_383(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2C15B7979450724C(1))
	{
		iVar1 = unk_0x8B6CEAB2AD1BD1CD(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6A4B863200ABAA44(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 307:
					func_384(iVar0);
					break;
				
				case 2:
					unk_0x6A4B863200ABAA44(1, iVar0, &Var4, 3);
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

void func_384(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6A4B863200ABAA44(1, iParam0, &Var0, 3))
	{
		if (func_375(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xFF34D923BFB5E9FB(Var0.f_1);
			if (unk_0x538DF9E5B1DF01EB(uVar3))
			{
				if (unk_0x202EF5D8203705EF(iVar3, 0))
				{
					uVar4 = unk_0x6ADAC08D70C79DE5(iVar3, 0);
					if (unk_0xA7FB2A2F471A969B(uVar4, Var0.f_2) && unk_0x93C72DAC35C5D38C())
					{
						if (func_385(uVar4, &bVar5))
						{
							unk_0x2FC1F6BC6D0D9D77(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x3A3C5A6572B3C611(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_385(int iParam0, var uParam1)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (!unk_0x22349EC06EA5B08B(iParam0))
		{
			if (unk_0xFD9706CAB35EA810(iParam0))
			{
				unk_0x7B9576B4E099FB1F(iParam0, false, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xD8233CB95CB48A7C(iParam0, 0))
		{
			if (unk_0xC7402AE8FD6AACA2(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_386()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_387(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	var uVar24;
	int iVar25;
	
	if (bParam1)
	{
		if (unk_0x6A132B76AB7C7138())
		{
			unk_0xD2238E59B5C4A250(0);
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		uVar0 = iParam2;
		unk_0xC92B5D880C803814(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		if (!func_391())
		{
			bVar23 = false;
			if (bParam1 == 1)
			{
				bVar23 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar23 = true;
			}
			if (bVar9 == 1)
			{
				bVar23 = true;
			}
			if (bVar23)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x38FA37FE3518BA38(iParam0) && unk_0x2AF80829930084FD(iParam0))
		{
			uVar24 = unk_0xFF34D923BFB5E9FB(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x1DAD7CE53BEE7710())
				{
					unk_0x738AEBA425C3D093(1);
				}
				else
				{
					unk_0x423D1EBE54B18555(uVar24, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0x1DAD7CE53BEE7710() && !bVar18)
					{
						unk_0x738AEBA425C3D093(0);
					}
					Global_2414327[iParam0 /*255*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_390(uVar24) && !unk_0x3FE69FBCE43341D9(uVar24))
				{
					if (!bVar21)
					{
						unk_0x6A23C3306A8CF21B(uVar24, true, 0);
					}
				}
				if (!unk_0x5A6F774C8E17AA21(uVar24))
				{
					if (!bVar20)
					{
						unk_0x3CC3106305C40A28(uVar24, false);
					}
					unk_0x940C6B8BF42B190B(uVar24, 1);
				}
				else if (!bVar20)
				{
					unk_0x3CC3106305C40A28(uVar24, false);
				}
				unk_0xA8BC819B54F5B824(uVar24, true);
				unk_0x68068FC275E8AC83(iParam0, 0);
				unk_0xEDD99DCB19EC7C49(uVar24);
				unk_0x551186C5C186D1DC(uVar24, 1);
				func_389();
				func_388();
				if (unk_0xA5B13BF6970E2A56())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xA84F80DD9F675CED())
				{
				}
				Global_2414327[iParam0 /*255*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_390(uVar24) && !unk_0x3FE69FBCE43341D9(uVar24))
				{
					if (!bVar21)
					{
						unk_0x6A23C3306A8CF21B(uVar24, !bVar14, 0);
					}
					if (!unk_0x5A6F774C8E17AA21(uVar24))
					{
						if (!bVar20)
						{
							unk_0x3CC3106305C40A28(uVar24, bVar15);
						}
						if (!bVar15)
						{
							unk_0x940C6B8BF42B190B(uVar24, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0x68068FC275E8AC83(iParam0, 0);
				}
				else
				{
					unk_0x68068FC275E8AC83(iParam0, 1);
				}
				unk_0xA8BC819B54F5B824(uVar24, bVar16);
				if (bVar2)
				{
					if (!unk_0xF10879F2BBA41065(uVar24) && !unk_0x202EF5D8203705EF(uVar24, 0))
					{
						unk_0x9AB8F163FA160890(iVar24);
					}
				}
			}
			iVar25 = 0;
			if (bVar1)
			{
				iVar25 |= 2;
			}
			if (bVar2)
			{
				iVar25 |= 4;
			}
			if (bVar3)
			{
				iVar25 |= 8;
			}
			if (bVar4)
			{
				iVar25 |= 16;
			}
			if (bVar5)
			{
				iVar25 |= 32;
			}
			if (bVar6)
			{
				iVar25 |= 64;
			}
			if (bVar7)
			{
				iVar25 |= 128;
			}
			if (bVar8)
			{
				iVar25 |= 256;
			}
			if (bVar9)
			{
				iVar25 |= 512;
			}
			if (bVar10)
			{
				iVar25 |= 1024;
			}
			if (bVar11)
			{
				iVar25 |= 2048;
			}
			if (bVar12)
			{
				iVar25 |= 4096;
			}
			unk_0xC92B5D880C803814(iParam0, bParam1, iVar25);
		}
	}
}

void func_388()
{
	struct<2> Var0;
	
	Global_2422491.f_689 = 0;
	Global_2422491.f_690 = 0;
	Global_2422491.f_691 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404570.f_1419 = { Var0 };
}

void func_389()
{
	Global_2404570.f_580 = 0;
	Global_2404570.f_1460 = 0;
	Global_2404570.f_453 = 0;
	Global_2414327[unk_0x1788E93557766241() /*255*/].f_204 = 0;
}

int func_390(int iParam0)
{
	int iVar0;
	
	if (unk_0x202EF5D8203705EF(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x221AC1EF116F6053(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_391()
{
	if (func_392() == 0)
	{
		return 1;
	}
	return 0;
}

int func_392()
{
	return Global_1312466.f_18;
}

bool func_393(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2428577.f_656.f_28 && unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635()) == Global_2428577.f_656.f_31);
	}
	return Global_2428577.f_656.f_28;
}

void func_394()
{
	int iVar0;
	
	Global_2446992.f_8 = 0;
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (!func_351(Local_141.f_1))
		{
			if (unk_0x428E17610BCE75C2(Local_141.f_1) || (!unk_0x3D7D0EF6EB39605F(Local_141.f_1) && unk_0xE9849174628A9C50()))
			{
				unk_0x778B0968F902CF72(unk_0x7A16A8A755F44481(Local_141.f_1), 0);
				unk_0xC645CDA4EE3EECBC(unk_0x7A16A8A755F44481(Local_141.f_1));
				if (unk_0x889D01384B54BCE3(iLocal_535, 22))
				{
					if (unk_0x889D01384B54BCE3(iLocal_535, 20))
					{
						if (Local_141.f_36 != 7)
						{
							if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 9))
							{
								unk_0x937785D9C1929236(unk_0x7A16A8A755F44481(Local_141.f_1));
								unk_0x0891776D0327B77A(unk_0x7A16A8A755F44481(Local_141.f_1), uLocal_558);
								unk_0x2C4E82CF88213975(unk_0x7A16A8A755F44481(Local_141.f_1), 0);
							}
						}
						else if (unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_1), -1442466670) != 0 && unk_0x221AC1EF116F6053(unk_0x7A16A8A755F44481(Local_141.f_1), -1442466670) != 1)
						{
							unk_0x937785D9C1929236(unk_0x7A16A8A755F44481(Local_141.f_1));
							if (!unk_0xFA89F1C1D4B99EBD(unk_0x7A16A8A755F44481(Local_141.f_1), joaat("weapon_pistol"), 0))
							{
								unk_0x37BEBD1D516179CF(unk_0x7A16A8A755F44481(Local_141.f_1), joaat("weapon_pistol"), 25000, 1);
								unk_0xE97E86766A24F0FA(unk_0x7A16A8A755F44481(Local_141.f_1), 30);
							}
							func_192(4);
							unk_0x28F7FDF6BC8BA514(unk_0x7A16A8A755F44481(Local_141.f_1), 20f, 0);
						}
					}
					else if ((unk_0x889D01384B54BCE3(Local_141.f_12, 3) || !func_9()) || !func_397())
					{
						if (!unk_0x889D01384B54BCE3(Local_214[unk_0x044A481E863E2F6B() /*10*/].f_1, 9))
						{
							unk_0x937785D9C1929236(unk_0x7A16A8A755F44481(Local_141.f_1));
							unk_0x0891776D0327B77A(unk_0x7A16A8A755F44481(Local_141.f_1), uLocal_558);
							unk_0x2C4E82CF88213975(unk_0x7A16A8A755F44481(Local_141.f_1), 0);
						}
					}
					else
					{
						unk_0x937785D9C1929236(unk_0x7A16A8A755F44481(Local_141.f_1));
						unk_0x2686393074E14730(unk_0x7A16A8A755F44481(Local_141.f_1), 1);
						unk_0xA06765CC8C24CED7(unk_0x7A16A8A755F44481(Local_141.f_1), -1);
						unk_0x2C4E82CF88213975(unk_0x7A16A8A755F44481(Local_141.f_1), 0);
					}
				}
			}
		}
		if ((unk_0x889D01384B54BCE3(Local_141.f_12, 3) || !func_9()) || unk_0x1BCC42769F2B1858() <= 1)
		{
			if (unk_0x86CB59A6776A7C27(Local_141.f_2))
			{
				if (unk_0x428E17610BCE75C2(Local_141.f_2))
				{
					unk_0xBF1AB1205B822518(unk_0x9198B14217D71938(Local_141.f_2), 1, 1);
					func_44(&(Local_141.f_2));
				}
			}
		}
		if (((unk_0x889D01384B54BCE3(Local_141.f_12, 3) || !func_9()) || unk_0x889D01384B54BCE3(iLocal_535, 20)) || unk_0x1BCC42769F2B1858() <= 1)
		{
			if (unk_0x86CB59A6776A7C27(Local_141.f_3))
			{
				if (unk_0x428E17610BCE75C2(Local_141.f_3))
				{
					func_44(&(Local_141.f_3));
				}
			}
		}
		if (Local_141.f_0 == 6)
		{
			if (unk_0x86CB59A6776A7C27(Local_141.f_1))
			{
				if (unk_0x53D28141CF743B83(unk_0x7A16A8A755F44481(Local_141.f_1), "XP_Blocker"))
				{
					unk_0x46AEC73E8E96E8E5(unk_0x7A16A8A755F44481(Local_141.f_1), "XP_Blocker");
				}
			}
		}
		if (unk_0xE9849174628A9C50())
		{
			unk_0x969D58023F21D359(Local_141.f_21);
		}
	}
	func_396();
	unk_0xB845ECB6BD2996BD("mp_am_hold_up");
	unk_0xB7CC0B56B5170D0F();
	if (func_136("SHR_MENU"))
	{
		unk_0xFD1E0AEC770DAF2E(1);
	}
	Global_2446992.f_9 = func_191();
	unk_0x4A79FCCDF915C20B(func_353(Local_90.f_0));
	func_151(1, Local_90.f_0);
	if (Local_90.f_14 != -1)
	{
		func_221(&(Local_90.f_14));
	}
	Global_2446992.f_27 = Local_90.f_0;
	if (unk_0x889D01384B54BCE3(iLocal_535, 29))
	{
		unk_0x7E0A1273AA662067(Local_548, 0.5f, iLocal_572, 1);
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Local_141.f_12, 6) || unk_0x889D01384B54BCE3(Local_141.f_12, 21))
		{
			if (unk_0x889D01384B54BCE3(Local_141.f_12, 21))
			{
				iVar0 = 1;
			}
			unk_0x29281F86206C1739(30, iLocal_798, iLocal_799, iVar0);
		}
	}
	if (unk_0xBAB691F99A2A7346(Local_90.f_1))
	{
		if (unk_0x3C20CCC55C33AC27(Local_90.f_1))
		{
			unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
		}
		unk_0x27A62B1C26941E13(Local_90.f_1, 0);
	}
	func_395();
}

void func_395()
{
	unk_0x82706E6C897B0FA1();
}

void func_396()
{
	unk_0x2AF68ED52DC74B7D(&uLocal_555);
	unk_0x2AF68ED52DC74B7D(&uLocal_556);
}

int func_397()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x3F202553F90D4442())
	{
		if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iVar0)))
		{
			iVar1 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iVar0));
			uVar2 = unk_0xFF34D923BFB5E9FB(iVar1);
			if (func_375(iVar1, 1, 1))
			{
				if (unk_0x05681B6F593F0A9C(uVar2) == iLocal_580)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_398(struct<20> Param0)
{
	var uVar0;
	
	func_404(func_405(Param0.f_0), Param0);
	unk_0x1EB75D4128DBB6C4(2);
	unk_0x992F36F53DC17762(8);
	func_402(0, -1, 0);
	unk_0x241F80BF72379478(&Local_141, 73);
	unk_0x51FC2B81A21C009A(&Local_214, 321);
	unk_0xFF9F94FD851C212A(0);
	if (!func_401())
	{
		return 0;
	}
	if (unk_0xE9849174628A9C50())
	{
		func_373(func_374(0));
		func_373(func_374(1));
		func_373(func_374(2));
		unk_0x3D28909AF30D70F4("mp_am_hold_up");
		unk_0x3D28909AF30D70F4("mp_missheist_countrybank@cower");
		Local_141.f_35 = 8;
		if (func_400())
		{
			unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 11);
		}
		else if (func_399())
		{
			unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_13), 12);
		}
		Local_141.f_19 = unk_0x444ECD635D5FD45F(1, 11);
		Local_141.f_22 = unk_0x444ECD635D5FD45F(1, 5);
		if ((func_12() && !func_344(unk_0x1788E93557766241(), 1)) && !func_344(unk_0x1788E93557766241(), 2))
		{
			Local_141.f_34 = 2;
			unk_0xD0E2BFCE93AE3ABD(&(Local_141.f_14), 0);
		}
		else
		{
			Local_141.f_34 = 1;
		}
		Local_141.f_71 = unk_0x1E253A1A83763D22(18f, 28f);
	}
	unk_0x22ECB2536E15FBE0(func_374(1), 0);
	uVar0 = func_120(1185, -1, 0);
	if (unk_0x889D01384B54BCE3(uVar0, 20) && unk_0x889D01384B54BCE3(iVar0, 21))
	{
		unk_0xD0E2BFCE93AE3ABD(&iLocal_536, 1);
	}
	Local_214[unk_0x044A481E863E2F6B() /*10*/] = 0;
	return 1;
}

int func_399()
{
	if (iLocal_769 >= 0 && iLocal_769 <= 9)
	{
		if (func_356(5, 6) || func_356(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (iLocal_769 >= 10 && iLocal_769 <= 14)
	{
		if (func_356(9, 10) || func_356(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (iLocal_769 >= 15 && iLocal_769 <= 19)
	{
		if (func_356(7, 8) || func_356(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_400()
{
	if (iLocal_769 >= 0 && iLocal_769 <= 9)
	{
		if (func_356(6, 7) || func_356(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (iLocal_769 >= 10 && iLocal_769 <= 14)
	{
		if (func_356(10, 11) || func_356(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (iLocal_769 >= 15 && iLocal_769 <= 19)
	{
		if (func_356(8, 9) || func_356(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_401()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 0;
		}
		if (unk_0x5D0D85F8A1CCEE45())
		{
			return 1;
		}
		if (func_382())
		{
			return 0;
		}
		if (func_380(155))
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

int func_402(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x92078BBBAEFC7998();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_395();
			}
			else
			{
				return 0;
			}
		}
		if (!func_403())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1DAD7CE53BEE7710())
				{
					if (!bParam2)
					{
						func_395();
					}
					else
					{
						return 0;
					}
				}
				if (func_382())
				{
					if (!bParam2)
					{
						func_395();
					}
					else
					{
						return 0;
					}
				}
				if (func_380(155))
				{
					if (!bParam2)
					{
						func_395();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x0987AD2F87AA4427())
			{
				if (!bParam2)
				{
					func_395();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x92078BBBAEFC7998();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			if (!bParam2)
			{
				func_395();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x0987AD2F87AA4427())
	{
		if (!bParam2)
		{
			func_395();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_403()
{
	return Global_1315866;
}

void func_404(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		func_395();
	}
	unk_0x3005435C0CFEEE94(uParam0, 0, Param1.f_16);
}

int func_405(int iParam0)
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
		
		case 48:
			return 32;
		
		case 49:
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
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 55:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 56:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 2;
		
		case 70:
			return 1;
		
		case 66:
			return 2;
		
		case 67:
			return 4;
		
		case 68:
			return 2;
		
		case 69:
			return 2;
		
		case 52:
			return 1;
		
		case 71:
			return 2;
		
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
			return 0;
		
		case 78:
			return 1;
		
		default:
	}
	return 0;
}

