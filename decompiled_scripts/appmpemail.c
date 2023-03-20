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
	int iLocal_18[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	struct<16> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_60[19];
	struct<16> Local_175[19];
	int iLocal_480 = 0;
	struct<3> Local_481 = { 0, 0, 0 } ;
	struct<3> Local_484 = { 0, 0, 0 } ;
	var uLocal_487 = 0;
	int iLocal_488 = 0;
	bool bLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	struct<57> Local_492 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
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
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
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
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
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
	unk_0x15378F974E08496E();
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) == 0)
	{
		func_52();
	}
	func_51();
	Global_16759 = 0;
	Global_98931.f_12665[Global_14394 /*20*/].f_18 = 0;
	Global_14551 = 0;
	func_50();
	func_49(Global_14375, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_47();
	func_45();
	if (Global_14394.f_1 > 3)
	{
		Global_14394.f_1 = 7;
	}
	iLocal_41 = unk_0x48E480685981C7D4();
	Global_14398 = 0;
	unk_0x2B4380FBF49E1B71(&Local_484);
	Local_481 = { Local_484 };
	Local_481.f_0 = (Local_481.f_0 - 10f);
	Local_481.f_1 = (Local_481.f_1 + 20f);
	Global_16726 = 0;
	Global_16727 = 1;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_16727 == 0 && Global_16726 == 1)
		{
			func_44();
		}
		if (Global_16727 == 1 && Global_16726 == 0)
		{
			func_39();
		}
		if (iLocal_40 == 0)
		{
			iLocal_42 = unk_0x48E480685981C7D4();
			if ((iLocal_42 - iLocal_41) > 500)
			{
				iLocal_40 = 1;
			}
		}
		if ((Global_14394.f_1 != 9 && Global_16727 == 0) && Global_16726 == 0)
		{
			switch (Global_14394.f_1)
			{
				case 7:
					if (Global_16759 == 0)
					{
						if (Global_2458398 == 0)
						{
							func_38();
							func_32();
						}
					}
					break;
				
				case 8:
					if (Global_16759 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_16759 == 0)
			{
				if (func_4())
				{
					Global_16726 = 1;
				}
			}
			else if (func_3(2, Global_14362, 0) || unk_0x236D8AD7EE179F46(Global_2265, 12))
			{
				if (unk_0xD994929E13CC1ED5(&(Global_2549112[iLocal_34 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0xC69E84EBBD7166E6(&Global_2265, 12);
					func_2();
					Global_14372 = 1;
					Global_16759 = 0;
					if (Global_14394.f_1 > 3)
					{
						Global_14394.f_1 = 7;
					}
					if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) == 0)
					{
						func_52();
					}
					func_49(Global_14375, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_47();
					func_45();
					if (Global_2549112[iLocal_34 /*104*/].f_29 > 0)
					{
						if (Global_2549112[iLocal_34 /*104*/].f_31 == 1)
						{
							Global_2549112[iLocal_34 /*104*/].f_29 = 4;
							Global_2549112[iLocal_34 /*104*/].f_24 = 1;
						}
						else
						{
							Global_2549112[iLocal_34 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) == 0)
		{
			func_52();
		}
		if (func_1())
		{
			func_52();
		}
	}
}

int func_1()
{
	if (((Global_14394.f_1 == 1 || Global_14394.f_1 == 3) || Global_14394.f_1 == 0) || Global_14338 == 1)
	{
		Global_14381 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x35D7948F61AA3FEC(-1, "Menu_Back", &Global_14383, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x093DEAE9A023FAA0(iParam0, iParam1) || (iParam2 == 1 && unk_0x5BD35B90C0693406(iParam0, iParam1)))
	{
		if (unk_0x913B1C01C1BA6C6F())
		{
			if (unk_0x87E58291A874D55F() == 0 || (unk_0x18138B3C6FD07449() && unk_0x3D6272A8E1C449E9(2)))
			{
				return 0;
			}
		}
		if (unk_0xDB10DED5ABC4AA20() || unk_0x30D46D6512711A3E())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	if (Global_2870 == 1 || Global_14394.f_1 < 7)
	{
		Global_14381 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (iLocal_37)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_37 = 0;
		}
	}
	if (unk_0x3D6272A8E1C449E9(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_37 == 0)
	{
		if (func_3(2, Global_14370, 0))
		{
			func_9();
			iLocal_37 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_14371, 0))
		{
			func_6();
			iLocal_37 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_6()
{
	func_49(Global_14375, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
	func_7();
}

void func_7()
{
	if (func_8())
	{
		if (Global_14557 == 0)
		{
			unk_0xFFC5C53467CD6DB5(2);
		}
		else
		{
			unk_0xFFC5C53467CD6DB5(1);
		}
	}
}

int func_8()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69020)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x60FC347BF9CAD1BD();
	iVar1 = unk_0x7FCE6803A3D23268(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2550579 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_9()
{
	func_49(Global_14375, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x35D7948F61AA3FEC(-1, "Menu_Navigate", &Global_14383, 1);
	func_10();
}

void func_10()
{
	if (func_8())
	{
		if (Global_14557 == 0)
		{
			unk_0xFFC5C53467CD6DB5(1);
		}
		else
		{
			unk_0xFFC5C53467CD6DB5(2);
		}
	}
}

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_2549112[iLocal_34 /*104*/].f_24 == 1)
	{
		if (Global_14372 == 0)
		{
			if (unk_0xCAD9951C953F5B2D(2, Global_14365))
			{
				func_2();
				Global_14372 = 1;
				func_26();
				if (Global_2549112[iLocal_34 /*104*/].f_27 == 1)
				{
					Global_2549112[iLocal_34 /*104*/].f_99[0] = 0;
					Global_2549112[iLocal_34 /*104*/].f_99[1] = 0;
					Global_2549112[iLocal_34 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_2549112[iLocal_34 /*104*/].f_99[Global_14394] = 0;
				}
				if (func_25(iLocal_34))
				{
				}
				else
				{
					Global_2549112[iLocal_34 /*104*/].f_24 = 0;
					Global_2549112[iLocal_34 /*104*/].f_28 = 0;
				}
				unk_0x4474CF0FD32A90B2(Global_2549112[iLocal_34 /*104*/].f_16);
				func_49(Global_14375, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				if (iLocal_32 > 0)
				{
					iLocal_32 = (iLocal_32 - 1);
				}
				func_45();
				if (Global_14394.f_1 > 3)
				{
					Global_14394.f_1 = 7;
					Global_16759 = 0;
				}
			}
		}
	}
	else if (Global_14372 == 0)
	{
		if (unk_0xCAD9951C953F5B2D(2, Global_14366))
		{
			if (iLocal_36 == 1)
			{
				if (Global_14394.f_1 > 3)
				{
					StringCopy(&Global_67694, unk_0x46E7F5908F815DDC(&Global_16734), 64);
					Global_67719 = 7;
					unk_0xF3148AAF69AF9CBC(&Global_2265, 10);
					Global_14394.f_1 = 6;
				}
				func_52();
			}
		}
	}
	if (Global_2549112[iLocal_34 /*104*/].f_31 == 1)
	{
		if (Global_14372 == 0)
		{
			if (func_3(2, Global_14366, 0))
			{
				func_23();
				Global_14372 = 1;
				Global_2549112[iLocal_34 /*104*/].f_29 = 2;
				Global_2549112[iLocal_34 /*104*/].f_24 = 1;
				Global_2549112[iLocal_34 /*104*/].f_31 = 0;
				unk_0xC69E84EBBD7166E6(&Global_2264, 17);
				Global_16759 = 0;
				if (Global_14394.f_1 > 3)
				{
					Global_14394.f_1 = 7;
				}
				func_49(Global_14375, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				func_45();
			}
		}
	}
	if (Global_14372 == 0 && iLocal_40 == 1)
	{
		if (func_3(2, Global_14363, 0))
		{
			Global_14372 = 1;
			if (Global_2549112[iLocal_34 /*104*/].f_29 > 0)
			{
				func_23();
				Global_2549112[iLocal_34 /*104*/].f_29 = 3;
				Global_2549112[iLocal_34 /*104*/].f_24 = 1;
				Global_16759 = 0;
				if (Global_14394.f_1 > 3)
				{
					Global_14394.f_1 = 7;
				}
				func_49(Global_14375, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_47();
				func_45();
			}
			else if (Global_2549112[iLocal_34 /*104*/].f_30 == 1)
			{
				func_23();
				Global_1579 = 144;
				if (Global_14394.f_1 > 3)
				{
					Global_14394.f_1 = 10;
					func_21();
				}
				func_20("appContacts");
				Global_14392 = unk_0xE81651AD79516E48("appContacts", 3800);
				unk_0xD25F9F5A80824C77("appContacts");
				Global_1579 = Global_2549112[iLocal_34 /*104*/].f_17;
				if (Global_98931.f_32499[Global_1579 /*29*/].f_24[Global_14394] == 0)
				{
					func_19(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_98931.f_32499[Global_1579 /*29*/].f_7), "CELL_211", &(Global_98931.f_32499[Global_1579 /*29*/].f_3), 0);
				}
				func_13();
				func_52();
			}
		}
	}
}

void func_13()
{
	char cVar0[24];
	
	if (Global_14377 == 1)
	{
		return;
	}
	if (Global_14394.f_1 < 4)
	{
		return;
	}
	while (!unk_0xCC8E3BAC62A29F42(Global_14375))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14394.f_1)
	{
		case 6:
			func_49(Global_14375, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_17(Global_2869);
			if (Global_2869 == 1)
			{
				func_49(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14398), -1082130432, -1082130432, -1082130432);
				Global_14374 = Global_14398;
			}
			else
			{
				func_49(Global_14375, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14399), -1082130432, -1082130432, -1082130432);
				Global_14374 = Global_14399;
			}
			if (Global_14382)
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_19(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_19(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14554 == 0)
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			}
			else if (Global_69020)
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			}
			else
			{
				if (Global_14553 == 1)
				{
					if (Global_14382)
					{
						func_19(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14382)
				{
					func_19(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_49(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_19(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			if (unk_0x236D8AD7EE179F46(Global_2264, 20))
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14337)
				{
					func_19(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14393 == 1)
			{
				func_16();
				func_49(Global_14375, "SET_THEME", unk_0xBBDA792448DB5A89(Global_98931.f_12665[Global_14394 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15706)
				{
					unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
					unk_0xBD0C54D89298454E(4);
					unk_0xBD0C54D89298454E(0);
					unk_0xBD0C54D89298454E(2);
					unk_0x6CE839BF5D87A428("CELL_CONDFON");
					unk_0x6222A57F463E8EE7(&Global_15708);
					unk_0xC3822F70D0E7940B();
					func_15("CELL_300");
					func_15("CELL_217");
					func_15("CELL_217");
					unk_0xBA9BA6181F2B6111();
				}
				else if (Global_98931.f_32499[Global_1579 /*29*/].f_24[Global_14394] == 0)
				{
					func_19(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_19(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_98931.f_32499[Global_1579 /*29*/].f_7), "CELL_217", &(Global_98931.f_32499[Global_1579 /*29*/].f_3), 0);
				}
				func_49(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15693 == 4 || Global_15693 == 3)
			{
				func_49(Global_14375, "SET_THEME", unk_0xBBDA792448DB5A89(Global_98931.f_12665[Global_14394 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_16();
				if (Global_15706)
				{
					unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
					unk_0xBD0C54D89298454E(4);
					unk_0xBD0C54D89298454E(0);
					unk_0xBD0C54D89298454E(2);
					unk_0x6CE839BF5D87A428("CELL_CONDFON");
					unk_0x6222A57F463E8EE7(&Global_15708);
					unk_0xC3822F70D0E7940B();
					func_15("CELL_300");
					func_15("CELL_219");
					func_15("CELL_219");
					unk_0xBA9BA6181F2B6111();
				}
				else
				{
					if (Global_15951)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_98931.f_32499[Global_1579 /*29*/].f_24[Global_14394] == 0)
					{
						func_49(Global_14375, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98[Global_1579 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_49(Global_14375, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_98931.f_32499[Global_1579 /*29*/].f_3), &(Global_98931.f_32499[Global_1579 /*29*/].f_7), &cVar0, &(Global_98931.f_32499[Global_1579 /*29*/].f_3), 0);
					}
				}
				func_49(Global_14375, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (unk_0xCC8E3BAC62A29F42(Global_14375))
	{
		if (Global_14393 == 1)
		{
			if (Global_14382)
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15740)
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x236D8AD7EE179F46(Global_2264, 20))
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC69E84EBBD7166E6(&Global_2264, 17);
		}
		else
		{
			func_19(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			if (unk_0x236D8AD7EE179F46(Global_2264, 20))
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14382)
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14337)
				{
					func_19(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15(char* sParam0)
{
	unk_0x6CE839BF5D87A428(sParam0);
	unk_0xC3822F70D0E7940B();
}

void func_16()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (Global_14394 == 0)
		{
			switch (Global_98931.f_12665[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 0);
					break;
				
				case 2:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 1);
					break;
				
				case 3:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 2);
					break;
				
				case 4:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 3);
					break;
				
				case 5:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 4);
					break;
				
				case 6:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 5);
					break;
				
				case 7:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 1)
		{
			switch (Global_98931.f_12665[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 6);
					break;
				
				case 2:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 0);
					break;
				
				case 3:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 1);
					break;
				
				case 4:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 2);
					break;
				
				case 5:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 3);
					break;
				
				case 6:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 4);
					break;
				
				case 7:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 2)
		{
			switch (Global_98931.f_12665[Global_14394 /*20*/].f_6)
			{
				case 1:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 5);
					break;
				
				case 2:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 6);
					break;
				
				case 3:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 1);
					break;
				
				case 4:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 0);
					break;
				
				case 5:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 2);
					break;
				
				case 6:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 3);
					break;
				
				case 7:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14394 == 3)
		{
			switch (Global_2550577)
			{
				case 1:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 0);
					break;
				
				case 2:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 1);
					break;
				
				case 3:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 2);
					break;
				
				case 4:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 3);
					break;
				
				case 5:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 4);
					break;
				
				case 6:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 5);
					break;
				
				case 7:
					unk_0x4561DA56B6F63CB2(unk_0x1329891157A54C63(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Global_16761 = 0;
	Global_2869 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2833[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_18(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 3))
								{
									iVar2 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14556 = 0;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_15(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar2);
								unk_0xBA9BA6181F2B6111();
							}
							if (Global_2436984)
							{
								if (iVar1 == 14)
								{
									func_19(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2833[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2271[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2271[iVar1 /*15*/].f_4)
					{
						if (Global_2833[iVar0] == 0)
						{
							Global_2797[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_98931.f_12755[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_98931.f_12755[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_98931.f_12755[iVar3 /*104*/].f_99[Global_14394] == 1)
											{
												Global_16761++;
											}
										}
									}
									iVar3++;
								}
								func_19(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16761), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69020)
								{
									iVar4 = 0;
									iVar4 = Global_2549111;
									func_19(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14394)
									{
										case 0:
											iVar5 = Global_36498;
											break;
										
										case 1:
											iVar5 = Global_36499;
											break;
										
										case 2:
											iVar5 = Global_36500;
											break;
										
										default:
											break;
									}
									func_19(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_19(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16756), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_15(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(Global_2270);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_15(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar6);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x236D8AD7EE179F46(Global_2265, 3))
								{
									iVar7 = 42;
									Global_14556 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14556 = 0;
								}
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_15(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(iVar7);
								unk_0xBA9BA6181F2B6111();
							}
							else if (iVar1 == 8)
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_15(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(42);
								unk_0xBA9BA6181F2B6111();
							}
							else if ((iVar1 == 23 && unk_0xD994929E13CC1ED5(&(Global_2271[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x236D8AD7EE179F46(Global_2265, 6))
							{
								unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
								unk_0xBD0C54D89298454E(1);
								unk_0xBD0C54D89298454E(iVar0);
								unk_0xBD0C54D89298454E(Global_2271[iVar1 /*15*/].f_10);
								unk_0xBD0C54D89298454E(0);
								func_15(&(Global_2271[iVar1 /*15*/]));
								unk_0xBD0C54D89298454E(42);
								unk_0xBA9BA6181F2B6111();
							}
							else
							{
								func_19(Global_14375, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2271[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2271[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2833[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_18(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_19(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam7))
	{
		func_15(sParam7);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam8))
	{
		func_15(sParam8);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam9))
	{
		func_15(sParam9);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam10))
	{
		func_15(sParam10);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam11))
	{
		func_15(sParam11);
	}
	unk_0xBA9BA6181F2B6111();
}

void func_20(char* sParam0)
{
	unk_0xE0013E74AB6963DC(sParam0);
	while (!unk_0x06D4A1BE3DF77306(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (func_22() && unk_0xA6D377CB914A4C3C(unk_0x81873881071CD9FE(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && iVar1 == 0)
		{
			iVar2 = unk_0x0F7FE22229DBD748(unk_0x81873881071CD9FE(), 0);
			if (Global_69020)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x77B5315758411237(unk_0x81873881071CD9FE()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x77B5315758411237(unk_0x81873881071CD9FE()))
			{
				iVar0 = 1;
			}
			if (!Global_14337)
			{
				if (Global_1579 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
						{
							if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
							{
							}
							else
							{
								if (Global_69020)
								{
									unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 244, 0);
									unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 243, 0);
									unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 242, 0);
								}
								unk_0xF3148AAF69AF9CBC(&Global_2264, 11);
								unk_0xA0E7F565B88CC79B(unk_0x81873881071CD9FE(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_22()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x60FC347BF9CAD1BD();
	iVar1 = unk_0x7FCE6803A3D23268(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_23()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x35D7948F61AA3FEC(-1, "Menu_Accept", &Global_14383, 1);
		func_24();
	}
}

void func_24()
{
	if (func_8())
	{
		unk_0xFFC5C53467CD6DB5(5);
	}
}

int func_25(int iParam0)
{
	if ((Global_98931.f_12755[iParam0 /*104*/].f_99[0] == 1 || Global_98931.f_12755[iParam0 /*104*/].f_99[1] == 1) || Global_98931.f_12755[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	if (func_18(14))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
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
		Global_14394 = func_27();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

var func_27()
{
	func_28();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_28()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_31(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_30(unk_0x81873881071CD9FE());
			if (func_29(iVar0) && (!func_18(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_29(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_29(int iParam0)
{
	return iParam0 < 3;
}

int func_30(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)
{
	if (func_29(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_32()
{
	struct<16> Var0;
	
	if (Global_14372 == 0)
	{
		if ((func_3(2, Global_14363, 0) || Global_2550362 == 1) || Global_16753 == 1)
		{
			if (Global_2550362 == 0 && Global_16753 == 0)
			{
				func_23();
			}
			Global_14372 = 1;
			iLocal_40 = 0;
			func_19(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC69E84EBBD7166E6(&Global_2264, 17);
			iLocal_34 = iLocal_18[iLocal_32];
			if (iLocal_32 < iLocal_491)
			{
				if (Global_14394.f_1 > 3)
				{
					Global_14394.f_1 = 8;
					Global_16759 = 1;
					iLocal_33 = iLocal_32;
					unk_0x71327E2008DDA1FC(iLocal_18[iLocal_32], &Local_492);
				}
				unk_0x5AE11BC36633DE4E(0);
				iLocal_38 = 0;
				unk_0x21ED0FC9B5CC748B(Global_14375, "GET_CURRENT_SELECTION");
				uLocal_43 = unk_0x723E3684EF582590();
				while (!unk_0xAB56DCBFCD98FF03(uLocal_43) && iLocal_38 == 0)
				{
					unk_0x4EDE34FBADD967A6(0);
					if (unk_0xC9D9444186B5A374() > 2000)
					{
						iLocal_38 = 1;
					}
				}
				func_37();
				unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
				unk_0xBD0C54D89298454E(9);
				unk_0xBD0C54D89298454E(0);
				func_15("CELL_1");
				unk_0x6CE839BF5D87A428("CELL_TO_FIELD");
				unk_0x6222A57F463E8EE7(unk_0xB67DF8F35744CF60(unk_0x1329891157A54C63()));
				unk_0xC3822F70D0E7940B();
				unk_0x6CE839BF5D87A428("CELL_FROM_FIELD");
				unk_0x6222A57F463E8EE7("Rockstar Games Social Club");
				unk_0xC3822F70D0E7940B();
				unk_0x6CE839BF5D87A428("CELL_EMAIL_BCON");
				unk_0x6222A57F463E8EE7(&(Local_492.f_56[0 /*16*/]));
				unk_0x6222A57F463E8EE7(&(Local_492.f_56[1 /*16*/]));
				unk_0x6222A57F463E8EE7(&(Local_492.f_56[2 /*16*/]));
				unk_0x6222A57F463E8EE7(&(Local_492.f_56[3 /*16*/]));
				unk_0x6222A57F463E8EE7(&(Local_492.f_56[4 /*16*/]));
				unk_0x6222A57F463E8EE7(&(Local_492.f_56[5 /*16*/]));
				unk_0x6222A57F463E8EE7(&(Local_492.f_56[6 /*16*/]));
				unk_0x6222A57F463E8EE7(&(Local_492.f_56[7 /*16*/]));
				unk_0x6222A57F463E8EE7(&(Local_492.f_56[8 /*16*/]));
				unk_0x6222A57F463E8EE7(&(Local_492.f_56[9 /*16*/]));
				unk_0xC3822F70D0E7940B();
				unk_0x6CE839BF5D87A428("CELL_2000");
				unk_0x6222A57F463E8EE7("Rockstar Games Social Club");
				unk_0xC3822F70D0E7940B();
				unk_0xBA9BA6181F2B6111();
				func_19(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_49(Global_14375, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_32 == 0)
				{
					if (Global_2549111 > 0)
					{
						func_34(3425, uLocal_487, -1, 1);
						Global_2549111 = 0;
					}
				}
				return;
			}
			if (Global_2549112[iLocal_34 /*104*/].f_24 != 0)
			{
				if (Global_14394.f_1 > 3)
				{
					Global_14394.f_1 = 8;
				}
				if (Global_2550362 == 1 || Global_16753 == 1)
				{
					iLocal_34 = iLocal_18[0];
					iLocal_33 = 0;
					if (Global_2550362 == 1)
					{
					}
					Global_16753 = 0;
				}
				else
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_38 = 0;
					unk_0x21ED0FC9B5CC748B(Global_14375, "GET_CURRENT_SELECTION");
					uLocal_43 = unk_0x723E3684EF582590();
					while (!unk_0xAB56DCBFCD98FF03(uLocal_43) && iLocal_38 == 0)
					{
						unk_0x4EDE34FBADD967A6(0);
						if (unk_0xC9D9444186B5A374() > 2000)
						{
							iLocal_38 = 1;
						}
					}
					if (iLocal_38 == 1)
					{
						iLocal_39 = 0;
					}
					else
					{
						iLocal_39 = unk_0x2D1F70CC7C051146(uLocal_43);
					}
					if (iLocal_39 < 0)
					{
						iLocal_39 = 0;
					}
					iLocal_34 = iLocal_18[iLocal_32];
					iLocal_33 = iLocal_32;
				}
				Global_2549112[iLocal_34 /*104*/].f_28 = 1;
				iLocal_36 = 0;
				StringCopy(&Global_16734, "NO_HYPERLINK", 64);
				Var0 = { Global_2549112[iLocal_34 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x7281387C8D4EC316(&Var0))
				{
					Global_16734 = { Var0 };
					iLocal_36 = 1;
					if (Global_14382)
					{
						func_19(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
					Global_2549112[iLocal_34 /*104*/].f_26 = 1;
					Global_2549112[iLocal_34 /*104*/].f_24 = 2;
				}
				if (Global_2549112[iLocal_34 /*104*/].f_26 == 0)
				{
					Global_2549112[iLocal_34 /*104*/].f_24 = 1;
				}
				func_37();
				unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
				unk_0xBD0C54D89298454E(9);
				unk_0xBD0C54D89298454E(0);
				func_15("CELL_1");
				unk_0x6CE839BF5D87A428("CELL_TO_FIELD");
				unk_0x6222A57F463E8EE7(unk_0xB67DF8F35744CF60(unk_0x1329891157A54C63()));
				unk_0xC3822F70D0E7940B();
				if (Global_2549112[iLocal_34 /*104*/].f_17 == 145)
				{
					unk_0x6CE839BF5D87A428("CELL_FROM_FIELD");
					unk_0x6222A57F463E8EE7(&(Global_2549112[iLocal_34 /*104*/].f_50));
					unk_0xC3822F70D0E7940B();
				}
				else
				{
					unk_0x6CE839BF5D87A428("CELL_FROM_FIELD");
					unk_0x072D7B028D6C7A05(&(Global_98931.f_32499[Global_2549112[iLocal_34 /*104*/].f_17 /*29*/].f_3));
					unk_0xC3822F70D0E7940B();
				}
				switch (Global_2549112[iLocal_34 /*104*/].f_32)
				{
					case 0:
						func_15(&(Global_2549112[iLocal_34 /*104*/]));
						break;
					
					case 1:
						unk_0x6CE839BF5D87A428(&(Global_2549112[iLocal_34 /*104*/]));
						unk_0x6222A57F463E8EE7(&(Global_2549112[iLocal_34 /*104*/].f_33));
						if (Global_2549112[iLocal_34 /*104*/].f_66 == 1 && !unk_0xD994929E13CC1ED5(&(Global_2549112[iLocal_34 /*104*/].f_67), "NULL"))
						{
							unk_0x6222A57F463E8EE7(&(Global_2549112[iLocal_34 /*104*/].f_67));
						}
						if ((Global_2549112[iLocal_34 /*104*/].f_66 == 2 && !unk_0xD994929E13CC1ED5(&(Global_2549112[iLocal_34 /*104*/].f_67), "NULL")) && !unk_0xD994929E13CC1ED5(&(Global_2549112[iLocal_34 /*104*/].f_83), "NULL"))
						{
							if (unk_0x7281387C8D4EC316(&(Global_2549112[iLocal_34 /*104*/].f_67)))
							{
								unk_0x072D7B028D6C7A05(&(Global_2549112[iLocal_34 /*104*/].f_67));
							}
							else
							{
								unk_0x6222A57F463E8EE7(&(Global_2549112[iLocal_34 /*104*/].f_67));
							}
							if (unk_0x7281387C8D4EC316(&(Global_2549112[iLocal_34 /*104*/].f_83)))
							{
								unk_0x072D7B028D6C7A05(&(Global_2549112[iLocal_34 /*104*/].f_83));
							}
							else
							{
								unk_0x6222A57F463E8EE7(&(Global_2549112[iLocal_34 /*104*/].f_83));
							}
						}
						unk_0xC3822F70D0E7940B();
						break;
					
					case 2:
						unk_0x6CE839BF5D87A428(&(Global_2549112[iLocal_34 /*104*/]));
						unk_0x6D55FF05D62B91BC(Global_2549112[iLocal_34 /*104*/].f_49);
						unk_0xC3822F70D0E7940B();
						break;
					
					case 3:
						unk_0x6CE839BF5D87A428(&(Global_2549112[iLocal_34 /*104*/]));
						unk_0x6222A57F463E8EE7(&(Global_2549112[iLocal_34 /*104*/].f_33));
						unk_0x6D55FF05D62B91BC(Global_2549112[iLocal_34 /*104*/].f_49);
						if (Global_2549112[iLocal_34 /*104*/].f_66 == 1 && !unk_0xD994929E13CC1ED5(&(Global_2549112[iLocal_34 /*104*/].f_67), "NULL"))
						{
							unk_0x6222A57F463E8EE7(&(Global_2549112[iLocal_34 /*104*/].f_67));
						}
						if ((Global_2549112[iLocal_34 /*104*/].f_66 == 2 && !unk_0xD994929E13CC1ED5(&(Global_2549112[iLocal_34 /*104*/].f_67), "NULL")) && !unk_0xD994929E13CC1ED5(&(Global_2549112[iLocal_34 /*104*/].f_83), "NULL"))
						{
							if (unk_0x7281387C8D4EC316(&(Global_2549112[iLocal_34 /*104*/].f_67)))
							{
								unk_0x072D7B028D6C7A05(&(Global_2549112[iLocal_34 /*104*/].f_67));
							}
							else
							{
								unk_0x6222A57F463E8EE7(&(Global_2549112[iLocal_34 /*104*/].f_67));
							}
							if (unk_0x7281387C8D4EC316(&(Global_2549112[iLocal_34 /*104*/].f_83)))
							{
								unk_0x072D7B028D6C7A05(&(Global_2549112[iLocal_34 /*104*/].f_83));
							}
							else
							{
								unk_0x6222A57F463E8EE7(&(Global_2549112[iLocal_34 /*104*/].f_83));
							}
						}
						unk_0xC3822F70D0E7940B();
						break;
					
					case 4:
						func_33(iLocal_34);
						break;
					
					case 5:
						func_33(iLocal_34);
						break;
					
					case 6:
						func_33(iLocal_34);
						break;
					
					case 7:
						func_33(iLocal_34);
						break;
					
					case 8:
						func_33(iLocal_34);
						break;
					
					case 9:
						func_33(iLocal_34);
						break;
					
					case 10:
						func_33(iLocal_34);
						break;
					
					case 11:
						func_33(iLocal_34);
						break;
				}
				if (Global_2549112[iLocal_34 /*104*/].f_17 == 145)
				{
					unk_0x6CE839BF5D87A428("CELL_2000");
					unk_0x6222A57F463E8EE7(&(Global_2549112[iLocal_34 /*104*/].f_50));
					unk_0xC3822F70D0E7940B();
				}
				else
				{
					func_15(&(Global_98931.f_32499[Global_2549112[iLocal_34 /*104*/].f_17 /*29*/].f_3));
				}
				unk_0xBA9BA6181F2B6111();
				Global_16759 = 1;
				func_49(Global_14375, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x4474CF0FD32A90B2(Global_2549112[iLocal_34 /*104*/].f_16);
				if (Global_2549112[iLocal_34 /*104*/].f_29 > 0)
				{
					if (Global_14382)
					{
						func_19(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_2549112[iLocal_34 /*104*/].f_30 == 1)
				{
					if (Global_14382)
					{
						func_19(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_19(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_2549112[iLocal_34 /*104*/].f_29 > 0)
				{
					if (unk_0xD994929E13CC1ED5(&(Global_2549112[iLocal_34 /*104*/]), "CELL_FINV"))
					{
						if (Global_14382)
						{
							func_19(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14375, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_14382)
					{
						func_19(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14382)
				{
					func_19(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_2549112[iLocal_34 /*104*/].f_24 == 2)
				{
					if (Global_2549112[iLocal_34 /*104*/].f_31 == 1)
					{
						iLocal_36 = 0;
						if (Global_14382)
						{
							func_19(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
					}
					else if (iLocal_36 == 0)
					{
						func_19(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0xC69E84EBBD7166E6(&Global_2264, 17);
					}
				}
				else if (Global_14382)
				{
					func_19(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
				}
				else
				{
					func_19(Global_14375, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xF3148AAF69AF9CBC(&Global_2264, 17);
				}
				Global_98931.f_12665[Global_14394 /*20*/].f_18 = 0;
				Global_2550362 = 0;
			}
			else
			{
				Global_98931.f_12665[Global_14394 /*20*/].f_18 = 0;
				Global_2550362 = 0;
			}
		}
		if (Global_2458398 == 0)
		{
			if (Global_69020)
			{
			}
		}
	}
}

void func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_98931.f_12755[iParam0 /*104*/].f_49)
	{
		case 1:
			unk_0x6CE839BF5D87A428("CELL_CL01");
			break;
		
		case 2:
			unk_0x6CE839BF5D87A428("CELL_CL02");
			break;
		
		case 3:
			unk_0x6CE839BF5D87A428("CELL_CL03");
			break;
		
		case 4:
			unk_0x6CE839BF5D87A428("CELL_CL04");
			break;
		
		case 5:
			unk_0x6CE839BF5D87A428("CELL_CL05");
			break;
		
		case 6:
			unk_0x6CE839BF5D87A428("CELL_CL06");
			break;
		
		case 7:
			unk_0x6CE839BF5D87A428("CELL_CL07");
			break;
		
		case 8:
			unk_0x6CE839BF5D87A428("CELL_CL08");
			break;
		
		case 9:
			unk_0x6CE839BF5D87A428("CELL_CL09");
			break;
	}
	unk_0x072D7B028D6C7A05(&(Global_98931.f_12755[iParam0 /*104*/]));
	while (iVar0 < Global_98931.f_12755[iParam0 /*104*/].f_49)
	{
		switch (Global_98931.f_12755[iParam0 /*104*/].f_32)
		{
			case 4:
				unk_0x072D7B028D6C7A05(&(Global_2451473.f_1554[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0x072D7B028D6C7A05(&(Global_1698747[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0x072D7B028D6C7A05(&(Global_1698788[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0x072D7B028D6C7A05(&(Global_1698809[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0x072D7B028D6C7A05(&(Global_1698826[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0x072D7B028D6C7A05(&(Global_1698839[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0x072D7B028D6C7A05(&(Global_1698852[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0x072D7B028D6C7A05(&(Global_1698865[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0xC3822F70D0E7940B();
}

void func_34(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, iParam3);
	}
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

var func_36()
{
	return Global_1312729;
}

void func_37()
{
	if (iLocal_480)
	{
		unk_0x9B331DCFDFC55491(&Local_44);
	}
	iLocal_480 = 0;
	StringCopy(&Local_44, "05_b_sext_stripperJuliet", 64);
	iLocal_480 = 1;
	unk_0xB711FC19ADBD3C70(&Local_44, 0);
	while (!unk_0x682001A921A80123(&Local_44))
	{
		unk_0x4EDE34FBADD967A6(100);
	}
	if (unk_0xD994929E13CC1ED5(&(Global_2549112[1 /*104*/]), &(Local_60[1 /*6*/])))
	{
		Local_175[1 /*16*/] = { Local_44 };
		if (unk_0xD994929E13CC1ED5(&(Local_175[1 /*16*/]), &Local_44))
		{
		}
	}
}

void func_38()
{
	if (iLocal_37)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_37 = 0;
		}
	}
	if (unk_0x3D6272A8E1C449E9(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_32 > 0)
			{
				iLocal_32 = (iLocal_32 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_32++;
			if (iLocal_32 == iLocal_31)
			{
				iLocal_32 = 0;
			}
			func_6();
		}
	}
	if (iLocal_37 == 0)
	{
		if (func_3(2, Global_14370, 0))
		{
			if (iLocal_32 > 0)
			{
				iLocal_32 = (iLocal_32 - 1);
				func_9();
			}
			iLocal_37 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_3(2, Global_14371, 0))
		{
			iLocal_32++;
			if (iLocal_32 == iLocal_31)
			{
				iLocal_32 = 0;
			}
			func_6();
			iLocal_37 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_39()
{
	float fVar0;
	
	fVar0 = func_40(Local_484, Local_481, Global_14354, -90f, 0f, 90f, 350f, 0);
	unk_0xC80CA96CFB5D83B7((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_16727 = 0;
		iLocal_17 = 0;
	}
}

float func_40(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_2550580 == 0)
	{
		if (unk_0x236D8AD7EE179F46(Global_2264, 14) && Global_14394.f_1 < 4)
		{
			unk_0x2B4380FBF49E1B71(&Var0);
			if (Global_14347[Global_14339 /*3*/].f_1 == Var0.f_1)
			{
				Global_2550580 = 1;
			}
		}
	}
	if (func_43() && Global_2550580 == 0)
	{
		return 2f;
	}
	if (iLocal_17 == 0)
	{
		iLocal_17 = unk_0x48E480685981C7D4();
	}
	fVar3 = func_42((unk_0xBBDA792448DB5A89((unk_0x48E480685981C7D4() - iLocal_17)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = unk_0x0BADBFA3B172435F((fVar3 * 90f));
		}
		Global_14322 = { func_41(Param0, Param3, fVar4) };
		Global_14325 = { func_41(Param6, Param9, fVar4) };
	}
	else
	{
		Global_14322 = { Param3 };
		Global_14325 = { Param9 };
	}
	unk_0xB30AC22133A50DEE(Global_14322);
	unk_0xA1D5DA13E8B9FEED(Global_14325, 0);
	return fVar3;
}

Vector3 func_41(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_42(float fParam0, float fParam1, float fParam2)
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

int func_43()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			if (Global_14337 == 0)
			{
				if (Global_1579 != 128)
				{
					if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if (Global_15693 != 2)
						{
						}
					}
				}
			}
		}
		if (func_18(14))
		{
			return 0;
		}
		if (unk_0xA6D377CB914A4C3C(unk_0x81873881071CD9FE(), 0))
		{
			return 0;
		}
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (!unk_0xA29EEE4B2ABE7AE0())
			{
				if (unk_0x2C237D28F05F0008(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xD496D3841112DF95(unk_0x81873881071CD9FE()) || unk_0x9BF75C3BD2379A6C(unk_0x81873881071CD9FE())) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xE6A0905BBE55E98F(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
		if (Global_97979)
		{
			return 0;
		}
	}
	if (Global_69020)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x60FC347BF9CAD1BD();
	iVar1 = unk_0x7FCE6803A3D23268(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xA29EEE4B2ABE7AE0()))
	{
		iVar2 = 1;
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				uVar3 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				if ((((((((unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(uVar3)) || unk_0xD382045D1EFD12D3(unk_0x14B7103DBD149FFE(uVar3))) || unk_0x8923BC9F314B991D(unk_0x14B7103DBD149FFE(uVar3))) || unk_0x14B7103DBD149FFE(uVar3) == joaat("seashark")) || unk_0x14B7103DBD149FFE(uVar3) == joaat("seashark2")) || unk_0x14B7103DBD149FFE(uVar3) == joaat("rhino")) || unk_0x14B7103DBD149FFE(uVar3) == joaat("submersible")) || unk_0x14B7103DBD149FFE(uVar3) == joaat("submersible2")) || unk_0x14B7103DBD149FFE(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2550579 || iVar2 == 1)
	{
		if (unk_0x968BF1C2C695B61A(joaat("apptrackify")) > 0 || Global_98931.f_12665.f_89)
		{
			if (unk_0x968BF1C2C695B61A(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_44()
{
	float fVar0;
	
	fVar0 = func_40(Local_481, Local_484, -90f, 0f, 90f, Global_14354, 350f, 0);
	unk_0xC80CA96CFB5D83B7((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_16726 = 0;
		func_52();
		iLocal_17 = 0;
	}
}

void func_45()
{
	if (Global_2550362 == 0)
	{
		if (iLocal_33 < 0)
		{
			iLocal_33 = 0;
		}
		func_46(Global_14375, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_49(Global_14375, "DISPLAY_VIEW", 8f, unk_0xBBDA792448DB5A89(iLocal_33), -1082130432, -1082130432, -1082130432);
		if (Global_14382)
		{
			if (iLocal_31 > 0)
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_31 > 0)
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_69020)
		{
			func_19(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC69E84EBBD7166E6(&Global_2264, 17);
		}
		else
		{
			func_19(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC69E84EBBD7166E6(&Global_2264, 17);
		}
	}
	else
	{
		iLocal_33 = 0;
	}
}

void func_46(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	func_15(sParam2);
	if (!unk_0xB318FDA0D1ABDB20(sParam3))
	{
		func_15(sParam3);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam4))
	{
		func_15(sParam4);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam5))
	{
		func_15(sParam5);
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam6))
	{
		func_15(sParam6);
	}
	unk_0xBA9BA6181F2B6111();
}

void func_47()
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	int iVar15[10];
	int iVar26;
	int iVar27;
	int iVar28;
	struct<8> Var29;
	
	iLocal_31 = 0;
	func_26();
	iVar13 = 0;
	iVar14 = 0;
	iVar26 = 0;
	while (iVar13 < iLocal_491)
	{
		iVar14 = 0;
		iVar26 = 0;
		while (iVar14 < iLocal_491 && iVar26 == 0)
		{
			unk_0x71327E2008DDA1FC(iVar14, &Local_492);
			if (iVar15[iVar14] == 0)
			{
				unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
				unk_0xBD0C54D89298454E(8);
				unk_0xBD0C54D89298454E(iVar13);
				unk_0xBD0C54D89298454E(iLocal_35);
				unk_0x75A2A42ADE12FD0E(0);
				unk_0x6CE839BF5D87A428("CELL_2000");
				unk_0x6222A57F463E8EE7("Rockstar Games Social Club");
				unk_0xC3822F70D0E7940B();
				unk_0x6CE839BF5D87A428("CELL_EMAIL_SUBJ");
				unk_0x6222A57F463E8EE7(&(Local_492.f_23[0 /*16*/]));
				unk_0x6222A57F463E8EE7(&(Local_492.f_23[1 /*16*/]));
				unk_0xC3822F70D0E7940B();
				unk_0xBA9BA6181F2B6111();
				iVar15[iVar14] = 1;
				iLocal_18[iVar13] = iVar14;
				iVar26 = 1;
				iLocal_31++;
				if (iVar14 == 0)
				{
					uLocal_487 = Local_492.f_1;
				}
			}
			iVar14++;
		}
		iVar13++;
	}
	while (iVar13 < 11)
	{
		if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) == 0)
		{
			func_52();
		}
		iVar27 = 0;
		iVar28 = 11;
		Global_2549112[iVar28 /*104*/].f_18 = -1;
		Global_2549112[iVar28 /*104*/].f_18.f_1 = 0;
		Global_2549112[iVar28 /*104*/].f_18.f_2 = 0;
		Global_2549112[iVar28 /*104*/].f_18.f_3 = 0;
		Global_2549112[iVar28 /*104*/].f_18.f_5 = 0;
		while (iVar27 < 12)
		{
			if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) == 0)
			{
				func_52();
			}
			if (iVar0[iVar27] == 0)
			{
				if (Global_2549112[iVar27 /*104*/].f_24 != 0)
				{
					if (Global_2549112[iVar27 /*104*/].f_99[Global_14394] == 1)
					{
						if (func_48(Global_2549112[iVar27 /*104*/].f_18, Global_2549112[iVar28 /*104*/].f_18))
						{
							iVar28 = iVar27;
							if (Global_2549112[iVar28 /*104*/].f_28 == 0)
							{
								iLocal_35 = 0;
							}
							else
							{
								iLocal_35 = 1;
							}
						}
					}
				}
			}
			iVar27++;
		}
		iLocal_18[iVar13] = iVar28;
		iVar0[iVar28] = 1;
		if (Global_2549112[iVar28 /*104*/].f_24 != 0)
		{
			if (Global_2549112[iVar28 /*104*/].f_99[Global_14394] == 1)
			{
				unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
				unk_0xBD0C54D89298454E(8);
				unk_0xBD0C54D89298454E(iVar13);
				unk_0xBD0C54D89298454E(iLocal_35);
				unk_0x75A2A42ADE12FD0E(0);
				if (Global_2549112[iVar28 /*104*/].f_17 == 145)
				{
					unk_0x6CE839BF5D87A428("CELL_2000");
					unk_0x6222A57F463E8EE7(&(Global_2549112[iVar28 /*104*/].f_50));
					unk_0xC3822F70D0E7940B();
				}
				else
				{
					func_15(&(Global_98931.f_32499[Global_2549112[iVar28 /*104*/].f_17 /*29*/].f_3));
				}
				Var29 = { Global_2549112[iVar28 /*104*/] };
				StringConCat(&Var29, "_SUB", 64);
				func_15(&Var29);
				unk_0xBA9BA6181F2B6111();
				iLocal_31++;
			}
		}
		iVar13++;
	}
}

int func_48(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_49(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xBA9BA6181F2B6111();
}

void func_50()
{
	unk_0x07DBD622D9533857("gta5marketing");
	unk_0x88220CF377D67283(0, 6);
	unk_0x4EDE34FBADD967A6(0);
	iLocal_488 = 1;
	bLocal_489 = false;
	while (iLocal_488 && Global_14394.f_1 > 3)
	{
		unk_0x4EDE34FBADD967A6(0);
		iLocal_490 = unk_0x92CEF816F56725FC();
		if (func_4())
		{
			Global_14394.f_1 = 3;
			iLocal_488 = 0;
			bLocal_489 = false;
		}
		switch (iLocal_490)
		{
			case 3:
				iLocal_488 = 0;
				bLocal_489 = true;
				break;
			
			case 0:
				iLocal_488 = 0;
				bLocal_489 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_488 = 0;
				bLocal_489 = false;
				break;
			
			case 2:
				iLocal_488 = 0;
				bLocal_489 = false;
				break;
		}
	}
	if (bLocal_489)
	{
		iLocal_491 = unk_0x7DB18CA8CAD5B098();
	}
	else
	{
		iLocal_491 = 0;
	}
}

void func_51()
{
	StringCopy(&(Local_60[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_175[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_60[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_175[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_60[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_175[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_60[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_175[3 /*16*/]), "06_a_sext_stripperNikki", 64);
	StringCopy(&(Local_60[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_175[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_60[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_175[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_60[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_175[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_60[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_175[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_60[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_175[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_60[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_175[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_60[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_175[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_60[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_175[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_60[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_175[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_60[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_175[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_60[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_175[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_60[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_175[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_60[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_175[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_60[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_175[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_60[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_175[18 /*16*/]), "executiveproducer", 64);
}

void func_52()
{
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) == 0)
	{
		func_53(0);
	}
	if (iLocal_480)
	{
		unk_0x9B331DCFDFC55491(&Local_44);
	}
	Global_16727 = 0;
	Global_16726 = 0;
	unk_0xC23A229F78DAD92A();
}

void func_53(int iParam0)
{
	if (Global_14552)
	{
		func_55(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_54())
	{
		Global_14394.f_1 = 3;
	}
}

int func_54()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_55(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_56(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

int func_56(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

