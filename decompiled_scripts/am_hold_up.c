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
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	int iLocal_97 = 0;
	struct<50> Local_98 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	int iLocal_148 = 0;
	struct<73> Local_149 = { 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_222[32];
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	char* sLocal_546 = NULL;
	int iLocal_547 = 0;
	struct<3> Local_548 = { 0, 0, 0 } ;
	struct<3> Local_551 = { 0, 0, 0 } ;
	float fLocal_554 = 0f;
	int iLocal_555 = 0;
	struct<3> Local_556 = { 0, 0, 0 } ;
	struct<3> Local_559 = { 0, 0, 0 } ;
	int iLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	struct<3> Local_572 = { 0, 0, 0 } ;
	var uLocal_575 = 0;
	struct<3> Local_576 = { 0, 0, 0 } ;
	var uLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	struct<3> Local_592 = { 0, 0, 0 } ;
	struct<3> Local_595 = { 0, 0, 0 } ;
	struct<3> Local_598 = { 0, 0, 0 } ;
	struct<3> Local_601 = { 0, 0, 0 } ;
	var uLocal_604 = 0;
	struct<3> Local_605 = { 0, 0, 0 } ;
	struct<3> Local_608 = { 0, 0, 0 } ;
	float fLocal_611 = 0f;
	var uLocal_612 = 16;
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
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778[5] = { 0, 0, 0, 0, 0 };
	int iLocal_784[5] = { 0, 0, 0, 0, 0 };
	float fLocal_790 = 0f;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	struct<3> Local_815 = { 0, 0, 0 } ;
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
	fLocal_89 = ((0.05f + 0.275f) - 0.01f);
	fLocal_92 = -0.05f;
	fLocal_93 = 0.92f;
	fLocal_94 = 1.94f;
	fLocal_95 = 2.99f;
	fLocal_96 = 3.7f;
	iLocal_547 = joaat("mp_m_shopkeep_01");
	iLocal_555 = -1;
	iLocal_562 = -1;
	iLocal_580 = joaat("prop_till_01");
	iLocal_581 = unk_0xF2DB717A73826179(Global_262145.f_2414);
	iLocal_582 = unk_0xF2DB717A73826179(Global_262145.f_2410) + 1;
	iLocal_583 = 1;
	if (unk_0x00AAD79B42B3E036())
	{
		if (!func_448(ScriptParam_0))
		{
			func_443();
		}
		if (func_442(1))
		{
			func_436(unk_0x3F80C6638E3A1A90(), 0, 98816);
		}
	}
	while (true)
	{
		func_435();
		if (func_425())
		{
			func_443();
		}
		func_423();
		if (unk_0xB519E5386FBF69E5(Local_149.f_12, 6))
		{
			if (func_442(1))
			{
				func_436(unk_0x3F80C6638E3A1A90(), 1, 0);
				func_420();
				unk_0x73817D396768E4C6(&iLocal_544, 7);
				func_419();
			}
		}
		switch (func_418(unk_0xA1238458CB587858()))
		{
			case 0:
				unk_0x2B0BB514F9140141("mp_am_hold_up");
				if (unk_0x2917D5E1CB5CE43A("mp_am_hold_up"))
				{
					if (func_408())
					{
						unk_0xDF7D4AE1A984CEF7(func_407(Local_98.f_0), 0);
						if (unk_0xDC1FDD911B88C6F2(Local_149.f_1))
						{
							if (func_406() > 0)
							{
								if (!func_405(Local_149.f_1))
								{
									func_404(&uLocal_612, 3, unk_0x9F2866A966FBAE78(Local_149.f_1), &(Local_149.f_38), 1, 0);
									func_403();
								}
								unk_0x9956FB0E4B50ECB8(&iLocal_543, 22);
								Local_222[unk_0xA1238458CB587858() /*10*/] = 2;
							}
						}
					}
				}
				if (func_406() == 6)
				{
					Local_222[unk_0xA1238458CB587858() /*10*/] = 5;
				}
				break;
			
			case 2:
				func_286();
				func_278();
				if (func_406() == 2)
				{
					func_126();
				}
				else if (func_406() == 6)
				{
					Local_222[unk_0xA1238458CB587858() /*10*/] = 5;
				}
				if (!unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_595, 30f, 30f, 30f, 0, 1, 0))
				{
					Local_222[unk_0xA1238458CB587858() /*10*/] = 6;
				}
				break;
			
			case 5:
				func_125(&(Local_149.f_61));
				if (func_124(&(Local_149.f_61)))
				{
					Local_222[unk_0xA1238458CB587858() /*10*/] = 6;
				}
				break;
			
			case 4:
				Local_222[unk_0xA1238458CB587858() /*10*/] = 6;
			
			case 6:
				func_51();
				func_443();
				break;
		}
		if (unk_0xFA4B36553B2A7802())
		{
			switch (func_406())
			{
				case 0:
					if (!unk_0xB519E5386FBF69E5(iLocal_543, 16))
					{
						func_49(func_50(0));
						func_49(func_50(1));
						func_49(func_50(2));
						unk_0x2B0BB514F9140141("mp_am_hold_up");
						if (unk_0x2917D5E1CB5CE43A("mp_am_hold_up"))
						{
							if (func_408())
							{
								unk_0xB86B1248EA9B87EA(Local_556, 1.5f, 0, 1, 0, 1);
								unk_0xB86B1248EA9B87EA(Local_551, 1.5f, 0, 1, 0, 1);
								unk_0x9956FB0E4B50ECB8(&iLocal_543, 16);
							}
						}
					}
					else if (func_47())
					{
						Local_149.f_0 = 2;
					}
					break;
				
				case 2:
					func_46();
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
						Local_149.f_0 = 6;
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
	if (unk_0xDC1FDD911B88C6F2(Local_149.f_2))
	{
		if (func_3(Local_149.f_2))
		{
			if (unk_0xD55D878601C46BA9(unk_0xA5CFD5B9C8A74104(Local_149.f_2)))
			{
				unk_0x27B54A887EC71B05(unk_0xA5CFD5B9C8A74104(Local_149.f_2), 1, 1);
				func_2(&(Local_149.f_2));
			}
		}
	}
}

void func_2(var uParam0)
{
	var uVar0;
	
	if (unk_0x51362735C7CDD08E(*uParam0))
	{
		uVar0 = unk_0xD0D00ABC0BE9C25C(*uParam0);
		unk_0x52B01BD1A77FF6DE(&uVar0);
	}
}

int func_3(var uParam0)
{
	if (unk_0xDC1FDD911B88C6F2(uParam0))
	{
		unk_0xB489515AC39C50A3(uParam0);
		return unk_0x379306CBB68B0FFA(uParam0);
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
	if (unk_0xB519E5386FBF69E5(Local_149.f_12, 2))
	{
		return 1;
	}
	if (unk_0xB519E5386FBF69E5(Local_149.f_12, 3))
	{
		return 1;
	}
	if (!func_9())
	{
		if ((unk_0xB519E5386FBF69E5(Local_149.f_12, 11) || unk_0xB519E5386FBF69E5(Local_149.f_12, 19)) || (unk_0xB519E5386FBF69E5(Local_149.f_12, 9) && !unk_0xB519E5386FBF69E5(Local_149.f_12, 20)))
		{
			func_6(iLocal_777, 1, func_7());
			return 1;
		}
		if (unk_0xB519E5386FBF69E5(Local_149.f_12, 18))
		{
			func_6(iLocal_777, 1, func_7());
			return 1;
		}
	}
	if (unk_0xB519E5386FBF69E5(Local_149.f_12, 18))
	{
		if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 7))
		{
			func_6(iLocal_777, 1, func_7());
			unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 7);
		}
	}
	return 0;
}

void func_6(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 23;
	Var0.f_1 = unk_0x3F80C6638E3A1A90();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0xBBEF99A5C6E20CCC(1, &Var0, 4, iParam2);
	}
}

int func_7()
{
	return func_8(unk_0xA960844B9B166EA9("freemode", -1, 0));
}

int func_8(int iParam0)
{
	var uVar0;
	
	unk_0x9956FB0E4B50ECB8(&uVar0, iParam0);
	return uVar0;
}

int func_9()
{
	if ((unk_0xB519E5386FBF69E5(Local_149.f_12, 13) || unk_0xB519E5386FBF69E5(Local_149.f_12, 27)) || unk_0xB519E5386FBF69E5(Local_149.f_12, 28))
	{
		return 1;
	}
	return 0;
}

void func_10()
{
	var uVar0;
	
	if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 21))
	{
		if (func_405(Local_149.f_1))
		{
			Local_149.f_72 = unk_0x539CCA787E770980(Local_149.f_1, &uVar0);
			unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 21);
		}
	}
	if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 19))
	{
		if (unk_0xB519E5386FBF69E5(Local_149.f_12, 10) && Local_149.f_28 <= 0f)
		{
			unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 19);
		}
	}
	if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 17))
	{
		if (unk_0xB519E5386FBF69E5(Local_149.f_12, 20))
		{
			if (func_3(Local_149.f_2))
			{
				unk_0x2E9DAE56D293B951(unk_0xA5CFD5B9C8A74104(Local_149.f_2), 0, 0);
				unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 17);
			}
		}
	}
	if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 6))
	{
		if (Global_2457699.f_8 == 1)
		{
			unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 6);
			unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 16);
		}
	}
}

int func_11()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFA4B36553B2A7802() || !unk_0xB519E5386FBF69E5(Local_149.f_14, 0))
	{
		return 0;
	}
	if (Local_149.f_58 != 6)
	{
		if (Local_149.f_58 > 0 && func_405(Local_149.f_4))
		{
			Local_149.f_58 = 6;
			return 0;
		}
		switch (Local_149.f_58)
		{
			case 0:
				if (!func_17(&uLocal_803, 10000, 0))
				{
					iVar0 = unk_0x421E6299B34E6001(Local_605, 20f, 20f, 20f, -1);
					if (!unk_0xAF437D7C802AB246(iVar0))
					{
						if (!unk_0x28D33422BA6C479D(iVar0))
						{
							iVar1 = unk_0x1B2DC87EFB36DF80(iVar0);
							if (((((((iVar1 != joaat("mp_m_freemode_01") && iVar1 != joaat("mp_f_freemode_01")) && !unk_0x3498640250A18717(Local_605, 25f, 25f, 25f)) && !unk_0x3761EA7F8628B81A(iVar0, Local_592, 1f, 1f, 2f, 0, 1, 0)) && !unk_0x72957E5DA83E879F(iVar0, 7)) && !unk_0x51374A0BB2871E6E(iVar0, 1)) && unk_0x45122B522E773E89(iVar0)) && func_16(iVar1))
							{
								unk_0x7CBF8CE5F3C88AEC(iVar0);
								if (unk_0x9B5F286CC8377932(iVar0))
								{
									if (func_15(&(Local_149.f_4), iVar0, 1, 0))
									{
										unk_0x5E9C818BB0BD51FB(unk_0x9F2866A966FBAE78(Local_149.f_4), joaat("weapon_pistol"), 25000, 0);
										unk_0x8D6671D78D1F569B(unk_0x9F2866A966FBAE78(Local_149.f_4), 1);
										Local_149.f_58 = 1;
										unk_0x9956FB0E4B50ECB8(&(Local_149.f_14), 1);
										unk_0x690C5239500171FE(unk_0x9F2866A966FBAE78(Local_149.f_4), Global_1574227);
										unk_0x79EE909282B7E387(unk_0x9F2866A966FBAE78(Local_149.f_4), 2);
										unk_0x09714949CF524B00(unk_0x9F2866A966FBAE78(Local_149.f_4), unk_0xF2DB717A73826179((200f * Global_262145.f_149)));
										func_404(&uLocal_612, 4, unk_0x9F2866A966FBAE78(Local_149.f_4), "StoreHero", 1, 0);
										unk_0x7D786F4317F35B2E(unk_0x9F2866A966FBAE78(Local_149.f_4), func_14(), 0, 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((unk_0xB519E5386FBF69E5(Local_149.f_12, 9) || unk_0xB519E5386FBF69E5(Local_149.f_12, 5)) || unk_0xB519E5386FBF69E5(Local_149.f_12, 4))
				{
					Local_149.f_58 = 2;
				}
				break;
			
			case 2:
				if (func_17(&(Local_149.f_59), 3000, 0) || (unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_4), 1227113341) != 0 && unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_4), 1227113341) != 1))
				{
					func_13(&(Local_149.f_59));
					Local_149.f_58 = 3;
				}
				break;
			
			case 3:
				if (((unk_0xB519E5386FBF69E5(Local_149.f_12, 5) || unk_0xB519E5386FBF69E5(Local_149.f_14, 8)) || unk_0xB519E5386FBF69E5(Local_149.f_14, 9)) || func_17(&(Local_149.f_59), 5000, 0))
				{
					if (func_12() || func_17(&(Local_149.f_59), 5000, 0))
					{
						Local_149.f_58 = 4;
					}
					else
					{
						Local_149.f_58 = 5;
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
	if (unk_0xB519E5386FBF69E5(unk_0x0ADD324BC46177EF(0, 65535), 0))
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
	
	iVar0 = unk_0x0ADD324BC46177EF(0, 100);
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
	unk_0x20BB4B94CC6DDC9A(iParam1, bParam2, iParam3);
	*uParam0 = unk_0x5BD89D856D2E7C36(iParam1);
	if (unk_0xDC1FDD911B88C6F2(*uParam0))
	{
		if (bParam2)
		{
			unk_0xDBE1342300E4DF89(*uParam0, 1);
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

void func_18(var uParam0, bool bParam1, bool bParam2)
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

void func_19()
{
	if (Local_149.f_21 == 0)
	{
		if (Local_149.f_36 >= 2 && Local_149.f_36 != 9)
		{
			Local_149.f_21 = unk_0x356F06C48CE93761(99, unk_0xE7869D5D7816A9B6(), 60000f);
		}
	}
}

void func_20()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0xB519E5386FBF69E5(Local_149.f_15, 5))
	{
		if (Local_149.f_32 > 0)
		{
			func_24();
			if (!unk_0xB519E5386FBF69E5(Local_149.f_15, 5))
			{
				return;
			}
		}
	}
	if (unk_0xB519E5386FBF69E5(Local_149.f_15, 1))
	{
		if (Local_149.f_18 == 3 && !unk_0xB519E5386FBF69E5(Local_149.f_12, 9))
		{
			Local_149.f_18 = 0;
		}
		unk_0x73817D396768E4C6(&(Local_149.f_15), 1);
	}
	switch (Local_149.f_18)
	{
		case 0:
			if ((((func_3(Local_149.f_1) && !func_405(Local_149.f_1)) && func_3(Local_149.f_5[Local_149.f_16])) && Local_149.f_36 != 8) && Local_149.f_36 != 7)
			{
				if (!unk_0x8E2CF6ACCED3BD0F(unk_0x9F2866A966FBAE78(Local_149.f_1)))
				{
					if (unk_0xB519E5386FBF69E5(Local_149.f_12, 9) || unk_0xB519E5386FBF69E5(Local_149.f_15, 4))
					{
						Local_149.f_18 = 2;
						return;
					}
					if (!iLocal_545)
					{
						unk_0xF78809EA8A08F2D1(unk_0x9F2866A966FBAE78(Local_149.f_1), Local_149.f_33, 1600);
						iLocal_545 = 1;
					}
					if (func_17(&uLocal_793, 100, 0))
					{
						fVar0 = unk_0x2CAFFCD9F5E16D2F(unk_0x9F2866A966FBAE78(Local_149.f_1));
						fVar1 = (Local_149.f_33 - 10f);
						fVar2 = (Local_149.f_33 + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_149.f_33 - 10f) + 360f);
							fVar1 = ((Local_149.f_33 + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_149.f_33 - 10f) - 360f);
							fVar1 = ((Local_149.f_33 + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_17(&uLocal_799, 1000, 0)) || func_17(&uLocal_799, 3125, 0))
						{
							unk_0xAA6742AEFA0B2BC4(unk_0x9F2866A966FBAE78(Local_149.f_1));
							Local_149.f_17 = unk_0x5D517BDD55C4B76A(unk_0xBD306D8AFEF4E078(unk_0x9F2866A966FBAE78(Local_149.f_1), -0.65f, 0.87f, -0.02f), Local_559, 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0xDCF7222C3DC94EAB(unk_0x9F2866A966FBAE78(Local_149.f_1), Local_149.f_17, "mp_am_hold_up", func_23(Local_149.f_16), 1.5f, -1.5f, 157, 16, 1148846080, 0);
							if (unk_0xDC1FDD911B88C6F2(Local_149.f_5[Local_149.f_16]))
							{
								unk_0x60365B5AF8BF1FFA(unk_0xA5CFD5B9C8A74104(Local_149.f_5[Local_149.f_16]), true, 0);
								unk_0xD9F909E8F1338F52(unk_0xA5CFD5B9C8A74104(Local_149.f_5[Local_149.f_16]), Local_149.f_17, "mp_am_hold_up", func_22(Local_149.f_16), 4f, -4f, 8);
							}
							unk_0x3C2889178CACACC8(Local_149.f_17);
							Local_149.f_18 = 1;
							iLocal_562 = unk_0xA6C2218D69567283(Local_149.f_17);
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0xB519E5386FBF69E5(Local_149.f_12, 9) || unk_0xB519E5386FBF69E5(Local_149.f_15, 4))
			{
				iLocal_562 = unk_0xA6C2218D69567283(Local_149.f_17);
				if (unk_0x47B2F09FC779F5CD(iLocal_562))
				{
					unk_0x7C10A814ABC7AD2E(Local_149.f_17);
				}
				Local_149.f_18 = 2;
				return;
			}
			if (iLocal_562 >= 0)
			{
				if (unk_0x47B2F09FC779F5CD(iLocal_562) || func_17(&uLocal_795, 2000, 0))
				{
					if ((unk_0x47B2F09FC779F5CD(iLocal_562) && unk_0x4D221DFBB84DCF0B(iLocal_562) == 1f) || func_17(&uLocal_795, 2000, 0))
					{
						if ((func_3(Local_149.f_1) && !func_405(Local_149.f_1)) && !unk_0xB519E5386FBF69E5(Local_149.f_12, 9))
						{
							unk_0xFA2C5C2D054C888E(unk_0x9F2866A966FBAE78(Local_149.f_1));
						}
						unk_0x7C10A814ABC7AD2E(Local_149.f_17);
						Local_149.f_18 = 2;
					}
				}
			}
			else
			{
				iLocal_562 = unk_0xA6C2218D69567283(Local_149.f_17);
			}
			break;
		
		case 2:
			func_3(Local_149.f_5[Local_149.f_16]);
			if (func_17(&uLocal_801, 1000, 0) && func_3(Local_149.f_5[Local_149.f_16]))
			{
				if (unk_0xD51CFE69539DB6D8(unk_0xA5CFD5B9C8A74104(Local_149.f_5[Local_149.f_16])))
				{
					unk_0x60365B5AF8BF1FFA(unk_0xA5CFD5B9C8A74104(Local_149.f_5[Local_149.f_16]), false, 0);
					unk_0x2878EC06B3F897A0(unk_0xA5CFD5B9C8A74104(Local_149.f_5[Local_149.f_16]), true);
					unk_0x88A973CE47FBEF95(unk_0xA5CFD5B9C8A74104(Local_149.f_5[Local_149.f_16]), func_21(Local_149.f_16), 1, 0, 0, 1);
				}
				iLocal_562 = -1;
				iLocal_545 = 0;
				if (unk_0xB519E5386FBF69E5(Local_149.f_15, 4))
				{
					unk_0x73817D396768E4C6(&(Local_149.f_15), 4);
				}
				func_13(&uLocal_801);
				func_13(&uLocal_795);
				func_13(&uLocal_793);
				func_13(&uLocal_799);
				Local_149.f_18 = 3;
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
			return Local_576 - Vector(1f, 0.2f, 0.1f);
		
		case 1:
			return Local_576 - Vector(1f, 0.2f, 0f);
		
		case 2:
			return Local_576 - Vector(1f, 0.2f, -0.1f);
		
		case 4:
			return Local_576 - Vector(1f, -0.2f, 0.1f);
		
		case 0:
			return Local_576 - Vector(1f, -0.2f, 0f);
		
		case 5:
			return Local_576 - Vector(1f, -0.2f, -0.1f);
		
		default:
	}
	return Local_576 - Vector(1f, 0f, -0.1f);
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
	if (((((!unk_0xDC1FDD911B88C6F2(Local_149.f_5[3]) || !unk_0xDC1FDD911B88C6F2(Local_149.f_5[1])) || !unk_0xDC1FDD911B88C6F2(Local_149.f_5[2])) || !unk_0xDC1FDD911B88C6F2(Local_149.f_5[4])) || !unk_0xDC1FDD911B88C6F2(Local_149.f_5[0])) || !unk_0xDC1FDD911B88C6F2(Local_149.f_5[5]))
	{
		if (((((func_49(func_26(3)) && func_49(func_26(1))) && func_49(func_26(2))) && func_49(func_26(4))) && func_49(func_26(0))) && func_49(func_26(5)))
		{
			if (unk_0x95FD4EFBB9668DCE(0, 0, 6, 0))
			{
				if (!unk_0xDC1FDD911B88C6F2(Local_149.f_5[3]))
				{
					if (func_25(&(Local_149.f_5[3]), func_26(3), func_21(3), 1, 1, 0, 1))
					{
						unk_0x6818FB8C56DEFA06(unk_0xA5CFD5B9C8A74104(Local_149.f_5[3]), unk_0x4D694385AA5DB67C(Local_548));
						unk_0x2878EC06B3F897A0(unk_0xA5CFD5B9C8A74104(Local_149.f_5[3]), true);
						unk_0x60365B5AF8BF1FFA(unk_0xA5CFD5B9C8A74104(Local_149.f_5[3]), false, 0);
					}
				}
				if (!unk_0xDC1FDD911B88C6F2(Local_149.f_5[1]))
				{
					if (func_25(&(Local_149.f_5[1]), func_26(1), func_21(1), 1, 1, 0, 1))
					{
						unk_0x6818FB8C56DEFA06(unk_0xA5CFD5B9C8A74104(Local_149.f_5[1]), unk_0x4D694385AA5DB67C(Local_548));
						unk_0x2878EC06B3F897A0(unk_0xA5CFD5B9C8A74104(Local_149.f_5[1]), true);
						unk_0x60365B5AF8BF1FFA(unk_0xA5CFD5B9C8A74104(Local_149.f_5[1]), false, 0);
					}
				}
				if (!unk_0xDC1FDD911B88C6F2(Local_149.f_5[2]))
				{
					if (func_25(&(Local_149.f_5[2]), func_26(2), func_21(2), 1, 1, 0, 1))
					{
						unk_0x6818FB8C56DEFA06(unk_0xA5CFD5B9C8A74104(Local_149.f_5[2]), unk_0x4D694385AA5DB67C(Local_548));
						unk_0x2878EC06B3F897A0(unk_0xA5CFD5B9C8A74104(Local_149.f_5[2]), true);
						unk_0x60365B5AF8BF1FFA(unk_0xA5CFD5B9C8A74104(Local_149.f_5[2]), false, 0);
					}
				}
				if (!unk_0xDC1FDD911B88C6F2(Local_149.f_5[4]))
				{
					if (func_25(&(Local_149.f_5[4]), func_26(4), func_21(4), 1, 1, 0, 1))
					{
						unk_0x6818FB8C56DEFA06(unk_0xA5CFD5B9C8A74104(Local_149.f_5[4]), unk_0x4D694385AA5DB67C(Local_548));
						unk_0x2878EC06B3F897A0(unk_0xA5CFD5B9C8A74104(Local_149.f_5[4]), true);
						unk_0x60365B5AF8BF1FFA(unk_0xA5CFD5B9C8A74104(Local_149.f_5[4]), false, 0);
					}
				}
				if (!unk_0xDC1FDD911B88C6F2(Local_149.f_5[0]))
				{
					if (func_25(&(Local_149.f_5[0]), func_26(0), func_21(0), 1, 1, 0, 1))
					{
						unk_0x6818FB8C56DEFA06(unk_0xA5CFD5B9C8A74104(Local_149.f_5[0]), unk_0x4D694385AA5DB67C(Local_548));
						unk_0x2878EC06B3F897A0(unk_0xA5CFD5B9C8A74104(Local_149.f_5[0]), true);
						unk_0x60365B5AF8BF1FFA(unk_0xA5CFD5B9C8A74104(Local_149.f_5[0]), false, 0);
					}
				}
				if (!unk_0xDC1FDD911B88C6F2(Local_149.f_5[5]))
				{
					if (func_25(&(Local_149.f_5[5]), func_26(5), func_21(5), 1, 1, 0, 1))
					{
						unk_0x6818FB8C56DEFA06(unk_0xA5CFD5B9C8A74104(Local_149.f_5[5]), unk_0x4D694385AA5DB67C(Local_548));
						unk_0x2878EC06B3F897A0(unk_0xA5CFD5B9C8A74104(Local_149.f_5[5]), true);
						unk_0x60365B5AF8BF1FFA(unk_0xA5CFD5B9C8A74104(Local_149.f_5[5]), false, 0);
					}
				}
			}
		}
	}
	else
	{
		unk_0x9956FB0E4B50ECB8(&(Local_149.f_15), 5);
		return 1;
	}
	return 0;
}

int func_25(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8)
{
	if (!unk_0xE107B0270F6E3CC8(1))
	{
		return 0;
	}
	*uParam0 = unk_0x1D6A78EAF4518040(unk_0x8C15E6EC0BC9B4BE(iParam1, Param2, iParam6, bParam5, iParam7));
	if (unk_0xDC1FDD911B88C6F2(*uParam0))
	{
		unk_0xFD092FF761E54535(unk_0xA5CFD5B9C8A74104(*uParam0), iParam8);
		if (unk_0x49D76889EB33F5C6(unk_0xA5CFD5B9C8A74104(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xDBE1342300E4DF89(*uParam0, 1);
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
	
	if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 9))
	{
		if (Global_2457699.f_8 == 1 || unk_0xB519E5386FBF69E5(Local_149.f_12, 6))
		{
			if ((((func_3(Local_149.f_2) && func_3(Local_149.f_1)) && !func_405(Local_149.f_1)) && Local_149.f_36 != 8) && Local_149.f_36 != 7)
			{
				if (!unk_0x8E2CF6ACCED3BD0F(unk_0x9F2866A966FBAE78(Local_149.f_1)))
				{
					if (!unk_0xB519E5386FBF69E5(iLocal_543, 30))
					{
						unk_0xF78809EA8A08F2D1(unk_0x9F2866A966FBAE78(Local_149.f_1), Local_149.f_33, 1600);
						unk_0x9956FB0E4B50ECB8(&iLocal_543, 30);
					}
					if (func_17(&uLocal_791, 100, 0))
					{
						fVar0 = unk_0x2CAFFCD9F5E16D2F(unk_0x9F2866A966FBAE78(Local_149.f_1));
						if ((fVar0 > (Local_149.f_33 - 20f) && fVar0 < (Local_149.f_33 + 20f)) || func_17(&uLocal_797, 1500, 0))
						{
							unk_0xAA6742AEFA0B2BC4(unk_0x9F2866A966FBAE78(Local_149.f_1));
							Local_149.f_20 = unk_0x5D517BDD55C4B76A(Local_556, Local_559, 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0xDCF7222C3DC94EAB(unk_0x9F2866A966FBAE78(Local_149.f_1), Local_149.f_20, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 157, 16, 1148846080, 0);
							if (unk_0xDC1FDD911B88C6F2(Local_149.f_2))
							{
								unk_0x2878EC06B3F897A0(unk_0xA5CFD5B9C8A74104(Local_149.f_2), false);
								unk_0x504BE965986F581A(unk_0xA5CFD5B9C8A74104(Local_149.f_2), 1);
								unk_0xD9F909E8F1338F52(unk_0xA5CFD5B9C8A74104(Local_149.f_2), Local_149.f_20, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (unk_0xDC1FDD911B88C6F2(Local_149.f_3))
							{
								unk_0xD9F909E8F1338F52(unk_0xA5CFD5B9C8A74104(Local_149.f_3), Local_149.f_20, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							unk_0x3C2889178CACACC8(Local_149.f_20);
							unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 9);
						}
					}
				}
				else
				{
					Local_149.f_36 = 8;
				}
			}
		}
	}
	else if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 17))
	{
		iLocal_555 = unk_0xA6C2218D69567283(Local_149.f_20);
		if (iLocal_555 >= 0)
		{
			func_3(Local_149.f_1);
			if (unk_0x47B2F09FC779F5CD(iLocal_555))
			{
				unk_0x0C8881432DA64087(unk_0xE7869D5D7816A9B6(), 0, -1, 0);
				unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 17);
			}
		}
	}
	else if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 15))
	{
		iLocal_555 = unk_0xA6C2218D69567283(Local_149.f_20);
		if (iLocal_555 >= 0)
		{
			if (unk_0x47B2F09FC779F5CD(iLocal_555))
			{
				func_3(Local_149.f_1);
				if ((unk_0xDC1FDD911B88C6F2(Local_149.f_2) && func_3(Local_149.f_2)) && func_3(Local_149.f_1))
				{
					if (unk_0x4D221DFBB84DCF0B(iLocal_555) > 0.44f)
					{
						unk_0x60365B5AF8BF1FFA(unk_0xA5CFD5B9C8A74104(Local_149.f_2), true, 0);
						unk_0x70EE8EFEE355AD29(unk_0xA5CFD5B9C8A74104(Local_149.f_2), true, 0);
						unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 15);
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
	
	if (!unk_0xFA4B36553B2A7802())
	{
		return 0;
	}
	func_41();
	if (Local_149.f_36 != 9)
	{
		if (func_405(Local_149.f_1))
		{
			Local_149.f_36 = 9;
			return 0;
		}
		if ((unk_0xB519E5386FBF69E5(Local_149.f_12, 6) && !unk_0xB519E5386FBF69E5(Local_149.f_12, 9)) && Local_149.f_36 < 8)
		{
			if (!unk_0xDC1FDD911B88C6F2(Local_149.f_2) || !unk_0xDC1FDD911B88C6F2(Local_149.f_3))
			{
				Local_149.f_36 = 8;
			}
		}
		switch (Local_149.f_36)
		{
			case 0:
				if (!func_405(Local_149.f_1))
				{
					Local_149.f_36 = 1;
				}
				break;
			
			case 1:
				if (unk_0xB519E5386FBF69E5(Local_149.f_12, 4))
				{
					Local_149.f_36 = 2;
				}
				else if (unk_0xB519E5386FBF69E5(Local_149.f_12, 6) || unk_0xB519E5386FBF69E5(Local_149.f_12, 9))
				{
					Local_149.f_36 = 4;
				}
				else if (func_39() || func_33(0))
				{
					Local_149.f_36 = 8;
				}
				else if (func_31())
				{
					Local_149.f_36 = 7;
				}
				break;
			
			case 2:
				if (unk_0xB519E5386FBF69E5(Local_149.f_12, 6) || unk_0xB519E5386FBF69E5(Local_149.f_12, 9))
				{
					Local_149.f_36 = 4;
				}
				else if (func_39() || func_33(1))
				{
					Local_149.f_36 = 8;
				}
				else if (func_31())
				{
					Local_149.f_36 = 7;
				}
				break;
			
			case 3:
				if (unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_1), 1920390111) != 0 && unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_1), 1920390111) != 1)
				{
					Local_149.f_36 = 4;
				}
				else if (func_33(1))
				{
					Local_149.f_36 = 8;
				}
				else if (func_31())
				{
					Local_149.f_36 = 7;
				}
				break;
			
			case 4:
				if (unk_0xB519E5386FBF69E5(Local_149.f_12, 17))
				{
					iVar0 = 0;
					iLocal_555 = unk_0xA6C2218D69567283(Local_149.f_20);
					if (iLocal_555 >= 0)
					{
						if (unk_0x47B2F09FC779F5CD(iLocal_555))
						{
							if (unk_0x742CA22C114D89E4(Local_548, 3f, 0))
							{
								if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 25))
								{
									unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 25);
								}
								Local_149.f_24 = (Local_149.f_24 + 0.35f);
							}
							fVar1 = unk_0x4D221DFBB84DCF0B(iLocal_555);
							if (fVar1 >= 0.8f)
							{
								Local_149.f_28 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_149.f_28 = 0f;
							}
							else if (fVar1 > Local_149.f_28)
							{
								Local_149.f_28 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_149.f_28 = 1f;
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
						Local_149.f_36 = 6;
					}
					else if (func_33(1))
					{
						Local_149.f_36 = 8;
					}
					else if (func_31())
					{
						Local_149.f_36 = 7;
					}
				}
				break;
			
			case 5:
				if (func_39() || func_33(1))
				{
					Local_149.f_36 = 8;
				}
				break;
			
			case 6:
				func_29();
				if (func_39() || func_33(1))
				{
					Local_149.f_36 = 8;
				}
				else if (func_31())
				{
					Local_149.f_36 = 7;
				}
				else if (unk_0xB519E5386FBF69E5(Local_149.f_13, 3))
				{
					if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 4))
					{
						Local_149.f_36 = 7;
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
	else if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 10))
	{
		if (!unk_0xDC1FDD911B88C6F2(Local_149.f_1))
		{
			Local_149.f_34 = (Local_149.f_34 - 1);
			unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 10);
		}
	}
	return 1;
}

void func_29()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 2))
	{
		iVar0 = unk_0x0ADD324BC46177EF(0, 10);
		iVar1 = (iLocal_583 + func_30());
		if (iVar0 < iVar1)
		{
			unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 3);
		}
		unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 2);
	}
}

int func_30()
{
	int iVar0;
	
	iVar0 = (Global_2416794[unk_0x3F80C6638E3A1A90() /*303*/].f_46 - 1);
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
	
	if (unk_0x958B4351DD28B142(0, 24) || unk_0x958B4351DD28B142(0, 257))
	{
		iVar0 = func_32(unk_0xE7869D5D7816A9B6());
		if ((((((iVar0 != joaat("weapon_unarmed") && iVar0 != 0) && iVar0 != joaat("vehicle_weapon_player_bullet")) && iVar0 != joaat("vehicle_weapon_player_buzzard")) && iVar0 != joaat("vehicle_weapon_player_laser")) && iVar0 != joaat("vehicle_weapon_tank")) && iVar0 != joaat("weapon_flare"))
		{
			iVar1 = unk_0xE98DA6AE7735AF9D(iVar0);
			if (((((((unk_0x4B88462744233B66(unk_0xE7869D5D7816A9B6(), iVar0) == 0 && iVar1 != joaat("GROUP_MELEE")) && iVar1 != 507375312) && iVar1 != 0) && iVar1 != joaat("GROUP_FIREEXTINGUISHER")) && iVar1 != -801780072) && iVar1 != 431593103) && iVar1 != -755518101)
			{
				if (unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == iLocal_588)
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
	
	unk_0x5E99B63A819500A5(iParam0, &uVar0, 1);
	return uVar0;
}

int func_33(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar11;
	int iVar12;
	
	if (func_37(unk_0x3F80C6638E3A1A90(), 146))
	{
		return 1;
	}
	if (unk_0xB519E5386FBF69E5(Local_149.f_12, 5))
	{
		return 1;
	}
	if (unk_0x8E2CF6ACCED3BD0F(unk_0x9F2866A966FBAE78(Local_149.f_1)))
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
	while (iVar0 < unk_0xE4E91039B15CA110(1))
	{
		if (unk_0xCEDD7FE4546BFC4F(1, iVar0) == 179)
		{
			if (unk_0x0586E3C97DD61FE4(1, iVar0, &Var1, 10))
			{
				if (unk_0xD51CFE69539DB6D8(Var1.f_0) && unk_0x41B17741CACC905E(Var1.f_0))
				{
					iVar11 = unk_0x10E754B2E0DF2A70(Var1.f_0);
					if (unk_0xAF437D7C802AB246(iVar11) && unk_0xB034B5B185BD9C69(iVar11) == iLocal_588)
					{
						if (unk_0xD51CFE69539DB6D8(Var1.f_1) && unk_0x41B17741CACC905E(Var1.f_1))
						{
							iVar12 = unk_0x10E754B2E0DF2A70(Var1.f_1);
							if (iVar12 != unk_0x9F2866A966FBAE78(Local_149.f_1))
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
		if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 5))
		{
			if (unk_0x3498640250A18717(Local_598 - Vector(25f, 25f, 25f), Local_598 + Vector(25f, 25f, 25f)))
			{
				unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 5);
			}
		}
	}
	return 0;
}

int func_34()
{
	if (iLocal_777 >= 15 && iLocal_777 <= 19)
	{
		if (unk_0x048B85C1B162DC5D(9, Local_598, 40f))
		{
			return 1;
		}
	}
	if (unk_0xDDCD1686C0C8CD63(-1, Local_598, Local_601, uLocal_604))
	{
		return 1;
	}
	if (unk_0xDDCD1686C0C8CD63(-1, Local_605, Local_608, uLocal_611))
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	if ((unk_0x1D62E839BC1223D9(Local_605, Local_608, uLocal_611, joaat("weapon_grenade"), 0) || unk_0x1D62E839BC1223D9(Local_605, Local_608, uLocal_611, joaat("weapon_molotov"), 0)) || unk_0x1D62E839BC1223D9(Local_605, Local_608, uLocal_611, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	if ((unk_0x1D62E839BC1223D9(Local_598, Local_601, uLocal_604, joaat("weapon_grenade"), 0) || unk_0x1D62E839BC1223D9(Local_598, Local_601, uLocal_604, joaat("weapon_molotov"), 0)) || unk_0x1D62E839BC1223D9(Local_598, Local_601, uLocal_604, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0, int iParam1)
{
	if (Global_1607618[iParam0 /*106*/] == iParam1)
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
		return unk_0xB519E5386FBF69E5(Global_1607618[iVar0 /*106*/].f_1, 0);
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
	if (unk_0x6018DB69EB3D81CB(Local_598, Local_601, uLocal_604, 0))
	{
		return 1;
	}
	if (unk_0x6018DB69EB3D81CB(Local_605, Local_608, uLocal_611, 0))
	{
		return 1;
	}
	return 0;
}

void func_41()
{
	if (Local_149.f_24 > 0f)
	{
		if (func_42(&(Local_149.f_25), 50, 0))
		{
			Local_149.f_24 = (Local_149.f_24 - 0.02f);
			if (Local_149.f_24 < 0f)
			{
				Local_149.f_24 = 0f;
			}
			func_13(&(Local_149.f_25));
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
	if (unk_0x00AAD79B42B3E036() && !bParam2)
	{
		if (unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), *uParam0)) >= iParam1)
		{
			func_13(uParam0);
			return 1;
		}
	}
	else if (unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(unk_0x9D40BBF80D8F5E8A(), *uParam0)) >= iParam1)
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
	
	if (unk_0x7144266D2DB1A46F(unk_0x2A0D2AD241778491(iLocal_569)))
	{
		iVar0 = unk_0x39078CE05613D134(unk_0x2A0D2AD241778491(iLocal_569));
		uVar1 = unk_0x91B73D905EA38F6B(iVar0);
		if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 11))
		{
			if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 5))
			{
				if (unk_0x51362735C7CDD08E(Local_149.f_2))
				{
					if (func_3(Local_149.f_2))
					{
						unk_0x27B54A887EC71B05(unk_0xA5CFD5B9C8A74104(Local_149.f_2), 1, 1);
						func_45(&(Local_149.f_2));
					}
				}
				else
				{
					Local_149.f_29 = { Local_222[iLocal_569 /*10*/].f_7 };
					Local_149.f_35 = 7;
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 11);
				}
			}
		}
		if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 14))
		{
			if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 6))
			{
				unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 14);
			}
		}
		if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 15))
		{
			if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 7))
			{
				unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 15);
			}
		}
		if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 26))
		{
			if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 24))
			{
				unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 26);
			}
		}
		if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 22))
		{
			if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 22))
			{
				unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 22);
			}
		}
		if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 23))
		{
			if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 23))
			{
				unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 23);
			}
		}
		if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 30))
		{
			if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 25))
			{
				unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 30);
			}
		}
		if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 31))
		{
			if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 26))
			{
				unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 31);
			}
		}
		if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 6))
		{
			if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 29))
			{
				unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 6);
			}
		}
		if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 9))
		{
			if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 31))
			{
				unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 9);
			}
		}
		if (!unk_0xB519E5386FBF69E5(Local_149.f_15, 3))
		{
			if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_3, 3))
			{
				unk_0x9956FB0E4B50ECB8(&(Local_149.f_15), 3);
			}
		}
		if (unk_0xB519E5386FBF69E5(Local_149.f_14, 1))
		{
			if (!unk_0xB519E5386FBF69E5(Local_149.f_14, 6))
			{
				if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_2, 1))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_14), 6);
				}
			}
			if (!unk_0xB519E5386FBF69E5(Local_149.f_14, 7))
			{
				if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_2, 2))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_14), 7);
				}
			}
			if (!unk_0xB519E5386FBF69E5(Local_149.f_14, 5))
			{
				if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_2, 0))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_14), 5);
				}
			}
		}
		if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 20))
		{
			if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 11))
			{
				unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 20);
			}
		}
		if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 17))
		{
			if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 13))
			{
				unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 17);
			}
		}
		if (func_44(iVar0, 1, 1))
		{
			if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 5))
			{
				if (!func_405(Local_149.f_1))
				{
					if (unk_0x915685CA559C211B(unk_0x9F2866A966FBAE78(Local_149.f_1), uVar1, 1))
					{
						unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 5);
					}
				}
			}
			if (unk_0xB519E5386FBF69E5(Local_149.f_14, 1))
			{
				if (!unk_0xB519E5386FBF69E5(Local_149.f_14, 8))
				{
					if (!func_405(Local_149.f_4))
					{
						if (unk_0x915685CA559C211B(unk_0x9F2866A966FBAE78(Local_149.f_4), uVar1, 1))
						{
							unk_0x9956FB0E4B50ECB8(&(Local_149.f_14), 8);
						}
					}
				}
				if (!unk_0xB519E5386FBF69E5(Local_149.f_14, 9))
				{
					if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_2, 3))
					{
						unk_0x9956FB0E4B50ECB8(&(Local_149.f_14), 9);
					}
				}
			}
			if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 6))
			{
				if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 1))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 6);
				}
			}
			if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 16))
			{
				if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 8))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 16);
				}
			}
			if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 1))
			{
				if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 27))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 1);
				}
			}
			if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 7))
			{
				if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 0))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 7);
				}
			}
			if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 10))
			{
				if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 4))
				{
					if (Local_149.f_36 != 5 && Local_149.f_36 != 6)
					{
						Local_149.f_36 = 5;
					}
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 10);
				}
			}
			if (!unk_0xB519E5386FBF69E5(Local_149.f_15, 2))
			{
				if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_3, 2))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_15), 2);
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_15), 4);
					iLocal_571 = iLocal_569;
				}
			}
			else if (!unk_0xB519E5386FBF69E5(Local_222[iLocal_571 /*10*/].f_3, 2))
			{
				unk_0x73817D396768E4C6(&(Local_149.f_15), 2);
				if (unk_0xB519E5386FBF69E5(Local_149.f_15, 3))
				{
					unk_0x73817D396768E4C6(&(Local_149.f_15), 3);
				}
			}
			if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 8))
			{
				if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 30))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 8);
				}
			}
			if (!unk_0xB519E5386FBF69E5(Local_149.f_15, 0))
			{
				if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_3, 0))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_15), 0);
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_15), 1);
					Local_149.f_16 = Local_222[iLocal_569 /*10*/].f_4;
					iLocal_570 = iLocal_569;
				}
			}
			else if (!unk_0xB519E5386FBF69E5(Local_222[iLocal_570 /*10*/].f_3, 0))
			{
				unk_0x73817D396768E4C6(&(Local_149.f_15), 0);
			}
			if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 13))
			{
				if (unk_0xB519E5386FBF69E5(Local_222[iLocal_569 /*10*/].f_1, 21))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 13);
				}
			}
		}
	}
	iLocal_569++;
	if (iLocal_569 == unk_0x2249EB1A59F7C407())
	{
		iLocal_569 = 0;
	}
}

int func_44(int iParam0, bool bParam1, bool bParam2)
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

void func_45(var uParam0)
{
	var uVar0;
	
	if (unk_0xDC1FDD911B88C6F2(*uParam0))
	{
		if (!unk_0x379306CBB68B0FFA(*uParam0))
		{
		}
	}
	if (unk_0x51362735C7CDD08E(*uParam0))
	{
		uVar0 = unk_0xD0D00ABC0BE9C25C(*uParam0);
		unk_0xC1706D467A0DDDE1(&uVar0);
	}
}

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 2);
	unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 3);
	unk_0x73817D396768E4C6(&(Local_149.f_12), 13);
	unk_0x73817D396768E4C6(&(Local_149.f_12), 27);
	unk_0x73817D396768E4C6(&(Local_149.f_12), 28);
	unk_0x73817D396768E4C6(&(Local_149.f_13), 4);
	if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 18))
	{
		if (func_405(Local_149.f_1))
		{
			if (Local_149.f_28 <= 0f)
			{
				unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 18);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < unk_0x2249EB1A59F7C407())
	{
		if (unk_0x7144266D2DB1A46F(unk_0x2A0D2AD241778491(iVar0)))
		{
			iVar5 = unk_0x39078CE05613D134(unk_0x2A0D2AD241778491(iVar0));
			iVar6 = unk_0x91B73D905EA38F6B(iVar5);
			if (Local_222[iVar0 /*10*/].f_5 > 0)
			{
				Local_149.f_63 = (Local_149.f_63 + Local_222[iVar0 /*10*/].f_5);
				Local_222[iVar0 /*10*/].f_5 = 0;
			}
			if (unk_0xB519E5386FBF69E5(Local_149.f_12, 3))
			{
				if (unk_0x3761EA7F8628B81A(iVar6, Local_595, 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x73817D396768E4C6(&(Local_149.f_12), 3);
				}
			}
			if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 16))
			{
				if (unk_0xB519E5386FBF69E5(Local_222[iVar0 /*10*/].f_1, 12))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 16);
				}
			}
			if (func_44(iVar5, 1, 1))
			{
				if (unk_0xB519E5386FBF69E5(Local_149.f_12, 2))
				{
					unk_0x73817D396768E4C6(&(Local_149.f_12), 2);
				}
				if (unk_0xB034B5B185BD9C69(iVar6) == iLocal_588)
				{
					if (unk_0x7EDEDFB3CB1ACEA0(iVar6) == iLocal_589 || unk_0x7EDEDFB3CB1ACEA0(iVar6) == iLocal_590)
					{
						iVar2 = 1;
					}
					else if (unk_0x7EDEDFB3CB1ACEA0(iVar6) == iLocal_591)
					{
						unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 13);
					iVar4++;
					if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 9) && !unk_0xB519E5386FBF69E5(Local_149.f_12, 21))
					{
						if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 4))
						{
							if (unk_0x5E99B63A819500A5(iVar6, &iVar1, 1))
							{
								if ((((iVar1 != joaat("weapon_unarmed") && iVar1 != 0) && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare")) && iVar1 != joaat("weapon_snowball"))
								{
									if (Local_149.f_23 == -1)
									{
										Local_149.f_23 = iVar0;
									}
									else if (!unk_0x7144266D2DB1A46F(unk_0x2A0D2AD241778491(Local_149.f_23)))
									{
										Local_149.f_23 = -1;
									}
									unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 4);
									if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 12))
									{
										if (unk_0x3761EA7F8628B81A(iVar6, Local_548, 2.5f, 2.5f, 3f, 0, 1, 0))
										{
											unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 12);
										}
									}
								}
							}
						}
						if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 0))
						{
							if (unk_0x44B59DB1458EE8E0(iVar5) > 0)
							{
								unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 0);
							}
						}
					}
				}
				else if (unk_0x3761EA7F8628B81A(iVar6, Local_595, 5f, 5f, 2.5f, 0, 1, 0))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 28);
					iVar4++;
				}
				if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 4))
				{
					if (unk_0xB519E5386FBF69E5(Local_222[iVar0 /*10*/].f_1, 28))
					{
						unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 4);
					}
				}
				if ((unk_0xB519E5386FBF69E5(Local_149.f_12, 9) && !unk_0xB519E5386FBF69E5(Local_149.f_12, 20)) && !unk_0xB519E5386FBF69E5(Local_149.f_12, 19))
				{
					if (Local_222[iLocal_569 /*10*/].f_6 > Local_149.f_24)
					{
						Local_149.f_24 = Local_222[iVar0 /*10*/].f_6;
						func_13(&(Local_149.f_25));
						if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 24))
						{
							if (Local_149.f_24 > (0.55f + 0.2f))
							{
								unk_0x9956FB0E4B50ECB8(&(Local_149.f_12), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_149.f_32 != iVar4)
	{
		Local_149.f_32 = iVar4;
	}
}

int func_47()
{
	var uVar0;
	
	if ((!unk_0xDC1FDD911B88C6F2(Local_149.f_1) || !unk_0xDC1FDD911B88C6F2(Local_149.f_2)) || !unk_0xDC1FDD911B88C6F2(Local_149.f_3))
	{
		if ((func_49(iLocal_547) && func_49(func_50(1))) && func_49(func_50(2)))
		{
			if (unk_0x95FD4EFBB9668DCE(1, 0, 2, 0))
			{
				if (!unk_0xDC1FDD911B88C6F2(Local_149.f_1))
				{
					if (func_48(&(Local_149.f_1), 4, iLocal_547, Local_548 - Vector(1f, 0f, 0f), Local_149.f_33, 1, 1, 1))
					{
						unk_0x497AFDFE79EEFE4F(unk_0x9F2866A966FBAE78(Local_149.f_1), 0, iLocal_778[0], iLocal_784[0], 0);
						unk_0x497AFDFE79EEFE4F(unk_0x9F2866A966FBAE78(Local_149.f_1), 2, iLocal_778[1], iLocal_784[1], 0);
						unk_0x497AFDFE79EEFE4F(unk_0x9F2866A966FBAE78(Local_149.f_1), 3, iLocal_778[2], iLocal_784[2], 0);
						unk_0x497AFDFE79EEFE4F(unk_0x9F2866A966FBAE78(Local_149.f_1), 4, iLocal_778[3], iLocal_784[3], 0);
						unk_0x497AFDFE79EEFE4F(unk_0x9F2866A966FBAE78(Local_149.f_1), 8, iLocal_778[4], iLocal_784[4], 0);
						unk_0x6818FB8C56DEFA06(unk_0x9F2866A966FBAE78(Local_149.f_1), unk_0x4D694385AA5DB67C(Local_548));
						unk_0x8D6671D78D1F569B(unk_0x9F2866A966FBAE78(Local_149.f_1), 1);
						unk_0x9BEE7E791BC4D38B(unk_0x9F2866A966FBAE78(Local_149.f_1), 1);
						unk_0x5D04A2BDCC04FCAE(unk_0x9F2866A966FBAE78(Local_149.f_1), 1, 0);
						unk_0x6D0CE8888415DDF3(unk_0x9F2866A966FBAE78(Local_149.f_1), 16);
						unk_0xE6477A3B073FCBD0(unk_0x9F2866A966FBAE78(Local_149.f_1), 0);
						unk_0x7346544C767CFCBF(unk_0x9F2866A966FBAE78(Local_149.f_1), 1024, 1);
						unk_0x6E450556B0975D28(unk_0x9F2866A966FBAE78(Local_149.f_1), 1);
						unk_0x09714949CF524B00(unk_0x9F2866A966FBAE78(Local_149.f_1), unk_0xF2DB717A73826179((200f * Global_262145.f_149)));
						if (!unk_0xB7AFC499DA70400A(unk_0x9F2866A966FBAE78(Local_149.f_1), "XP_Blocker"))
						{
							unk_0xFBDEFAD3C34AC9CF(unk_0x9F2866A966FBAE78(Local_149.f_1), "XP_Blocker", 1);
						}
						func_404(&uLocal_612, 3, unk_0x9F2866A966FBAE78(Local_149.f_1), &(Local_149.f_38), 1, 0);
					}
				}
				if (!unk_0xDC1FDD911B88C6F2(Local_149.f_2))
				{
					uVar0 = unk_0x914CCD68BC9B3DF2(joaat("pickup_portable_crate_unfixed_low_glow"), Local_572, 0, func_50(1));
					if (unk_0xD51CFE69539DB6D8(uVar0))
					{
						Local_149.f_2 = unk_0x1D6A78EAF4518040(uVar0);
						unk_0x2878EC06B3F897A0(unk_0xA5CFD5B9C8A74104(Local_149.f_2), true);
						unk_0x70EE8EFEE355AD29(unk_0xA5CFD5B9C8A74104(Local_149.f_2), false, 0);
						unk_0x151F32CB40BE730C(unk_0xA5CFD5B9C8A74104(Local_149.f_2), uLocal_575);
						unk_0x6818FB8C56DEFA06(unk_0xA5CFD5B9C8A74104(Local_149.f_2), unk_0x4D694385AA5DB67C(Local_548));
						unk_0x2EF7A8CB89D363F6(unk_0xA5CFD5B9C8A74104(Local_149.f_2), 1);
						unk_0xE9AB8A0855082C3D(unk_0xA5CFD5B9C8A74104(Local_149.f_2), -0.2f, 1);
						unk_0x2E9DAE56D293B951(unk_0xA5CFD5B9C8A74104(Local_149.f_2), 1, 0);
						unk_0x60365B5AF8BF1FFA(unk_0xA5CFD5B9C8A74104(Local_149.f_2), false, 0);
					}
				}
				if (!unk_0xDC1FDD911B88C6F2(Local_149.f_3))
				{
					if (func_25(&(Local_149.f_3), func_50(2), Local_576 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1))
					{
						unk_0x151F32CB40BE730C(unk_0xA5CFD5B9C8A74104(Local_149.f_3), uLocal_579);
						unk_0x6818FB8C56DEFA06(unk_0xA5CFD5B9C8A74104(Local_149.f_3), unk_0x4D694385AA5DB67C(Local_548));
						unk_0x2878EC06B3F897A0(unk_0xA5CFD5B9C8A74104(Local_149.f_3), true);
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

int func_48(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0xCD27031055508F43(1))
	{
		return 0;
	}
	uVar0 = unk_0xA7F4088D9A2629CC(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x329C1BF0FA8F98E5(uVar0);
	if (unk_0xDC1FDD911B88C6F2(*uParam0))
	{
		unk_0xFD092FF761E54535(uVar0, iParam9);
		if (unk_0x49D76889EB33F5C6(uVar0))
		{
			if (bParam7)
			{
				unk_0xDBE1342300E4DF89(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x801429C020C467BA(iParam0);
	return unk_0x5053BF6D5604065B(iParam0);
}

int func_50(int iParam0)
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

void func_51()
{
	if (!unk_0xB519E5386FBF69E5(iLocal_543, 20))
	{
		if (unk_0xB519E5386FBF69E5(Local_149.f_12, 11) || unk_0xB519E5386FBF69E5(Local_149.f_13, 16))
		{
			if (unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == iLocal_588 || unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_595, 5f, 5f, 2.5f, 0, 1, 0))
			{
				func_54();
				func_52();
				func_6(iLocal_777, 1, func_7());
				unk_0x9956FB0E4B50ECB8(&iLocal_543, 20);
			}
			else
			{
				if ((unk_0xB519E5386FBF69E5(iLocal_543, 31) && (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0 || unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 1))) && unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_595, 20f, 20f, 20f, 0, 1, 0))
				{
					func_54();
				}
				unk_0x9956FB0E4B50ECB8(&iLocal_543, 20);
			}
		}
	}
}

void func_52()
{
	int iVar0;
	
	iVar0 = func_53(47);
	Global_2409757[iVar0 /*83*/] = 47;
	StringCopy(&(Global_2409757[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2409757[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2409757[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_54()
{
	int iVar0;
	
	if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0 || unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 1))
	{
		iVar0 = func_123(1171, -1, 0);
		if (!unk_0xB519E5386FBF69E5(iVar0, iLocal_777))
		{
			func_122(14, 1, -1);
			unk_0x9956FB0E4B50ECB8(&iVar0, iLocal_777);
			func_121(1171, iVar0, -1, 1);
			if (func_120(14, -1) >= 20)
			{
				func_106(44, 1);
			}
			else
			{
				func_105(44, func_120(14, -1));
			}
		}
		func_104(1157, 1, -1);
		func_103(12, 1, -1, 1);
		func_93(19);
		iLocal_806 = 100;
		iLocal_806 = unk_0xF2DB717A73826179((IntToFloat(iLocal_806) * Global_262145.f_4217));
		func_58(2, "XPT_HOLDUP", -1636175450, -235721452, iLocal_806, 1, -1, 0);
		func_55(12, 0);
	}
}

void func_55(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_57(iParam0, iParam1))
	{
		iVar0 = func_56();
		Global_2440879[iVar0] = iParam0;
	}
}

int func_56()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2440879[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_57(int iParam0, var uParam1)
{
	if (Global_1315897)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315909) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_58(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_59(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_59(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_60(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_60(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_92(unk_0x3F80C6638E3A1A90()) || func_91(unk_0x3F80C6638E3A1A90()))
	{
		if (Global_262145.f_7470 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7470;
		}
	}
	else if (Global_262145.f_5005 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5005;
	}
	if (func_90(uParam2))
	{
	}
	if (func_89())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_87(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_86(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_83(0, &iVar1);
					break;
				
				case 3:
					func_83(1, &iVar1);
					break;
				
				case 1:
					func_79(&iVar1);
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
			func_104(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_71((func_78(unk_0x3F80C6638E3A1A90()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x68ECED5ED327B57B(iVar1, iParam8, iParam9);
				if (Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_39.f_2 != -1)
				{
					func_104(1155, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_65(iVar1);
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
				func_61((func_63(unk_0x3F80C6638E3A1A90()) + iVar1));
			}
			else
			{
				func_61((func_63(unk_0x3F80C6638E3A1A90()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_61(int iParam0)
{
	if (func_89())
	{
		Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_192.f_5 = iParam0;
		func_62(joaat("mpply_globalxp"), iParam0);
	}
}

void func_62(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, uParam1, 1);
	}
}

int func_63(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_44(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x3F80C6638E3A1A90())
			{
				return func_64(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1586079[iParam0 /*408*/].f_192.f_5;
			}
		}
		else
		{
			return func_64(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x56DCF5665F92F9BD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_65(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_70(unk_0x3F80C6638E3A1A90()) };
	if (unk_0xAB7778782580F313())
	{
		if (unk_0x89398BAF58AA485C(&Var0))
		{
			iVar13 = func_68(func_69(&Var0));
			if (iVar13 == 0)
			{
				func_67(&Global_1347461, iParam0);
				func_66(joaat("mpply_crew_local_xp_0"), Global_1347461);
			}
			else if (iVar13 == 1)
			{
				func_67(&Global_1347462, iParam0);
				func_66(joaat("mpply_crew_local_xp_1"), Global_1347462);
			}
			else if (iVar13 == 2)
			{
				func_67(&Global_1347463, iParam0);
				func_66(joaat("mpply_crew_local_xp_2"), Global_1347463);
			}
			else if (iVar13 == 3)
			{
				func_67(&Global_1347464, iParam0);
				func_66(joaat("mpply_crew_local_xp_3"), Global_1347464);
			}
			else if (iVar13 == 4)
			{
				func_67(&Global_1347465, iParam0);
				func_66(joaat("mpply_crew_local_xp_4"), Global_1347465);
			}
		}
	}
}

void func_66(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347456 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347458 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347458 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347459 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347460 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347461 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347462 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347463 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347464 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347465 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347466 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347467 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347468 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347469 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347470 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347471 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347472 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_67(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_68(int iParam0)
{
	if (iParam0 == Global_1347456)
	{
		return 0;
	}
	else if (iParam0 == Global_1347457)
	{
		return 1;
	}
	else if (iParam0 == Global_1347458)
	{
		return 2;
	}
	else if (iParam0 == Global_1347459)
	{
		return 3;
	}
	else if (iParam0 == Global_1347460)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_69(var uParam0)
{
	if (unk_0xAB7778782580F313())
	{
		if (unk_0x89398BAF58AA485C(uParam0))
		{
			return Global_2440902;
		}
	}
	return Global_2440902;
}

struct<13> func_70(int iParam0)
{
	struct<13> Var0;
	
	unk_0xD82458461B583D5D(iParam0, &Var0, 13);
	return Var0;
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	if (func_89())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7445 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347576[func_76(-1)])
				{
					unk_0x68ECED5ED327B57B(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347576[func_76(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7444 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x68ECED5ED327B57B(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7444 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x68ECED5ED327B57B(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_75(unk_0x3F80C6638E3A1A90()))
		{
			Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_192.f_1 = iParam0;
			Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_192.f_6 = func_73(iParam0, 1);
		}
		func_72(629, iParam0, -1, 1);
		func_121(630, func_73(iParam0, 1), -1, 1);
		Global_1347576[func_76(-1)] = iParam0;
		func_55(7, 0);
	}
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466310[iParam0 /*5*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1347522[func_76(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1347528[func_76(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1347534[func_76(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1347540[func_76(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1347498[func_76(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1347504[func_76(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1347510[func_76(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347516[func_76(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347474[func_76(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347480[func_76(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347486[func_76(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347492[func_76(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1347546[func_76(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1347552[func_76(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1347558[func_76(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347564[func_76(iParam2)] = iParam1;
			break;
		
		case 1293:
			Global_1347570[func_76(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1347576[func_76(iParam2)] = iParam1;
			break;
		
		case 1268:
			Global_1347582[func_76(iParam2)] = iParam1;
			break;
		
		case 1865:
			Global_2488585[0 /*6*/][func_76(iParam2)] = iParam1;
			break;
		
		case 2256:
			Global_2488585[1 /*6*/][func_76(iParam2)] = iParam1;
			break;
		
		case 2900:
			Global_2488585[2 /*6*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3028:
			Global_2488585[3 /*6*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_2488636[func_76(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1347588[func_76(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1347594[func_76(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1347600[func_76(iParam2)] = iParam1;
			break;
		
		case 1226:
			Global_1347606[func_76(iParam2)] = iParam1;
			break;
		
		case 3023:
			Global_2488610[0 /*5*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3024:
			Global_2488610[1 /*5*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3025:
			Global_2488610[2 /*5*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3026:
			Global_2488610[3 /*5*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3027:
			Global_2488610[4 /*5*/][func_76(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_73(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_74(iParam0, 0);
}

int func_74(int iParam0, int iParam1)
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
		if (Global_272903[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_272903[iVar3] < iParam0)
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

int func_75(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xB519E5386FBF69E5(Global_2426494.f_1, iParam0);
	}
	return 1;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_77();
		if (iVar1 > -1)
		{
			Global_2466023 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466023 = 1;
		}
	}
	return iVar0;
}

int func_77()
{
	return Global_1312746;
}

int func_78(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x3F80C6638E3A1A90())
			{
				return Global_1347576[func_76(-1)];
			}
			else if (func_75(iParam0))
			{
				return Global_1586079[iParam0 /*408*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1347576[func_76(-1)];
	}
	return 0;
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90());
	iVar0 = 0;
	while (iVar0 < unk_0x2249EB1A59F7C407())
	{
		iVar4 = unk_0x2A0D2AD241778491(iVar0);
		if (unk_0x7144266D2DB1A46F(iVar4))
		{
			iVar5 = unk_0x39078CE05613D134(iVar4);
			if (unk_0x2CC717AC6CF51F8F(iVar5) != -1)
			{
				if (unk_0x2CC717AC6CF51F8F(iVar5) == iVar1 || func_82(unk_0x2CC717AC6CF51F8F(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x3F80C6638E3A1A90())
					{
						if (func_81(unk_0x3F80C6638E3A1A90(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_80(*iParam0, 100) * (10f * Global_262145.f_4209)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_80(*iParam0, 100) * (20f * Global_262145.f_4202)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_80(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_81(int iParam0, int iParam1)
{
	if (unk_0xAB7778782580F313())
	{
		Global_2456685 = { func_70(iParam0) };
		Global_2456698 = { func_70(iParam1) };
		if (unk_0x89398BAF58AA485C(&Global_2456685))
		{
			if (unk_0x89398BAF58AA485C(&Global_2456698))
			{
				unk_0xB486161F8A7A8AFB(&Global_2456615, 35, &Global_2456685);
				unk_0xB486161F8A7A8AFB(&Global_2456650, 35, &Global_2456698);
				if (Global_2456615 == Global_2456650)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_82(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
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
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 0);
				
				case 1:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 1);
				
				case 2:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 2);
				
				case 3:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 4);
				
				case 1:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 5);
				
				case 2:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 6);
				
				case 3:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 8);
				
				case 1:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 9);
				
				case 2:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 10);
				
				case 3:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 12);
				
				case 1:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 13);
				
				case 2:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 14);
				
				case 3:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_83(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x2249EB1A59F7C407())
		{
			iVar3 = iVar0;
			if (unk_0x7144266D2DB1A46F(iVar3))
			{
				iVar4 = unk_0x39078CE05613D134(iVar3);
				if (func_44(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x3F80C6638E3A1A90())
					{
						iVar1++;
						if (func_81(unk_0x3F80C6638E3A1A90(), iVar4))
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
			if (func_44(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x3F80C6638E3A1A90())
				{
					if (func_84(unk_0x3F80C6638E3A1A90(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_81(unk_0x3F80C6638E3A1A90(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_80(*iParam1, 100) * (10f * Global_262145.f_4209)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_80(*iParam1, 100) * (20f * Global_262145.f_4202)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_84(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_85(iParam0), func_85(iParam1));
	return 0f;
}

Vector3 func_85(int iParam0)
{
	return unk_0x1141852D07400777(unk_0x91B73D905EA38F6B(iParam0), 0);
}

int func_86(int iParam0)
{
	int iVar0;
	
	if (unk_0x12758BAD54D39F9C() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_80(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_87(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xF073E12B43682F7D(iParam0) > func_78(unk_0x3F80C6638E3A1A90()))
		{
			iParam0 = -func_78(unk_0x3F80C6638E3A1A90());
		}
	}
	if (func_88(8000, 0, 0) > 0)
	{
		if (func_88(8000, 0, 0) < (iParam0 + func_78(unk_0x3F80C6638E3A1A90())))
		{
			iParam0 = (func_88(8000, 0, 0) - func_78(unk_0x3F80C6638E3A1A90()));
		}
	}
	return iParam0;
}

int func_88(int iParam0, bool bParam1, int iParam2)
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
	return Global_272903[iParam0];
}

int func_89()
{
	return 1;
}

int func_90(var uParam0)
{
	if (unk_0x356491C12DAD1A37(uParam0))
	{
		return 1;
	}
	else if (unk_0x04E7E853E31F41A3(uParam0, "") || unk_0x04E7E853E31F41A3(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_91(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 2;
}

bool func_92(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 7;
}

void func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_6868)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_102() /*10169*/].f_7698.f_1958[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_102() /*10169*/].f_7698.f_1958[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_102() /*10169*/].f_7698.f_1958[iVar2 /*3*/].f_1)
			{
				func_98(iVar2, 1);
				unk_0x9956FB0E4B50ECB8(&Global_2456765, (8 + iVar2));
				func_96(2099, -1);
				func_94(67, -1);
				func_96(2554, -1);
				func_94(69, -1);
				unk_0x6344E06FEF08D097(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0xB519E5386FBF69E5(Global_2456765, 12))
					{
						func_55(7, 0);
					}
					else
					{
						func_55(15, 0);
					}
				}
			}
		}
	}
}

void func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_120(iParam0, func_76(iParam1));
	iVar0++;
	func_95(iParam0, iVar0, iParam1);
}

void func_95(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2487921[iParam0 /*5*/][func_76(uParam2)];
	unk_0x39DEDCCD70293F58(iVar0, iParam1, 1);
}

void func_96(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_123(iParam0, func_76(iParam1), 0);
	iVar0++;
	if (!func_97(iParam0))
	{
		func_121(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_72(iParam0, iVar0, iParam1, 1);
	}
}

int func_97(int iParam0)
{
	if (Global_1347455)
	{
		switch (iParam0)
		{
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 747:
			case 748:
			case 749:
			case 750:
			case 1293:
			case 629:
			case 1268:
			case 754:
			case 755:
			case 756:
			case 1226:
			case 1865:
			case 2256:
			case 2900:
			case 3028:
			case 3659:
			case 3023:
			case 3024:
			case 3025:
			case 3026:
			case 3027:
				return 1;
				break;
			}
	}
	return 0;
}

void func_98(int iParam0, int iParam1)
{
	if (Global_2097152[func_102() /*10169*/].f_7698.f_1958[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_102() /*10169*/].f_7698.f_1958[iParam0 /*3*/].f_1 = iParam1;
		func_99(func_101(iParam0), iParam1, -1, 1);
	}
}

void func_99(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_100())
	{
		iVar0 = Global_2486042[iParam0 /*5*/][func_76(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7321AD5D4653F852(iVar0, iParam1, iParam3);
		}
	}
}

int func_100()
{
	return 1;
	return 0;
}

int func_101(int iParam0)
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

int func_102()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_103(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = func_77();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x489ECBF72F3DA469((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xA689D636E73D305A((iParam0 - 0)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x489ECBF72F3DA469((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xA689D636E73D305A((iParam0 - 192)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x489ECBF72F3DA469((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xA689D636E73D305A((iParam0 - 513)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x489ECBF72F3DA469((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xA689D636E73D305A((iParam0 - 705)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xB4BF922F35D7655F((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xA689D636E73D305A((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xB4BF922F35D7655F((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xA689D636E73D305A((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x2655E62E609CEE1A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xA689D636E73D305A((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x2655E62E609CEE1A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xA689D636E73D305A((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x2655E62E609CEE1A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xA689D636E73D305A((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_104(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_123(iParam0, func_76(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_97(iParam0))
	{
		func_121(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_72(iParam0, iVar0, iParam2, 1);
	}
}

int func_105(int iParam0, int iParam1)
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
	iVar0 = unk_0x674FE6A5C8163DA5(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x613BED2AD524D24F(iParam0, iParam1);
	}
	return 0;
}

int func_106(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_107(iParam0, iParam1);
}

int func_107(int iParam0, int iParam1)
{
	if (func_119(14) && !func_118(iParam0))
	{
		return 0;
	}
	if (unk_0x1F0D90C2E3B3876D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25280 != 0 && !Global_69236)
	{
		return 0;
	}
	if (func_117(&Global_2558814))
	{
		if (func_115(&Global_2558814, iParam0))
		{
			return 0;
		}
		if (func_108(&Global_2558814, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x870B558D3473ADCD(iParam0))
		{
			return 0;
		}
		if (unk_0x1F0D90C2E3B3876D(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_108(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x1F0D90C2E3B3876D(iParam1))
	{
		return 0;
	}
	if (func_119(14) && !func_118(iParam1))
	{
		return 0;
	}
	if (func_115(uParam0, iParam1))
	{
		return 0;
	}
	if (func_114(uParam0) < 0f)
	{
		func_113(uParam0, 0);
	}
	func_111(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_109(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_109(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x1F0D90C2E3B3876D(iParam1))
	{
		return 0;
	}
	if (func_119(14) && !func_118(iParam1))
	{
		return 0;
	}
	if (func_115(uParam0, iParam1))
	{
		return 0;
	}
	if (func_114(uParam0) < 0f)
	{
		func_113(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_110(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_110(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_111(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_112(uParam0, iVar0);
		iVar0++;
	}
	func_113(uParam0, (Global_2558813 - 0.5f));
}

void func_112(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_113(var uParam0, float fParam1)
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

float func_114(var uParam0)
{
	return uParam0->f_72;
}

bool func_115(var uParam0, int iParam1)
{
	return func_116(uParam0, iParam1) != -1;
}

int func_116(var uParam0, int iParam1)
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

bool func_117(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_118(int iParam0)
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

bool func_119(int iParam0)
{
	return Global_35619 == iParam0;
}

int func_120(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2487921[iParam0 /*5*/][func_76(iParam1)];
	if (unk_0x56DCF5665F92F9BD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466310[iParam0 /*5*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, iParam1, iParam3);
	}
}

void func_122(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_120(iParam0, func_76(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_95(iParam0, iVar0, iParam2);
}

int func_123(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466310[iParam0 /*5*/][func_76(iParam1)];
	if (unk_0x56DCF5665F92F9BD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_124(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_125(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xFA4B36553B2A7802())
		{
			func_18(uParam0, 0, 0);
		}
	}
}

void func_126()
{
	bool bVar0;
	int iVar1;
	
	func_270();
	func_244();
	func_169();
	func_51();
	func_167();
	func_166();
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == iLocal_588)
		{
			if (Global_2457699.f_4780.f_1 == 0)
			{
				Global_2457699.f_4780.f_1 = 1;
			}
			if (unk_0x7EDEDFB3CB1ACEA0(unk_0xE7869D5D7816A9B6()) == iLocal_589 || unk_0x7EDEDFB3CB1ACEA0(unk_0xE7869D5D7816A9B6()) == iLocal_590)
			{
				bVar0 = true;
			}
			else if (unk_0x7EDEDFB3CB1ACEA0(unk_0xE7869D5D7816A9B6()) == iLocal_591)
			{
				iVar1 = 1;
			}
		}
		else if (Global_2457699.f_4780.f_1 == 1)
		{
			Global_2457699.f_4780.f_1 = 0;
		}
	}
	if (!unk_0xB519E5386FBF69E5(iLocal_543, 31))
	{
		if (func_164(unk_0x3F80C6638E3A1A90()) != 154)
		{
			if ((bVar0 || iVar1) || unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_595, (5f / 2f), (5f / 2f), (5f / 2f), 0, 1, 0))
			{
				unk_0x36EE5CBF45EC4826(unk_0xE7869D5D7816A9B6(), joaat("weapon_unarmed"), 1);
				unk_0x9956FB0E4B50ECB8(&iLocal_543, 31);
			}
		}
	}
	if (!unk_0xB519E5386FBF69E5(iLocal_543, 26) && bVar0)
	{
		if (func_162("SNK_MNU", Local_98.f_0))
		{
			unk_0x9956FB0E4B50ECB8(&iLocal_543, 26);
		}
	}
	if (!bVar0 && unk_0xB519E5386FBF69E5(iLocal_543, 26))
	{
		if (!unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()) || (unk_0xCF686B56FD5328B5(Local_98.f_1) && unk_0x64DEF1DE79E83BEB(Local_98.f_1)))
		{
			unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
			unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), true, 0);
			unk_0x7FB81B1DD14A3BE4(0);
			unk_0x6EF372C057320AD4(0, 1065353216);
			if (iLocal_808 > 0)
			{
				Local_222[unk_0xA1238458CB587858() /*10*/].f_5 = iLocal_808;
				iLocal_808 = 0;
			}
			func_420();
			unk_0x73817D396768E4C6(&iLocal_544, 7);
			if (unk_0xCF686B56FD5328B5(Local_98.f_1))
			{
				unk_0x74FF6D08DE291367(Local_98.f_1, 0);
			}
			unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
		}
		func_159(1, Local_98.f_0);
		unk_0x73817D396768E4C6(&iLocal_543, 26);
	}
	if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 21))
	{
		if (iVar1 || func_157(unk_0xE7869D5D7816A9B6(), iLocal_777))
		{
			unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_154();
		func_148();
		func_143();
		func_139(1);
		func_131();
		unk_0x92DFD59D631E4C0B(unk_0x3F80C6638E3A1A90());
		unk_0x6028EA1BF6115AEE(unk_0x3F80C6638E3A1A90());
		if (unk_0xB519E5386FBF69E5(Global_2457699.f_7, 0))
		{
			unk_0xBD28DCA910A4C323(Local_149.f_71);
			func_129(Local_595, func_130(30), 0);
			unk_0x73817D396768E4C6(&(Global_2457699.f_7), 0);
		}
	}
	else
	{
		if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_595, 5f, 5f, 2.5f, 0, 1, 0))
		{
			func_139(0);
		}
		if (!unk_0xB519E5386FBF69E5(Global_2457699.f_7, 0))
		{
			unk_0xE59F0F1A9C731E24();
			func_127(Local_595, func_130(30), "");
			unk_0x9956FB0E4B50ECB8(&(Global_2457699.f_7), 0);
		}
	}
	if ((unk_0xB519E5386FBF69E5(Local_149.f_12, 22) || unk_0xB519E5386FBF69E5(Local_149.f_12, 23)) || unk_0xB519E5386FBF69E5(Local_149.f_12, 7))
	{
		unk_0x175B431FD44549F5(unk_0x3F80C6638E3A1A90());
	}
}

int func_127(struct<3> Param0, char* sParam3, char* sParam4)
{
	int iVar0;
	
	if (!unk_0xF6917DE0E003509D(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0x04E7E853E31F41A3(&(Global_2457699.f_3819[iVar0 /*26*/].f_4), sParam3))
			{
				if (unk_0xF6917DE0E003509D(&(Global_2457699.f_3819[iVar0 /*26*/].f_4)))
				{
					Global_2457699.f_3819[iVar0 /*26*/] = 1;
					Global_2457699.f_3819[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2457699.f_3819[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2457699.f_3819[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_128(Global_2457699.f_3819[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2457699.f_3819[iVar0 /*26*/] = 1;
				Global_2457699.f_3819[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2457699.f_3819[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2457699.f_3819[iVar0 /*26*/].f_10), sParam4, 64);
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

bool func_128(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_129(struct<3> Param0, char* sParam3, int iParam4)
{
	int iVar0;
	
	if (!unk_0xF6917DE0E003509D(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0x04E7E853E31F41A3(&(Global_2457699.f_3819[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_128(Global_2457699.f_3819[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2457699.f_3819[iVar0 /*26*/] = 0;
					Global_2457699.f_3819[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2457699.f_3819[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2457699.f_3819[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_130(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_131()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x73817D396768E4C6(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 28);
	if (!func_405(Local_149.f_1) && func_44(unk_0x3F80C6638E3A1A90(), 1, 1))
	{
		if (unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar0, 1))
		{
			if ((((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_flare")) && iVar0 != joaat("weapon_snowball")) && iVar0 != joaat("weapon_flashlight"))
			{
				if ((((unk_0x3EB3CC572EB40155(unk_0x3F80C6638E3A1A90()) && unk_0xFA68268DB708808B(unk_0xE7869D5D7816A9B6(), unk_0x9F2866A966FBAE78(Local_149.f_1), 45f)) && unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), unk_0x9F2866A966FBAE78(Local_149.f_1), 5f, 5f, 2f, 0, 1, 0)) || unk_0xBC273BCD46110BE6(unk_0x3F80C6638E3A1A90(), unk_0x9F2866A966FBAE78(Local_149.f_1))) || unk_0x386C3192F791D414(unk_0x3F80C6638E3A1A90(), unk_0x9F2866A966FBAE78(Local_149.f_1)))
				{
					if (!func_138() && (!func_135(unk_0x3F80C6638E3A1A90()) || func_164(unk_0x3F80C6638E3A1A90()) == 154))
					{
						if (func_133(unk_0x3F80C6638E3A1A90(), unk_0x9F2866A966FBAE78(Local_149.f_1)) || unk_0x781CAE3787C6EFB6(unk_0x3F80C6638E3A1A90()))
						{
							if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 1))
							{
								func_132(func_8(unk_0x39078CE05613D134(unk_0x07A10D5FAD04B707())));
								unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 1);
							}
							if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 8))
							{
								unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 8);
							}
						}
						unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 28);
					}
				}
			}
		}
	}
	if (!unk_0xB519E5386FBF69E5(iLocal_543, 28))
	{
		if (unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 28))
		{
			if (unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar1, 1))
			{
				if (iVar1 != 0 && iVar1 != joaat("weapon_snowball"))
				{
					iVar2 = unk_0xE98DA6AE7735AF9D(iVar1);
					if (iVar2 == joaat("GROUP_PISTOL"))
					{
						sLocal_546 = "hold_up_head_additive_pistol";
						unk_0xDCF460AE46C9489C(unk_0xE7869D5D7816A9B6(), "mp_am_hold_up", sLocal_546, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else if ((((iVar2 == joaat("GROUP_MG") || iVar2 == joaat("GROUP_RIFLE")) || iVar2 == joaat("GROUP_SHOTGUN")) || iVar2 == joaat("GROUP_SNIPER")) || iVar2 == joaat("GROUP_SMG"))
					{
						sLocal_546 = "hold_up_head_additive_rifle";
						unk_0xDCF460AE46C9489C(unk_0xE7869D5D7816A9B6(), "mp_am_hold_up", sLocal_546, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else
					{
						sLocal_546 = "";
					}
					unk_0x9956FB0E4B50ECB8(&iLocal_543, 28);
				}
			}
		}
	}
	else if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 28) || unk_0xD0C9DCB982CB2D78(unk_0xE7869D5D7816A9B6()))
	{
		if (!unk_0xF6917DE0E003509D(sLocal_546))
		{
			if (unk_0x23417CDB252083F9(unk_0xE7869D5D7816A9B6(), "mp_am_hold_up", sLocal_546, 3))
			{
				unk_0x91BC1C1D86377CB9(unk_0xE7869D5D7816A9B6(), "mp_am_hold_up", sLocal_546, -1056964608);
			}
		}
		unk_0x73817D396768E4C6(&iLocal_543, 28);
	}
	if (unk_0xB519E5386FBF69E5(Local_149.f_14, 1))
	{
		if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_2, 3))
		{
			if (!func_405(Local_149.f_4) && func_44(unk_0x3F80C6638E3A1A90(), 1, 1))
			{
				if (unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar3, 1))
				{
					if ((((iVar3 != joaat("weapon_unarmed") && iVar3 != joaat("object")) && iVar3 != joaat("weapon_flare")) && iVar3 != joaat("weapon_snowball")) && !func_138())
					{
						if (unk_0xBC273BCD46110BE6(unk_0x3F80C6638E3A1A90(), unk_0x9F2866A966FBAE78(Local_149.f_4)) || unk_0x386C3192F791D414(unk_0x3F80C6638E3A1A90(), unk_0x9F2866A966FBAE78(Local_149.f_4)))
						{
							if (func_133(unk_0x3F80C6638E3A1A90(), unk_0x9F2866A966FBAE78(Local_149.f_4)) || unk_0x781CAE3787C6EFB6(unk_0x3F80C6638E3A1A90()))
							{
								unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_2), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_132(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = 26;
	Var0.f_1 = unk_0x3F80C6638E3A1A90();
	if (!iParam0 == 0)
	{
		unk_0xBBEF99A5C6E20CCC(1, &Var0, 2, iParam0);
	}
}

int func_133(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	if (func_44(iParam0, 1, 1))
	{
		Var0 = { func_85(iParam0) };
	}
	if (!unk_0xAF437D7C802AB246(iParam1))
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 1) };
	}
	Var9 = { Var3 - Var0 };
	if (!unk_0xAF437D7C802AB246(iParam1))
	{
		Var6 = { unk_0xBD306D8AFEF4E078(iParam1, 0f, 7f, 0f) };
		Var12 = { Var6 - Var3 };
	}
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	fVar15 = func_134(Var9, Var12);
	if (fVar15 < -0.1f)
	{
		return 1;
	}
	return 0;
}

float func_134(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_135(int iParam0)
{
	if (func_38(iParam0))
	{
		return 1;
	}
	if (func_136(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_137(iParam0, 9);
	}
	return 0;
}

bool func_137(int iParam0, int iParam1)
{
	return unk_0xB519E5386FBF69E5(Global_1607618[iParam0 /*106*/].f_8.f_4, iParam1);
}

int func_138()
{
	if (unk_0xFF6891E21E7FC193(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x3F80C6638E3A1A90() != Global_2457699.f_4638)
	{
		if (!unk_0xB519E5386FBF69E5(iLocal_543, 6))
		{
			if (iParam0 == 1)
			{
				if (unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar2, 1))
				{
					if ((((iVar2 != joaat("weapon_unarmed") && iVar2 != 0) && iVar2 != joaat("object")) && iVar2 != joaat("weapon_flare")) && iVar2 != joaat("weapon_snowball"))
					{
						if (!unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_548, 2.5f, 2.5f, 3f, 0, 1, 0))
						{
							iVar1 = 1;
						}
						iVar0 = 1;
					}
				}
				if ((((iVar1 == 1 || unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 5)) || (iVar0 == 1 && Local_149.f_36 >= 3)) || (iVar0 == 1 && unk_0xB519E5386FBF69E5(Local_149.f_13, 16))) || unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 12))
				{
					if (((!unk_0xB519E5386FBF69E5(Local_149.f_12, 12) || Local_149.f_36 >= 3) || unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 12)) || (iVar0 == 1 && unk_0xB519E5386FBF69E5(Local_149.f_13, 16)))
					{
						Global_2416794[unk_0x3F80C6638E3A1A90() /*303*/].f_46++;
						func_13(&(Global_2426494.f_3129));
						func_18(&(Global_2426494.f_3129), 0, 0);
						if (Global_2416794[unk_0x3F80C6638E3A1A90() /*303*/].f_46 <= 2)
						{
							if (func_142())
							{
								if (func_141() < 2)
								{
									unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 37, unk_0x04468D705BA193E3(func_141()));
								}
								else
								{
									unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 37, unk_0x04468D705BA193E3(2));
								}
							}
							else
							{
								unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 37, unk_0x04468D705BA193E3(2));
							}
						}
						else if (Global_2416794[unk_0x3F80C6638E3A1A90() /*303*/].f_46 >= 5)
						{
							if (func_142())
							{
								if (func_141() < 3)
								{
									unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 37, unk_0x04468D705BA193E3(func_141()));
								}
								else
								{
									unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 37, unk_0x04468D705BA193E3(3));
								}
							}
							else
							{
								unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 37, unk_0x04468D705BA193E3(4));
							}
						}
						else if (func_142())
						{
							if (func_141() < 3)
							{
								unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 37, unk_0x04468D705BA193E3(func_141()));
							}
							else
							{
								unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 37, unk_0x04468D705BA193E3(3));
							}
						}
						else
						{
							unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 37, unk_0x04468D705BA193E3(3));
						}
						if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 1))
						{
							unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 2);
						}
						unk_0x9956FB0E4B50ECB8(&iLocal_543, 6);
						unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 25);
					}
				}
			}
			if (!unk_0xB519E5386FBF69E5(iLocal_543, 27) && !unk_0xB519E5386FBF69E5(iLocal_543, 6))
			{
				if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
				{
					if (func_17(&uLocal_586, 2000, 0) || unk_0x4DAD36A1AB1C155F(unk_0xE7869D5D7816A9B6()))
					{
						unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 37, unk_0x04468D705BA193E3(1));
						unk_0x9956FB0E4B50ECB8(&iLocal_543, 27);
						unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 27);
						unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 25);
						if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 1))
						{
							unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 2);
						}
					}
				}
				else if (func_140(&uLocal_586))
				{
					func_13(&uLocal_586);
				}
			}
		}
		if (!unk_0xB519E5386FBF69E5(iLocal_543, 24))
		{
			if (unk_0xB519E5386FBF69E5(iLocal_543, 31))
			{
				if (func_405(Local_149.f_1))
				{
					if (func_142())
					{
						if (func_141() < 3)
						{
							unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 37, unk_0x04468D705BA193E3(func_141()));
						}
						else
						{
							unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 37, unk_0x04468D705BA193E3(3));
						}
					}
					else
					{
						unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 13, unk_0x04468D705BA193E3(3));
					}
					unk_0x9956FB0E4B50ECB8(&iLocal_543, 24);
					if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 1))
					{
						unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 2);
					}
				}
			}
		}
	}
}

bool func_140(var uParam0)
{
	return uParam0->f_1;
}

int func_141()
{
	return Global_262145.f_10404;
}

int func_142()
{
	if (func_136(unk_0x3F80C6638E3A1A90()) && func_164(unk_0x3F80C6638E3A1A90()) == 154)
	{
		return 1;
	}
	return 0;
}

void func_143()
{
	int iVar0;
	int iVar1;
	
	if (func_44(unk_0x3F80C6638E3A1A90(), 1, 1))
	{
		if (!unk_0xB519E5386FBF69E5(iLocal_543, 23) && unk_0xB519E5386FBF69E5(Local_149.f_12, 17))
		{
			if (!func_405(Local_149.f_1))
			{
				iLocal_555 = unk_0xA6C2218D69567283(Local_149.f_20);
				if (iLocal_555 >= 0)
				{
					if (unk_0x47B2F09FC779F5CD(iLocal_555))
					{
						if ((!unk_0xB519E5386FBF69E5(Global_1695884, 15) && func_147()) && func_146())
						{
							unk_0x9956FB0E4B50ECB8(&Global_1695884, 15);
						}
						if (!unk_0x23741E39BEA32E66())
						{
							iVar0 = func_123(1180, -1, 0);
							if (!unk_0xB519E5386FBF69E5(iVar0, 3))
							{
								if (unk_0x4D221DFBB84DCF0B(iLocal_555) < 0.4f && unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == iLocal_588)
								{
									func_145("FHU_HELP3", -1);
									unk_0x9956FB0E4B50ECB8(&iVar0, 3);
									func_121(1180, iVar0, -1, 1);
								}
							}
							else if (!unk_0xB519E5386FBF69E5(iVar0, 5) || !unk_0xB519E5386FBF69E5(iVar0, 6))
							{
								if (unk_0x4D221DFBB84DCF0B(iLocal_555) < 0.7f && unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == iLocal_588)
								{
									func_145("FHU_HELP4", -1);
									unk_0x9956FB0E4B50ECB8(&iVar0, 5);
									func_121(1180, iVar0, -1, 1);
									unk_0x9956FB0E4B50ECB8(&iLocal_543, 23);
								}
							}
							else
							{
								unk_0x9956FB0E4B50ECB8(&iLocal_543, 23);
							}
						}
					}
				}
			}
		}
		if (!func_37(unk_0x3F80C6638E3A1A90(), 146))
		{
			if (!unk_0xB519E5386FBF69E5(iLocal_544, 1))
			{
				if (!unk_0x23741E39BEA32E66())
				{
					if (((((func_405(Local_149.f_1) || Local_149.f_36 > 7) && !unk_0xB519E5386FBF69E5(Local_149.f_12, 20)) && !unk_0xB519E5386FBF69E5(Local_149.f_12, 11)) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 5)) && unk_0x743D96D854EFA6C5(Local_556, 1.5f) == 0)
					{
						iVar1 = func_123(1180, -1, 0);
						if (!unk_0xB519E5386FBF69E5(iVar1, 20) || !unk_0xB519E5386FBF69E5(iVar1, 21))
						{
							func_145("FHU_HELPM", -1);
							if (!unk_0xB519E5386FBF69E5(iVar1, 20))
							{
								unk_0x9956FB0E4B50ECB8(&iVar1, 20);
							}
							else
							{
								unk_0x9956FB0E4B50ECB8(&iVar1, 21);
							}
							func_121(1180, iVar1, -1, 1);
							unk_0x9956FB0E4B50ECB8(&iLocal_544, 1);
						}
						else
						{
							unk_0x9956FB0E4B50ECB8(&iLocal_544, 1);
						}
					}
				}
			}
			else if (func_144("FHU_HELPM"))
			{
				if ((unk_0xB519E5386FBF69E5(Local_149.f_12, 20) || unk_0xB519E5386FBF69E5(Local_149.f_12, 11)) || unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 5))
				{
					unk_0x1D208E4A4E1D4FFE(1);
				}
			}
		}
	}
}

bool func_144(char* sParam0)
{
	unk_0xAA8D087D7A86072A(sParam0);
	return unk_0x360D41DC76A83E6A(0);
}

void func_145(char* sParam0, int iParam1)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 0, 1, iParam1);
}

bool func_146()
{
	return unk_0xB519E5386FBF69E5(Global_2457699.f_1632, 21);
}

bool func_147()
{
	return unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_132, 3);
}

void func_148()
{
	float fVar0;
	float fVar1;
	
	if (Local_149.f_36 == 4)
	{
		if (func_44(unk_0x3F80C6638E3A1A90(), 1, 1))
		{
			if (!func_405(Local_149.f_1))
			{
				iLocal_555 = unk_0xA6C2218D69567283(Local_149.f_20);
				if (iLocal_555 >= 0)
				{
					if (unk_0x47B2F09FC779F5CD(iLocal_555))
					{
						fVar0 = unk_0x4D221DFBB84DCF0B(iLocal_555);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_149(unk_0xF2DB717A73826179(fVar0), 890, "HUP_PROG", func_153(unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90())), 0, 1, 13);
						}
						fVar1 = unk_0x7D848D4B19E08CAD(unk_0x3F80C6638E3A1A90());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_222[unk_0xA1238458CB587858() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_149(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	func_150(iParam0, iParam1, sParam2, uParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0);
}

void func_150(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_152(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339895.f_1 = 1;
		func_151(0, iVar0);
		Global_1339895.f_946[iVar0] = uParam0;
		Global_1339895.f_946.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1339895.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1339895.f_946.f_194[iVar0] = uParam3;
		Global_1339895.f_946.f_183[iVar0] = uParam4;
		Global_1339895.f_946.f_216[iVar0] = uParam5;
		Global_1339895.f_946.f_227[iVar0 /*3*/] = fParam6;
		Global_1339895.f_946.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1339895.f_946.f_258[iVar0] = iParam8;
		Global_1339895.f_946.f_269[iVar0] = uParam9;
		Global_1339895.f_946.f_312[iVar0] = iParam10;
		Global_1339895.f_946.f_323[iVar0] = iParam11;
		Global_1339895.f_946.f_334[iVar0] = iParam12;
		Global_1339895.f_946.f_345[iVar0] = iParam13;
		Global_1339895.f_941 = 1;
		Global_1339895.f_946.f_356[iVar0] = iParam14;
		Global_1339895.f_946.f_367[iVar0] = iParam15;
		Global_1339895.f_946.f_378[iVar0] = iParam16;
	}
}

void func_151(int iParam0, int iParam1)
{
	unk_0x9956FB0E4B50ECB8(&(Global_1339895.f_4594[iParam0]), iParam1);
}

bool func_152(int iParam0, int iParam1)
{
	return unk_0xB519E5386FBF69E5(Global_1339895.f_4594[iParam0], iParam1);
}

int func_153(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_154()
{
	if (!unk_0xB519E5386FBF69E5(iLocal_544, 2))
	{
		unk_0x2B0BB514F9140141("oddjobs@shop_robbery@rob_till");
		unk_0x2B0BB514F9140141(func_155());
		if (unk_0x2917D5E1CB5CE43A("oddjobs@shop_robbery@rob_till") && unk_0x2917D5E1CB5CE43A(func_155()))
		{
			unk_0x9956FB0E4B50ECB8(&iLocal_544, 2);
		}
	}
}

char* func_155()
{
	if (func_156(unk_0x3F80C6638E3A1A90()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_156(int iParam0)
{
	if (!unk_0x00AAD79B42B3E036())
	{
		return 1;
	}
	return Global_2416794[iParam0 /*303*/].f_227;
}

int func_157(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar6 = 0f;
	func_158(iParam1, &Var0, &Var3, &fVar6);
	if (unk_0x22E902D6AF27E232(iParam0, Var0, Var3, fVar6, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_158(int iParam0, var uParam1, var uParam2, float fParam3)
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

void func_159(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_161(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17257.f_7776)
	{
		unk_0x4A819C86009EE6EC(15);
		Global_17257.f_7776 = 0;
	}
	unk_0x74C2382519DF9D92(0f);
	if (Global_17257.f_5421[iVar0])
	{
		unk_0x3A2938D665EA8A9E(9, 0);
		Global_17257.f_5421[iVar0] = 0;
	}
	if (Global_17257.f_5414[iVar0])
	{
		unk_0xA857A54226CCD303("CommonMenu");
		Global_17257.f_5414[iVar0] = 0;
	}
	if (bParam0)
	{
		func_160(&(Global_17257.f_5453[iVar0 /*10*/]));
		Global_17257.f_5514[iVar0] = 0;
	}
	else
	{
		Global_17257.f_5514[iVar0] = 0;
	}
}

void func_160(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x4A4851D44CDF03C0(*uParam0))
		{
			unk_0x8A86A209B0F0AF7D(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_161(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x00AAD79B42B3E036() && unk_0x0D47370227E1A847())
		{
			iParam2 = unk_0x0F263434E43646BA();
		}
	}
	StringCopy(&cVar0, unk_0x959E7FA37C0D0892(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xC7C6DDDE84A8E734(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17257.f_5514[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17257.f_5514[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17257.f_5514[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

bool func_162(char* sParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_161(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17257.f_5428[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xF6917DE0E003509D(&(Global_17257.f_5428[iVar0 /*4*/])))
	{
		unk_0x36A3D6FBED10EF81(&(Global_17257.f_5428[iVar0 /*4*/]), 9);
		Global_17257.f_5421[iVar0] = 1;
		if (!unk_0xA73545B11DECBFE2(&(Global_17257.f_5428[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xDF7D4AE1A984CEF7("CommonMenu", 0);
	Global_17257.f_5414[iVar0] = 1;
	if (!unk_0x0B4924B3F0DADDD1("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_17257.f_5453[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_163(&(Global_17257.f_5453[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_163(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x4A4851D44CDF03C0(*uParam0))
			{
				*uParam0 = unk_0xE3C796DC28BC3254(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x4A4851D44CDF03C0(*uParam0))
					{
						uParam0->f_8 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x9D40BBF80D8F5E8A();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x4A4851D44CDF03C0(*uParam0))
			{
				uParam0->f_8 = unk_0x9D40BBF80D8F5E8A();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x4A4851D44CDF03C0(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

int func_164(int iParam0)
{
	if (func_165(iParam0, 0))
	{
		return Global_1607618[iParam0 /*106*/].f_8.f_27;
	}
	return -1;
}

int func_165(int iParam0, int iParam1)
{
	if (Global_1607618[iParam0 /*106*/].f_8.f_27 != -1 || (iParam1 && Global_1607618[iParam0 /*106*/].f_8.f_26 != -1))
	{
		return 1;
	}
	return 0;
}

void func_166()
{
	if (unk_0x3F80C6638E3A1A90() != Global_2457699.f_4638)
	{
		if (!unk_0xB519E5386FBF69E5(iLocal_543, 24))
		{
			if (Local_149.f_72 == unk_0x3F80C6638E3A1A90() || (unk_0xB519E5386FBF69E5(iLocal_543, 31) && unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_598, 20f, 20f, 20f, 0, 1, 0)))
			{
				if (func_405(Local_149.f_1))
				{
					if (func_142())
					{
						if (func_141() < 3)
						{
							unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 37, unk_0x04468D705BA193E3(func_141()));
						}
						else
						{
							unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 37, unk_0x04468D705BA193E3(3));
						}
					}
					else
					{
						unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 13, unk_0x04468D705BA193E3(3));
					}
					unk_0x9956FB0E4B50ECB8(&iLocal_543, 24);
					if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 1))
					{
						unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 2);
					}
				}
			}
		}
	}
}

int func_167()
{
	if (!unk_0xB519E5386FBF69E5(Local_149.f_14, 0))
	{
		return 0;
	}
	if (func_405(Local_149.f_4))
	{
		if (unk_0xD11595488376CB53(uLocal_805))
		{
			unk_0x5B62CAB9B0D6ABF1(&uLocal_805);
		}
		return 0;
	}
	if (Local_149.f_58 == 4)
	{
		if (!unk_0xD11595488376CB53(uLocal_805))
		{
			uLocal_805 = unk_0xF800CF9298ABC708(unk_0x9F2866A966FBAE78(Local_149.f_4));
			unk_0xA887303978A245B8(uLocal_805, 1);
			unk_0xFC630C7120A34CE4(uLocal_805, 0.7f);
		}
	}
	if (!unk_0x379306CBB68B0FFA(Local_149.f_4))
	{
		return 0;
	}
	switch (Local_149.f_58)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_4), 713668775) != 0)
			{
				if (unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_4), 713668775) != 1)
				{
					if (func_44(unk_0x3F80C6638E3A1A90(), 1, 1))
					{
						unk_0xD0153915878AE371(unk_0x9F2866A966FBAE78(Local_149.f_4), unk_0xE7869D5D7816A9B6(), -1, 4f, 2f, 1073741824, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xB519E5386FBF69E5(Local_149.f_14, 5) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_2, 0))
			{
				if (unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_4), 1227113341) != 0 && unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_4), 1227113341) != 1)
				{
					unk_0x58F62EDF6111D598(unk_0x9F2866A966FBAE78(Local_149.f_4), unk_0xE7869D5D7816A9B6(), 10000);
					unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_2), 0);
				}
			}
			if ((!unk_0xB519E5386FBF69E5(Local_149.f_14, 6) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_2, 1)) && !func_168())
			{
				func_404(&uLocal_612, 4, unk_0x9F2866A966FBAE78(Local_149.f_4), "StoreHero", 1, 0);
				unk_0x489E3B00AFB0758C(unk_0x9F2866A966FBAE78(Local_149.f_4), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_2), 1);
			}
			break;
		
		case 4:
			if ((!unk_0xB519E5386FBF69E5(Local_149.f_14, 7) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_2, 2)) && !func_168())
			{
				func_404(&uLocal_612, 4, unk_0x9F2866A966FBAE78(Local_149.f_4), "StoreHero", 1, 0);
				unk_0x489E3B00AFB0758C(unk_0x9F2866A966FBAE78(Local_149.f_4), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_2), 2);
			}
			if (unk_0xB519E5386FBF69E5(Local_149.f_14, 7) || unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_2, 2))
			{
				if (unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_4), -1442466670) != 0 && unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_4), -1442466670) != 1)
				{
					unk_0xFA2C5C2D054C888E(unk_0x9F2866A966FBAE78(Local_149.f_4));
					unk_0x690C5239500171FE(unk_0x9F2866A966FBAE78(Local_149.f_4), Global_1574228);
					unk_0xE8EC59D96A176616(unk_0x9F2866A966FBAE78(Local_149.f_4), 20f, 0);
					unk_0x8D6671D78D1F569B(unk_0x9F2866A966FBAE78(Local_149.f_4), 1);
				}
			}
			break;
		
		case 5:
			if (unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_4), 242628503) != 0 && unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_4), 242628503) != 1)
			{
				unk_0xFA2C5C2D054C888E(unk_0x9F2866A966FBAE78(Local_149.f_4));
				unk_0xC2C4A3A9FF2FBFFF(unk_0x9F2866A966FBAE78(Local_149.f_4), uLocal_564);
				unk_0x8D6671D78D1F569B(unk_0x9F2866A966FBAE78(Local_149.f_4), 1);
			}
			else if (unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_4), -875674219) != 1 && unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_4), -875674219) != 0)
			{
				if (func_17(&uLocal_584, 5000, 0))
				{
					func_13(&uLocal_584);
					unk_0x58F62EDF6111D598(unk_0x9F2866A966FBAE78(Local_149.f_4), unk_0xE7869D5D7816A9B6(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_168()
{
	if (Global_15712 != 0 || unk_0xF0A330A29F97AA7E())
	{
		return 1;
	}
	return 0;
}

void func_169()
{
	if (Local_149.f_36 == 4)
	{
		if ((!unk_0xB519E5386FBF69E5(Local_149.f_12, 10) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 4)) && unk_0xB519E5386FBF69E5(Local_149.f_12, 17))
		{
			if (unk_0xDC1FDD911B88C6F2(Local_149.f_2))
			{
				if (unk_0x379306CBB68B0FFA(Local_149.f_2) || (!unk_0xB5A45FB150DB6127(Local_149.f_2) && unk_0xFA4B36553B2A7802()))
				{
					if (!func_405(Local_149.f_1))
					{
						if (unk_0x8E2CF6ACCED3BD0F(unk_0x9F2866A966FBAE78(Local_149.f_1)))
						{
							unk_0x70EE8EFEE355AD29(unk_0xA5CFD5B9C8A74104(Local_149.f_2), true, 0);
							unk_0x504BE965986F581A(unk_0xA5CFD5B9C8A74104(Local_149.f_2), 1);
							unk_0x1E3A6C6A0B169167(unk_0xA5CFD5B9C8A74104(Local_149.f_2), 0f, 0f, -1f);
							unk_0x6D0CE8888415DDF3(unk_0x9F2866A966FBAE78(Local_149.f_1), 16);
							unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 4);
						}
					}
					else
					{
						unk_0x70EE8EFEE355AD29(unk_0xA5CFD5B9C8A74104(Local_149.f_2), true, 0);
						unk_0x504BE965986F581A(unk_0xA5CFD5B9C8A74104(Local_149.f_2), 1);
						unk_0x1E3A6C6A0B169167(unk_0xA5CFD5B9C8A74104(Local_149.f_2), 0f, 0f, -1f);
						unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 4);
					}
				}
			}
		}
	}
	func_170();
}

void func_170()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xDC1FDD911B88C6F2(Local_149.f_2))
	{
		if (!unk_0x76B2D234F1895632(unk_0xA5CFD5B9C8A74104(Local_149.f_2)))
		{
			if ((!unk_0xB519E5386FBF69E5(Local_149.f_12, 11) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 5)) && Local_149.f_28 > 0f)
			{
				if (((func_243() || func_242(0.87f)) || Local_149.f_36 >= 5) || unk_0xB519E5386FBF69E5(Local_149.f_12, 10))
				{
					if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 11))
					{
						if (unk_0x379306CBB68B0FFA(Local_149.f_2))
						{
							unk_0x2E9DAE56D293B951(unk_0xA5CFD5B9C8A74104(Local_149.f_2), 0, 0);
							unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 13);
						}
						if (func_164(unk_0x3F80C6638E3A1A90()) != 155)
						{
							unk_0x3C4B79CAC07FF64D(func_50(1), 1);
						}
						unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 11);
					}
					if (unk_0x6CE07ABFB69A4990(unk_0xA5CFD5B9C8A74104(Local_149.f_2), unk_0xE7869D5D7816A9B6()))
					{
						Local_222[unk_0xA1238458CB587858() /*10*/].f_7 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
						unk_0xC4A43A7E257E1FD9(Local_222[unk_0xA1238458CB587858() /*10*/].f_7, &(Local_222[unk_0xA1238458CB587858() /*10*/].f_7.f_2), 0);
						if (unk_0x379306CBB68B0FFA(Local_149.f_2))
						{
							unk_0x27B54A887EC71B05(unk_0xA5CFD5B9C8A74104(Local_149.f_2), 1, 1);
							func_45(&(Local_149.f_2));
						}
						iVar0 = unk_0x0ADD324BC46177EF(iLocal_581, iLocal_582);
						if (unk_0xB519E5386FBF69E5(Local_149.f_12, 10))
						{
							iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Local_149.f_28));
						}
						if (Local_149.f_63 > 1000)
						{
							Local_149.f_63 = 1000;
						}
						iVar0 = (iVar0 + Local_149.f_63);
						iVar0 = func_241(iVar0, 1);
						if (iVar0 > Global_262145.f_161)
						{
							iVar0 = Global_262145.f_161;
						}
						if (func_240(unk_0x3F80C6638E3A1A90()) && func_238(func_239(unk_0x3F80C6638E3A1A90())) < 1f)
						{
							if (Global_262145.f_4218 > 1f)
							{
								Global_262145.f_4218 = 1f;
							}
							iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4218));
						}
						if (!func_136(unk_0x3F80C6638E3A1A90()) && func_164(unk_0x3F80C6638E3A1A90()) != 154)
						{
							func_197(&iVar0, 1);
						}
						if (iVar0 > 0)
						{
							if (func_196())
							{
								func_187(1734805203, iVar0, &uVar1, 0, 0, 0);
							}
							else
							{
								func_183(iVar0, 1, 1, 1092616192);
								unk_0xB9FE3D99EAA4E512(iVar0);
							}
						}
						Global_2457699.f_4780 = (Global_2457699.f_4780 + iVar0);
						Global_2457699.f_4780.f_2 = 1;
						Global_2457699.f_4780.f_5 = 1;
						iLocal_807 = (iLocal_807 + iVar0);
						func_182(3);
						if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 5))
						{
							func_181(Local_149.f_29, iVar0);
						}
						else
						{
							func_172(unk_0xE7869D5D7816A9B6(), iVar0);
						}
						func_171(1, iVar0);
						unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 5);
						unk_0x9956FB0E4B50ECB8(&iLocal_544, 6);
					}
				}
			}
		}
	}
}

void func_171(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2457699.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4955)
		{
			iParam1 = Global_262145.f_4955;
		}
		Global_2457699.f_270 = iParam1;
		Global_2457699.f_271 = 0;
	}
}

void func_172(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { func_179(unk_0xE7869D5D7816A9B6(), 1) };
	if (iParam0 == func_178(unk_0xE7869D5D7816A9B6()))
	{
		func_177(1);
	}
	func_173(Var0, iParam1, 7, 0);
}

void func_173(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2426494.f_741[iVar0 /*29*/].f_6 == 0 || Global_2426494.f_741[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2426494.f_741[iVar1 /*29*/] = { Param0 };
			Global_2426494.f_741[iVar1 /*29*/].f_6 = 1;
			Global_2426494.f_741[iVar1 /*29*/].f_4 = func_176(Global_2426494.f_741[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2426494.f_741[iVar1 /*29*/].f_7 = unk_0xC7F926248AF8587B();
			Global_2426494.f_741[iVar1 /*29*/].f_3 = iParam3;
			Global_2426494.f_741[iVar1 /*29*/].f_8 = iParam4;
			Global_2426494.f_741[iVar1 /*29*/].f_9 = func_175();
			Global_2426494.f_741[iVar1 /*29*/].f_10 = func_174();
			StringCopy(&(Global_2426494.f_741[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_174()
{
	if (Global_2426494.f_1322)
	{
		Global_2426494.f_1322 = 0;
		return 1;
	}
	Global_2426494.f_1322 = 0;
	return 0;
}

var func_175()
{
	var uVar0;
	
	uVar0 = Global_2426494.f_1324;
	Global_2426494.f_1324 = 1;
	return uVar0;
}

float func_176(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xF18329472591CFE6(unk_0x7D6DB785AFC32F33(), Param0, 1);
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

void func_177(int iParam0)
{
	Global_2426494.f_1322 = iParam0;
}

int func_178(int iParam0)
{
	return iParam0;
}

Vector3 func_179(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_180(unk_0xE7869D5D7816A9B6()) && unk_0x08EE17D4722097C7(unk_0x5B93518F6779B7F5()) == 4)
	{
		Var0 = { unk_0xBD306D8AFEF4E078(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		fVar3 = unk_0x2CAFFCD9F5E16D2F(iParam0);
	}
	unk_0x67060D73A7F90F25(unk_0x1B2DC87EFB36DF80(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0xF919633EBD0639D0(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_180(var uParam0)
{
	return uParam0;
}

void func_181(struct<3> Param0, int iParam3)
{
	func_173(Param0, iParam3, 6, 0);
}

void func_182(int iParam0)
{
	Global_2426494.f_1324 = iParam0;
}

void func_183(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_184(iParam0, iParam1, iParam2, fParam3);
}

void func_184(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_185(iParam0, iParam1, iParam2, fParam3);
}

void func_185(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_192.f_4 = iVar1;
	Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_192.f_3 = (Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_192.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_186(iVar1, 0);
	}
}

void func_186(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_187(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_196())
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
	else if (bParam5)
	{
		iVar0 = 8;
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
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
			if (iParam1 > 0)
			{
				func_188(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 1048226110:
		case 569170531:
		case -856006867:
			func_188(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_188(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_196())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x31F4FD5D570135A8(func_77()) || unk_0x3F07A2D94C64D156())
		{
			Global_2554188 = 1;
			return 0;
		}
		if (Global_2441706)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2554189 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2553709[iVar1 /*72*/].f_2 == 0)
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
	if (bVar0 || unk_0x89BF47768CC2BEC9(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xC5635F1C24124798(iVar3))
		{
			*uParam0 = func_195(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2553709[*uParam0 /*72*/].f_65 = 1;
				}
			}
			Global_2554185 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2554187 = 1;
			Global_2554190 = iParam4;
			Global_2554192 = iParam3;
			Global_2554193 = 1;
			Global_2554191 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2554190 = iParam4;
			Global_2554192 = iParam3;
			Global_2554193 = 1;
			Global_2554191 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_194(1, iParam4);
			Global_2554187 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_189(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_189(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x9956FB0E4B50ECB8(&(Global_2416794[unk_0x3F80C6638E3A1A90() /*303*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_190(iParam0);
	}
}

void func_190(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_196())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_193(iParam0))
		{
			if (!bVar0)
			{
				unk_0x179EDB8174D2ACF9();
			}
		}
		else if (!bVar0)
		{
			unk_0x8ECBAE515BE58A4C(Global_2553709[iParam0 /*72*/]);
		}
		func_191(&(Global_2553709[iParam0 /*72*/]));
	}
}

void func_191(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_192(&(uParam0->f_8.f_3));
	func_192(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_65 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
}

void func_192(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_193(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2553709[iParam0 /*72*/].f_5 == 1;
	}
	return 0;
}

void func_194(int iParam0, var uParam1)
{
	Global_2442973 = uParam1;
	Global_2442972 = iParam0;
}

int func_195(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2553709[iVar0 /*72*/].f_2 == 0)
		{
			if (!func_196())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2553709[iVar0 /*72*/].f_2 = 1;
			Global_2553709[iVar0 /*72*/].f_1 = iParam5;
			Global_2553709[iVar0 /*72*/].f_3 = uParam1;
			Global_2553709[iVar0 /*72*/].f_4 = iParam2;
			Global_2553709[iVar0 /*72*/].f_7 = uParam3;
			Global_2553709[iVar0 /*72*/].f_5 = 0;
			Global_2553709[iVar0 /*72*/] = iParam0;
			Global_2553709[iVar0 /*72*/].f_6 = iParam4;
			Global_2553709[iVar0 /*72*/].f_68 = uParam8;
			Global_2553709[iVar0 /*72*/].f_67 = uParam7;
			Global_2553709[iVar0 /*72*/].f_71 = 0;
			Global_2554185 = 0;
			if (bParam6)
			{
				Global_2553709[iVar0 /*72*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_196()
{
	if (unk_0xA78EA29AC2FFBADE())
	{
		return 1;
	}
	return 0;
}

void func_197(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_237())
		{
			if (func_236(0))
			{
				if (unk_0xD18C3CF631455087(func_235()))
				{
					if (func_234() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = ((*iParam0 / 100) * func_234());
						*iParam0 = (*iParam0 - iVar0);
					}
					func_232(&iVar0);
					if (iParam1 == 1)
					{
						func_200("GB_BCUT_TICK1", func_235(), iVar0, 0, 0, 1, 1);
					}
					func_199(20);
					func_198(func_235(), iVar0, 1);
				}
			}
		}
	}
}

void func_198(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_44(iParam0, 0, 1))
	{
		Var0.f_0 = 421;
		Var0.f_1 = unk_0x3F80C6638E3A1A90();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xBBEF99A5C6E20CCC(1, &Var0, 5, func_8(iParam0));
	}
}

void func_199(int iParam0)
{
	unk_0x9956FB0E4B50ECB8(&(Global_2457699.f_4647.f_7), iParam0);
}

int func_200(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x472BC6C9F4FFBA2B(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x472BC6C9F4FFBA2B(iParam1), 64);
		}
		unk_0x4A4F36C4EFDE341F(sParam0);
		unk_0xC498567F546E6683(func_209(iParam1, -2, 1, 0));
		unk_0x63E8D6007C32E426(func_207(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xC498567F546E6683(iParam3);
		}
		unk_0x8D23CF083336DA9B(iParam2);
		iVar0 = unk_0x40A23ED713DD1662(0, 1);
		func_201(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_201(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_206() || !unk_0x6B042133C9334B77()) || !func_204(unk_0x3F80C6638E3A1A90(), 0))
	{
		return;
	}
	iVar0 = func_202(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1713447.f_5[iVar0 /*53*/] = iParam0;
		Global_1713447.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1713447.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1713447.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1713447.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1713447.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1713447.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1713447 - 1))
	{
		if (iParam0 > Global_1713447.f_5[iVar0 /*53*/].f_1)
		{
			func_203(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1713447++;
	if (Global_1713447 > 5)
	{
		Global_1713447 = 5;
		return Global_1713447;
	}
	return (Global_1713447 - 1);
}

void func_203(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1713447.f_5[iVar0 /*53*/] = { Global_1713447.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_204(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		bVar0 = func_205(-1, 0) == 8;
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

int func_205(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_77();
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

bool func_206()
{
	return unk_0x3442D8DA379C5187(-1762644250);
}

var func_207(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_208(&cVar0);
}

var func_208(char[4] cParam0)
{
	return cParam0;
}

int func_209(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_230(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_230(unk_0x3F80C6638E3A1A90()) || (func_229() && func_228()))
	{
		uVar0 = func_227();
		if (unk_0xD51CFE69539DB6D8(uVar0))
		{
			if (unk_0x1415CDB1128C3FBC(uVar0))
			{
				if (unk_0xDF9F1D76EB1B8F12(uVar0) != -1)
				{
					if (func_44(unk_0xDF9F1D76EB1B8F12(uVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x6B042133C9334B77()) && iParam1 < 4)
						{
							if (Global_1612326.f_61160[iParam1] != -1)
							{
								return func_226(iParam1, iParam0, 0);
							}
							else
							{
								return func_216(iParam0, unk_0xDF9F1D76EB1B8F12(uVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_216(iParam0, unk_0xDF9F1D76EB1B8F12(uVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x6B042133C9334B77()) && iParam1 < 4)
			{
				if (Global_1612326.f_61160[iParam1] != -1)
				{
					return func_226(iParam1, iParam0, 0);
				}
				else
				{
					return func_210(0, -1, 0);
				}
			}
			else
			{
				return func_210(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x6B042133C9334B77()) && iParam1 < 4)
	{
		if (Global_1612326.f_61160[iParam1] != -1)
		{
			return func_226(iParam1, iParam0, 0);
		}
		else
		{
			return func_216(iParam0, unk_0x3F80C6638E3A1A90(), iParam1, bParam2, bParam3);
		}
	}
	return func_216(iParam0, unk_0x3F80C6638E3A1A90(), iParam1, bParam2, bParam3);
}

int func_210(bool bParam0, int iParam1, bool bParam2)
{
	return func_211(unk_0x3F80C6638E3A1A90(), bParam0, iParam1, bParam2);
}

int func_211(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x2CC717AC6CF51F8F(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_82(iVar0, iParam2, 0) && !unk_0xB519E5386FBF69E5(Global_1612326.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_215(1);
				}
				else
				{
					return func_215(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else
			{
				return func_212(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_215(1);
	}
	return func_215(0);
}

int func_212(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_214(iParam0, iParam1);
	if (func_213(Global_1612326.f_64748))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_213(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7303[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_214(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_82(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_215(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_216(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x2CC717AC6CF51F8F(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1586079[iVar2 /*408*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_225(iParam1, iParam0, iVar0, 0) && !unk_0xB519E5386FBF69E5(Global_1612326.f_15, 18)) || ((func_82(unk_0x2CC717AC6CF51F8F(iParam1), unk_0x2CC717AC6CF51F8F(iParam0), 0) && unk_0xB519E5386FBF69E5(Global_1612326.f_15, 23)) && !unk_0xB519E5386FBF69E5(Global_1612326.f_15, 18)))
			{
				return func_215(1);
			}
			else if (unk_0xB519E5386FBF69E5(Global_1612326.f_15, 26))
			{
				return func_224(1);
			}
			else
			{
				return func_211(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573829 || Global_1573820) || Global_1586079[iParam0 /*408*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573829 == 1 && Global_1573839 == 0))
			{
				return func_215(1);
			}
			else
			{
				return func_211(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573824 && Global_1573404.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_219(iParam0);
	if (!iVar3 == -1)
	{
		return func_217(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_217(int iParam0)
{
	int iVar0;
	
	iVar0 = func_218(iParam0);
	switch (iVar0)
	{
		case 0:
			return 192;
		
		case 1:
			return 193;
		
		case 2:
			return 194;
		
		case 3:
			return 195;
		
		case 4:
			return 196;
		
		case 5:
			return 197;
		
		case 6:
			return 198;
		
		case 7:
			return 199;
		
		case 8:
			return 200;
		
		case 9:
			return 201;
		
		case 10:
			return 202;
		
		case 11:
			return 203;
		
		case 12:
			return 204;
		
		case 13:
			return 205;
		
		case 14:
			return 206;
		
		default:
	}
	return 12;
}

var func_218(int iParam0)
{
	return Global_2412289.f_1874.f_44[iParam0 /*2*/].f_1;
}

int func_219(int iParam0)
{
	if (!iParam0 == func_223())
	{
		if (func_221(iParam0, 1))
		{
			return Global_2412289.f_1874.f_11[func_220(iParam0)];
		}
	}
	return -1;
}

int func_220(int iParam0)
{
	if (iParam0 != func_223())
	{
		return Global_1607618[iParam0 /*106*/].f_8;
	}
	return func_223();
}

bool func_221(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_222(iParam0))
		{
			return 0;
		}
	}
	return Global_1607618[iParam0 /*106*/].f_8 != func_223();
}

int func_222(int iParam0)
{
	if (iParam0 != func_223())
	{
		if (Global_1607618[iParam0 /*106*/].f_8 != func_223())
		{
			return Global_1607618[iParam0 /*106*/].f_8 == iParam0;
		}
	}
	return 0;
}

int func_223()
{
	return -1;
}

int func_224(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_225(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x2CC717AC6CF51F8F(iParam0) == -1 && unk_0x2CC717AC6CF51F8F(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x2CC717AC6CF51F8F(iParam0) == unk_0x2CC717AC6CF51F8F(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x2CC717AC6CF51F8F(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x2CC717AC6CF51F8F(iParam0) == iParam2;
	}
	return unk_0x2CC717AC6CF51F8F(iParam0) == iParam2;
}

int func_226(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1612326.f_61160[iParam0] != -1)
	{
		if (Global_1612326.f_61160[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1612326.f_61160[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1612326.f_61160[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1612326.f_61160[iParam0] == 4)
		{
			if (unk_0xB519E5386FBF69E5(Global_1612326.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1612326.f_61160[iParam0];
		}
	}
	else
	{
		iVar0 = func_211(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_227()
{
	return Global_2359301.f_2;
}

bool func_228()
{
	return unk_0xB519E5386FBF69E5(Global_2359301, 4);
}

bool func_229()
{
	return unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_39.f_18, 14);
}

int func_230(int iParam0)
{
	if (func_204(iParam0, 0))
	{
		return 1;
	}
	if (func_231())
	{
		if (iParam0 == unk_0x3F80C6638E3A1A90())
		{
			return 1;
		}
	}
	if (unk_0xB519E5386FBF69E5(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_231()
{
	return unk_0xB519E5386FBF69E5(Global_2359301, 3);
}

void func_232(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_233();
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

var func_233()
{
	return Global_262145.f_10197;
}

int func_234()
{
	return Global_262145.f_10196;
}

int func_235()
{
	return Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_8;
}

bool func_236(bool bParam0)
{
	return func_221(unk_0x3F80C6638E3A1A90(), bParam0);
}

bool func_237()
{
	return func_222(unk_0x3F80C6638E3A1A90());
}

float func_238(int iParam0)
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

int func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1607618[iVar0 /*106*/];
	}
	return -1;
}

int func_240(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1607618[iVar0 /*106*/] != -1;
	}
	return 0;
}

int func_241(int iParam0, int iParam1)
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

int func_242(float fParam0)
{
	iLocal_555 = unk_0xA6C2218D69567283(Local_149.f_20);
	if (iLocal_555 >= 0)
	{
		if (unk_0x47B2F09FC779F5CD(iLocal_555))
		{
			if (unk_0x4D221DFBB84DCF0B(iLocal_555) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_243()
{
	iLocal_555 = unk_0xA6C2218D69567283(Local_149.f_20);
	if (iLocal_555 >= 0)
	{
		if (unk_0x47B2F09FC779F5CD(iLocal_555))
		{
			if (unk_0x4D221DFBB84DCF0B(iLocal_555) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_244()
{
	func_245();
}

int func_245()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x379306CBB68B0FFA(Local_149.f_1))
	{
		return 0;
	}
	if (func_405(Local_149.f_1))
	{
		if (!unk_0xB519E5386FBF69E5(iLocal_544, 3))
		{
			unk_0xB0A8FA9FE09B26AE(unk_0x9F2866A966FBAE78(Local_149.f_1));
			unk_0x9956FB0E4B50ECB8(&iLocal_544, 3);
		}
		return 0;
	}
	switch (Local_149.f_36)
	{
		case 0:
			unk_0xC31A3F1982C7B12B(unk_0x9F2866A966FBAE78(Local_149.f_1), 71, 1);
			break;
		
		case 1:
			if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 4) && !unk_0xB519E5386FBF69E5(Local_149.f_12, 12))
			{
				if (unk_0xB519E5386FBF69E5(Local_149.f_12, 13))
				{
					if (!unk_0xB519E5386FBF69E5(iLocal_543, 17))
					{
						unk_0x6D0CE8888415DDF3(unk_0x9F2866A966FBAE78(Local_149.f_1), 16);
						unk_0x6A8BCE61F660B8D0(unk_0x9F2866A966FBAE78(Local_149.f_1), unk_0xE7869D5D7816A9B6(), -1, 0, 2);
						if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
						{
							func_251(10);
						}
						else if (unk_0xB519E5386FBF69E5(Local_149.f_13, 0))
						{
							if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 11))
							{
								if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 12))
								{
									func_251(13);
								}
								else
								{
									func_251(20);
								}
							}
							else
							{
								func_251(17);
							}
							unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 25);
						}
						else if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 11))
						{
							if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 12))
							{
								func_251(0);
							}
							else
							{
								func_251(18);
							}
						}
						else
						{
							func_251(15);
						}
						unk_0x9956FB0E4B50ECB8(&iLocal_543, 17);
					}
					else if (unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_1), -875674219) != 1 && unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_1), -875674219) != 0)
					{
						if (func_17(&uLocal_584, 5000, 0))
						{
							func_13(&uLocal_584);
							if (!iLocal_545)
							{
								unk_0x58F62EDF6111D598(unk_0x9F2866A966FBAE78(Local_149.f_1), unk_0xE7869D5D7816A9B6(), 10000);
							}
							unk_0x6A8BCE61F660B8D0(unk_0x9F2866A966FBAE78(Local_149.f_1), unk_0xE7869D5D7816A9B6(), -1, 0, 2);
						}
					}
				}
			}
			unk_0xC31A3F1982C7B12B(unk_0x9F2866A966FBAE78(Local_149.f_1), 71, 1);
			break;
		
		case 2:
			if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 7) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 0))
			{
				uVar1 = unk_0xE7869D5D7816A9B6();
				if (Local_149.f_23 > -1)
				{
					if (unk_0x7144266D2DB1A46F(unk_0x2A0D2AD241778491(Local_149.f_23)))
					{
						iVar0 = unk_0x39078CE05613D134(unk_0x2A0D2AD241778491(Local_149.f_23));
						uVar1 = unk_0x91B73D905EA38F6B(iVar0);
					}
				}
				if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					unk_0x6A8BCE61F660B8D0(unk_0x9F2866A966FBAE78(Local_149.f_1), uVar1, -1, 0, 2);
					unk_0x6D0CE8888415DDF3(unk_0x9F2866A966FBAE78(Local_149.f_1), 16);
					unk_0xDCF460AE46C9489C(unk_0x9F2866A966FBAE78(Local_149.f_1), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, -1, 49, 0, 0, 0, 0);
					unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 0);
				}
			}
			else if (unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_1), -875674219) != 1 && unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_1), -875674219) != 0)
			{
				if (func_17(&uLocal_584, 5000, 0))
				{
					iVar1 = unk_0xE7869D5D7816A9B6();
					if (Local_149.f_23 > -1)
					{
						if (unk_0x7144266D2DB1A46F(unk_0x2A0D2AD241778491(Local_149.f_23)))
						{
							iVar0 = unk_0x39078CE05613D134(unk_0x2A0D2AD241778491(Local_149.f_23));
							iVar1 = unk_0x91B73D905EA38F6B(iVar0);
						}
					}
					func_13(&uLocal_584);
					unk_0x58F62EDF6111D598(unk_0x9F2866A966FBAE78(Local_149.f_1), iVar1, 10000);
					unk_0x6A8BCE61F660B8D0(unk_0x9F2866A966FBAE78(Local_149.f_1), iVar1, -1, 0, 2);
				}
			}
			if (unk_0xB519E5386FBF69E5(Local_149.f_12, 16))
			{
				unk_0x6D0CE8888415DDF3(unk_0x9F2866A966FBAE78(Local_149.f_1), 16);
			}
			unk_0xC31A3F1982C7B12B(unk_0x9F2866A966FBAE78(Local_149.f_1), 71, 1);
			break;
		
		case 3:
			if (!unk_0xB519E5386FBF69E5(iLocal_543, 25))
			{
				if (unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_1), 1920390111) != 0 && unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_1), 1920390111) != 1)
				{
					unk_0x8D6671D78D1F569B(unk_0x9F2866A966FBAE78(Local_149.f_1), 1);
					unk_0x7346544C767CFCBF(unk_0x9F2866A966FBAE78(Local_149.f_1), 2, 0);
					unk_0x7346544C767CFCBF(unk_0x9F2866A966FBAE78(Local_149.f_1), 8, 1);
					unk_0x7346544C767CFCBF(unk_0x9F2866A966FBAE78(Local_149.f_1), 16, 1);
					unk_0x6D0CE8888415DDF3(unk_0x9F2866A966FBAE78(Local_149.f_1), 16);
					unk_0xF78809EA8A08F2D1(unk_0x9F2866A966FBAE78(Local_149.f_1), Local_149.f_33, -1);
					unk_0x9956FB0E4B50ECB8(&iLocal_543, 25);
				}
			}
			break;
		
		case 4:
			if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 17) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 3))
			{
				if (unk_0xFA4B36553B2A7802())
				{
					Global_2457699.f_8 = 1;
				}
				uVar2 = unk_0xE7869D5D7816A9B6();
				if (Global_2457699.f_9 != func_223())
				{
					if (func_44(Global_2457699.f_9, 1, 1))
					{
						uVar2 = unk_0x91B73D905EA38F6B(Global_2457699.f_9);
					}
				}
				unk_0x6A8BCE61F660B8D0(unk_0x9F2866A966FBAE78(Local_149.f_1), uVar2, 30000, 0, 3);
				unk_0xCE6642454B80EBC8(unk_0x9F2866A966FBAE78(Local_149.f_1), "mood_stressed_1", 0);
				unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 3);
			}
			else
			{
				iLocal_555 = unk_0xA6C2218D69567283(Local_149.f_20);
				if (iLocal_555 >= 0)
				{
					if (unk_0x47B2F09FC779F5CD(iLocal_555))
					{
						fLocal_790 = (Local_149.f_24 + 0.6f);
						if (fLocal_790 < 0.75f)
						{
							fLocal_790 = 0.75f;
						}
						if (unk_0xB519E5386FBF69E5(Local_149.f_13, 4))
						{
							fLocal_790 = (fLocal_790 + 0.25f);
						}
						if (fLocal_790 > 1.75f)
						{
							fLocal_790 = 1.75f;
						}
						unk_0xD21D1CDEFEAA7FA8(iLocal_555, fLocal_790);
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 10))
			{
				if (unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_1), 242628503) != 0 && unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_1), 242628503) != 1)
				{
					if (!unk_0x8E2CF6ACCED3BD0F(unk_0x9F2866A966FBAE78(Local_149.f_1)))
					{
						iLocal_555 = unk_0xA6C2218D69567283(Local_149.f_20);
						if ((iLocal_555 >= 0 && !unk_0x47B2F09FC779F5CD(iLocal_555)) || iLocal_555 < 0)
						{
							unk_0xC2C4A3A9FF2FBFFF(unk_0x9F2866A966FBAE78(Local_149.f_1), uLocal_564);
							unk_0x6D0CE8888415DDF3(unk_0x9F2866A966FBAE78(Local_149.f_1), 16);
							unk_0x8D6671D78D1F569B(unk_0x9F2866A966FBAE78(Local_149.f_1), 1);
							unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 10);
						}
					}
				}
			}
			else if (unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_1), -875674219) != 1 && unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_1), -875674219) != 0)
			{
				if (func_17(&uLocal_584, 5000, 0))
				{
					func_13(&uLocal_584);
					iVar1 = unk_0xE7869D5D7816A9B6();
					if (Local_149.f_23 > -1)
					{
						if (unk_0x7144266D2DB1A46F(unk_0x2A0D2AD241778491(Local_149.f_23)))
						{
							iVar0 = unk_0x39078CE05613D134(unk_0x2A0D2AD241778491(Local_149.f_23));
							iVar1 = unk_0x91B73D905EA38F6B(iVar0);
						}
					}
					unk_0x58F62EDF6111D598(unk_0x9F2866A966FBAE78(Local_149.f_1), iVar1, 10000);
					unk_0x6A8BCE61F660B8D0(unk_0x9F2866A966FBAE78(Local_149.f_1), unk_0xE7869D5D7816A9B6(), -1, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 10))
			{
				if ((iLocal_555 < 0 || !unk_0x47B2F09FC779F5CD(iLocal_555)) || unk_0x4D221DFBB84DCF0B(iLocal_555) >= 0.95f)
				{
					func_250();
					iVar1 = unk_0xE7869D5D7816A9B6();
					if (Local_149.f_23 > -1)
					{
						if (unk_0x7144266D2DB1A46F(unk_0x2A0D2AD241778491(Local_149.f_23)))
						{
							iVar0 = unk_0x39078CE05613D134(unk_0x2A0D2AD241778491(Local_149.f_23));
							iVar1 = unk_0x91B73D905EA38F6B(iVar0);
						}
					}
					unk_0xF504D2C6A132D1E5(unk_0x9F2866A966FBAE78(Local_149.f_1), -1, iVar1, -1, 1);
					unk_0xA573D5E64CDFAF83(unk_0x9F2866A966FBAE78(Local_149.f_1), 0, 0);
					unk_0x6D0CE8888415DDF3(unk_0x9F2866A966FBAE78(Local_149.f_1), 16);
					unk_0x8D6671D78D1F569B(unk_0x9F2866A966FBAE78(Local_149.f_1), 1);
					unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 10);
				}
			}
			break;
		
		case 7:
			if (unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_1), -1442466670) != 0 && unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_1), -1442466670) != 1)
			{
				if (!func_168())
				{
					func_249();
					unk_0xFA2C5C2D054C888E(unk_0x9F2866A966FBAE78(Local_149.f_1));
					unk_0xE8EC59D96A176616(unk_0x9F2866A966FBAE78(Local_149.f_1), 20f, 0);
					func_251(4);
				}
			}
			break;
		
		case 8:
			if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 9))
			{
				func_250();
				iLocal_555 = unk_0xA6C2218D69567283(Local_149.f_20);
				if ((iLocal_555 >= 0 && !unk_0x47B2F09FC779F5CD(iLocal_555)) || iLocal_555 < 0)
				{
					if ((!unk_0xB519E5386FBF69E5(Local_149.f_12, 27) && !func_36()) && !func_35())
					{
						if (unk_0xB519E5386FBF69E5(Local_149.f_13, 2))
						{
							if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 3))
							{
								unk_0xC2C4A3A9FF2FBFFF(unk_0x9F2866A966FBAE78(Local_149.f_1), uLocal_566);
								iVar3 = 1;
							}
							else
							{
								func_249();
								unk_0xC2C4A3A9FF2FBFFF(unk_0x9F2866A966FBAE78(Local_149.f_1), uLocal_567);
								iVar3 = 1;
							}
						}
					}
					else
					{
						unk_0x29F2993666F68F46(unk_0x9F2866A966FBAE78(Local_149.f_1), Local_551, 250f, -1, 1, 0);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_251(25);
						unk_0x8D6671D78D1F569B(unk_0x9F2866A966FBAE78(Local_149.f_1), 1);
						func_6(iLocal_777, 1, func_7());
						unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 9);
					}
				}
			}
			else if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 19))
			{
				iVar4 = unk_0xB2DCBB6150EDACED(unk_0x9F2866A966FBAE78(Local_149.f_1));
				if (iVar4 == 3)
				{
					unk_0xAA6742AEFA0B2BC4(unk_0x9F2866A966FBAE78(Local_149.f_1));
					unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 19);
				}
				else if (iVar4 == 2)
				{
					unk_0xFA2C5C2D054C888E(unk_0x9F2866A966FBAE78(Local_149.f_1));
					if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 3))
					{
						unk_0xC2C4A3A9FF2FBFFF(unk_0x9F2866A966FBAE78(Local_149.f_1), uLocal_568);
					}
					else
					{
						unk_0xE8EC59D96A176616(unk_0x9F2866A966FBAE78(Local_149.f_1), 20f, 0);
					}
					unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 19);
				}
			}
			break;
	}
	func_246();
	return 1;
}

void func_246()
{
	if ((Local_149.f_36 != 8 && Local_149.f_36 != 7) && Local_149.f_18 == 3)
	{
		if ((((!unk_0xB519E5386FBF69E5(Local_149.f_12, 14) || !unk_0xB519E5386FBF69E5(Local_149.f_12, 15)) || !unk_0xB519E5386FBF69E5(Local_149.f_12, 22)) || !unk_0xB519E5386FBF69E5(Local_149.f_12, 23)) || !unk_0xB519E5386FBF69E5(Local_149.f_12, 30))
		{
			iLocal_555 = unk_0xA6C2218D69567283(Local_149.f_20);
			if (iLocal_555 >= 0)
			{
				if (unk_0x47B2F09FC779F5CD(iLocal_555))
				{
					if (!func_168())
					{
						if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 14) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 6))
						{
							func_251(2);
							unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 6);
						}
						if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 15) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 7))
						{
							if (unk_0x4D221DFBB84DCF0B(iLocal_555) > 0.87f)
							{
								func_251(3);
								unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 7);
							}
						}
						if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 22) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 22))
						{
							if (unk_0xB519E5386FBF69E5(Local_149.f_12, 24) && !func_168())
							{
								func_251(11);
								unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 22);
							}
						}
						if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 23) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 23))
						{
							if (unk_0xB519E5386FBF69E5(Local_149.f_12, 25) && !func_168())
							{
								func_251(12);
								unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 23);
							}
						}
					}
				}
			}
		}
		if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 9))
		{
			if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 26) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 24))
			{
				if (unk_0xB519E5386FBF69E5(Local_149.f_12, 7))
				{
					if (!func_168())
					{
						if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 11))
						{
							if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 12))
							{
								func_251(1);
							}
							else
							{
								func_251(19);
							}
						}
						else
						{
							func_251(16);
						}
						unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 24);
						return;
					}
					else
					{
						func_247();
						return;
					}
				}
			}
			if (((!unk_0xB519E5386FBF69E5(Local_149.f_12, 30) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 25)) && !unk_0xB519E5386FBF69E5(Local_149.f_12, 7)) && !unk_0xB519E5386FBF69E5(Local_149.f_12, 4))
			{
				if (unk_0xB519E5386FBF69E5(Local_149.f_13, 0) && !func_168())
				{
					if ((unk_0xB519E5386FBF69E5(Local_149.f_12, 7) && unk_0xB519E5386FBF69E5(Local_149.f_12, 4)) || (!unk_0xB519E5386FBF69E5(Local_149.f_12, 7) && !unk_0xB519E5386FBF69E5(Local_149.f_12, 4)))
					{
						if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 11))
						{
							if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 12))
							{
								func_251(13);
							}
							else
							{
								func_251(20);
							}
						}
						else
						{
							func_251(17);
						}
						unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 25);
						return;
					}
				}
			}
			if (!unk_0xB519E5386FBF69E5(Local_149.f_12, 31) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 26))
			{
				if (unk_0xB519E5386FBF69E5(Local_149.f_13, 1) && !func_168())
				{
					func_251(14);
					unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 26);
					return;
				}
			}
			if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 9) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 31))
			{
				if (unk_0xB519E5386FBF69E5(Local_149.f_13, 8) && !func_168())
				{
					func_251(22);
					unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 31);
					return;
				}
			}
			if (!unk_0xB519E5386FBF69E5(Local_149.f_15, 3) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_3, 3))
			{
				if (unk_0xB519E5386FBF69E5(Local_149.f_15, 2) && !func_168())
				{
					func_251(24);
					unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_3), 3);
					return;
				}
			}
			if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 14) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 20))
			{
				if (unk_0xB519E5386FBF69E5(Local_149.f_13, 13) && !func_168())
				{
					func_251(23);
					unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 20);
					return;
				}
			}
		}
	}
	if (!unk_0xB519E5386FBF69E5(Local_149.f_13, 6) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 29))
	{
		if (unk_0xB519E5386FBF69E5(Local_149.f_13, 5))
		{
			if (!func_168())
			{
				func_251(21);
				unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 29);
				return;
			}
		}
	}
}

void func_247()
{
	Global_14578 = 0;
	func_248();
}

void func_248()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
	}
}

void func_249()
{
	int iVar0;
	
	iVar0 = unk_0x0ADD324BC46177EF(0, 12);
	if (iVar0 < 3)
	{
		unk_0x5E9C818BB0BD51FB(unk_0x9F2866A966FBAE78(Local_149.f_1), joaat("weapon_pistol"), 25000, 0);
		unk_0xB161EBD04DDDE4AD(unk_0x9F2866A966FBAE78(Local_149.f_1), unk_0x0ADD324BC46177EF(10, 35));
	}
	else if (iVar0 < 6)
	{
		unk_0x5E9C818BB0BD51FB(unk_0x9F2866A966FBAE78(Local_149.f_1), joaat("weapon_combatpistol"), 25000, 0);
		unk_0xB161EBD04DDDE4AD(unk_0x9F2866A966FBAE78(Local_149.f_1), unk_0x0ADD324BC46177EF(15, 40));
	}
	else if (iVar0 == 6)
	{
		unk_0x5E9C818BB0BD51FB(unk_0x9F2866A966FBAE78(Local_149.f_1), joaat("weapon_microsmg"), 25000, 0);
		unk_0xB161EBD04DDDE4AD(unk_0x9F2866A966FBAE78(Local_149.f_1), unk_0x0ADD324BC46177EF(10, 25));
	}
	else if (iVar0 == 7)
	{
		unk_0x5E9C818BB0BD51FB(unk_0x9F2866A966FBAE78(Local_149.f_1), joaat("weapon_combatmg"), 25000, 0);
		unk_0xB161EBD04DDDE4AD(unk_0x9F2866A966FBAE78(Local_149.f_1), unk_0x0ADD324BC46177EF(5, 15));
	}
	else if (iVar0 == 8)
	{
		unk_0x5E9C818BB0BD51FB(unk_0x9F2866A966FBAE78(Local_149.f_1), joaat("weapon_bat"), 25000, 0);
		unk_0xB161EBD04DDDE4AD(unk_0x9F2866A966FBAE78(Local_149.f_1), unk_0x0ADD324BC46177EF(20, 40));
	}
	else if (iVar0 == 9)
	{
		unk_0x5E9C818BB0BD51FB(unk_0x9F2866A966FBAE78(Local_149.f_1), joaat("weapon_assaultrifle"), 25000, 0);
		unk_0xB161EBD04DDDE4AD(unk_0x9F2866A966FBAE78(Local_149.f_1), unk_0x0ADD324BC46177EF(5, 30));
	}
	else if (iVar0 == 10)
	{
		unk_0x5E9C818BB0BD51FB(unk_0x9F2866A966FBAE78(Local_149.f_1), joaat("weapon_sawnoffshotgun"), 25000, 0);
		unk_0xB161EBD04DDDE4AD(unk_0x9F2866A966FBAE78(Local_149.f_1), unk_0x0ADD324BC46177EF(5, 20));
	}
	else
	{
		unk_0x5E9C818BB0BD51FB(unk_0x9F2866A966FBAE78(Local_149.f_1), joaat("weapon_pumpshotgun"), 25000, 0);
		unk_0xB161EBD04DDDE4AD(unk_0x9F2866A966FBAE78(Local_149.f_1), unk_0x0ADD324BC46177EF(10, 25));
	}
	func_6(iLocal_777, 1, func_7());
	unk_0x690C5239500171FE(unk_0x9F2866A966FBAE78(Local_149.f_1), Global_1574228);
	unk_0x84D30AE13C5F7CD6(unk_0x9F2866A966FBAE78(Local_149.f_1), 1);
	unk_0x79EE909282B7E387(unk_0x9F2866A966FBAE78(Local_149.f_1), 1);
	unk_0xCDB54400CEA326E7(unk_0x9F2866A966FBAE78(Local_149.f_1), Local_548, 20f, 0, 0);
	unk_0x8D6671D78D1F569B(unk_0x9F2866A966FBAE78(Local_149.f_1), 1);
}

void func_250()
{
	iLocal_555 = unk_0xA6C2218D69567283(Local_149.f_20);
	if (iLocal_555 >= 0)
	{
		if (unk_0x47B2F09FC779F5CD(iLocal_555))
		{
			unk_0x7C10A814ABC7AD2E(Local_149.f_20);
		}
	}
}

void func_251(int iParam0)
{
	struct<2> Var0;
	int iVar4;
	
	if (unk_0xB519E5386FBF69E5(Local_149.f_12, 13))
	{
		if (!func_405(Local_149.f_1))
		{
			if (unk_0x379306CBB68B0FFA(Local_149.f_1) || (!unk_0xB5A45FB150DB6127(Local_149.f_1) && unk_0xFA4B36553B2A7802()))
			{
				if (!unk_0x8E2CF6ACCED3BD0F(unk_0x9F2866A966FBAE78(Local_149.f_1)))
				{
					if (Local_149.f_37 == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_149.f_37 == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_149.f_22, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (unk_0x04E7E853E31F41A3(&Var0, "RB_SH241"))
					{
						if (unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar4, 1))
						{
							if ((((((iVar4 == joaat("weapon_unarmed") || iVar4 == 0) || iVar4 == joaat("object")) || iVar4 == joaat("weapon_flare")) || iVar4 == joaat("weapon_snowball")) || func_269(iVar4)) || func_268(iVar4))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_404(&uLocal_612, 3, unk_0x9F2866A966FBAE78(Local_149.f_1), &(Local_149.f_38), 1, 0);
					switch (iParam0)
					{
						case 0:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_GREET", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 1:
							func_252(&uLocal_612, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_252(&uLocal_612, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_252(&uLocal_612, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_BRAVE", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 10:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_REMOVE_VEHICLE", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 11:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_REACT_TO_SHOUT", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 12:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_HURRYING", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 13:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_NO_COPS", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 14:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_THREATENED", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 15:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_GREET_START", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 16:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_SCARED_START", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 17:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_NO_COPS_START", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 18:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_GREET_END", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 19:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_SCARED_END", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 20:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_NO_COPS_END", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 21:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_COPS_ARRIVED", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 22:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_SELL", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 23:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_NO_ENTRY", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 24:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SHOP_STEAL", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 25:
							unk_0x63170E828689585A(unk_0x9F2866A966FBAE78(Local_149.f_1), "SCREAM_PANIC", &(Local_149.f_42), "SPEECH_PARAMS_FORCE", 1);
							break;
						}
					}
				}
			}
	}
}

int func_252(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_267(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_253(sParam2, iParam3, 0);
}

int func_253(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xDA09A6E60FE9645E(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_266();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF0A330A29F97AA7E())
		{
			return 0;
		}
		if (func_265(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_264();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x73817D396768E4C6(&Global_2283, 20);
			unk_0x73817D396768E4C6(&Global_2284, 17);
			unk_0x73817D396768E4C6(&Global_2285, 0);
			if (bParam2)
			{
				func_258();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (func_257())
				{
					return 0;
				}
				if (unk_0x25AE83AAAFB359D8(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x3A065D524128D33B(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x14618ECB1EB17B8F(unk_0xE7869D5D7816A9B6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69236)
				{
					if (unk_0xA7D2A868253353BE(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
					if (unk_0xA7AC3687807201B4(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x3CD36EADD6272F29(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
				}
			}
			if (func_256())
			{
				return 0;
			}
			else
			{
				switch (Global_14413.f_1)
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
				if (unk_0xB519E5386FBF69E5(Global_2283, 9))
				{
					return 0;
				}
			}
			func_255();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_254();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_266();
	}
	return 0;
}

void func_254()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xDA09A6E60FE9645E(0);
	Global_15712 = 1;
}

void func_255()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x73817D396768E4C6(&Global_2284, 16);
}

int func_256()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_257()
{
	int iVar0;
	int iVar1;
	
	if (Global_69236)
	{
		iVar0 = 0;
		unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar1, 1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x834CA326769DA173() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0x9699041CFA6517D2(unk_0xE7869D5D7816A9B6(), 78, 1))
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

void func_258()
{
	if (func_119(14))
	{
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_259();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69236)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_259()
{
	func_260();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_260()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_263(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_262(unk_0xE7869D5D7816A9B6());
			if (func_261(iVar0) && (!func_119(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_261(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

bool func_261(int iParam0)
{
	return iParam0 < 3;
}

int func_262(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_263(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_263(int iParam0)
{
	if (func_261(iParam0))
	{
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_264()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_265(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338577.f_203[iParam1];
			}
			break;
	}
	return unk_0xB519E5386FBF69E5(Global_1338577.f_949, iParam0);
}

void func_266()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if ((unk_0xD6F17BA188A65E8F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(1);
		Global_15712 = 6;
		return;
	}
}

void func_267(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

int func_268(int iParam0)
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

int func_269(int iParam0)
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
		case joaat("weapon_machete"):
			return 1;
			break;
	}
	return 0;
}

void func_270()
{
	int iVar0;
	
	iVar0 = unk_0xD6E896F8239D8EF2(false);
	if (Local_149.f_34 != iVar0)
	{
		if (Local_149.f_34 < iVar0 || func_277(Local_149.f_34, 0, 1))
		{
			unk_0xB05CBEA790398181(Local_149.f_34);
		}
	}
	iVar0 = unk_0xBD5D7DEF087C4F66(false);
	if (Local_149.f_35 != iVar0)
	{
		if (Local_149.f_35 < iVar0 || func_271(Local_149.f_35, 0, 1))
		{
			unk_0xFCFA396E73EBBE3E(Local_149.f_35);
		}
	}
}

int func_271(int iParam0, bool bParam1, bool bParam2)
{
	return func_272(2, iParam0, 1, bParam1, bParam2);
}

int func_272(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB519E5386FBF69E5(Global_1348588, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_276(iParam0) - func_275(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_275(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_276(iParam0) - func_274(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_275(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_276(iParam0) - func_275(iParam0, 1));
		}
		if (!bParam4 && Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/] != 3)
		{
			iVar1 = (iVar1 - func_273(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_273(int iParam0)
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

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348588.f_1;
			break;
		
		case 1:
			return Global_1348588.f_2;
			break;
		
		case 2:
			return Global_1348588.f_3;
			break;
	}
	return 0;
}

int func_275(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x3F80C6638E3A1A90();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x0D47370227E1A847())
			{
				return Global_2416794[iVar0 /*303*/].f_207;
			}
			else
			{
				return unk_0xD6E896F8239D8EF2(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x0D47370227E1A847())
			{
				return Global_2416794[iVar0 /*303*/].f_208;
			}
			else
			{
				return unk_0xF3BCBCADB5D1D2A5(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x0D47370227E1A847())
			{
				return Global_2416794[iVar0 /*303*/].f_209;
			}
			else
			{
				return unk_0xBD5D7DEF087C4F66(!bParam1);
			}
			break;
	}
	return 0;
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348596;
			break;
		
		case 1:
			return Global_1348597;
			break;
		
		case 2:
			return Global_1348598;
			break;
	}
	return 0;
}

int func_277(int iParam0, bool bParam1, bool bParam2)
{
	return func_272(0, iParam0, 1, bParam1, bParam2);
}

void func_278()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	switch (iLocal_809)
	{
		case 0:
			if (!unk_0xB519E5386FBF69E5(iLocal_544, 0))
			{
				if (unk_0xDC1FDD911B88C6F2(Local_149.f_3))
				{
					if (func_285(Local_815))
					{
						Local_815 = { unk_0xBD306D8AFEF4E078(unk_0xA5CFD5B9C8A74104(Local_149.f_3), 0f, -0.5f, 0f) };
						unk_0x9956FB0E4B50ECB8(&iLocal_544, 0);
					}
				}
			}
			if ((((unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_815, 0.5f, 0.5f, 1f, 0, 1, 0) && (func_405(Local_149.f_1) || Local_149.f_36 > 7)) && !unk_0xB519E5386FBF69E5(Local_149.f_12, 20)) && !unk_0xB519E5386FBF69E5(Local_149.f_12, 11)) && unk_0x743D96D854EFA6C5(Local_556, 1.5f) == 0)
			{
				if (((((!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0) && !func_284(0)) && !func_283()) && !unk_0xA57007F9A665F322()) && !func_37(unk_0x3F80C6638E3A1A90(), 146)) && unk_0xDC1FDD911B88C6F2(Local_149.f_3))
				{
					func_145("FHU_MANR", -1);
					Global_2457699.f_4780.f_4 = 1;
					iLocal_809 = 1;
				}
			}
			break;
		
		case 1:
			if (((((!unk_0xB519E5386FBF69E5(Local_149.f_13, 16) && !unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 12)) && !unk_0xB519E5386FBF69E5(Local_149.f_12, 20)) && !unk_0xB519E5386FBF69E5(Local_149.f_12, 11)) && unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_815, 0.5f, 0.5f, 1f, 0, 1, 0)) && (!func_135(unk_0x3F80C6638E3A1A90()) || func_164(unk_0x3F80C6638E3A1A90()) == 154))
			{
				if (((unk_0x958B4351DD28B142(0, 51) && !func_282(0)) && !func_283()) && !unk_0xA57007F9A665F322())
				{
					if (func_144("FHU_MANR"))
					{
						unk_0x1D208E4A4E1D4FFE(1);
					}
					unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), false, 640);
					unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 12);
					iLocal_809 = 2;
				}
				else if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
				{
					if (iLocal_814 == 0)
					{
						func_279(&iLocal_814, 4, "FHU_MANR", 0, 0, 0);
					}
				}
			}
			else if (func_144("FHU_MANR"))
			{
				unk_0x1D208E4A4E1D4FFE(1);
			}
			break;
		
		case 2:
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				Var3 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
				Local_815.f_2 = (Var3.f_2 - 1f);
				unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), Local_815, 1, 0, 0, 1);
				unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), unk_0x2C393A56EDEECDE4((Local_576.f_0 - Local_815.f_0), (Local_576.f_1 - Local_815.f_1)));
				unk_0x33A90AD8FA327B72(&uVar6);
				unk_0x94026C1D1DB14225(&uVar6);
				unk_0xDCF460AE46C9489C(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				unk_0xDCF460AE46C9489C(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 262145, 0, 0, 0, 0);
				unk_0xDCF460AE46C9489C(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				unk_0x911ECBCE73F8EC3F(uVar6);
				unk_0xC2C4A3A9FF2FBFFF(unk_0xE7869D5D7816A9B6(), uVar6);
				unk_0x0C8881432DA64087(unk_0xE7869D5D7816A9B6(), 0, -1, 0);
				unk_0xC31A3F1982C7B12B(unk_0xE7869D5D7816A9B6(), 200, 1);
				unk_0xC31A3F1982C7B12B(unk_0xE7869D5D7816A9B6(), 71, 1);
				bVar2 = unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iLocal_813, 1);
				if (bVar2)
				{
					unk_0x36EE5CBF45EC4826(unk_0xE7869D5D7816A9B6(), joaat("weapon_unarmed"), 1);
				}
				unk_0xA573D5E64CDFAF83(unk_0xE7869D5D7816A9B6(), 0, 0);
				if (!unk_0xCF686B56FD5328B5(uLocal_810))
				{
					uLocal_810 = unk_0xF90D4D0A9F2F4A42(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x8E0CB5A43A2CA4CB(uLocal_810, unk_0xE7869D5D7816A9B6(), -0.1878f, 3.0635f, 0.68f, 1);
				unk_0xB98C70F0FFEA713A(uLocal_810, unk_0xE7869D5D7816A9B6(), -0.0129f, 0.0927f, 0.3008f, 1);
				unk_0xD2E0A9EDD55F008D(uLocal_810, 35f);
				unk_0x657EEE601EEC4152(uLocal_810, "HAND_SHAKE", 0.1f);
				unk_0x63498CF6CF35C6A2(uLocal_810, 1);
				unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
			}
			iLocal_809 = 3;
			break;
		
		case 3:
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				if (!unk_0xCF686B56FD5328B5(uLocal_811))
				{
					uLocal_811 = unk_0xF90D4D0A9F2F4A42(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x8E0CB5A43A2CA4CB(uLocal_811, unk_0xE7869D5D7816A9B6(), -1.0346f, 2.9183f, 0.68f, 1);
				unk_0xB98C70F0FFEA713A(uLocal_811, unk_0xE7869D5D7816A9B6(), -0.0574f, 0.1074f, 0.3008f, 1);
				unk_0xD2E0A9EDD55F008D(uLocal_811, 35f);
				unk_0x657EEE601EEC4152(uLocal_811, "HAND_SHAKE", 0.1f);
				unk_0x7D333E815920766B(uLocal_811, uLocal_810, 6000, 1, 1);
				unk_0xC31A3F1982C7B12B(unk_0xE7869D5D7816A9B6(), 71, 1);
				unk_0x0C8881432DA64087(unk_0xE7869D5D7816A9B6(), 0, -1, 0);
				unk_0xC31A3F1982C7B12B(unk_0xE7869D5D7816A9B6(), 200, 1);
			}
			iLocal_809 = 4;
			break;
		
		case 4:
			if (!unk_0x10B8434FB64D5C3F(uLocal_811))
			{
				iLocal_809 = 5;
			}
			else if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x23417CDB252083F9(unk_0xE7869D5D7816A9B6(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = unk_0xCB337035DFE5097C(unk_0xE7869D5D7816A9B6(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_812)
						{
							iVar7 = unk_0xF2DB717A73826179(((IntToFloat(iLocal_581) * 0.75f) / 4f));
							iVar8 = unk_0xF2DB717A73826179(((IntToFloat(iLocal_582) * 0.75f) / 4f));
							iVar1 = unk_0x0ADD324BC46177EF(iVar7, iVar8 + 1);
							iVar1 = func_241(iVar1, 1);
							if (iVar1 > (Global_262145.f_161 / 4))
							{
								iVar1 = (Global_262145.f_161 / 4);
							}
							if (func_240(unk_0x3F80C6638E3A1A90()) && func_238(func_239(unk_0x3F80C6638E3A1A90())) < 1f)
							{
								if (Global_262145.f_4218 > 1f)
								{
									Global_262145.f_4218 = 1f;
								}
								iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_4218));
							}
							if (!func_136(unk_0x3F80C6638E3A1A90()) && func_164(unk_0x3F80C6638E3A1A90()) != 154)
							{
								func_197(&iVar1, 1);
							}
							if (iVar1 > 0)
							{
								if (func_196())
								{
									func_187(1734805203, iVar1, &uVar9, 0, 0, 0);
								}
								else
								{
									func_183(iVar1, 1, 1, 1092616192);
									unk_0xB9FE3D99EAA4E512(iVar1);
								}
							}
							Global_2457699.f_4780 = (Global_2457699.f_4780 + iVar1);
							iLocal_807 = (iLocal_807 + iVar1);
							func_171(1, iLocal_807);
							unk_0xCC18B241D266EF14(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
							iLocal_812 = 1;
						}
					}
					else if (iLocal_812)
					{
						iLocal_812 = 0;
					}
				}
				unk_0xC31A3F1982C7B12B(unk_0xE7869D5D7816A9B6(), 71, 1);
				unk_0x0C8881432DA64087(unk_0xE7869D5D7816A9B6(), 0, -1, 0);
				unk_0xC31A3F1982C7B12B(unk_0xE7869D5D7816A9B6(), 200, 1);
			}
			break;
		
		case 5:
			if (iLocal_813 != joaat("weapon_unarmed") && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				unk_0x36EE5CBF45EC4826(unk_0xE7869D5D7816A9B6(), iLocal_813, 1);
			}
			unk_0x0C8881432DA64087(unk_0xE7869D5D7816A9B6(), 1, -1, 0);
			unk_0x7FB81B1DD14A3BE4(0);
			unk_0x6EF372C057320AD4(0, 1065353216);
			if (unk_0xCF686B56FD5328B5(uLocal_810))
			{
				unk_0x74FF6D08DE291367(uLocal_810, 0);
			}
			if (unk_0xCF686B56FD5328B5(uLocal_811))
			{
				unk_0x74FF6D08DE291367(uLocal_811, 0);
			}
			unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
			unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), true, 0);
			Global_2457699.f_4780.f_2 = 1;
			Global_2457699.f_4780.f_5 = 1;
			iLocal_809 = 7;
			break;
		
		case 6:
			unk_0x63498CF6CF35C6A2(uLocal_811, 0);
			unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				unk_0xDE31B2587775EDAD(unk_0xE7869D5D7816A9B6());
			}
			iLocal_809 = 5;
			break;
	}
}

void func_279(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0xFF6891E21E7FC193(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xF478777FFCC96862())
	{
		if (!*iParam0 == -1)
		{
			func_280(iParam0);
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
		if (!Global_36319[iVar0 /*19*/])
		{
			Global_36319[iVar0 /*19*/] = 1;
			Global_36319[iVar0 /*19*/].f_1 = Global_36442;
			Global_36442++;
			Global_36319[iVar0 /*19*/].f_4 = 0;
			Global_36319[iVar0 /*19*/].f_17 = 0;
			Global_36319[iVar0 /*19*/].f_5 = 0;
			Global_36319[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_36319[iVar0 /*19*/].f_8), sParam2, 16);
			Global_36319[iVar0 /*19*/].f_6 = iParam3;
			Global_36319[iVar0 /*19*/].f_18 = unk_0xE3E113B4DB09AAF8();
			Global_36319[iVar0 /*19*/].f_7 = 0;
			Global_36319[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0xF6917DE0E003509D(sParam4))
			{
				Global_36319[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_36319[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_36319[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_36319[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_280(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_281(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36319[iVar0 /*19*/])
		{
			Global_36319[iVar0 /*19*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_281(int iParam0)
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
		if (Global_36319[iVar0 /*19*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_282(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
			{
				if (Global_14412 == 1)
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_14412 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_14413.f_1 > 3)
	{
		if (Global_14412 == 1)
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

bool func_283()
{
	return unk_0x9D40BBF80D8F5E8A() <= Global_17257.f_5666 + 100;
}

int func_284(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_285(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_286()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	char* sVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	
	if (((Local_149.f_63 >= 1000 || (Local_149.f_63 + iLocal_808) >= 1000) || func_402()) || (func_140(&(Global_2457699.f_10)) && !func_401(Global_2457699.f_10, 300000, 0)))
	{
		if (func_140(&(Global_2457699.f_10)))
		{
			if ((unk_0x9D40BBF80D8F5E8A() % 2500) < 50)
			{
			}
		}
		if (!Local_98.f_34)
		{
			Local_98.f_34 = 1;
			if (!func_140(&(Global_2457699.f_10)))
			{
				func_18(&(Global_2457699.f_10), 0, 0);
			}
		}
	}
	else
	{
		if (func_140(&(Global_2457699.f_10)))
		{
			func_13(&(Global_2457699.f_10));
		}
		if (Local_98.f_34)
		{
			Local_98.f_34 = 0;
		}
	}
	if ((unk_0x9D40BBF80D8F5E8A() % 5000) < 50)
	{
	}
	if ((((((Local_149.f_36 < 2 && func_44(unk_0x3F80C6638E3A1A90(), 1, 1)) && unk_0xB519E5386FBF69E5(iLocal_543, 26)) && !func_400(-1082130432)) && unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) < 1) && !unk_0x22E902D6AF27E232(unk_0x9F2866A966FBAE78(Local_149.f_1), Local_605, Local_608, uLocal_611, 0, 1, 0)) && !func_405(Local_149.f_1))
	{
		iVar7 = 0;
		if ((unk_0xA57007F9A665F322() && iLocal_97 != 0) && !unk_0x565848B3396785BC())
		{
			iLocal_97 = 0;
			func_399();
		}
		switch (iLocal_97)
		{
			case 0:
				if ((((!unk_0xA57007F9A665F322() && !unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1)) && !unk_0x32CB82F773482629(unk_0xE7869D5D7816A9B6())) && (!func_135(unk_0x3F80C6638E3A1A90()) || func_164(unk_0x3F80C6638E3A1A90()) == 154)) && !func_398(unk_0x3F80C6638E3A1A90(), 21))
				{
					if (func_397(Local_98.f_0, &Local_556, Local_559.f_2, &(Local_98.f_16[0 /*3*/]), &(Local_98.f_16[1 /*3*/]), &(Local_98.f_23), &(Local_98.f_26)))
					{
						Var1 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
						Var4 = { unk_0x1141852D07400777(unk_0x9F2866A966FBAE78(Local_149.f_1), 1) };
						if ((unk_0xF18329472591CFE6(Var1, Local_98.f_23, 1) < 5f && unk_0x7F38A542899D217A((Var1.f_2 - Var4.f_2)) < 0.25f) || func_442(1))
						{
							if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Local_98.f_16[0 /*3*/], Local_98.f_16[1 /*3*/], Local_98.f_26, 0, 1, 0) || func_442(1))
							{
								if (unk_0x50D7BCB98D6E1BFA(unk_0xE7869D5D7816A9B6(), Local_98.f_23, 135f) || func_442(1))
								{
									if (Local_98.f_34)
									{
										if (func_442(1))
										{
											func_419();
										}
										if (((!func_144("SHR_HOLDUP_1") && !func_144("SHR_MENU")) && !func_396()) && func_395())
										{
											func_145("SHR_SOLD_OUT", -1);
											iLocal_97 = 10;
										}
									}
									else
									{
										if (func_442(1))
										{
										}
										Local_98.f_14 = -1;
										func_279(&(Local_98.f_14), 4, "SHR_MENU", 0, 0, 0);
										iLocal_97 = 2;
									}
								}
								else if ((unk_0x9D40BBF80D8F5E8A() % 8000) < 50)
								{
								}
							}
							else if ((unk_0x9D40BBF80D8F5E8A() % 8000) < 50)
							{
							}
						}
						else if ((unk_0x9D40BBF80D8F5E8A() % 8000) < 50)
						{
						}
					}
				}
				else
				{
					if (func_144("SHR_MENU"))
					{
						unk_0x1D208E4A4E1D4FFE(1);
					}
					if (func_38(unk_0x3F80C6638E3A1A90()))
					{
						if (!unk_0xB519E5386FBF69E5(iLocal_544, 4))
						{
							func_145("SHR_FM_CRIT", -1);
							unk_0x6140FD2938DAA089(3, 21, 200, 0, 0);
							unk_0x9956FB0E4B50ECB8(&iLocal_544, 4);
						}
					}
					if ((unk_0x9D40BBF80D8F5E8A() % 8000) < 50)
					{
					}
				}
				break;
			
			case 2:
				Var1 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
				Var4 = { unk_0x1141852D07400777(unk_0x9F2866A966FBAE78(Local_149.f_1), 1) };
				if ((!unk_0x50D7BCB98D6E1BFA(unk_0xE7869D5D7816A9B6(), Local_98.f_23, 135f) || unk_0x7F38A542899D217A((Var1.f_2 - Var4.f_2)) >= 0.25f) && !func_442(1))
				{
					if (func_144("SHR_MENU"))
					{
						unk_0x1D208E4A4E1D4FFE(1);
					}
					func_280(&(Local_98.f_14));
					iLocal_97 = 0;
				}
				if (unk_0xA57007F9A665F322())
				{
					if (func_144("SHR_MENU"))
					{
						unk_0x1D208E4A4E1D4FFE(1);
					}
					func_280(&(Local_98.f_14));
					iLocal_97 = 0;
				}
				if (!unk_0x32CB82F773482629(unk_0xE7869D5D7816A9B6()))
				{
					if (func_394(Local_98.f_14, 1) || func_442(1))
					{
						if (func_442(1))
						{
							func_419();
						}
						if (func_144("SHR_MENU"))
						{
							unk_0x1D208E4A4E1D4FFE(1);
						}
						func_392(&(Local_98.f_44));
						func_280(&(Local_98.f_14));
						func_386(0, 0);
						unk_0x9956FB0E4B50ECB8(&iLocal_544, 7);
						func_436(unk_0x3F80C6638E3A1A90(), 0, 66048);
						unk_0x86F04B1FEFFA59AF();
						if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && !func_405(Local_149.f_1))
						{
							unk_0x58F62EDF6111D598(unk_0xE7869D5D7816A9B6(), unk_0x9F2866A966FBAE78(Local_149.f_1), 0);
							unk_0x73817D396768E4C6(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_3), 1);
						}
						func_385();
						iLocal_97 = 3;
					}
				}
				break;
			
			case 3:
				if (!unk_0xCF686B56FD5328B5(Local_98.f_1))
				{
					Local_98.f_1 = unk_0xF90D4D0A9F2F4A42(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
					func_384(Local_98.f_0, &(Local_98.f_2), &(Local_98.f_5), &uVar9);
					unk_0x34F8B34A8E9D3B57(Local_98.f_1, Local_98.f_2);
					unk_0x3B330DB318EF2761(Local_98.f_1, Local_98.f_5, 2);
					unk_0xD2E0A9EDD55F008D(Local_98.f_1, uVar9);
					unk_0x657EEE601EEC4152(Local_98.f_1, "HAND_SHAKE", 0.1f);
					unk_0x63498CF6CF35C6A2(Local_98.f_1, 1);
					unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
				}
				if (unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
				{
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), false, 0);
				}
				Local_98.f_37 = func_407(Local_98.f_0);
				Local_98.f_13 = 6;
				func_383(0);
				func_382(1, 1, 0, 0, 0);
				func_381(1, 2, 1, 1, 1);
				func_380("SNK_ITEM");
				func_378(1, Local_98.f_37, Local_98.f_37);
				iVar10 = 0;
				while (iVar10 < Local_98.f_13)
				{
					func_374(iVar10, func_377(iVar10), 0, 1, 0, 0);
					if (Local_149.f_64[iVar10] >= 10 || ((func_140(&(Global_2457699.f_12[iVar10 /*2*/])) && !func_401(Global_2457699.f_12[iVar10 /*2*/], 150000, 0)) && Local_98.f_0 == Global_2457699.f_27))
					{
						func_374(iVar10, "", 1, 1, 0, 0);
						func_373(15, 0);
						if (func_140(&(Global_2457699.f_12[iVar10 /*2*/])) && !func_401(Global_2457699.f_12[iVar10 /*2*/], 150000, 0))
						{
							Local_149.f_64[iVar10] = 10;
						}
						if (!func_140(&(Global_2457699.f_12[iVar10 /*2*/])))
						{
							Global_2457699.f_27 = Local_98.f_0;
							func_18(&(Global_2457699.f_12[iVar10 /*2*/]), 0, 0);
						}
					}
					else if (func_370(iVar10))
					{
						func_374(iVar10, "SNK_FULL", 0, 1, 0, 0);
					}
					else
					{
						func_374(iVar10, "ITEM_COST", 1, 1, 0, 0);
						func_366(func_369(iVar10), 0);
					}
					iVar10++;
				}
				func_365(0);
				func_364(Local_98.f_12, 1, 1);
				if (Local_98.f_35)
				{
					func_363("SNK_BOUGHT", 0, 0);
				}
				else if (Local_149.f_64[Local_98.f_12] >= 10)
				{
					func_363("SNK_SOUT", 0, 0);
				}
				else
				{
					func_363(func_362(Local_98.f_12), 0, 0);
				}
				func_361(201, "ITEM_SELECT", -1, 0);
				func_361(202, "ITEM_BACK", -1, 0);
				func_361(203, "SNK_LIFT", -1, 0);
				func_332(1, Local_98.f_0, 1, 0, 1, -1082130432, 0, 0);
				iLocal_97 = 4;
				break;
			
			case 4:
				if (unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
				{
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), false, 0);
				}
				if (unk_0xC47857E5E74EA5AF(unk_0xE7869D5D7816A9B6(), -875674219) == 7)
				{
					if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_3, 1))
					{
						func_436(unk_0x3F80C6638E3A1A90(), 0, 98816);
						unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_3), 1);
					}
				}
				iVar7 = 0;
				if (unk_0xA78EA29AC2FFBADE())
				{
					if (unk_0x122DCA017A140FA8(2))
					{
						unk_0x8CCCC48313B0F20F(0, 1, 1);
						unk_0x8CCCC48313B0F20F(0, 2, 1);
						unk_0x5D1D27F205B40569(0, 237, 1);
						unk_0x5D1D27F205B40569(0, 238, 1);
						unk_0x5D1D27F205B40569(0, 241, 1);
						unk_0x5D1D27F205B40569(0, 242, 1);
						func_328(0, 0, 0, 1);
						func_327(0, -1, 1);
						if (func_326())
						{
							if (Global_2557322 != Local_98.f_12)
							{
								unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								Local_98.f_12 = Global_2557322;
								func_364(Local_98.f_12, 1, 1);
								Local_98.f_27 = 0;
								Local_98.f_29 = 0;
								Local_98.f_30 = 0;
								Local_98.f_32 = 0;
								sVar8 = func_362(Local_98.f_12);
								if (unk_0x33FD8E2E139F4FAC(sVar8))
								{
									func_363(sVar8, 0, 0);
								}
							}
							else
							{
								iVar7 = 1;
							}
						}
					}
				}
				func_332(1, Local_98.f_0, 1, 0, 1, -1082130432, 0, 0);
				func_315();
				if ((Local_149.f_18 > 2 && unk_0xB519E5386FBF69E5(Local_149.f_15, 0)) && unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_3, 0))
				{
					unk_0x73817D396768E4C6(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_3), 0);
				}
				if ((unk_0x958B4351DD28B142(2, 201) || iVar7 == 1) || Local_98.f_47)
				{
					if (!Local_98.f_47)
					{
						Local_98.f_27 = 1;
						Local_98.f_29 = 0;
						Local_98.f_30 = 0;
						Local_98.f_32 = 0;
						func_392(&(Local_98.f_44));
					}
					if ((Local_98.f_28 && Local_98.f_31) && Local_98.f_33)
					{
						if (func_196())
						{
							Local_98.f_47 = 1;
							Local_98.f_48 = 0;
							Local_98.f_49 = -1;
							func_305(&(Local_98.f_49), -1303831698, 537254313, func_369(Local_98.f_12));
							iLocal_97 = 5;
						}
						else
						{
							Local_98.f_35 = 1;
							unk_0xCC18B241D266EF14(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							Local_149.f_64[Local_98.f_12]++;
							iLocal_97 = 6;
						}
					}
					else
					{
						Local_98.f_35 = 0;
						if (!Local_98.f_28 && !Local_98.f_36)
						{
							func_304(unk_0xC7C6DDDE84A8E734(func_362(Local_98.f_12)), func_369(Local_98.f_12), 0);
							func_297(0, 31, 3);
							iLocal_97 = 11;
						}
						unk_0xCC18B241D266EF14(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					if (!Local_98.f_33)
					{
						iLocal_97 = 3;
					}
				}
				if (unk_0x958B4351DD28B142(2, 203) && !Local_98.f_47)
				{
					Local_98.f_27 = 1;
					if (Local_149.f_64[Local_98.f_12] < 10)
					{
						Local_98.f_33 = 1;
					}
					else
					{
						Local_98.f_33 = 0;
					}
					func_392(&(Local_98.f_44));
					if (!Local_98.f_33)
					{
						unk_0xCC18B241D266EF14(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					else if (!Local_98.f_31)
					{
						unk_0xCC18B241D266EF14(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					else
					{
						unk_0xDCF460AE46C9489C(unk_0xE7869D5D7816A9B6(), func_155(), func_296(), 8f, -8f, -1, 1048576, 0, 0, 0, 0);
						iLocal_97 = 8;
						Local_98.f_15 = unk_0x9D40BBF80D8F5E8A();
						unk_0xCC18B241D266EF14(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						func_399();
					}
				}
				if (unk_0x958B4351DD28B142(2, 202) || unk_0xEA7F1ED415FFE2E8(2, 238))
				{
					if (func_442(1))
					{
						func_419();
					}
					iLocal_97 = 9;
					Local_98.f_15 = unk_0x9D40BBF80D8F5E8A();
					unk_0xCC18B241D266EF14(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_399();
				}
				if (Local_98.f_34)
				{
					iLocal_97 = 10;
					Local_98.f_15 = unk_0x9D40BBF80D8F5E8A();
					func_399();
					func_145("SHR_SOLD_OUT", -1);
				}
				iVar11 = 0;
				while (iVar11 < Local_98.f_13)
				{
					if (func_140(&(Global_2457699.f_12[iVar11 /*2*/])) && func_401(Global_2457699.f_12[iVar11 /*2*/], 150000, 0))
					{
						func_13(&(Global_2457699.f_12[iVar11 /*2*/]));
						Local_149.f_64[iVar11] = 0;
						iLocal_97 = 3;
					}
					iVar11++;
				}
				break;
			
			case 5:
				func_332(1, Local_98.f_0, 1, 0, 1, -1082130432, 0, 0);
				if (func_305(&(Local_98.f_49), -1303831698, 537254313, func_369(Local_98.f_12)))
				{
				}
				else
				{
					switch (Local_98.f_49)
					{
						case 0:
							Local_98.f_35 = 0;
							if (!Local_98.f_28 && !Local_98.f_36)
							{
								func_304(unk_0xC7C6DDDE84A8E734(func_362(Local_98.f_12)), func_369(Local_98.f_12), 0);
								func_297(0, 31, 3);
								func_295();
								func_294();
								iLocal_97 = 11;
							}
							else
							{
								if (func_442(1))
								{
									func_419();
								}
								iLocal_97 = 9;
								Local_98.f_15 = unk_0x9D40BBF80D8F5E8A();
								unk_0xCC18B241D266EF14(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
								func_399();
							}
							break;
						
						case 2:
							Local_98.f_35 = 1;
							unk_0xCC18B241D266EF14(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							Local_149.f_64[Local_98.f_12]++;
							iLocal_97 = 6;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 6:
				func_332(1, Local_98.f_0, 1, 0, 1, -1082130432, 0, 0);
				if (func_196())
				{
					unk_0xBC89695E5B42B1B1(func_292(func_293()));
				}
				switch (Local_98.f_12)
				{
					case 3:
						iVar0 = func_369(Local_98.f_12);
						func_104(1265, 1, -1);
						func_103(16, 1, -1, 1);
						unk_0x9CD4EE8D26F8578B(iVar0, unk_0xC7C6DDDE84A8E734("SNK_ITEM1"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 1:
						iVar0 = func_369(Local_98.f_12);
						func_104(1266, 1, -1);
						func_103(15, 1, -1, 1);
						unk_0x9CD4EE8D26F8578B(iVar0, unk_0xC7C6DDDE84A8E734("SNK_ITEM2"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 2:
						iVar0 = func_369(Local_98.f_12);
						func_103(14, 1, -1, 1);
						func_104(1267, 1, -1);
						unk_0x9CD4EE8D26F8578B(iVar0, unk_0xC7C6DDDE84A8E734("SNK_ITEM3"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 4:
						iVar0 = func_369(Local_98.f_12);
						iLocal_148 = 20;
						if (func_123(1087, -1, 0) + 20 > 20)
						{
							iLocal_148 = (20 - func_123(1087, -1, 0));
						}
						func_104(1087, iLocal_148, -1);
						unk_0x9CD4EE8D26F8578B(iVar0, unk_0xC7C6DDDE84A8E734("SNK_ITEM4"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 0:
						iVar0 = func_369(Local_98.f_12);
						func_104(62, 1, -1);
						unk_0x9CD4EE8D26F8578B(iVar0, unk_0xC7C6DDDE84A8E734("SNK_ITEM5"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
					
					case 5:
						iVar0 = func_369(Local_98.f_12);
						func_104(63, 1, -1);
						unk_0x9CD4EE8D26F8578B(iVar0, unk_0xC7C6DDDE84A8E734("SNK_ITEM6"), 12, 1, 0, 0, 0, 0, 0, 1);
						break;
				}
				if (func_196())
				{
					func_190(func_293());
				}
				func_291(-iVar0, 0);
				iLocal_808 = (iLocal_808 + iVar0);
				if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 30))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 30);
				}
				if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_3, 0))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_3), 0);
					Local_222[unk_0xA1238458CB587858() /*10*/].f_4 = Local_98.f_12;
				}
				if (Local_98.f_34 || iLocal_808 >= 1000)
				{
					iLocal_97 = 10;
					func_399();
					func_145("SHR_SOLD_OUT", -1);
				}
				else if (Local_149.f_64[Local_98.f_12] >= 10 || func_370(Local_98.f_12))
				{
					iLocal_97 = 3;
				}
				else
				{
					iLocal_97 = 4;
				}
				break;
			
			case 8:
				func_177(1);
				switch (Local_98.f_12)
				{
					case 3:
						func_289(0, 1f, 3);
						func_104(1265, 1, -1);
						func_103(13, 1, -1, 1);
						break;
					
					case 1:
						func_289(1, 1f, 3);
						func_104(1266, 1, -1);
						func_103(13, 1, -1, 1);
						break;
					
					case 2:
						func_289(2, 1f, 3);
						func_104(1267, 1, -1);
						func_103(13, 1, -1, 1);
						break;
					
					case 4:
						iLocal_148 = 20;
						if (func_123(1087, -1, 0) + 20 > 20)
						{
							iLocal_148 = (20 - func_123(1087, -1, 0));
						}
						func_289(5, unk_0xBBDA792448DB5A89(iLocal_148), 3);
						func_104(1087, iLocal_148, -1);
						break;
					
					case 0:
						func_289(3, 1f, 3);
						func_104(62, 1, -1);
						break;
					
					case 5:
						func_289(4, 1f, 3);
						func_104(63, 1, -1);
						break;
				}
				func_436(unk_0x3F80C6638E3A1A90(), 1, 0);
				if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) < 1 && !func_287(unk_0x3F80C6638E3A1A90()))
				{
					unk_0xABF055A25700D6F5(unk_0x3F80C6638E3A1A90(), 37, unk_0x04468D705BA193E3(1));
					unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 25);
					if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 1))
					{
						unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_1), 2);
					}
				}
				if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_3, 2))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_3), 2);
				}
				iLocal_97 = 12;
				break;
			
			case 11:
				if (!Global_91077.f_1338 && !unk_0x565848B3396785BC())
				{
					iLocal_97 = 4;
				}
				break;
			
			case 10:
				func_436(unk_0x3F80C6638E3A1A90(), 1, 0);
				if ((unk_0x9D40BBF80D8F5E8A() - Local_98.f_15) > 1000)
				{
					iLocal_97 = 12;
				}
				else
				{
					unk_0x9F2D8D5B57CF6622(2, 203);
					unk_0x9F2D8D5B57CF6622(2, 202);
					unk_0x9F2D8D5B57CF6622(2, 188);
					unk_0x9F2D8D5B57CF6622(2, 187);
					unk_0x9F2D8D5B57CF6622(2, 189);
					unk_0x9F2D8D5B57CF6622(2, 190);
				}
				break;
			
			case 9:
				if ((unk_0x9D40BBF80D8F5E8A() - Local_98.f_15) > 1000)
				{
					iLocal_97 = 0;
				}
				else
				{
					unk_0x9F2D8D5B57CF6622(2, 203);
					unk_0x9F2D8D5B57CF6622(2, 202);
					unk_0x9F2D8D5B57CF6622(2, 188);
					unk_0x9F2D8D5B57CF6622(2, 187);
					unk_0x9F2D8D5B57CF6622(2, 189);
					unk_0x9F2D8D5B57CF6622(2, 190);
				}
				break;
			
			case 12:
				if (unk_0xB519E5386FBF69E5(Local_149.f_15, 3))
				{
					if (unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_3, 2))
					{
						unk_0x73817D396768E4C6(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_3), 2);
					}
					if (unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_3, 3))
					{
						unk_0x73817D396768E4C6(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_3), 3);
					}
				}
				break;
		}
	}
	else
	{
		if ((unk_0x9D40BBF80D8F5E8A() % 8000) < 50)
		{
		}
		if (unk_0xB519E5386FBF69E5(Local_149.f_15, 3))
		{
			if (unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_3, 2))
			{
				unk_0x73817D396768E4C6(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_3), 2);
			}
			if (unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_3, 3))
			{
				unk_0x73817D396768E4C6(&(Local_222[unk_0xA1238458CB587858() /*10*/].f_3), 3);
			}
		}
		if ((iLocal_97 != 12 && unk_0xB519E5386FBF69E5(iLocal_543, 26)) && !unk_0x565848B3396785BC())
		{
			if ((((iLocal_97 == 4 || iLocal_97 == 3) || iLocal_97 == 6) || iLocal_97 == 11) || iLocal_97 == 5)
			{
				func_399();
			}
			iLocal_97 = 12;
		}
		if (Local_98.f_14 != -1)
		{
			func_280(&(Local_98.f_14));
		}
	}
}

int func_287(int iParam0)
{
	if ((func_38(iParam0) || func_288(iParam0)) && func_238(func_239(iParam0)) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_288(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xB519E5386FBF69E5(Global_1607618[iVar0 /*106*/].f_1, 7);
	}
	return 0;
}

void func_289(int iParam0, float fParam1, int iParam2)
{
	struct<8> Var0;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	
	if (fParam1 > 0f)
	{
		if (func_290(iParam0, &Var0))
		{
			Var8 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0) };
			func_177(1);
			iVar12 = -1;
			iVar11 = 0;
			while (iVar11 < 20)
			{
				if (Global_2426494.f_741[iVar11 /*29*/].f_6 == 0 || Global_2426494.f_741[iVar11 /*29*/].f_6 == 6)
				{
					iVar12 = iVar11;
					iVar11 = 20;
				}
				iVar11++;
			}
			if (iVar12 != -1)
			{
				Global_2426494.f_741[iVar12 /*29*/] = { Var8 };
				Global_2426494.f_741[iVar12 /*29*/].f_6 = 1;
				Global_2426494.f_741[iVar12 /*29*/].f_4 = func_176(Global_2426494.f_741[iVar12 /*29*/], &Global_1312317, &Global_1312318);
				Global_2426494.f_741[iVar12 /*29*/].f_5 = fParam1;
				Global_2426494.f_741[iVar12 /*29*/].f_7 = unk_0xC7F926248AF8587B();
				Global_2426494.f_741[iVar12 /*29*/].f_8 = iParam2;
				Global_2426494.f_741[iVar12 /*29*/].f_14 = { Var0 };
				Global_2426494.f_741[iVar12 /*29*/].f_9 = func_175();
				Global_2426494.f_741[iVar12 /*29*/].f_10 = func_174();
			}
		}
	}
}

int func_290(int iParam0, char* sParam1)
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

void func_291(int iParam0, int iParam1)
{
	func_185(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_186(iParam0, 0);
	}
}

int func_292(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2553709[iParam0 /*72*/];
	}
	return -1;
}

int func_293()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_292(iVar0) != 2147483647)
		{
			if (func_193(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_294()
{
	Global_2432717.f_657.f_32 = 1;
}

void func_295()
{
	Global_2432717.f_657.f_28 = 1;
	Global_2432717.f_657.f_32 = 0;
	Global_2432717.f_657.f_31 = unk_0xC7C6DDDE84A8E734(unk_0x959E7FA37C0D0892());
	func_13(&(Global_2432717.f_657.f_29));
}

char* func_296()
{
	if (func_12())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_297(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x9E18F97D7FF37418())
	{
		return;
	}
	if (unk_0x00AAD79B42B3E036() && func_301(unk_0x3F80C6638E3A1A90(), 1))
	{
		return;
	}
	if (unk_0x6BBF308E0A0F9AD4(2, 199) || unk_0x2E080842BD1CBD38(2, 199))
	{
		return;
	}
	if (unk_0x9449AC6115443388() != 0)
	{
		return;
	}
	if (unk_0xA57007F9A665F322())
	{
		return;
	}
	if (unk_0x4AEDE2EEB4111EC8())
	{
		return;
	}
	if (unk_0xA42A6C736BEA9778())
	{
		return;
	}
	if (func_300())
	{
		return;
	}
	if (!func_298())
	{
		return;
	}
	if (unk_0x00AAD79B42B3E036() || iParam0)
	{
		if (!Global_91077.f_1338 && !unk_0x565848B3396785BC())
		{
			iVar0 = 18;
			unk_0xDC38CC1E35B6A5D7("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_2441599 = iParam1;
			Global_91077.f_1338 = 1;
			Global_91077.f_1339 = iParam2;
		}
	}
}

int func_298()
{
	if (func_299())
	{
		return 0;
	}
	if (unk_0x472ED84D47326927() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_299()
{
	return Global_2441047;
}

bool func_300()
{
	return Global_2441706;
}

int func_301(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_302(iParam0))
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

bool func_302(int iParam0)
{
	return func_303(iParam0);
}

bool func_303(int iParam0)
{
	return unk_0xB519E5386FBF69E5(Global_1586079[iParam0 /*408*/].f_13.f_1, 0);
}

void func_304(int iParam0, int iParam1, int iParam2)
{
	Global_91077.f_1340 = iParam0;
	Global_91077.f_1341 = iParam1;
	Global_91077.f_1342 = iParam2;
}

int func_305(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char* sVar4;
	
	if (Local_98.f_47)
	{
		switch (Local_98.f_48)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (unk_0xB5991A111ED1D451() > 0)
				{
					if (unk_0xB5991A111ED1D451() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - unk_0xB5991A111ED1D451()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (unk_0x07EE2B2D0517CC52(-1) > 0)
					{
						if (unk_0x07EE2B2D0517CC52(-1) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - unk_0x07EE2B2D0517CC52(-1)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_377(Local_98.f_12);
				func_313(&sVar4, cVar3, func_314());
				if (func_310(78225582, iParam1, unk_0xC7C6DDDE84A8E734(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_308())
					{
						unk_0x42EE43A7FCCF2B38(1);
						unk_0xD4FC686911B09A2F(-iVar0, -iVar1);
						Local_98.f_48 = 1;
					}
					else
					{
						Local_98.f_48 = 3;
					}
				}
				else
				{
					Local_98.f_48 = 3;
				}
				break;
			
			case 1:
				if (func_307(func_293()))
				{
					if (func_306(func_293()) == 2)
					{
						Local_98.f_48 = 2;
					}
					else
					{
						Local_98.f_48 = 3;
					}
				}
				break;
			
			case 2:
				Local_98.f_47 = 0;
				Local_98.f_48 = 0;
				unk_0x42EE43A7FCCF2B38(0);
				unk_0x1B7A773B18DF3DB0(13);
				*uParam0 = 2;
				return 0;
				break;
			
			case 3:
				func_190(func_293());
				Local_98.f_47 = 0;
				Local_98.f_48 = 0;
				unk_0x42EE43A7FCCF2B38(0);
				unk_0x1B7A773B18DF3DB0(13);
				*uParam0 = 0;
				return 0;
				break;
		}
		return 1;
	}
	Local_98.f_48 = 0;
	*uParam0 = -1;
	return 0;
}

int func_306(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2553709[iParam0 /*72*/].f_2;
	}
	return 0;
}

int func_307(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2553709[iParam0 /*72*/].f_2 != 1;
	}
	return 0;
}

int func_308()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (!func_196())
	{
		bVar0 = true;
	}
	iVar1 = func_293();
	if (iVar1 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x31F4FD5D570135A8(func_77()) || unk_0x3F07A2D94C64D156())
		{
			if (func_309(Global_2553709[iVar1 /*72*/].f_6, Global_2553709[iVar1 /*72*/].f_4, Global_2553709[iVar1 /*72*/].f_1) == 1)
			{
				Global_2554188 = 1;
			}
			return 0;
		}
		if (Global_2441706)
		{
			if (Global_2553709[iVar1 /*72*/].f_6 == 1067618600 || Global_2553709[iVar1 /*72*/].f_6 == -1303831698)
			{
				Global_2554189 = 1;
				return 0;
			}
		}
	}
	iVar2 = func_292(iVar1);
	if (iVar2 != 2147483647)
	{
		if (bVar0 || unk_0xC5635F1C24124798(iVar2))
		{
			if (bVar0)
			{
				Global_2553709[iVar1 /*72*/].f_65 = 1;
			}
			Global_2553709[iVar1 /*72*/].f_71 = 0;
			Global_2554185 = 1;
			return 1;
		}
	}
	return 0;
}

int func_309(int iParam0, int iParam1, int iParam2)
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
			case 1048226110:
			case 569170531:
			case -856006867:
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

int func_310(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_196())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x31F4FD5D570135A8(func_77()) || unk_0x3F07A2D94C64D156())
		{
			Global_2554188 = 1;
			return 0;
		}
		if (Global_2441706)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2554189 = 1;
				return 0;
			}
		}
	}
	iVar1 = func_293();
	if (iVar1 == -1)
	{
		if (!func_312(&iVar1, iParam0, iParam1, uParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_311(iParam1))
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
		Global_2553709[iVar1 /*72*/].f_69 = Var2.f_0;
		Global_2553709[iVar1 /*72*/].f_70 = Var2.f_1;
		if (bVar0 || unk_0xA62817E49E1DA8FF(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_311(int iParam0)
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
		case 1906937290:
			return 1;
			break;
	}
	return 0;
}

int func_312(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_196())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x31F4FD5D570135A8(func_77()) || unk_0x3F07A2D94C64D156())
		{
			Global_2554188 = 1;
			return 0;
		}
		if (Global_2441706)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_2554189 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2553709[iVar1 /*72*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_2553709[iVar1 /*72*/].f_5 == 1)
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
	if (!bVar0)
	{
		if (unk_0x8250F07A181F3D9D())
		{
			unk_0x179EDB8174D2ACF9();
		}
	}
	if (bVar0 || unk_0x71FC3CB5E4FD1BA9(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_195(iVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5);
		return 1;
	}
	return 0;
}

void func_313(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_314()
{
	if (iLocal_777 >= 10 && iLocal_777 <= 14)
	{
		return 0;
	}
	else if (iLocal_777 >= 15 && iLocal_777 <= 19)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

void func_315()
{
	char* sVar0;
	
	if (!Local_98.f_29)
	{
	}
	if (func_325())
	{
		Local_98.f_27 = 0;
		func_324(&(Local_98.f_44));
		Local_98.f_12 = (Local_98.f_12 - 1);
		if (Local_98.f_12 < 0)
		{
			Local_98.f_12 = (Local_98.f_13 - 1);
		}
		unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_364(Local_98.f_12, 1, 1);
		sVar0 = func_362(Local_98.f_12);
		Local_98.f_29 = 0;
		Local_98.f_30 = 0;
		Local_98.f_32 = 0;
		if (unk_0x33FD8E2E139F4FAC(sVar0))
		{
			func_363(sVar0, 0, 0);
		}
	}
	if (func_321())
	{
		Local_98.f_27 = 0;
		func_324(&(Local_98.f_44));
		Local_98.f_12++;
		if (Local_98.f_12 > (Local_98.f_13 - 1))
		{
			Local_98.f_12 = 0;
		}
		unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_364(Local_98.f_12, 1, 1);
		sVar0 = func_362(Local_98.f_12);
		Local_98.f_29 = 0;
		Local_98.f_30 = 0;
		Local_98.f_32 = 0;
		if (unk_0x33FD8E2E139F4FAC(sVar0))
		{
			func_363(sVar0, 0, 0);
		}
	}
	if (!Local_98.f_29)
	{
		if (func_320(1) >= func_369(Local_98.f_12))
		{
			if (unk_0x986739A8C7230C77(func_369(Local_98.f_12), 0, 1, 0, -1))
			{
				Local_98.f_28 = 1;
			}
			else
			{
				Local_98.f_28 = 0;
				Local_98.f_36 = 1;
			}
		}
		else
		{
			Local_98.f_28 = 0;
			Local_98.f_36 = 0;
		}
		Local_98.f_29 = 1;
	}
	if (!Local_98.f_30)
	{
		Local_98.f_31 = 1;
		if (Local_98.f_12 == 3)
		{
			Local_98.f_31 = func_123(1265, -1, 0) < 30;
		}
		else if (Local_98.f_12 == 1)
		{
			Local_98.f_31 = func_123(1266, -1, 0) < 15;
		}
		else if (Local_98.f_12 == 2)
		{
			Local_98.f_31 = func_123(1267, -1, 0) < 5;
		}
		else if (Local_98.f_12 == 4)
		{
			Local_98.f_31 = func_123(1087, -1, 0) < 20;
		}
		else if (Local_98.f_12 == 0)
		{
			Local_98.f_31 = func_123(62, -1, 0) < 10;
		}
		else if (Local_98.f_12 == 5)
		{
			Local_98.f_31 = func_123(63, -1, 0) < 10;
		}
		Local_98.f_30 = 1;
	}
	if (!Local_98.f_32)
	{
		if (Local_149.f_64[Local_98.f_12] < 10)
		{
			Local_98.f_33 = 1;
		}
		else
		{
			Local_98.f_33 = 0;
			func_363("SNK_SOUT", 0, 0);
		}
		Local_98.f_32 = 1;
	}
	if (Local_98.f_27)
	{
		if (func_316(&(Local_98.f_44)) < 3f)
		{
			if (Local_98.f_35)
			{
				func_363("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_98.f_28)
			{
				func_363("SNK_AFFORD", 0, 0);
			}
			else if (!Local_98.f_33)
			{
				func_363("SNK_SOUT", 0, 0);
			}
			else if (!Local_98.f_31)
			{
				if (Local_98.f_12 == 3)
				{
					func_363("SNK_SNK1FU", 0, 0);
				}
				else if (Local_98.f_12 == 1)
				{
					func_363("SNK_SNK2FU", 0, 0);
				}
				else if (Local_98.f_12 == 2)
				{
					func_363("SNK_SNK3FU", 0, 0);
				}
				else if (Local_98.f_12 == 4)
				{
					func_363("SNK_SMOKFU", 0, 0);
				}
				else if (Local_98.f_12 == 0)
				{
					func_363("SNK_DRK1FU", 0, 0);
				}
				else if (Local_98.f_12 == 5)
				{
					func_363("SNK_DRK2FU", 0, 0);
				}
				else
				{
					func_363("SNK_NEEDED", 0, 0);
				}
			}
		}
		else
		{
			Local_98.f_27 = 0;
			Local_98.f_35 = 0;
			func_324(&(Local_98.f_44));
			sVar0 = func_362(Local_98.f_12);
			if (unk_0x33FD8E2E139F4FAC(sVar0))
			{
				func_363(sVar0, 0, 0);
			}
		}
	}
}

float func_316(var uParam0)
{
	if (func_319(uParam0))
	{
		if (func_318(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_317(unk_0xB519E5386FBF69E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_317(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) / 1000f);
	}
	if (unk_0x00AAD79B42B3E036())
	{
		iVar0 = unk_0xC7F926248AF8587B();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) / 1000f);
}

bool func_318(var uParam0)
{
	return unk_0xB519E5386FBF69E5(*uParam0, 2);
}

bool func_319(var uParam0)
{
	return unk_0xB519E5386FBF69E5(*uParam0, 1);
}

int func_320(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = unk_0xB5991A111ED1D451();
	}
	iVar0 = (iVar0 + unk_0x07EE2B2D0517CC52(-1));
	return iVar0;
}

int func_321()
{
	float fVar0;
	
	fVar0 = unk_0x61BD13BBFFA4A7AD(2, 219);
	if ((fVar0 > 0.8f || unk_0x6BBF308E0A0F9AD4(2, 187)) || unk_0x958B4351DD28B142(2, 242))
	{
		if (!func_319(&(Local_98.f_41)))
		{
			func_323(&(Local_98.f_41));
			return 1;
		}
		else if (func_322(&(Local_98.f_41)) > 0.25f)
		{
			func_392(&(Local_98.f_41));
			return 1;
		}
	}
	else if (func_319(&(Local_98.f_41)))
	{
		func_324(&(Local_98.f_41));
	}
	return 0;
}

float func_322(var uParam0)
{
	if (func_319(uParam0))
	{
		if (func_318(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_317(unk_0xB519E5386FBF69E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_323(var uParam0)
{
	if (!func_319(uParam0))
	{
		func_392(uParam0);
	}
}

void func_324(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_325()
{
	float fVar0;
	
	fVar0 = unk_0x61BD13BBFFA4A7AD(2, 219);
	if ((fVar0 < -0.8f || unk_0x6BBF308E0A0F9AD4(2, 188)) || unk_0x958B4351DD28B142(2, 241))
	{
		if (!func_319(&(Local_98.f_38)))
		{
			func_323(&(Local_98.f_38));
			return 1;
		}
		else if (func_322(&(Local_98.f_38)) > 0.25f)
		{
			func_392(&(Local_98.f_38));
			return 1;
		}
	}
	else if (func_319(&(Local_98.f_38)))
	{
		func_324(&(Local_98.f_38));
	}
	return 0;
}

int func_326()
{
	if (unk_0x7EDB1AFBE755EC7A(2))
	{
		if (Global_2557322 > -1)
		{
			if (unk_0x958B4351DD28B142(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_327(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x7EDB1AFBE755EC7A(2))
	{
		return 0;
	}
	if (unk_0xA57007F9A665F322() || unk_0xA42A6C736BEA9778())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x422036F797F95CFC();
	}
	if (Global_2557322 == -6)
	{
		unk_0x2BDB7C3D77DB86C4(4);
		if (iParam0 && unk_0x6BBF308E0A0F9AD4(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2557322 = -1;
			return 0;
		}
	}
	if (((Global_2557322 > -1 || Global_2557322 == -3) || Global_2557322 == -2) || unk_0xD0B060C76BDF38BD())
	{
		unk_0x2BDB7C3D77DB86C4(1);
		return 0;
	}
	if (Global_2557322 == -1 && iParam0)
	{
		if (unk_0x6BBF308E0A0F9AD4(2, 237))
		{
			unk_0x2BDB7C3D77DB86C4(4);
			Global_2557322 = -6;
			return 1;
		}
		else
		{
			unk_0x2BDB7C3D77DB86C4(3);
			return 0;
		}
	}
	unk_0x2BDB7C3D77DB86C4(1);
	return 0;
}

void func_328(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!unk_0x7EDB1AFBE755EC7A(2))
	{
		Global_2557322 = -1;
		return;
	}
	unk_0xA0644295A8C137BF(1);
	fVar0 = Global_17254;
	fVar2 = (fVar0 + Global_17256);
	fVar3 = Global_17257.f_5523;
	fVar1 = (Global_17257.f_5523 - (IntToFloat(Global_17257.f_5525) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17257.f_5525 < 1)
	{
		fVar1 = (Global_17257.f_5523 - 0.034722f);
	}
	unk_0x56B79B8AD45389A5(76, 84);
	unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x976D93A25CEA6E3A(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x976D93A25CEA6E3A(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x26FD470559B5674D();
	func_331();
	if (Global_2557322 == -6)
	{
		return;
	}
	Global_2557322 = -1;
	fVar7 = Global_2557316;
	fVar8 = Global_2557317;
	if (Global_17257.f_5526 > Global_17257.f_5525)
	{
		if (((Global_2557316 >= fVar0 && Global_2557316 <= fVar2) && Global_2557317 >= fVar3) && Global_2557317 < (fVar3 + fVar6))
		{
			Global_2557322 = -2;
			if (bParam3)
			{
				func_330(0);
			}
			return;
		}
		if (((Global_2557316 >= fVar0 && Global_2557316 <= fVar2) && Global_2557317 >= (fVar3 + fVar6)) && Global_2557317 < (fVar3 + 0.034722f))
		{
			Global_2557322 = -3;
			if (bParam3)
			{
				func_330(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17257.f_5526 == -1)
		{
			Global_2557322 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17257.f_5525);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x56B79B8AD45389A5(76, 84);
				unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
				func_329(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17256, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x26FD470559B5674D();
			}
		}
		Global_2557322 = Global_17257.f_7402[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2557322 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2557322 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2557322 = -4;
		return;
	}
	Global_2557322 = -1;
}

void func_329(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC3BB3CA17D24E700((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_330(bool bParam0)
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
	fVar0 = Global_17254;
	fVar1 = Global_17257.f_5523;
	unk_0x56B79B8AD45389A5(76, 84);
	unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
	if (Global_2557322 == -2)
	{
		func_329(fVar0, fVar1, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2557322 == -3)
	{
		func_329(fVar0, (fVar1 + fVar2), Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x26FD470559B5674D();
}

void func_331()
{
	Global_2557318 = Global_2557316;
	Global_2557319 = Global_2557317;
	Global_2557316 = unk_0x9CF7E896E5D8A141(2, 239);
	Global_2557317 = unk_0x9CF7E896E5D8A141(2, 240);
	Global_2557320 = (Global_2557316 - Global_2557318);
	Global_2557321 = (Global_2557317 - Global_2557319);
}

void func_332(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	
	if (!func_161(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_359(0, bParam6))
	{
		return;
	}
	unk_0x56B79B8AD45389A5(76, 84);
	unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17257)
	{
		if (func_357(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17257 = 0;
		}
	}
	if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_1)) == unk_0xC7C6DDDE84A8E734("HIDE"))
	{
		fVar56 = Global_17255;
	}
	else
	{
		fVar56 = (((Global_17255 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17256;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		unk_0x177E5285E888D643(&iVar57, &iVar58);
		fVar60 = unk_0x56995B080AF5D7D0(0);
		if (func_356())
		{
			iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) * fVar60));
		}
		fVar61 = (unk_0xBBDA792448DB5A89(iVar57) / unk_0xBBDA792448DB5A89(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (func_356())
		{
			fVar59 = 1f;
		}
		iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar57) / fVar59));
		iVar58 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) / fVar59));
	}
	else
	{
		unk_0xC2E26B11E2BC4A88(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17257.f_5521)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_1)) == unk_0xC7C6DDDE84A8E734("HIDE"))
			{
				fVar49 = Global_17255;
			}
			else
			{
				if (Global_17257)
				{
					unk_0xFE6A5236E50BDF64(func_355(29), func_353(29, 1), (Global_17254 + (fParam5 * 0.5f)), (Global_17255 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17257.f_7746)
				{
					iVar1 = Global_17257.f_7742;
					iVar2 = Global_17257.f_7743;
					iVar3 = Global_17257.f_7744;
					iVar4 = Global_17257.f_7745;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_329(Global_17254, (Global_17255 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17255 + fVar55) + 0.034722f) + 0f);
				if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_1)) != 0)
				{
					func_352();
					unk_0x608B6701BEC4527A(&(Global_17257.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17257.f_68)
					{
						if (Global_17257.f_5[iVar14] == 2)
						{
							unk_0x8D23CF083336DA9B(Global_17257.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17257.f_5[iVar14] == 3)
						{
							unk_0x9EA8AC61C9873436(Global_17257.f_14[iVar16], Global_17257.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17257.f_5[iVar14] == 1)
						{
							unk_0x9359E7CC54335EB9(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 8)
						{
							unk_0x9359E7CC54335EB9(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 5)
						{
							unk_0x63E8D6007C32E426(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 6)
						{
							unk_0x9359E7CC54335EB9(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 7)
						{
							unk_0x63E8D6007C32E426(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x2ED77CF10395403E((Global_17254 + 0.00390625f), ((Global_17255 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17257.f_5524 > Global_17257.f_5031)
				{
					if (Global_17257.f_5527 != 0)
					{
						func_352();
						func_350((((Global_17254 + fParam5) - 0.00390625f) - func_351("CM_ITEM_COUNT", Global_17257.f_5527, Global_17257.f_5526)), ((Global_17255 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17257.f_5527, Global_17257.f_5526);
					}
				}
			}
			iVar6 = Global_17257.f_5528;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17257.f_7756)
			{
				iVar1 = Global_17257.f_7752;
				iVar2 = Global_17257.f_7753;
				iVar3 = Global_17257.f_7754;
				iVar4 = Global_17257.f_7755;
			}
			else
			{
				unk_0xC8FBBC95190691A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17257.f_5031 && iVar6 <= Global_17257.f_5024)
			{
				if (iVar6 >= 0)
				{
					if (Global_17257.f_5287[iVar6])
					{
						if (Global_17257.f_5160[iVar6] && iVar6 != Global_17257.f_5528)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17257.f_5535[iVar6] != 0f)
						{
							fVar54 = Global_17257.f_5535[iVar6];
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
					if (Global_17257.f_5024 <= 1)
					{
						Global_17257.f_5024++;
					}
					iVar52 = 1;
				}
			}
			unk_0xFE6A5236E50BDF64("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17257.f_5524 > Global_17257.f_5031)
			{
				if (Global_17257.f_7761)
				{
					iVar1 = Global_17257.f_7757;
					iVar2 = Global_17257.f_7758;
					iVar3 = Global_17257.f_7759;
					iVar4 = Global_17257.f_7760;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_329(Global_17254, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x8504C7FBA97E6D14("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17257.f_7774)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xC8FBBC95190691A8(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFE6A5236E50BDF64("CommonMenu", "shop_arrows_upANDdown", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar59), ((Var37.f_1 / 720f) * fVar59), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_4500)) != 0 && Global_17257.f_4574 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_17257.f_4576 != 0)
				{
					func_357(Global_17257.f_4576, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_349(fVar41);
				unk_0x4B846CECFAF9AF4D(&(Global_17257.f_4500));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4570)
				{
					if (Global_17257.f_4504[iVar14] == 2)
					{
						unk_0x8D23CF083336DA9B(Global_17257.f_4509[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4504[iVar14] == 3)
					{
						unk_0x9EA8AC61C9873436(Global_17257.f_4513[iVar16], Global_17257.f_4517[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4504[iVar14] == 1)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 5)
					{
						unk_0x63E8D6007C32E426(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 6)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 7)
					{
						unk_0x63E8D6007C32E426(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBEEA466E167943A5(fVar41, (fVar49 + 0.00277776f));
				unk_0xC8FBBC95190691A8(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_329(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7766)
				{
					iVar1 = Global_17257.f_7762;
					iVar2 = Global_17257.f_7763;
					iVar3 = Global_17257.f_7764;
					iVar4 = Global_17257.f_7765;
				}
				else
				{
					unk_0xC8FBBC95190691A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFE6A5236E50BDF64("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_349(fVar41);
				unk_0x608B6701BEC4527A(&(Global_17257.f_4500));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4570)
				{
					if (Global_17257.f_4504[iVar14] == 2)
					{
						unk_0x8D23CF083336DA9B(Global_17257.f_4509[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4504[iVar14] == 3)
					{
						unk_0x9EA8AC61C9873436(Global_17257.f_4513[iVar16], Global_17257.f_4517[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4504[iVar14] == 1)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 5)
					{
						unk_0x63E8D6007C32E426(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 6)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 7)
					{
						unk_0x63E8D6007C32E426(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 8)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x2ED77CF10395403E(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17257.f_4576 != 0)
				{
					func_357(Global_17257.f_4576, 1, 1, &fVar35, &fVar36, bParam7);
					func_348(Global_17257.f_4576, 1, &iVar46, &iVar47, &iVar48);
					unk_0xFE6A5236E50BDF64(func_355(Global_17257.f_4576), func_353(Global_17257.f_4576, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17257.f_4574 > 0)
				{
					if ((unk_0x9D40BBF80D8F5E8A() - Global_17257.f_4575) > Global_17257.f_4574)
					{
						StringCopy(&(Global_17257.f_4500), "", 16);
						Global_17257.f_4574 = -1;
					}
				}
			}
			if (unk_0xC7C6DDDE84A8E734(&(Global_2557246.f_21)) != 0 && Global_2557246.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_2557246.f_67 != 0)
				{
					func_357(Global_2557246.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_349(fVar41);
				unk_0x4B846CECFAF9AF4D(&(Global_2557246.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2557246.f_61)
				{
					if (Global_2557246.f_25[iVar14] == 2)
					{
						unk_0x8D23CF083336DA9B(Global_2557246.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2557246.f_25[iVar14] == 3)
					{
						unk_0x9EA8AC61C9873436(Global_2557246.f_34[iVar16], Global_2557246.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2557246.f_25[iVar14] == 1)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 5)
					{
						unk_0x63E8D6007C32E426(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 6)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 7)
					{
						unk_0x63E8D6007C32E426(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 8)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBEEA466E167943A5(fVar41, (fVar49 + 0.00277776f));
				unk_0xC8FBBC95190691A8(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_329(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7766)
				{
					iVar1 = Global_17257.f_7762;
					iVar2 = Global_17257.f_7763;
					iVar3 = Global_17257.f_7764;
					iVar4 = Global_17257.f_7765;
				}
				else
				{
					unk_0xC8FBBC95190691A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFE6A5236E50BDF64("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_349(fVar41);
				unk_0x608B6701BEC4527A(&(Global_2557246.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2557246.f_61)
				{
					if (Global_2557246.f_25[iVar14] == 2)
					{
						unk_0x8D23CF083336DA9B(Global_2557246.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2557246.f_25[iVar14] == 3)
					{
						unk_0x9EA8AC61C9873436(Global_2557246.f_34[iVar16], Global_2557246.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2557246.f_25[iVar14] == 1)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 8)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 5)
					{
						unk_0x63E8D6007C32E426(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 6)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 7)
					{
						unk_0x63E8D6007C32E426(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x2ED77CF10395403E(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2557246.f_67 != 0)
				{
					func_357(Global_2557246.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_348(Global_2557246.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xFE6A5236E50BDF64(func_355(Global_2557246.f_67), func_353(Global_2557246.f_67, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2557246.f_65 > 0)
				{
					if ((unk_0x9D40BBF80D8F5E8A() - Global_2557246.f_66) > Global_2557246.f_65)
					{
						StringCopy(&(Global_2557246.f_21), "", 16);
						Global_2557246.f_65 = -1;
					}
				}
			}
			func_343(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x56B79B8AD45389A5(76, 84);
			unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17257.f_5521)
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
			iVar63 = Global_17257.f_5024;
			if (Global_17257.f_5522)
			{
				iVar63 = (Global_17257.f_5525 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17257.f_5535[iVar6] != 0f)
				{
					fVar54 = Global_17257.f_5535[iVar6];
				}
				if (Global_17257.f_5522)
				{
					iVar6 = Global_17257.f_7402[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17257.f_5528 && iVar9 < Global_17257.f_5031)
				{
					bVar32 = true;
					if (Global_17257.f_5529 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17257.f_5160[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17257.f_5667[iVar6] = fVar34;
				fVar33 = (Global_17254 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17257.f_5529 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17257.f_7768)
					{
						unk_0xC8FBBC95190691A8(Global_17257.f_7767, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0xC8FBBC95190691A8(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0xFE6A5236E50BDF64("CommonMenu", "Gradient_Nav", (Global_17254 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17257.f_5665 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_341(bVar31, 1, 0, 0, 0, 0);
					unk_0x608B6701BEC4527A("DFLT_MNU_OPT");
					unk_0x2ED77CF10395403E(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17257.f_5032)
					{
						if (unk_0xB519E5386FBF69E5(Global_17257.f_4897[iVar6], iVar8) || Global_17257.f_4864[iVar8] == 5)
						{
							if (Global_17257.f_5522)
							{
								iVar19 = Global_17257.f_7413[((iVar9 * Global_17257.f_5032) + iVar8)];
								iVar20 = Global_17257.f_7454[((iVar9 * Global_17257.f_5032) + iVar8)];
								iVar21 = Global_17257.f_7495[((iVar9 * Global_17257.f_5032) + iVar8)];
								iVar22 = Global_17257.f_7536[((iVar9 * Global_17257.f_5032) + iVar8)];
								iVar23 = Global_17257.f_7577[((iVar9 * Global_17257.f_5032) + iVar8)];
							}
							else
							{
								Global_17257.f_7413[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar19;
								Global_17257.f_7454[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar20;
								Global_17257.f_7495[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar21;
								Global_17257.f_7536[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar22;
								Global_17257.f_7577[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17257.f_5797[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5794[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17257.f_5797[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5794[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17257.f_4870[iVar8] != -1f)
							{
								fVar33 = ((Global_17254 + 0.0046875f) + Global_17257.f_4870[iVar8]);
							}
							if ((iVar8 < 4 && Global_17257.f_4870[iVar8 + 1] != -1f) && fVar33 < Global_17257.f_4870[iVar8 + 1])
							{
								fVar45 = (Global_17257.f_4870[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17254 + Global_17256) - 0.0046875f) - fVar33);
							}
							if ((Global_17257.f_4883[iVar8] && Global_17257.f_5662) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17257.f_4864[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5522)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_341(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, iVar70, bVar50);
												unk_0x2561F357565DEF13(&(Global_17257.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x63E8D6007C32E426(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9359E7CC54335EB9(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x63E8D6007C32E426(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x8D23CF083336DA9B(Global_17257.f_3866[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9EA8AC61C9873436(Global_17257.f_4119[(iVar21 + iVar27)], Global_17257.f_4246[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0x4E53FEE658D9705E(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_357(Global_17257.f_4373[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17257.f_4373[(iVar22 + iVar14)] == 2)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17257.f_4891[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4891[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar41;
											Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar42;
											Global_17257.f_7700[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)];
											fVar42 = Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)];
											fVar43 = Global_17257.f_7700[((iVar9 * Global_17257.f_5032) + iVar8)];
										}
										if (bVar51)
										{
											if (func_357(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4891[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_357(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_348(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_355(26), func_353(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_357(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_357(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_348(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_355(27), func_353(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_341(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, bVar50);
											if (Global_17257.f_7772 && Global_17257.f_7773 == iVar6)
											{
												func_340(bVar31);
											}
											unk_0x608B6701BEC4527A(&(Global_17257.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x63E8D6007C32E426(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9359E7CC54335EB9(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x63E8D6007C32E426(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x8D23CF083336DA9B(Global_17257.f_3866[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9EA8AC61C9873436(Global_17257.f_4119[(iVar21 + iVar27)], Global_17257.f_4246[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17257.f_4373[(iVar22 + iVar28)] == 2)
												{
													if (func_357(Global_17257.f_4373[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_357(Global_17257.f_4373[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_348(Global_17257.f_4373[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4891[iVar8] == 2)
															{
																unk_0xFE6A5236E50BDF64(func_355(Global_17257.f_4373[(iVar22 + iVar28)]), func_353(Global_17257.f_4373[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xFE6A5236E50BDF64(func_355(Global_17257.f_4373[(iVar22 + iVar28)]), func_353(Global_17257.f_4373[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17257.f_4891[iVar8] == 2)
											{
												unk_0x2ED77CF10395403E(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x2ED77CF10395403E((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17257.f_4373[(iVar22 + iVar14)] != 2)
												{
													if (func_357(Global_17257.f_4373[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_357(Global_17257.f_4373[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_348(Global_17257.f_4373[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4373[(iVar22 + iVar14)] == 30)
															{
																unk_0xFE6A5236E50BDF64(func_355(Global_17257.f_4373[(iVar22 + iVar14)]), func_353(Global_17257.f_4373[(iVar22 + iVar14)], bVar31), (Global_17254 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4891[iVar8] == 2)
															{
																unk_0xFE6A5236E50BDF64(func_355(Global_17257.f_4373[(iVar22 + iVar14)]), func_353(Global_17257.f_4373[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xFE6A5236E50BDF64(func_355(Global_17257.f_4373[(iVar22 + iVar14)]), func_353(Global_17257.f_4373[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5522)
										{
											func_341(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7772 && Global_17257.f_7773 == iVar6)
											{
												func_340(bVar31);
											}
											unk_0x2561F357565DEF13("NUMBER");
											unk_0x8D23CF083336DA9B(Global_17257.f_3866[iVar20]);
											fVar42 = unk_0x4E53FEE658D9705E(1);
											fVar41 = 0f;
											if (Global_17257.f_4891[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4891[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar41;
											Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)];
											fVar42 = Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)];
										}
										if (bVar51)
										{
											if (func_357(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4891[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_357(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_348(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_355(26), func_353(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_357(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_357(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_348(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_355(27), func_353(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_341(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, 0);
										func_339((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_3866[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5522)
										{
											func_341(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7772 && Global_17257.f_7773 == iVar6)
											{
												func_340(bVar31);
											}
											unk_0x2561F357565DEF13("NUMBER");
											unk_0x9EA8AC61C9873436(Global_17257.f_4119[iVar21], Global_17257.f_4246[iVar21]);
											fVar42 = unk_0x4E53FEE658D9705E(1);
											fVar41 = 0f;
											if (Global_17257.f_4891[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4891[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar41;
											Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)];
											fVar42 = Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)];
										}
										if (bVar51)
										{
											if (func_357(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4891[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_357(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_348(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_355(26), func_353(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_357(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_357(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_348(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_355(27), func_353(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_341(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, 0);
										func_338((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_4119[iVar21], Global_17257.f_4246[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_357(Global_17257.f_4373[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17257.f_5522)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17257.f_4891[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17257.f_4891[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar41;
												Global_17257.f_7700[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)];
												fVar43 = Global_17257.f_7700[((iVar9 * Global_17257.f_5032) + iVar8)];
											}
											if (bVar51)
											{
												if (func_357(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17257.f_4891[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_357(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_348(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xFE6A5236E50BDF64(func_355(26), func_353(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_357(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_357(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_348(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xFE6A5236E50BDF64(func_355(27), func_353(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_357(Global_17257.f_4373[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_348(Global_17257.f_4373[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xFE6A5236E50BDF64(func_355(Global_17257.f_4373[iVar22]), func_353(Global_17257.f_4373[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_337(Global_17257.f_4373[iVar22])), (fVar36 * func_337(Global_17257.f_4373[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
							if (Global_17257.f_4864[iVar8] == 5)
							{
								if (Global_17257.f_4876[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17257.f_4876[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17257.f_4876[iVar8]);
								if (Global_17257.f_4883[iVar8])
								{
									if (func_357(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17257.f_4876[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17257.f_7402[iVar9] = iVar6;
						Global_17257.f_5530 = iVar6;
						iVar9++;
						if (Global_17257.f_5160[iVar6])
						{
							iVar13++;
						}
						if (Global_17257.f_5535[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17257.f_5535[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17257.f_5521)
					{
						Global_17257.f_5287[iVar6] = 1;
						if (Global_17257.f_5033[iVar6])
						{
							if (bVar31)
							{
								Global_17257.f_5527 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17257.f_5527 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17257.f_5521)
			{
				Global_17257.f_5523 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17257.f_5526 = iVar11;
				Global_17257.f_5524 = iVar10;
				Global_17257.f_5521 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17257.f_5522)
	{
		Global_17257.f_5525 = iVar9;
		Global_17257.f_5522 = 1;
	}
	Global_17257.f_5664 = fVar49;
	Global_17257.f_5666 = unk_0x9D40BBF80D8F5E8A();
	unk_0x74C2382519DF9D92(Global_17257.f_5664);
	if (!Global_17257.f_7741)
	{
		func_334();
	}
	Global_17257.f_7741 = 0;
	if (bParam2)
	{
		unk_0x1B7A773B18DF3DB0(10);
	}
	unk_0x1B7A773B18DF3DB0(6);
	unk_0x1B7A773B18DF3DB0(7);
	unk_0x1B7A773B18DF3DB0(9);
	unk_0x1B7A773B18DF3DB0(8);
	if (bParam0)
	{
		func_333(1);
	}
	unk_0x26FD470559B5674D();
}

void func_333(int iParam0)
{
	Global_1339895.f_932 = iParam0;
}

void func_334()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_284(0))
		{
			func_335(0);
		}
		unk_0x9956FB0E4B50ECB8(&Global_2284, 2);
	}
}

void func_335(int iParam0)
{
	if (Global_14571)
	{
		func_336(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
	}
	if (unk_0xD6F17BA188A65E8F())
	{
		unk_0xDA09A6E60FE9645E(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 30);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 30);
	}
	if (!func_256())
	{
		Global_14413.f_1 = 3;
	}
}

void func_336(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_284(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x2EA67F1118848733(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xD61764696C2259C9(Global_14350);
		}
		else
		{
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
}

float func_337(int iParam0)
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

void func_338(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x608B6701BEC4527A(sParam2);
	unk_0x9EA8AC61C9873436(uParam3, uParam4);
	unk_0x2ED77CF10395403E(fParam0, fParam1, 0);
}

void func_339(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x608B6701BEC4527A(sParam2);
	unk_0x8D23CF083336DA9B(iParam3);
	unk_0x2ED77CF10395403E(fParam0, fParam1, iParam4);
}

void func_340(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xC8FBBC95190691A8(Global_17257.f_7769[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xC8FBBC95190691A8(Global_17257.f_7769[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, 255);
}

void func_341(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_342(Global_17257.f_5797[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xC8FBBC95190691A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xC8FBBC95190691A8(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xC8FBBC95190691A8(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x63EBA277B22A4C2D(155, 155, 155, 255);
		}
		else
		{
			unk_0x63EBA277B22A4C2D(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x63EBA277B22A4C2D(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xC8FBBC95190691A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x63EBA277B22A4C2D(155, 155, 155, 255);
	}
	else
	{
		unk_0x63EBA277B22A4C2D(155, 155, 155, 255);
	}
	unk_0x1C00A83A6321F5E9(0f, 0.35f);
	unk_0xD1AB173831A6CDE6(1);
	if (bParam5)
	{
		unk_0x1C00A83A6321F5E9(0f, 0.425f);
		unk_0x2626D8742682C5ED(4);
	}
	else
	{
		unk_0x2626D8742682C5ED(0);
	}
	unk_0xE2458E4F6B499A9C(0f, 1f);
	unk_0x9A4139952357487D(0);
	unk_0x9806DF8CF9239C35(0, 0, 0, 0, 0);
	unk_0x872BE36490E5119C(0, 0, 0, 0, 0);
}

void func_342(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_343(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_161(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_359(bParam4, bParam8))
	{
		return;
	}
	if (func_346())
	{
		return;
	}
	if (unk_0x29C4AA4F29B1E539())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_204(unk_0x3F80C6638E3A1A90(), 0))
		{
			return;
		}
	}
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0x4C0203C9C5CF4108() == 0 || unk_0x29C4AA4F29B1E539())
		{
			return;
		}
	}
	if (Global_17257.f_4577 != 0)
	{
		if (unk_0x2C46E805556A1F00(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4577)
			{
				if (Global_17257.f_4834[iVar1] != 344)
				{
					StringCopy(&(Global_17257.f_4579[iVar1 /*16*/]), unk_0xE77F6122F2596EB4(2, Global_17257.f_4834[iVar1], 1), 64);
				}
				else if (Global_17257.f_4847[iVar1] != 32)
				{
					StringCopy(&(Global_17257.f_4579[iVar1 /*16*/]), unk_0xA2A8F65D8724B71E(2, Global_17257.f_4847[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17257.f_4578 = 0;
		}
		if (!Global_17257.f_4578)
		{
			unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xFF141057ED7B4C73();
			unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x73B039A1CD485226((1f - (Global_17257.f_4889 / 100f)));
			unk_0xFF141057ED7B4C73();
			if (unk_0xA78EA29AC2FFBADE())
			{
				unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x840DDAF1126AE0CC(1);
				unk_0xFF141057ED7B4C73();
			}
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4577)
			{
				if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_4772[iVar1 /*4*/])) != unk_0xC7C6DDDE84A8E734("PREV"))
				{
					unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x43C93E686A1E92C5(iVar1);
					func_345(&(Global_17257.f_4579[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xC7C6DDDE84A8E734(&(Global_17257.f_4772[iVar2 /*4*/])) == unk_0xC7C6DDDE84A8E734("PREV"))
					{
						func_345(&(Global_17257.f_4579[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4821[iVar1] == -1)
					{
						func_344(&(Global_17257.f_4772[iVar1 /*4*/]));
					}
					else
					{
						unk_0x33D37B75FC2BCC8C(&(Global_17257.f_4772[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x96629435C64EFDA2(iParam2, 70);
						}
						else
						{
							unk_0x8D23CF083336DA9B(iParam2);
						}
						unk_0x057886C01DDC535D();
					}
					if (unk_0xA78EA29AC2FFBADE())
					{
						if (Global_17257.f_4834[iVar1] != 344 && unk_0xB519E5386FBF69E5(Global_17257.f_4860, iVar1))
						{
							unk_0x840DDAF1126AE0CC(1);
							unk_0x43C93E686A1E92C5(Global_17257.f_4834[iVar1]);
						}
						else
						{
							unk_0x840DDAF1126AE0CC(0);
							unk_0x43C93E686A1E92C5(344);
						}
					}
					unk_0xFF141057ED7B4C73();
				}
				iVar1++;
			}
			if (unk_0xC7C6DDDE84A8E734(&(Global_2557246.f_16)) != unk_0xC7C6DDDE84A8E734(""))
			{
				unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x43C93E686A1E92C5(Global_17257.f_4577);
				func_345(&Global_2557246);
				if (Global_2557246.f_20 == -1)
				{
					func_344(&(Global_2557246.f_16));
				}
				else
				{
					unk_0x33D37B75FC2BCC8C(&(Global_2557246.f_16));
					if (bParam5)
					{
						unk_0x96629435C64EFDA2(iParam2, 70);
					}
					else
					{
						unk_0x8D23CF083336DA9B(iParam2);
					}
					unk_0x057886C01DDC535D();
				}
				unk_0xFF141057ED7B4C73();
			}
			unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x43C93E686A1E92C5(0);
			unk_0x43C93E686A1E92C5(0);
			unk_0x43C93E686A1E92C5(0);
			unk_0x43C93E686A1E92C5(80);
			unk_0xFF141057ED7B4C73();
			unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17257.f_4890)
			{
				unk_0x43C93E686A1E92C5(1);
			}
			else
			{
				unk_0x43C93E686A1E92C5(0);
			}
			unk_0xFF141057ED7B4C73();
			Global_17257.f_4578 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17257.f_4577)
		{
			if (Global_17257.f_4821[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x43C93E686A1E92C5(iVar1);
					unk_0x33D37B75FC2BCC8C(&(Global_17257.f_4772[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x96629435C64EFDA2(iParam2, 70);
					}
					else
					{
						unk_0x8D23CF083336DA9B(iParam2);
					}
					unk_0x057886C01DDC535D();
					unk_0xFF141057ED7B4C73();
				}
			}
			iVar1++;
		}
		if (Global_2557246.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x43C93E686A1E92C5(iVar1);
				unk_0x33D37B75FC2BCC8C(&(Global_2557246.f_16));
				if (bParam5)
				{
					unk_0x96629435C64EFDA2(iParam2, 70);
				}
				else
				{
					unk_0x8D23CF083336DA9B(iParam2);
				}
				unk_0x057886C01DDC535D();
				unk_0xFF141057ED7B4C73();
			}
		}
		unk_0x56B79B8AD45389A5(76, 66);
		unk_0xC49724172A0D506C(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17257.f_7776)
			{
				unk_0xA2DDC75885378542(15, 0f, -0.0375f);
				Global_17257.f_7776 = 1;
			}
		}
		else if (Global_17257.f_7776)
		{
			unk_0x4A819C86009EE6EC(15);
			Global_17257.f_7776 = 0;
		}
		unk_0x26FD470559B5674D();
		if (Global_17257.f_4863)
		{
			unk_0x56B79B8AD45389A5(82, 66);
			unk_0xC49724172A0D506C(0f, 0f, 0f, 0f);
			unk_0xAF5B7C9C0A5116E9(Global_17257.f_5453[iVar0 /*10*/], Global_17257.f_4861, Global_17257.f_4862, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x26FD470559B5674D();
		}
		else
		{
			unk_0xE2B331FD5EEF4684(Global_17257.f_5453[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_344(var uParam0)
{
	unk_0x33D37B75FC2BCC8C(uParam0);
	unk_0x057886C01DDC535D();
}

void func_345(var uParam0)
{
	unk_0x492B9DC2AF02FDDF(uParam0);
}

int func_346()
{
	struct<3> Var0;
	
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	if (func_347())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x2EA67F1118848733(&Var0);
		if (Global_14358 == 0)
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

int func_347()
{
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_348(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0xC8FBBC95190691A8(1, iParam2, iParam3, iParam4, &uVar0);
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
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_349(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xC8FBBC95190691A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x2626D8742682C5ED(0);
	unk_0x1C00A83A6321F5E9(0f, 0.35f);
	unk_0xBAD855016DFBE4C3(2);
	unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, iVar3);
	unk_0xE2458E4F6B499A9C(fParam0, ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0x9A4139952357487D(0);
	unk_0x9806DF8CF9239C35(0, 0, 0, 0, 0);
	unk_0x872BE36490E5119C(0, 0, 0, 0, 0);
}

void func_350(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x608B6701BEC4527A(sParam2);
	unk_0x8D23CF083336DA9B(uParam3);
	unk_0x8D23CF083336DA9B(uParam4);
	unk_0x2ED77CF10395403E(fParam0, fParam1, 0);
}

float func_351(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x356491C12DAD1A37(sParam0))
	{
		if (unk_0xC7C6DDDE84A8E734(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_352();
	unk_0x2561F357565DEF13(sParam0);
	unk_0x8D23CF083336DA9B(uParam1);
	unk_0x8D23CF083336DA9B(uParam2);
	return unk_0x4E53FEE658D9705E(1);
}

void func_352()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xC8FBBC95190691A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17257.f_7751)
	{
		iVar0 = Global_17257.f_7747;
		iVar1 = Global_17257.f_7748;
		iVar2 = Global_17257.f_7749;
		iVar3 = Global_17257.f_7750;
	}
	unk_0x2626D8742682C5ED(0);
	unk_0x1C00A83A6321F5E9(0f, 0.35f);
	unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, iVar3);
	unk_0xE2458E4F6B499A9C((Global_17254 + 0.0046875f), ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0x9A4139952357487D(0);
	unk_0x9806DF8CF9239C35(0, 0, 0, 0, 0);
	unk_0x872BE36490E5119C(0, 0, 0, 0, 0);
}

var func_353(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0xF6917DE0E003509D(&(Global_17257.f_6601[iParam0 /*16*/])))
	{
		return func_354(&(Global_17257.f_6601[iParam0 /*16*/]));
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
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
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

var func_354(var uParam0)
{
	return uParam0;
}

char* func_355(int iParam0)
{
	if (!unk_0xF6917DE0E003509D(&(Global_17257.f_5800[iParam0 /*16*/])))
	{
		return func_354(&(Global_17257.f_5800[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_356()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x177E5285E888D643(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_357(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_355(iParam0);
	sVar1 = func_353(iParam0, bParam1);
	if (unk_0xC7C6DDDE84A8E734(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x177E5285E888D643(&iVar2, &iVar3);
			fVar5 = unk_0x56995B080AF5D7D0(0);
			if (func_356())
			{
				iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar5));
			}
			fVar6 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_356())
			{
				fVar4 = 1f;
			}
			if (unk_0xFF6891E21E7FC193(joaat("director_mode")) > 0)
			{
				unk_0xC2E26B11E2BC4A88(&iVar2, &iVar3);
			}
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0xC2E26B11E2BC4A88(&iVar2, &iVar3);
		}
		Var7 = { unk_0x8504C7FBA97E6D14(uVar0, sVar1) };
		Var7.f_0 = (Var7.f_0 * (func_358(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_358(iParam0) / fVar4));
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
			if (!unk_0x51807A4D76E3D4F4() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17256)
			{
				*fParam4 = (*fParam4 * (Global_17256 / *fParam3));
				*fParam3 = Global_17256;
			}
		}
		return 1;
	}
	return 0;
}

float func_358(int iParam0)
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
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_359(bool bParam0, bool bParam1)
{
	if (Global_2426494.f_1325.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xDE185266FE919B68() || (func_265(8, -1) && func_360() != 64)) || (unk_0x9449AC6115443388() != 0 && !bParam1)) || (unk_0xF478777FFCC96862() && !bParam0)) || unk_0x565848B3396785BC()) || Global_69496) || Global_17257.f_7775) || unk_0xA42A6C736BEA9778()) || Global_91077.f_1338)
	{
		return 0;
	}
	return 1;
}

int func_360()
{
	return Global_1315842;
}

void func_361(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xE77F6122F2596EB4(2, iParam0, 1);
	if (Global_17257.f_4577 >= 12)
	{
		StringCopy(&Global_2557246, sVar0, 64);
		StringCopy(&(Global_2557246.f_16), sParam1, 16);
		Global_2557246.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_17257.f_4860), Global_17257.f_4577);
	}
	StringCopy(&(Global_17257.f_4579[Global_17257.f_4577 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4772[Global_17257.f_4577 /*4*/]), sParam1, 16);
	Global_17257.f_4821[Global_17257.f_4577] = iParam2;
	Global_17257.f_4834[Global_17257.f_4577] = iParam0;
	Global_17257.f_4847[Global_17257.f_4577] = 32;
	Global_17257.f_4577++;
}

char* func_362(int iParam0)
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

void func_363(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_4500), sParam0, 16);
	Global_17257.f_4570 = 0;
	Global_17257.f_4571 = 0;
	Global_17257.f_4572 = 0;
	Global_17257.f_4573 = 0;
	Global_17257.f_4574 = iParam1;
	Global_17257.f_4575 = unk_0x9D40BBF80D8F5E8A();
	Global_17257.f_4576 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4504[iVar0] = 0;
		iVar0++;
	}
}

void func_364(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17257.f_5529 = uParam0;
	Global_17257.f_5662 = iParam2;
	if (Global_17257.f_5529 < Global_17257.f_5528)
	{
		Global_17257.f_5528 = Global_17257.f_5529;
	}
	else if ((Global_17257.f_5522 && Global_17257.f_5529 > Global_17257.f_5530) || (!Global_17257.f_5522 && Global_17257.f_5529 >= (Global_17257.f_5528 + Global_17257.f_5031)))
	{
		iVar0 = Global_17257.f_5528;
		while (iVar0 <= Global_17257.f_5529)
		{
			if (iVar0 >= 0 && iVar0 < 125)
			{
				if (Global_17257.f_4897[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17257.f_5031 && Global_17257.f_5528 < 126)
		{
			Global_17257.f_5528++;
			iVar1 = 0;
			iVar0 = Global_17257.f_5528;
			while (iVar0 <= Global_17257.f_5529)
			{
				if (iVar0 >= 0 && iVar0 < 125)
				{
					if (Global_17257.f_4897[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17257.f_5521 = 0;
	Global_17257.f_5522 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17257.f_4500), "", 16);
		StringCopy(&(Global_2557246.f_21), "", 16);
	}
}

void func_365(int iParam0)
{
	Global_17257.f_5528 = iParam0;
}

void func_366(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17257.f_5028 >= 252)
	{
		return;
	}
	if (Global_17257.f_5533 >= 4)
	{
		return;
	}
	if (Global_17257.f_5534 != 1)
	{
		return;
	}
	if (Global_17257.f_5533 >= Global_17257.f_5531)
	{
		return;
	}
	Global_17257.f_3866[Global_17257.f_5028] = uParam0;
	Global_17257.f_5028++;
	Global_17257.f_2092[Global_17257.f_5532 /*5*/][Global_17257.f_5533] = 2;
	Global_17257.f_5533++;
	if (Global_17257.f_5533 >= Global_17257.f_5531)
	{
		fVar0 = func_368();
		if (Global_17257.f_4883[Global_17257.f_5025] && Global_17257.f_5533 == Global_17257.f_5531)
		{
			func_357(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17257.f_4876[(Global_17257.f_5025 - 1)])
		{
			Global_17257.f_4876[(Global_17257.f_5025 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17257.f_5533 >= Global_17257.f_5531)
		{
			fVar3 = func_367();
			if (fVar3 > Global_17257.f_5535[Global_17257.f_5024])
			{
				Global_17257.f_5535[Global_17257.f_5024] = fVar3;
			}
		}
	}
}

float func_367()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17257.f_5533)
	{
		if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17257.f_4373[((Global_17257.f_5030 - iVar1) + iVar0)] != 0)
		{
			if (func_357(Global_17257.f_4373[((Global_17257.f_5030 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x75D27F83672CDCB0(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x75D27F83672CDCB0(0.35f, 0);
}

float func_368()
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
	while (iVar7 < Global_17257.f_5533)
	{
		if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_341(0, 1, 0, 0, 0, iVar6 > 0);
	if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
	{
		unk_0x2561F357565DEF13(&(Global_17257.f_73[Global_17257.f_5532 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5533)
	{
		if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(Global_17257.f_5532 + iVar8) /*6*/]));
			}
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(Global_17257.f_5532 + iVar8) /*6*/]));
			}
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 2)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x8D23CF083336DA9B(Global_17257.f_3866[((Global_17257.f_5028 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 3)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x9EA8AC61C9873436(Global_17257.f_4119[((Global_17257.f_5029 - iVar4) + iVar10)], Global_17257.f_4246[((Global_17257.f_5029 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 5)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x63E8D6007C32E426(&(Global_2441085[((Global_17257.f_5027 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 6)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x9359E7CC54335EB9(&(Global_2441085[((Global_17257.f_5027 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 7)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x63E8D6007C32E426(&(Global_2441085[((Global_17257.f_5027 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
	{
		fVar0 = unk_0x4E53FEE658D9705E(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17257.f_4373[((Global_17257.f_5030 - iVar5) + iVar7)] != 0)
		{
			func_357(Global_17257.f_4373[((Global_17257.f_5030 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_369(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (func_314())
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

int func_370(int iParam0)
{
	if (func_123(func_372(iParam0), -1, 0) >= func_371(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_371(var uParam0)
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

int func_372(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 1265;
		
		case 1:
			return 1266;
		
		case 2:
			return 1267;
		
		case 4:
			return 1087;
		
		case 0:
			return 62;
		
		case 5:
			return 63;
		
		default:
	}
	return 3717;
}

void func_373(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17257.f_5030 >= 126)
	{
		return;
	}
	if (Global_17257.f_5533 >= 4)
	{
		return;
	}
	if (Global_17257.f_5534 != 1)
	{
		return;
	}
	if (Global_17257.f_5533 >= Global_17257.f_5531)
	{
		return;
	}
	Global_17257.f_4373[Global_17257.f_5030] = iParam0;
	Global_17257.f_5030++;
	Global_17257.f_2092[Global_17257.f_5532 /*5*/][Global_17257.f_5533] = 4;
	Global_17257.f_5533++;
	if (Global_17257.f_5533 >= Global_17257.f_5531)
	{
		fVar0 = func_368();
		if (Global_17257.f_4883[Global_17257.f_5025] && Global_17257.f_5533 == Global_17257.f_5531)
		{
			func_357(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17257.f_4876[(Global_17257.f_5025 - 1)])
		{
			Global_17257.f_4876[(Global_17257.f_5025 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17257.f_5533 >= Global_17257.f_5531)
		{
			fVar3 = func_367();
			if (fVar3 > Global_17257.f_5535[Global_17257.f_5024])
			{
				Global_17257.f_5535[Global_17257.f_5024] = fVar3;
			}
		}
	}
}

void func_374(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17257.f_5024 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5024 >= 126)
	{
		return;
	}
	if (Global_17257.f_5026 >= 252)
	{
		return;
	}
	if (Global_17257.f_5533 < Global_17257.f_5531)
	{
		return;
	}
	if (Global_17257.f_5024 != iParam0)
	{
		Global_17257.f_5024 = iParam0;
		Global_17257.f_5025 = 0;
	}
	iVar0 = Global_17257.f_4864[Global_17257.f_5025];
	if (iVar0 != 1)
	{
		while (Global_17257.f_5025 < 4 && iVar0 != 1)
		{
			Global_17257.f_5025++;
			iVar0 = Global_17257.f_4864[Global_17257.f_5025];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5026 /*6*/]), sParam1, 24);
	if (!unk_0xF6917DE0E003509D(sParam1) && !unk_0x33FD8E2E139F4FAC(sParam1))
	{
	}
	Global_17257.f_1586[Global_17257.f_5026] = iParam3;
	Global_17257.f_1839[Global_17257.f_5026] = iParam4;
	Global_17257.f_5026++;
	if (iParam2 == 0)
	{
		fVar1 = func_376(&(Global_17257.f_73[Global_17257.f_5026 /*6*/]));
		if (Global_17257.f_4883[Global_17257.f_5025])
		{
			func_357(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17257.f_4876[Global_17257.f_5025])
		{
			Global_17257.f_4876[Global_17257.f_5025] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_375(&(Global_17257.f_73[Global_17257.f_5026 /*6*/]));
			if (fVar4 > Global_17257.f_5535[iParam0])
			{
				Global_17257.f_5535[iParam0] = fVar4;
			}
		}
	}
	unk_0x9956FB0E4B50ECB8(&(Global_17257.f_4897[iParam0]), Global_17257.f_5025);
	Global_17257.f_5025++;
	Global_17257.f_5534 = 1;
	Global_17257.f_5532 = (Global_17257.f_5026 - 1);
	Global_17257.f_5533 = 0;
	Global_17257.f_5531 = iParam2;
}

float func_375(char* sParam0)
{
	if (!unk_0x33FD8E2E139F4FAC(sParam0))
	{
	}
	return unk_0x75D27F83672CDCB0(0.35f, 0);
}

float func_376(char* sParam0)
{
	if (!unk_0x356491C12DAD1A37(sParam0))
	{
		if (unk_0xC7C6DDDE84A8E734(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_341(0, 1, 0, 0, 0, 0);
	unk_0x2561F357565DEF13(sParam0);
	return unk_0x4E53FEE658D9705E(1);
}

char* func_377(int iParam0)
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

void func_378(int iParam0, char* sParam1, char* sParam2)
{
	Global_17257 = iParam0;
	func_379(29, sParam1, sParam2);
}

void func_379(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17257.f_5800[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17257.f_6601[iParam0 /*16*/]), sParam2, 64);
}

void func_380(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_1), sParam0, 16);
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_381(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4891[0] = iParam0;
	Global_17257.f_4891[1] = iParam1;
	Global_17257.f_4891[2] = iParam2;
	Global_17257.f_4891[3] = iParam3;
	Global_17257.f_4891[4] = iParam4;
}

void func_382(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4864[0] = iParam0;
	Global_17257.f_4864[1] = iParam1;
	Global_17257.f_4864[2] = iParam2;
	Global_17257.f_4864[3] = iParam3;
	Global_17257.f_4864[4] = iParam4;
	Global_17257.f_5032 = 0;
	if (iParam0 != 0)
	{
		Global_17257.f_5032++;
	}
	if (iParam1 != 0)
	{
		Global_17257.f_5032++;
	}
	if (iParam2 != 0)
	{
		Global_17257.f_5032++;
	}
	if (iParam3 != 0)
	{
		Global_17257.f_5032++;
	}
	if (iParam4 != 0)
	{
		Global_17257.f_5032++;
	}
}

void func_383(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 252)
	{
		StringCopy(&(Global_17257.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17257.f_2092[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2441085[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 252)
	{
		Global_17257.f_3866[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 126)
	{
		Global_17257.f_4119[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 126)
	{
		Global_17257.f_4373[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 126)
	{
		Global_17257.f_4897[iVar0] = 0;
		Global_17257.f_5033[iVar0] = 0;
		Global_17257.f_5160[iVar0] = 0;
		Global_17257.f_5667[iVar0] = 0f;
		Global_17257.f_5287[iVar0] = 0;
		Global_17257.f_5535[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17257.f_4864[iVar0] = 0;
		Global_17257.f_4876[iVar0] = 0f;
		Global_17257.f_4870[iVar0] = -1f;
		Global_17257.f_4883[iVar0] = 0;
		Global_17257.f_4891[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4772[iVar0 /*4*/]), "", 16);
		Global_17257.f_4821[iVar0] = -1;
		Global_17257.f_4834[iVar0] = 344;
		Global_17257.f_4847[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_17257.f_5800[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17257.f_6601[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2557246.f_16), "", 16);
	Global_2557246.f_20 = -1;
	Global_17257 = 0;
	Global_17257.f_5024 = 0;
	Global_17257.f_5025 = 0;
	Global_17257.f_5026 = 0;
	Global_17257.f_5028 = 0;
	Global_17257.f_5029 = 0;
	Global_17257.f_5030 = 0;
	Global_17257.f_5027 = 0;
	Global_17257.f_5662 = 0;
	Global_17257.f_5529 = 0;
	Global_17257.f_5528 = 0;
	Global_17257.f_5530 = 0;
	StringCopy(&(Global_17257.f_4500), "", 16);
	Global_17257.f_4570 = 0;
	Global_17257.f_4571 = 0;
	Global_17257.f_4572 = 0;
	Global_17257.f_4573 = 0;
	Global_17257.f_4574 = 0;
	Global_17257.f_4575 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4504[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_4576 = 0;
	StringCopy(&(Global_2557246.f_21), "", 16);
	Global_2557246.f_61 = 0;
	Global_2557246.f_62 = 0;
	Global_2557246.f_63 = 0;
	Global_2557246.f_64 = 0;
	Global_2557246.f_65 = 0;
	Global_2557246.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2557246.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2557246.f_67 = 0;
	StringCopy(&(Global_17257.f_1), "", 16);
	Global_17257.f_4882 = 0f;
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_5534 = 0;
	Global_17257.f_5533 = 0;
	Global_17257.f_5531 = 0;
	Global_17257.f_5532 = 0;
	Global_17257.f_4577 = 0;
	Global_17257.f_4578 = 0;
	Global_17257.f_5031 = 10;
	Global_17257.f_5032 = 0;
	Global_17257.f_5664 = 0f;
	Global_17257.f_5665 = 0f;
	Global_17257.f_5521 = 0;
	Global_17257.f_5522 = 0;
	Global_17257.f_5523 = 0f;
	Global_17257.f_5524 = 0;
	Global_17257.f_5526 = 0;
	Global_17257.f_5525 = 0;
	Global_17257.f_5527 = 0;
	Global_17257.f_7772 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17257.f_5794[iVar0] = -1;
		Global_17257.f_5797[iVar0] = -1;
		iVar0++;
	}
	Global_17257.f_4889 = 0f;
	Global_17257.f_4860 = 0;
	Global_17257.f_4890 = 0;
	Global_17257.f_7751 = 0;
	Global_17257.f_7746 = 0;
	Global_17257.f_7756 = 0;
	Global_17257.f_7761 = 0;
	Global_17257.f_7766 = 0;
	Global_17257.f_7768 = 0;
	Global_17257.f_7774 = 0;
	Global_17254 = 0.05f;
	Global_17255 = 0.05f;
	Global_17256 = 0.225f;
	fVar2 = unk_0x56995B080AF5D7D0(0);
	if (bParam0)
	{
		Global_17256 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17256 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17256 = 0.225f;
	}
}

int func_384(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	float fVar3;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = { unk_0xF919633EBD0639D0(-706.6382f, -913.6887f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 1:
			*uParam1 = { unk_0xF919633EBD0639D0(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 2:
			*uParam1 = { unk_0xF919633EBD0639D0(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 3:
			*uParam1 = { unk_0xF919633EBD0639D0(1698.307f, 4923.371f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 4:
			*uParam1 = { unk_0xF919633EBD0639D0(-1820.465f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 5:
			Var0 = { 1165.958f, 2710.201f, 38.14286f };
			fVar3 = -1.15f;
			*uParam1 = { unk_0xF919633EBD0639D0(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			Var0 = { -2967.027f, 390.9038f, 15.02f };
			fVar3 = -94.76f;
			*uParam1 = { unk_0xF919633EBD0639D0(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			Var0 = { -1222.331f, -907.8234f, 12.31f };
			fVar3 = -147.297f;
			*uParam1 = { unk_0xF919633EBD0639D0(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			Var0 = { 1134.811f, -982.3615f, 46.4f };
			fVar3 = 96.68562f;
			*uParam1 = { unk_0xF919633EBD0639D0(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			Var0 = { -1486.673f, -378.4638f, 40.15f };
			fVar3 = -46.229f;
			*uParam1 = { unk_0xF919633EBD0639D0(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			Var0 = { -3244.573f, 1000.658f, 12.83f };
			fVar3 = 175.074f;
			*uParam1 = { unk_0xF919633EBD0639D0(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			Var0 = { -3041.357f, 584.2665f, 7.9f };
			fVar3 = -162.241f;
			*uParam1 = { unk_0xF919633EBD0639D0(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			Var0 = { 548.9015f, 2668.941f, 42.15f };
			fVar3 = -82.5f;
			*uParam1 = { unk_0xF919633EBD0639D0(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			Var0 = { 2554.875f, 381.3857f, 108.62f };
			fVar3 = 177.716f;
			*uParam1 = { unk_0xF919633EBD0639D0(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			Var0 = { 2676.212f, 3280.969f, 55.24f };
			fVar3 = 150.87f;
			*uParam1 = { unk_0xF919633EBD0639D0(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			Var0 = { 1729.329f, 6417.123f, 35.03f };
			fVar3 = 63.641f;
			*uParam1 = { unk_0xF919633EBD0639D0(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			Var0 = { 1959.323f, 3742.29f, 32.34f };
			fVar3 = 120f;
			*uParam1 = { unk_0xF919633EBD0639D0(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			Var0 = { 24.94562f, -1344.954f, 29.49f };
			fVar3 = 90f;
			*uParam1 = { unk_0xF919633EBD0639D0(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			Var0 = { 373.5954f, 328.5892f, 103.56f };
			fVar3 = 75.885f;
			*uParam1 = { unk_0xF919633EBD0639D0(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
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

void func_385()
{
	if (unk_0xA78EA29AC2FFBADE())
	{
		unk_0x57DCE283775C55C6(0.325f, 0.3f);
	}
}

void func_386(int iParam0, int iParam1)
{
	if (!func_301(unk_0x3F80C6638E3A1A90(), 1) || iParam1)
	{
		if (!func_391())
		{
			Global_1312416.f_1 = 1;
			if (iParam0 == 1)
			{
				Global_1312416.f_2 = 1;
			}
			func_387();
		}
	}
}

void func_387()
{
	if (!func_391())
	{
		Global_1312416 = 1;
		func_390();
		if (((!unk_0x6B042133C9334B77() && !func_389()) && !func_388(unk_0x3F80C6638E3A1A90())) && !func_135(unk_0x3F80C6638E3A1A90()))
		{
			Global_976339 = 1;
		}
		Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_7 = 1;
	}
}

int func_388(int iParam0)
{
	if (func_301(iParam0, 1))
	{
		if (Global_1586079[iParam0 /*408*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_389()
{
	return Global_2432717.f_712;
}

void func_390()
{
	if (unk_0x00AAD79B42B3E036())
	{
		if (!func_391())
		{
			if (func_44(unk_0x3F80C6638E3A1A90(), 1, 0))
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
			if (func_44(unk_0x3F80C6638E3A1A90(), 1, 1))
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

bool func_391()
{
	return Global_1312416;
}

void func_392(var uParam0)
{
	func_393(uParam0, 0f);
}

void func_393(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_317(unk_0xB519E5386FBF69E5(*uParam0, 4)) - fParam1);
	unk_0x9956FB0E4B50ECB8(uParam0, 1);
	unk_0x73817D396768E4C6(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_394(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_281(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x2E6D4A0CE8AD9494(unk_0xBFAE5F9DEC53DAE2()))
	{
		return 0;
	}
	if (func_284(0))
	{
		return 0;
	}
	if (unk_0x2DFE588AA3727FE3())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36319[iVar0 /*19*/] == 1 && Global_36319[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36319[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_36319[iVar0 /*19*/].f_5 = 1;
			Global_36319[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_36319[iVar0 /*19*/] == 0)
			{
			}
			if (Global_36319[iVar0 /*19*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_395()
{
	if (Global_99155.f_24859.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

bool func_396()
{
	return Global_17116;
}

int func_397(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0xF919633EBD0639D0(*uParam1, uParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0xF919633EBD0639D0(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0xF919633EBD0639D0(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0xF919633EBD0639D0(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0xF919633EBD0639D0(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0xF919633EBD0639D0(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
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
			*uParam3 = { unk_0xF919633EBD0639D0(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0xF919633EBD0639D0(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0xF919633EBD0639D0(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
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

bool func_398(int iParam0, int iParam1)
{
	return unk_0xB519E5386FBF69E5(Global_2416794[iParam0 /*303*/].f_206, iParam1);
}

void func_399()
{
	unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
	func_436(unk_0x3F80C6638E3A1A90(), 1, 0);
	unk_0x7FB81B1DD14A3BE4(0);
	unk_0x6EF372C057320AD4(0, 1065353216);
	if (iLocal_808 > 0)
	{
		Local_222[unk_0xA1238458CB587858() /*10*/].f_5 = iLocal_808;
		iLocal_808 = 0;
	}
	func_420();
	unk_0x73817D396768E4C6(&iLocal_544, 7);
	if (func_144("SHR_MENU"))
	{
		unk_0x1D208E4A4E1D4FFE(1);
	}
	if (Local_98.f_14 != -1)
	{
		func_280(&(Local_98.f_14));
	}
	if (unk_0xCF686B56FD5328B5(Local_98.f_1))
	{
		unk_0x74FF6D08DE291367(Local_98.f_1, 0);
	}
	unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
}

int func_400(float fParam0)
{
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()) && !unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x8F4395E832F66DDF(unk_0xE7869D5D7816A9B6()) > 0;
		}
		else
		{
			return unk_0x9A75BFB6043190AE(unk_0xE7869D5D7816A9B6(), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), fParam0) > 0;
		}
	}
	return 0;
}

int func_401(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x00AAD79B42B3E036() && !bParam3)
	{
		if (unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(unk_0x9D40BBF80D8F5E8A(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_402()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Local_149.f_64[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_403()
{
	unk_0x94026C1D1DB14225(&uLocal_564);
	unk_0x6A8BCE61F660B8D0(0, unk_0xE7869D5D7816A9B6(), -1, 0, 2);
	unk_0xDCF460AE46C9489C(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0, 0, 0, 0);
	unk_0xDCF460AE46C9489C(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0, 0, 0, 0);
	unk_0x911ECBCE73F8EC3F(uLocal_564);
	unk_0x94026C1D1DB14225(&uLocal_565);
	unk_0xDCF460AE46C9489C(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0, 0, 0, 0);
	unk_0x911ECBCE73F8EC3F(uLocal_565);
	unk_0x94026C1D1DB14225(&uLocal_566);
	unk_0x33E113E52A91C5C3(0, Local_551, 2f, -1, 0.25f, 0, fLocal_554);
	unk_0xDCF460AE46C9489C(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	unk_0xDCF460AE46C9489C(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	unk_0x29F2993666F68F46(0, Local_551, 250f, -1, 1, 0);
	unk_0x732BBAB72712004C(0, 0);
	unk_0x911ECBCE73F8EC3F(uLocal_566);
	unk_0x94026C1D1DB14225(&uLocal_568);
	unk_0xDCF460AE46C9489C(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	unk_0xDCF460AE46C9489C(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	unk_0x732BBAB72712004C(0, 0);
	unk_0x911ECBCE73F8EC3F(uLocal_568);
	unk_0x94026C1D1DB14225(&uLocal_567);
	unk_0x33E113E52A91C5C3(0, Local_551, 2f, -1, 0.25f, 0, (fLocal_554 - 180f));
	unk_0x0A4F47B84A5F0258(0, 1);
	unk_0xE8EC59D96A176616(0, 20f, 0);
	unk_0x911ECBCE73F8EC3F(uLocal_567);
}

void func_404(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69236)
	{
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA6ED3077A967AC63(iParam2, 0);
			}
			else
			{
				unk_0xA6ED3077A967AC63(iParam2, 1);
			}
		}
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7294CF31F80E052D(iParam2, 0);
			}
			else
			{
				unk_0x7294CF31F80E052D(iParam2, 1);
			}
		}
	}
}

int func_405(var uParam0)
{
	if (unk_0xDC1FDD911B88C6F2(uParam0))
	{
		return unk_0xAF437D7C802AB246(unk_0x9F2866A966FBAE78(uParam0));
	}
	return 1;
}

int func_406()
{
	return Local_149.f_0;
}

char* func_407(int iParam0)
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

int func_408()
{
	struct<3> Var0;
	
	if (func_416(&iLocal_777, 0))
	{
		func_414(iLocal_777, &iLocal_588, &iLocal_589, &iLocal_590, &iLocal_591, &Local_592, &Local_595);
		func_413(iLocal_777, &Local_598, &Local_601, &uLocal_604);
		func_412(iLocal_777, &Local_605, &Local_608, &fLocal_611);
		switch (iLocal_777)
		{
			case 0:
				Local_556 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				Local_559 = { 0f, 0f, 21.89f };
				iLocal_547 = func_50(0);
				Local_551 = { 1394.852f, 3609.509f, 33.9809f };
				fLocal_554 = 116.5329f;
				iLocal_583 = 1;
				if (func_410(6, 18))
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 0;
					iLocal_778[1] = 0;
					iLocal_784[1] = 0;
					iLocal_778[2] = 0;
					iLocal_784[2] = 0;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 0;
					iLocal_784[4] = 0;
				}
				else
				{
					iLocal_778[0] = 1;
					iLocal_784[0] = 0;
					iLocal_778[1] = 1;
					iLocal_784[1] = 1;
					iLocal_778[2] = 1;
					iLocal_784[2] = 2;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 0;
					iLocal_784[4] = 0;
				}
				break;
			
			case 1:
				Local_559 = { 0f, 0f, -160f };
				Local_556 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_547 = func_50(0);
				Local_551 = { -3047.512f, 588.9807f, 6.9089f };
				fLocal_554 = 178.8753f;
				iLocal_583 = 1;
				if (func_410(6, 18))
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 1;
					iLocal_778[1] = 1;
					iLocal_784[1] = 0;
					iLocal_778[2] = 0;
					iLocal_784[2] = 1;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 0;
					iLocal_784[4] = 1;
				}
				else
				{
					iLocal_778[0] = 2;
					iLocal_784[0] = 0;
					iLocal_778[1] = 0;
					iLocal_784[1] = 0;
					iLocal_778[2] = 1;
					iLocal_784[2] = 2;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 0;
					iLocal_784[4] = 1;
				}
				break;
			
			case 2:
				Local_556 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				Local_559 = { 0f, 0f, 175.52f };
				iLocal_547 = func_50(0);
				Local_551 = { -3249.114f, 1006.558f, 11.8307f };
				fLocal_554 = 191.594f;
				iLocal_583 = 1;
				if (func_410(6, 18))
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 2;
					iLocal_778[1] = 1;
					iLocal_784[1] = 1;
					iLocal_778[2] = 0;
					iLocal_784[2] = 2;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 0;
					iLocal_784[4] = 2;
				}
				else
				{
					iLocal_778[0] = 2;
					iLocal_784[0] = 1;
					iLocal_778[1] = 0;
					iLocal_784[1] = 0;
					iLocal_778[2] = 1;
					iLocal_784[2] = 0;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 0;
					iLocal_784[4] = 2;
				}
				break;
			
			case 3:
				Local_559 = { 0f, 0f, -82.38f };
				Local_556 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_547 = func_50(0);
				Local_551 = { 543.0796f, 2663.967f, 41.1565f };
				fLocal_554 = 228.4295f;
				iLocal_583 = 1;
				if (func_410(6, 18))
				{
					iLocal_778[0] = 1;
					iLocal_784[0] = 0;
					iLocal_778[1] = 2;
					iLocal_784[1] = 0;
					iLocal_778[2] = 1;
					iLocal_784[2] = 0;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 0;
					iLocal_784[4] = 0;
				}
				else
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 0;
					iLocal_778[1] = 2;
					iLocal_784[1] = 1;
					iLocal_778[2] = 1;
					iLocal_784[2] = 1;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 0;
					iLocal_784[4] = 0;
				}
				break;
			
			case 4:
				Local_559 = { 0f, 0f, 180f };
				Local_556 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_547 = func_50(0);
				Local_551 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_554 = 197.2994f;
				iLocal_583 = 1;
				if (func_410(6, 18))
				{
					iLocal_778[0] = 2;
					iLocal_784[0] = 0;
					iLocal_778[1] = 2;
					iLocal_784[1] = 1;
					iLocal_778[2] = 1;
					iLocal_784[2] = 1;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 0;
					iLocal_784[4] = 1;
				}
				else
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 1;
					iLocal_778[1] = 1;
					iLocal_784[1] = 0;
					iLocal_778[2] = 0;
					iLocal_784[2] = 2;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 0;
					iLocal_784[4] = 1;
				}
				break;
			
			case 5:
				Local_559 = { 0f, 0f, 155f };
				Local_556 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_547 = func_50(0);
				Local_551 = { 2671.351f, 3283.136f, 54.2411f };
				fLocal_554 = 296.5427f;
				iLocal_583 = 1;
				if (func_410(6, 18))
				{
					iLocal_778[0] = 2;
					iLocal_784[0] = 1;
					iLocal_778[1] = 0;
					iLocal_784[1] = 0;
					iLocal_778[2] = 1;
					iLocal_784[2] = 2;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 0;
					iLocal_784[4] = 2;
				}
				else
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 2;
					iLocal_778[1] = 2;
					iLocal_784[1] = 1;
					iLocal_778[2] = 0;
					iLocal_784[2] = 2;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 0;
					iLocal_784[4] = 2;
				}
				break;
			
			case 6:
				Local_559 = { 0f, 0f, 63.3f };
				Local_556 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_547 = func_50(0);
				Local_551 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_554 = 130.9518f;
				iLocal_583 = 1;
				if (func_410(6, 18))
				{
					iLocal_778[0] = 2;
					iLocal_784[0] = 2;
					iLocal_778[1] = 1;
					iLocal_784[1] = 0;
					iLocal_778[2] = 0;
					iLocal_784[2] = 0;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 0;
					iLocal_784[4] = 0;
				}
				else
				{
					iLocal_778[0] = 1;
					iLocal_784[0] = 0;
					iLocal_778[1] = 0;
					iLocal_784[1] = 0;
					iLocal_778[2] = 1;
					iLocal_784[2] = 0;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 0;
					iLocal_784[4] = 0;
				}
				break;
			
			case 7:
				Local_559 = { 0f, 0f, 117f };
				Local_556 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_547 = func_50(0);
				Local_551 = { 1958.92f, 3746.267f, 31.3438f };
				fLocal_554 = 73.6245f;
				iLocal_583 = 1;
				if (func_410(6, 18))
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 0;
					iLocal_778[1] = 1;
					iLocal_784[1] = 1;
					iLocal_778[2] = 0;
					iLocal_784[2] = 1;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 0;
					iLocal_784[4] = 1;
				}
				else
				{
					iLocal_778[0] = 2;
					iLocal_784[0] = 0;
					iLocal_778[1] = 0;
					iLocal_784[1] = 0;
					iLocal_778[2] = 1;
					iLocal_784[2] = 1;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 0;
					iLocal_784[4] = 1;
				}
				break;
			
			case 8:
				Local_559 = { 0f, 0f, 92f };
				Local_556 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_547 = func_50(0);
				Local_551 = { 30.5721f, -1339.782f, 28.4939f };
				fLocal_554 = 110.7699f;
				iLocal_583 = 1;
				if (func_410(6, 18))
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 1;
					iLocal_778[1] = 2;
					iLocal_784[1] = 0;
					iLocal_778[2] = 0;
					iLocal_784[2] = 2;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 0;
					iLocal_784[4] = 2;
				}
				else
				{
					iLocal_778[0] = 2;
					iLocal_784[0] = 1;
					iLocal_778[1] = 1;
					iLocal_784[1] = 0;
					iLocal_778[2] = 1;
					iLocal_784[2] = 2;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 0;
					iLocal_784[4] = 2;
				}
				break;
			
			case 9:
				Local_559 = { 0f, 0f, 75f };
				Local_556 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_547 = func_50(0);
				Local_551 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_554 = 52.0064f;
				iLocal_583 = 1;
				if (func_410(6, 18))
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 2;
					iLocal_778[1] = 2;
					iLocal_784[1] = 1;
					iLocal_778[2] = 1;
					iLocal_784[2] = 0;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 0;
					iLocal_784[4] = 0;
				}
				else
				{
					iLocal_778[0] = 2;
					iLocal_784[0] = 2;
					iLocal_778[1] = 1;
					iLocal_784[1] = 1;
					iLocal_778[2] = 0;
					iLocal_784[2] = 0;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 0;
					iLocal_784[4] = 0;
				}
				break;
			
			case 10:
				Local_559 = { 0f, 0f, 0f };
				Local_556 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_547 = func_50(0);
				Local_551 = { 1168.971f, 2719.118f, 36.0632f };
				fLocal_554 = 136.5945f;
				iLocal_583 = 3;
				if (func_410(10, 22))
				{
					iLocal_778[0] = 1;
					iLocal_784[0] = 0;
					iLocal_778[1] = 0;
					iLocal_784[1] = 0;
					iLocal_778[2] = 1;
					iLocal_784[2] = 1;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				else
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 0;
					iLocal_778[1] = 2;
					iLocal_784[1] = 0;
					iLocal_778[2] = 0;
					iLocal_784[2] = 1;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				break;
			
			case 11:
				Local_559 = { 0f, 0f, -92f };
				Local_556 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_547 = func_50(0);
				Local_551 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_554 = 176.1174f;
				iLocal_583 = 3;
				if (func_410(10, 22))
				{
					iLocal_778[0] = 2;
					iLocal_784[0] = 0;
					iLocal_778[1] = 1;
					iLocal_784[1] = 0;
					iLocal_778[2] = 1;
					iLocal_784[2] = 2;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				else
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 1;
					iLocal_778[1] = 2;
					iLocal_784[1] = 1;
					iLocal_778[2] = 0;
					iLocal_784[2] = 2;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				break;
			
			case 12:
				Local_559 = { 0f, 0f, -145f };
				Local_556 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_547 = func_50(0);
				Local_551 = { -1218.283f, -915.7103f, 10.3264f };
				fLocal_554 = 43.8031f;
				iLocal_583 = 3;
				if (func_410(10, 22))
				{
					iLocal_778[0] = 2;
					iLocal_784[0] = 1;
					iLocal_778[1] = 1;
					iLocal_784[1] = 1;
					iLocal_778[2] = 0;
					iLocal_784[2] = 0;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				else
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 2;
					iLocal_778[1] = 1;
					iLocal_784[1] = 0;
					iLocal_778[2] = 1;
					iLocal_784[2] = 0;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				break;
			
			case 13:
				Local_559 = { 0f, 0f, 103f };
				Local_556 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_547 = func_50(0);
				Local_551 = { 1130.155f, -979.2816f, 45.4158f };
				fLocal_554 = 269.2587f;
				iLocal_583 = 3;
				if (func_410(10, 22))
				{
					iLocal_778[0] = 2;
					iLocal_784[0] = 2;
					iLocal_778[1] = 2;
					iLocal_784[1] = 0;
					iLocal_778[2] = 0;
					iLocal_784[2] = 1;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				else
				{
					iLocal_778[0] = 1;
					iLocal_784[0] = 0;
					iLocal_778[1] = 0;
					iLocal_784[1] = 0;
					iLocal_778[2] = 1;
					iLocal_784[2] = 1;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				break;
			
			case 14:
				Local_559 = { 0f, 0f, -41f };
				Local_556 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_547 = func_50(0);
				Local_551 = { -1479.163f, -375.0302f, 38.1633f };
				fLocal_554 = 36.5415f;
				iLocal_583 = 3;
				if (func_410(10, 22))
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 0;
					iLocal_778[1] = 2;
					iLocal_784[1] = 1;
					iLocal_778[2] = 0;
					iLocal_784[2] = 2;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				else
				{
					iLocal_778[0] = 2;
					iLocal_784[0] = 0;
					iLocal_778[1] = 1;
					iLocal_784[1] = 0;
					iLocal_778[2] = 1;
					iLocal_784[2] = 2;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				break;
			
			case 15:
				Local_559 = { 0f, 0f, 145f };
				Local_556 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_547 = func_50(0);
				Local_551 = { 1707.303f, 4918.31f, 41.0636f };
				fLocal_554 = 24.9178f;
				iLocal_583 = 2;
				if (func_410(8, 20))
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 1;
					iLocal_778[1] = 0;
					iLocal_784[1] = 0;
					iLocal_778[2] = 1;
					iLocal_784[2] = 0;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				else
				{
					iLocal_778[0] = 2;
					iLocal_784[0] = 1;
					iLocal_778[1] = 1;
					iLocal_784[1] = 1;
					iLocal_778[2] = 0;
					iLocal_784[2] = 0;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				break;
			
			case 16:
				Local_559 = { 0f, 0f, -87f };
				Local_556 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_547 = func_50(0);
				Local_551 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_554 = 291.6504f;
				iLocal_583 = 2;
				if (func_410(8, 20))
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 2;
					iLocal_778[1] = 1;
					iLocal_784[1] = 0;
					iLocal_778[2] = 1;
					iLocal_784[2] = 1;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				else
				{
					iLocal_778[0] = 2;
					iLocal_784[0] = 2;
					iLocal_778[1] = 2;
					iLocal_784[1] = 0;
					iLocal_778[2] = 0;
					iLocal_784[2] = 1;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				break;
			
			case 17:
				Local_559 = { 0f, 0f, -125f };
				Local_556 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_547 = func_50(0);
				Local_551 = { -40.42f, -1751.423f, 28.421f };
				fLocal_554 = 145.6553f;
				iLocal_583 = 2;
				if (func_410(8, 20))
				{
					iLocal_778[0] = 1;
					iLocal_784[0] = 0;
					iLocal_778[1] = 1;
					iLocal_784[1] = 1;
					iLocal_778[2] = 1;
					iLocal_784[2] = 2;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				else
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 0;
					iLocal_778[1] = 2;
					iLocal_784[1] = 0;
					iLocal_778[2] = 0;
					iLocal_784[2] = 2;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				break;
			
			case 18:
				Local_559 = { 0f, 0f, -74f };
				Local_556 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_547 = func_50(0);
				Local_551 = { 1159.682f, -314.254f, 68.2051f };
				fLocal_554 = 232.6337f;
				iLocal_583 = 2;
				if (func_410(8, 20))
				{
					iLocal_778[0] = 2;
					iLocal_784[0] = 0;
					iLocal_778[1] = 2;
					iLocal_784[1] = 1;
					iLocal_778[2] = 0;
					iLocal_784[2] = 0;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				else
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 1;
					iLocal_778[1] = 2;
					iLocal_784[1] = 0;
					iLocal_778[2] = 0;
					iLocal_784[2] = 0;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				break;
			
			case 19:
				Local_556 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				Local_559 = { 0f, 0f, -47.3f };
				iLocal_547 = func_50(0);
				Local_551 = { -1828.907f, 799.6096f, 137.1776f };
				fLocal_554 = 247.1234f;
				iLocal_583 = 2;
				if (func_410(8, 20))
				{
					iLocal_778[0] = 2;
					iLocal_784[0] = 1;
					iLocal_778[1] = 0;
					iLocal_784[1] = 0;
					iLocal_778[2] = 0;
					iLocal_784[2] = 1;
					iLocal_778[3] = 0;
					iLocal_784[3] = 0;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				else
				{
					iLocal_778[0] = 0;
					iLocal_784[0] = 2;
					iLocal_778[1] = 2;
					iLocal_784[1] = 1;
					iLocal_778[2] = 0;
					iLocal_784[2] = 1;
					iLocal_778[3] = 0;
					iLocal_784[3] = 1;
					iLocal_778[4] = 1;
					iLocal_784[4] = 0;
				}
				break;
		}
		Local_556 = { unk_0xF919633EBD0639D0(Local_556, Local_559.f_2, 0f, 0.075f, 0f) };
		Local_548 = { unk_0x485562BFEB1B08F9("mp_am_hold_up", "holdup_victim_20s", Local_556, Local_559, 0, 2) };
		Var0 = { unk_0x1F32EC24F499C0FC("mp_am_hold_up", "holdup_victim_20s", Local_556, Local_559, 0, 2) };
		Local_149.f_33 = Var0.f_2;
		Local_572 = { unk_0x485562BFEB1B08F9("mp_am_hold_up", "holdup_victim_20s_bag", Local_556, Local_559, 0, 2) };
		Var0 = { unk_0x1F32EC24F499C0FC("mp_am_hold_up", "holdup_victim_20s_bag", Local_556, Local_559, 0, 2) };
		uLocal_575 = Var0.f_2;
		Local_576 = { unk_0x485562BFEB1B08F9("mp_am_hold_up", "holdup_victim_20s_till", Local_556, Local_559, 0, 2) };
		Var0 = { unk_0x1F32EC24F499C0FC("mp_am_hold_up", "holdup_victim_20s_till", Local_556, Local_559, 0, 2) };
		uLocal_579 = Var0.f_2;
		Local_98.f_0 = func_409(iLocal_777);
		if (unk_0xFA4B36553B2A7802())
		{
			Local_149.f_37 = iLocal_778[0];
			if (Local_149.f_37 == 0)
			{
				StringCopy(&(Local_149.f_42), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_149.f_38), "StoreOwner2", 16);
			}
			else if (Local_149.f_37 == 1)
			{
				StringCopy(&(Local_149.f_42), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_149.f_38), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_149.f_42), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_149.f_38), "StoreOwner3", 16);
			}
		}
		if (!unk_0xB519E5386FBF69E5(iLocal_543, 29))
		{
			unk_0x8C8B7B919A2D1050(Local_556, 0.5f, iLocal_580, 1);
			unk_0x9956FB0E4B50ECB8(&iLocal_543, 29);
		}
		return 1;
	}
	return 0;
}

int func_409(int iParam0)
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

bool func_410(int iParam0, int iParam1)
{
	return func_411(unk_0x7C833E3C6EEE41E0(), iParam0, iParam1);
}

int func_411(int iParam0, int iParam1, int iParam2)
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

void func_412(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_413(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_414(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_415(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x41D9D981197E60A2(*uParam5, "v_methlab");
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
				*iParam1 = unk_0x41D9D981197E60A2(*uParam5, "v_shop_247");
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
				*iParam1 = unk_0x41D9D981197E60A2(*uParam5, "v_gen_liquor");
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
				*iParam1 = unk_0x41D9D981197E60A2(*uParam5, "v_gasstation");
			}
			*uParam2 = joaat("V_68_GasRm");
			*uParam4 = joaat("V_68_BackRm");
			*uParam3 = joaat("V_68_Toilets");
			break;
	}
}

void func_415(int iParam0, var uParam1, var uParam2)
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

int func_416(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 9999.9f;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		fVar0 = unk_0xF18329472591CFE6(func_85(unk_0x3F80C6638E3A1A90()), func_417(iVar2), 1);
		if (fVar0 < fVar1)
		{
			if (bParam1)
			{
				if (!unk_0xB519E5386FBF69E5(Global_2416623.f_62, iVar2) && unk_0xB519E5386FBF69E5(Global_2416623.f_64, iVar2))
				{
					fVar1 = fVar0;
					*iParam0 = iVar2;
				}
			}
			else
			{
				fVar1 = fVar0;
				*iParam0 = iVar2;
			}
		}
		iVar2++;
	}
	return 1;
}

Vector3 func_417(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	
	func_415(iParam0, &Var0, &uVar3);
	return Var0;
}

int func_418(int iParam0)
{
	return Local_222[iParam0 /*10*/];
}

void func_419()
{
	Global_2432717.f_657.f_28 = 0;
}

void func_420()
{
	if (Global_1312416.f_1 == 1)
	{
		func_421(0);
		Global_1312416.f_1 = 0;
	}
}

void func_421(int iParam0)
{
	if (func_391())
	{
		if (iParam0 == 1)
		{
			if (Global_2457699.f_4246 == -1)
			{
				Global_2457699.f_4246 = 60000;
			}
			func_422(&(Global_2457699.f_4244), 0, 0);
			if (Global_2457699.f_4249 == -1)
			{
				Global_2457699.f_4249 = 10000;
			}
			func_422(&(Global_2457699.f_4247), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_390();
		}
		if ((!unk_0x6B042133C9334B77() && !func_389()) && !func_388(unk_0x3F80C6638E3A1A90()))
		{
			Global_976339 = 0;
		}
		Global_1607618[unk_0x3F80C6638E3A1A90() /*106*/].f_7 = 0;
	}
}

void func_422(var uParam0, bool bParam1, bool bParam2)
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

void func_423()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!func_44(unk_0x3F80C6638E3A1A90(), 1, 1))
	{
		iVar0 = 1;
		if (unk_0xB519E5386FBF69E5(iLocal_544, 6) && !unk_0xB519E5386FBF69E5(iLocal_544, 5))
		{
			iVar1 = unk_0x07EE2B2D0517CC52(-1);
			iVar2 = 0;
			unk_0x9956FB0E4B50ECB8(&iVar2, 8);
			unk_0x9956FB0E4B50ECB8(&iVar2, 4);
			unk_0x9956FB0E4B50ECB8(&iVar2, 1);
			if (iLocal_807 > Global_262145.f_161)
			{
				iLocal_807 = Global_262145.f_161;
			}
			if (iVar1 < iLocal_807)
			{
				if (iVar1 > 0)
				{
					if (func_49(func_50(1)))
					{
						if (unk_0x6CEA35504D05EED3(iVar1, 0, 0, 0, &uVar3, -1))
						{
							if (func_196())
							{
								if (!unk_0xB519E5386FBF69E5(Global_2457699.f_7, 1))
								{
									Global_2457699.f_4542 = iVar1;
									Global_2457699.f_4543 = iVar2;
									Global_2457699.f_4544 = { unk_0x6A3D20C8091811BD(unk_0xE7869D5D7816A9B6(), 1067030938, 1069547520) };
									func_188(&(Global_2457699.f_4541), -1135378931, 537254313, 1474183246, 1022400740, Global_2457699.f_4542, 1, 3);
									unk_0x9956FB0E4B50ECB8(&(Global_2457699.f_7), 1);
									iLocal_807 = 0;
									unk_0x9956FB0E4B50ECB8(&iLocal_544, 5);
								}
							}
							else
							{
								unk_0x9A2A0A6F8D313E19(joaat("pickup_money_variable"), unk_0x6A3D20C8091811BD(unk_0xE7869D5D7816A9B6(), 1067030938, 1069547520), iVar2, iVar1, func_50(1), 0, 0);
								func_183(-iVar1, 1, 1, 1092616192);
								unk_0x5869E2F333DB95DB(iVar1, 0, 0);
								func_187(1022400740, iVar1, &uVar4, 0, 0, 0);
								iLocal_807 = 0;
								func_424();
								unk_0x9956FB0E4B50ECB8(&iLocal_544, 5);
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			else if (iLocal_807 > 0)
			{
				if (func_49(func_50(1)))
				{
					if (unk_0x6CEA35504D05EED3(iLocal_807, 0, 0, 0, &uVar3, -1))
					{
						if (func_196())
						{
							if (!unk_0xB519E5386FBF69E5(Global_2457699.f_7, 1))
							{
								Global_2457699.f_4542 = iLocal_807;
								Global_2457699.f_4543 = iVar2;
								Global_2457699.f_4544 = { unk_0x6A3D20C8091811BD(unk_0xE7869D5D7816A9B6(), 1067030938, 1069547520) };
								func_188(&(Global_2457699.f_4541), -1135378931, 537254313, 1474183246, 1022400740, Global_2457699.f_4542, 1, 3);
								unk_0x9956FB0E4B50ECB8(&(Global_2457699.f_7), 1);
								iLocal_807 = 0;
								unk_0x9956FB0E4B50ECB8(&iLocal_544, 5);
							}
						}
						else
						{
							unk_0x9A2A0A6F8D313E19(joaat("pickup_money_variable"), unk_0x6A3D20C8091811BD(unk_0xE7869D5D7816A9B6(), 1067030938, 1069547520), iVar2, iLocal_807, func_50(1), 0, 0);
							func_183(-iLocal_807, 1, 1, 1092616192);
							unk_0x5869E2F333DB95DB(iLocal_807, 0, 0);
							func_187(1022400740, iLocal_807, &uVar5, 0, 0, 0);
							iLocal_807 = 0;
							func_424();
							unk_0x9956FB0E4B50ECB8(&iLocal_544, 5);
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
			func_443();
		}
		else
		{
			return;
		}
	}
}

void func_424()
{
	Global_2457699.f_269 = 0;
	Global_2457699.f_270 = 0;
	Global_2457699.f_271 = 0;
}

int func_425()
{
	bool bVar0;
	
	func_432(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315884 == 0)
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			return 1;
		}
	}
	if (func_431())
	{
		return 1;
	}
	if (Global_2442886)
	{
		return 1;
	}
	if (func_430())
	{
		return 1;
	}
	if (func_429(157))
	{
		if (!func_428())
		{
			return 1;
		}
	}
	if (func_429(155))
	{
		return 1;
	}
	if (!unk_0xC8FFCE1611C4F73B())
	{
		return 1;
	}
	if (func_426() != 0)
	{
		if (unk_0xFF6891E21E7FC193(func_426()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_426()
{
	switch (func_427())
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

int func_427()
{
	return Global_25034;
}

bool func_428()
{
	return Global_2432717.f_573;
}

int func_429(int iParam0)
{
	if (unk_0x957F04289F04E160(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_430()
{
	return Global_2440974;
}

bool func_431()
{
	return Global_2432717.f_568;
}

void func_432(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE4E91039B15CA110(1))
	{
		iVar1 = unk_0xCEDD7FE4546BFC4F(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x0586E3C97DD61FE4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 313:
					func_433(iVar0);
					break;
				
				case 2:
					unk_0x0586E3C97DD61FE4(1, iVar0, &Var4, 3);
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

void func_433(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x0586E3C97DD61FE4(1, iParam0, &Var0, 3))
	{
		if (func_44(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x91B73D905EA38F6B(Var0.f_1);
			if (unk_0xD51CFE69539DB6D8(uVar3))
			{
				if (unk_0x51374A0BB2871E6E(iVar3, 0))
				{
					uVar4 = unk_0xF0295FF51F2D7803(iVar3, 0);
					if (unk_0x7DF549E9DDE0A2CE(uVar4, Var0.f_2) && unk_0x0D47370227E1A847())
					{
						if (func_434(uVar4, &bVar5))
						{
							unk_0x2C47D40CD2967A44(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xC1F2137782A816E9(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_434(int iParam0, var uParam1)
{
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		if (!unk_0x28D33422BA6C479D(iParam0))
		{
			if (unk_0x4F9572356C55E94C(iParam0))
			{
				unk_0x20BB4B94CC6DDC9A(iParam0, false, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x4C5CA989AEF3A14C(iParam0, 0))
		{
			if (unk_0x9B5F286CC8377932(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_435()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_436(int iParam0, bool bParam1, int iParam2)
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
	bool bVar24;
	var uVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0x19AC385C7CB5ACFE())
		{
			unk_0xBEE128CF06FE2A96(0);
		}
	}
	if (!unk_0x00AAD79B42B3E036())
	{
		uVar0 = iParam2;
		unk_0x8FE59DE2329CBE64(iParam0, bParam1, uVar0);
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
		bVar23 = iParam2 & 8388608 != false;
		if (!func_440())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xD18C3CF631455087(iParam0) && unk_0x2E6D4A0CE8AD9494(iParam0))
		{
			uVar25 = unk_0x91B73D905EA38F6B(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x00AAD79B42B3E036())
				{
					unk_0xE0D8D7721870E98E(1);
				}
				else
				{
					unk_0x60365B5AF8BF1FFA(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x00AAD79B42B3E036() && !bVar18)
					{
						unk_0xE0D8D7721870E98E(0);
					}
					Global_2416794[iParam0 /*303*/].f_239 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_439(uVar25) && !unk_0x4ADBDB3ACDEB4D8C(uVar25))
				{
					if (!bVar21)
					{
						unk_0x70EE8EFEE355AD29(uVar25, true, 0);
					}
				}
				if (!unk_0xD55D878601C46BA9(uVar25))
				{
					if (!bVar20)
					{
						unk_0x2878EC06B3F897A0(uVar25, false);
					}
					unk_0xFD092FF761E54535(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x2878EC06B3F897A0(uVar25, false);
				}
				unk_0x321C1AA209172C00(uVar25, true);
				unk_0xD30CBD7E69615F8C(iParam0, 0);
				unk_0x3884CEFF6ADEBA7D(uVar25);
				unk_0xC16A68A8424A0340(uVar25, 1);
				func_438();
				func_437();
				if (unk_0xE1CF0FCC3409EBB7())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xC5E5B5BBBE4693F6())
				{
				}
				Global_2416794[iParam0 /*303*/].f_240 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_439(uVar25) && !unk_0x4ADBDB3ACDEB4D8C(uVar25))
				{
					if (!bVar21)
					{
						unk_0x70EE8EFEE355AD29(uVar25, !bVar14, 0);
					}
					if (!unk_0xD55D878601C46BA9(uVar25))
					{
						if (!bVar20)
						{
							unk_0x2878EC06B3F897A0(uVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xFD092FF761E54535(uVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0xD30CBD7E69615F8C(iParam0, 0);
				}
				else
				{
					unk_0xD30CBD7E69615F8C(iParam0, 1);
				}
				unk_0x321C1AA209172C00(uVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xF81B6A0547AE4030(uVar25) && !unk_0x51374A0BB2871E6E(uVar25, 0))
					{
						unk_0xDE31B2587775EDAD(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x8FE59DE2329CBE64(iParam0, bParam1, iVar26);
		}
	}
}

void func_437()
{
	struct<2> Var0;
	
	Global_2426494.f_691 = 0;
	Global_2426494.f_692 = 0;
	Global_2426494.f_693 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404919.f_1464 = { Var0 };
}

void func_438()
{
	Global_2404919.f_622 = 0;
	Global_2404919.f_1505 = 0;
	Global_2404919.f_484 = 0;
	Global_2416794[unk_0x3F80C6638E3A1A90() /*303*/].f_205 = 0;
}

int func_439(int iParam0)
{
	int iVar0;
	
	if (unk_0x51374A0BB2871E6E(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xC47857E5E74EA5AF(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_440()
{
	if (func_441() == 0)
	{
		return 1;
	}
	return 0;
}

int func_441()
{
	return Global_1312466.f_18;
}

bool func_442(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2432717.f_657.f_28 && unk_0xC7C6DDDE84A8E734(unk_0x959E7FA37C0D0892()) == Global_2432717.f_657.f_31);
	}
	return Global_2432717.f_657.f_28;
}

void func_443()
{
	int iVar0;
	
	Global_2457699.f_8 = 0;
	if (unk_0x00AAD79B42B3E036())
	{
		if (!func_405(Local_149.f_1))
		{
			if (unk_0x379306CBB68B0FFA(Local_149.f_1) || (!unk_0xB5A45FB150DB6127(Local_149.f_1) && unk_0xFA4B36553B2A7802()))
			{
				unk_0x6D0CE8888415DDF3(unk_0x9F2866A966FBAE78(Local_149.f_1), 0);
				unk_0xB0A8FA9FE09B26AE(unk_0x9F2866A966FBAE78(Local_149.f_1));
				if (unk_0xB519E5386FBF69E5(iLocal_543, 22))
				{
					if (unk_0xB519E5386FBF69E5(iLocal_543, 20))
					{
						if (Local_149.f_36 != 7)
						{
							if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 9))
							{
								unk_0xFA2C5C2D054C888E(unk_0x9F2866A966FBAE78(Local_149.f_1));
								unk_0xC2C4A3A9FF2FBFFF(unk_0x9F2866A966FBAE78(Local_149.f_1), uLocal_566);
								unk_0x9BEE7E791BC4D38B(unk_0x9F2866A966FBAE78(Local_149.f_1), 0);
							}
						}
						else if (unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_1), -1442466670) != 0 && unk_0xC47857E5E74EA5AF(unk_0x9F2866A966FBAE78(Local_149.f_1), -1442466670) != 1)
						{
							unk_0xFA2C5C2D054C888E(unk_0x9F2866A966FBAE78(Local_149.f_1));
							if (!unk_0xFB3EFA6765C8A823(unk_0x9F2866A966FBAE78(Local_149.f_1), joaat("weapon_pistol"), 0))
							{
								unk_0x5E9C818BB0BD51FB(unk_0x9F2866A966FBAE78(Local_149.f_1), joaat("weapon_pistol"), 25000, 1);
								unk_0xB161EBD04DDDE4AD(unk_0x9F2866A966FBAE78(Local_149.f_1), 30);
							}
							func_251(4);
							unk_0xE8EC59D96A176616(unk_0x9F2866A966FBAE78(Local_149.f_1), 20f, 0);
						}
					}
					else if ((unk_0xB519E5386FBF69E5(Local_149.f_12, 3) || !func_9()) || !func_447())
					{
						if (!unk_0xB519E5386FBF69E5(Local_222[unk_0xA1238458CB587858() /*10*/].f_1, 9))
						{
							unk_0xFA2C5C2D054C888E(unk_0x9F2866A966FBAE78(Local_149.f_1));
							unk_0xC2C4A3A9FF2FBFFF(unk_0x9F2866A966FBAE78(Local_149.f_1), uLocal_566);
							unk_0x9BEE7E791BC4D38B(unk_0x9F2866A966FBAE78(Local_149.f_1), 0);
						}
					}
					else
					{
						unk_0xFA2C5C2D054C888E(unk_0x9F2866A966FBAE78(Local_149.f_1));
						unk_0x8D6671D78D1F569B(unk_0x9F2866A966FBAE78(Local_149.f_1), 1);
						unk_0x39FD98334BDB065B(unk_0x9F2866A966FBAE78(Local_149.f_1), -1);
						unk_0x9BEE7E791BC4D38B(unk_0x9F2866A966FBAE78(Local_149.f_1), 0);
					}
				}
			}
		}
		if ((unk_0xB519E5386FBF69E5(Local_149.f_12, 3) || !func_9()) || unk_0x6B808843AE53852B() <= 1)
		{
			if (unk_0xDC1FDD911B88C6F2(Local_149.f_2))
			{
				if (unk_0x379306CBB68B0FFA(Local_149.f_2))
				{
					unk_0x27B54A887EC71B05(unk_0xA5CFD5B9C8A74104(Local_149.f_2), 1, 1);
					func_45(&(Local_149.f_2));
				}
			}
		}
		if (((unk_0xB519E5386FBF69E5(Local_149.f_12, 3) || !func_9()) || unk_0xB519E5386FBF69E5(iLocal_543, 20)) || unk_0x6B808843AE53852B() <= 1)
		{
			if (unk_0xDC1FDD911B88C6F2(Local_149.f_3))
			{
				if (unk_0x379306CBB68B0FFA(Local_149.f_3))
				{
					func_45(&(Local_149.f_3));
				}
			}
		}
		if (func_196() && unk_0xB519E5386FBF69E5(Global_2457699.f_7, 1))
		{
			if (func_306(Global_2457699.f_4541) == 1)
			{
				func_446(Global_2457699.f_4541, 4);
			}
			else
			{
				func_190(Global_2457699.f_4541);
			}
			unk_0x73817D396768E4C6(&(Global_2457699.f_7), 1);
		}
		if (Local_149.f_0 == 6)
		{
			if (unk_0xDC1FDD911B88C6F2(Local_149.f_1))
			{
				if (unk_0xB7AFC499DA70400A(unk_0x9F2866A966FBAE78(Local_149.f_1), "XP_Blocker"))
				{
					unk_0x3C69B6C0F29F8F3A(unk_0x9F2866A966FBAE78(Local_149.f_1), "XP_Blocker");
				}
			}
		}
		if (unk_0xFA4B36553B2A7802())
		{
			unk_0x9ED5EE8DC4576BCC(Local_149.f_21);
		}
	}
	func_445();
	unk_0x8B10CC9832827D27("mp_am_hold_up");
	unk_0xE59F0F1A9C731E24();
	if (func_144("SHR_MENU"))
	{
		unk_0x1D208E4A4E1D4FFE(1);
	}
	Global_2457699.f_9 = func_223();
	unk_0xA857A54226CCD303(func_407(Local_98.f_0));
	func_159(1, Local_98.f_0);
	if (Local_98.f_14 != -1)
	{
		func_280(&(Local_98.f_14));
	}
	Global_2457699.f_27 = Local_98.f_0;
	if (Global_2457699.f_4780.f_4 == 1)
	{
		Global_2457699.f_4780.f_4 = 0;
	}
	if (Global_2457699.f_4780.f_5 == 1)
	{
		Global_2457699.f_4780.f_5 = 0;
	}
	if (unk_0xB519E5386FBF69E5(iLocal_543, 29))
	{
		unk_0x4D8FEA7BB0E10A53(Local_556, 0.5f, iLocal_580, 1);
	}
	if (unk_0xB519E5386FBF69E5(iLocal_544, 7))
	{
		func_420();
		unk_0x73817D396768E4C6(&iLocal_544, 7);
	}
	if (unk_0x00AAD79B42B3E036())
	{
		if (unk_0xB519E5386FBF69E5(Local_149.f_12, 6) || unk_0xB519E5386FBF69E5(Local_149.f_12, 21))
		{
			if (unk_0xB519E5386FBF69E5(Local_149.f_12, 21))
			{
				iVar0 = 1;
			}
			unk_0xFCBE9FB154447C4C(30, iLocal_806, iLocal_807, iVar0);
		}
	}
	if (unk_0xCF686B56FD5328B5(Local_98.f_1))
	{
		if (unk_0x64DEF1DE79E83BEB(Local_98.f_1))
		{
			unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
		}
		unk_0x74FF6D08DE291367(Local_98.f_1, 0);
	}
	func_444();
}

void func_444()
{
	unk_0x52F20802944F8DCE();
}

void func_445()
{
	unk_0x33A90AD8FA327B72(&uLocal_563);
	unk_0x33A90AD8FA327B72(&uLocal_564);
}

void func_446(int iParam0, int iParam1)
{
	if (func_292(iParam0) != -1)
	{
		if (Global_2553709[iParam0 /*72*/].f_2 == 1)
		{
			Global_2553709[iParam0 /*72*/].f_68 = iParam1;
		}
	}
}

int func_447()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2249EB1A59F7C407())
	{
		if (unk_0x7144266D2DB1A46F(unk_0x2A0D2AD241778491(iVar0)))
		{
			iVar1 = unk_0x39078CE05613D134(unk_0x2A0D2AD241778491(iVar0));
			uVar2 = unk_0x91B73D905EA38F6B(iVar1);
			if (func_44(iVar1, 1, 1))
			{
				if (unk_0xB034B5B185BD9C69(uVar2) == iLocal_588)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_448(struct<20> Param0)
{
	var uVar0;
	
	func_454(func_455(Param0.f_0), Param0);
	unk_0xB05CBEA790398181(2);
	unk_0xFCFA396E73EBBE3E(8);
	func_452(0, -1, 0);
	unk_0xF7B58B81A69E540F(&Local_149, 73);
	unk_0x1AC0E3669E60AAAD(&Local_222, 321);
	unk_0x8A10FCF639EC0104(0);
	if (!func_451())
	{
		return 0;
	}
	if (unk_0xFA4B36553B2A7802())
	{
		func_49(func_50(0));
		func_49(func_50(1));
		func_49(func_50(2));
		unk_0x2B0BB514F9140141("mp_am_hold_up");
		unk_0x2B0BB514F9140141("mp_missheist_countrybank@cower");
		Local_149.f_35 = 8;
		if (func_450())
		{
			unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 11);
		}
		else if (func_449())
		{
			unk_0x9956FB0E4B50ECB8(&(Local_149.f_13), 12);
		}
		Local_149.f_19 = unk_0x0ADD324BC46177EF(1, 11);
		Local_149.f_22 = unk_0x0ADD324BC46177EF(1, 5);
		if ((func_12() && !func_398(unk_0x3F80C6638E3A1A90(), 1)) && !func_398(unk_0x3F80C6638E3A1A90(), 2))
		{
			Local_149.f_34 = 2;
			unk_0x9956FB0E4B50ECB8(&(Local_149.f_14), 0);
		}
		else
		{
			Local_149.f_34 = 1;
		}
		Local_149.f_71 = unk_0x8AF26D6D6BBE6931(18f, 28f);
	}
	if (func_164(unk_0x3F80C6638E3A1A90()) != 155)
	{
		unk_0x3C4B79CAC07FF64D(func_50(1), 0);
	}
	uVar0 = func_123(1180, -1, 0);
	if (unk_0xB519E5386FBF69E5(uVar0, 20) && unk_0xB519E5386FBF69E5(iVar0, 21))
	{
		unk_0x9956FB0E4B50ECB8(&iLocal_544, 1);
	}
	Local_222[unk_0xA1238458CB587858() /*10*/] = 0;
	return 1;
}

int func_449()
{
	if (iLocal_777 >= 0 && iLocal_777 <= 9)
	{
		if (func_410(5, 6) || func_410(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (iLocal_777 >= 10 && iLocal_777 <= 14)
	{
		if (func_410(9, 10) || func_410(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (iLocal_777 >= 15 && iLocal_777 <= 19)
	{
		if (func_410(7, 8) || func_410(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_450()
{
	if (iLocal_777 >= 0 && iLocal_777 <= 9)
	{
		if (func_410(6, 7) || func_410(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (iLocal_777 >= 10 && iLocal_777 <= 14)
	{
		if (func_410(10, 11) || func_410(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (iLocal_777 >= 15 && iLocal_777 <= 19)
	{
		if (func_410(8, 9) || func_410(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_451()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x00AAD79B42B3E036())
		{
			return 0;
		}
		if (unk_0x2953FEB47CBA6611())
		{
			return 1;
		}
		if (func_431())
		{
			return 0;
		}
		if (func_429(155))
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

int func_452(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD0642B91C061B527();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_444();
			}
			else
			{
				return 0;
			}
		}
		if (!func_453())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x00AAD79B42B3E036())
				{
					if (!bParam2)
					{
						func_444();
					}
					else
					{
						return 0;
					}
				}
				if (func_431())
				{
					if (!bParam2)
					{
						func_444();
					}
					else
					{
						return 0;
					}
				}
				if (func_429(155))
				{
					if (!bParam2)
					{
						func_444();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAB63AB6154522A4E())
			{
				if (!bParam2)
				{
					func_444();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD0642B91C061B527();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			if (!bParam2)
			{
				func_444();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAB63AB6154522A4E())
	{
		if (!bParam2)
		{
			func_444();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_453()
{
	return Global_1315884;
}

void func_454(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x00AAD79B42B3E036())
	{
		func_444();
	}
	unk_0xE1306BF06D83921B(uParam0, 0, Param1.f_16);
}

int func_455(int iParam0)
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
		
		case 65:
			return 32;
		
		case 66:
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
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 72:
			return 32;
		
		case 70:
			return 32;
		
		case 71:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 83:
			return 2;
		
		case 88:
			return 1;
		
		case 84:
			return 2;
		
		case 85:
			return 4;
		
		case 86:
			return 2;
		
		case 87:
			return 2;
		
		case 69:
			return 1;
		
		case 89:
			return 2;
		
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
			return 0;
		
		case 96:
			return 1;
		
		default:
	}
	return 0;
}

