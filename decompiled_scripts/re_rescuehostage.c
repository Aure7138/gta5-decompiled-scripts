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
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	float fLocal_51 = 0f;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_73 = { 0, 0, 0 } ;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	char* sLocal_90 = NULL;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	bool bLocal_100 = 0;
	struct<10> Local_101[16];
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	int iLocal_266 = 0;
	char* sLocal_267 = NULL;
	struct<18> ScriptParam_0 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_63 = 8000;
	iLocal_68 = -1;
	bLocal_87 = true;
	sLocal_92 = "NULL";
	fLocal_93 = -120f;
	fLocal_94 = 120f;
	fLocal_95 = 40f;
	fLocal_96 = 90f;
	bLocal_98 = true;
	sLocal_267 = "RANDOM@RESCUE_HOSTAGE";
	Local_48 = { ScriptParam_0.f_1[0 /*3*/] };
	fLocal_51 = ScriptParam_0.f_17[0];
	if (unk_0x78BF2001491914AC(11))
	{
		func_157();
	}
	if (Global_33179[0] == 1)
	{
		unk_0xA232817B0B36F2E5();
	}
	if (func_115(Local_48, -1, 0, 0, 0))
	{
		func_112(-1);
	}
	else
	{
		unk_0xA232817B0B36F2E5();
	}
	func_111();
	func_110();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_109();
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			unk_0x0EA9C6F829566CB7(unk_0x0FFED3E94261A832());
		}
		if (unk_0xC6D11983DAD48A48())
		{
			switch (iLocal_47)
			{
				case 0:
					if (func_106())
					{
						iLocal_99 = unk_0x3732B96D7A1859B4();
						iLocal_47 = 1;
					}
					else if (func_105())
					{
						func_157();
					}
					break;
				
				case 1:
					if (iLocal_64 == 0)
					{
						iLocal_64 = unk_0x9947331DC007985A(99, -104.982f, 6408.737f, 30.4905f, 180000f);
					}
					func_104();
					if (!unk_0x769F0F6444C1ABE0(iLocal_53))
					{
						func_103();
					}
					else if (!unk_0x769F0F6444C1ABE0(iLocal_54))
					{
						func_99();
						func_98();
					}
					else
					{
						func_157();
					}
					if (bLocal_76)
					{
						func_96();
					}
					if (!unk_0x769F0F6444C1ABE0(iLocal_52))
					{
						if (!func_95())
						{
							if (func_83())
							{
								func_157();
							}
							func_68();
						}
						else if (!bLocal_76)
						{
							func_51();
						}
					}
					else
					{
						if (Local_101[1 /*10*/].f_7)
						{
							if (unk_0xBDD3EABACAB97D09(uLocal_57))
							{
								unk_0x789C84F1B8496AD0(&uLocal_57);
							}
							if (unk_0xBDD3EABACAB97D09(uLocal_58))
							{
								unk_0x789C84F1B8496AD0(&uLocal_58);
							}
							func_50(&Local_101, 1);
							func_48();
						}
						if (!unk_0x769F0F6444C1ABE0(iLocal_53))
						{
							if (bLocal_76)
							{
								if (unk_0x354ACA1BAED67927(uLocal_67))
								{
									if (unk_0x58DF249E321EAB8E(iLocal_67) == 1f)
									{
										if (!unk_0x769F0F6444C1ABE0(iLocal_53))
										{
											unk_0xDC7A31134115BFF0(iLocal_53, 1);
											unk_0x67E5DE1657F60AC6(iLocal_53, 0);
										}
									}
								}
							}
							else
							{
								if (func_47())
								{
									iLocal_47 = 3;
								}
								if (!unk_0x769F0F6444C1ABE0(iLocal_54))
								{
								}
							}
						}
					}
					break;
				
				case 2:
					uLocal_56 = unk_0x4A60AEEC5C07D641(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), 35f, 0, 101383);
					if (unk_0x7FAC45D56235AB39(uLocal_56, 0))
					{
						if (!bLocal_100)
						{
							unk_0x3406B7CA9E05661E(unk_0x0FFED3E94261A832(), 2, 0);
							unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
						}
						func_157();
					}
					if (!iLocal_86)
					{
						if (unk_0xD96A9D502D6FEDEE(7, Local_48, 2, 0f, &uLocal_88, 0))
						{
							iLocal_86 = 1;
						}
					}
					break;
				
				case 3:
					if (iLocal_84)
					{
						if (unk_0x83666F9FB8FEBD4B() > 5000)
						{
							if (!unk_0x769F0F6444C1ABE0(iLocal_53))
							{
								unk_0x015B50BC21C88C8C(iLocal_53, 1);
								func_22();
							}
							func_157();
						}
					}
					else
					{
						if (func_47())
						{
							if (!bLocal_77)
							{
								if (bLocal_87)
								{
									if (func_5(&Local_101, "RERHOAU", "RERHO_THANK", 4, iLocal_266, 0, 0))
									{
										bLocal_77 = true;
									}
								}
								else if (func_5(&Local_101, "RERHOAU", "RERHO_NOGUN", 4, iLocal_266, 0, 0))
								{
									bLocal_77 = true;
								}
							}
						}
						func_3();
						if (!unk_0x769F0F6444C1ABE0(iLocal_53))
						{
							if (unk_0x3732B96D7A1859B4() > iLocal_66 + 100)
							{
								func_1(iLocal_53, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
								iLocal_66 = unk_0x3732B96D7A1859B4();
							}
						}
						if (bLocal_77)
						{
							if (!iLocal_85)
							{
								if (!unk_0x769F0F6444C1ABE0(iLocal_54))
								{
									if (func_5(&Local_101, "RERHOAU", "RERHO_CONS", 4, iLocal_266, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
						}
						uLocal_56 = unk_0x4A60AEEC5C07D641(Local_48, 5f, joaat("ambulance"), 0);
						if (unk_0x7FAC45D56235AB39(uLocal_56, 0))
						{
							unk_0xC1B1E9A034A63A62(0);
							iLocal_84 = 1;
						}
						iLocal_55 = unk_0x28853F6929258930(Local_48, 1.5f, 1.5f, 1.5f, -1);
						if (!unk_0x769F0F6444C1ABE0(iLocal_55))
						{
							unk_0xC1B1E9A034A63A62(5000);
							iLocal_84 = 1;
						}
						if (!iLocal_86 && iLocal_85)
						{
							if (unk_0xD96A9D502D6FEDEE(5, Local_48, 2, 0f, &uLocal_89, 0))
							{
								iLocal_86 = 1;
							}
						}
						if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_48) > 5625f && !unk_0x14CEA5D3B9541B99(Local_48, 10f))
						{
							func_22();
						}
					}
					break;
			}
		}
		else if (iLocal_47 == 3)
		{
			func_22();
		}
		else
		{
			func_157();
		}
	}
}

void func_1(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xA2782778D22DC0EA(iParam0, sParam1, sParam2, func_2(iParam3), 0);
}

int func_2(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_3()
{
	if (func_4())
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_53))
		{
			unk_0x4C47904AE69D7393(iLocal_53, 0);
			unk_0x07A44999F605B530(iLocal_53, Local_48, 50f, -1, 0, 0);
			unk_0x015B50BC21C88C8C(iLocal_53, 1);
			unk_0x6C559FCFFD2365CB(&iLocal_53);
			func_48();
		}
		if (!unk_0x769F0F6444C1ABE0(iLocal_54))
		{
			unk_0x4C47904AE69D7393(iLocal_54, 0);
			unk_0x07A44999F605B530(iLocal_54, Local_48, 50f, -1, 0, 0);
			unk_0x015B50BC21C88C8C(iLocal_54, 1);
			unk_0x6C559FCFFD2365CB(&iLocal_54);
			func_48();
		}
	}
	if (!unk_0x769F0F6444C1ABE0(iLocal_53))
	{
		if (unk_0xE8594BE97055E9A1(iLocal_53, unk_0x2A5EB8B0FE590B91(), 1))
		{
			if (unk_0x62F5757271CA0B05(iLocal_53))
			{
				unk_0x67E5DE1657F60AC6(iLocal_53, 0);
			}
		}
		else if (unk_0x62F5757271CA0B05(iLocal_53))
		{
			unk_0x4C47904AE69D7393(iLocal_53, 0);
			unk_0x07A44999F605B530(iLocal_53, Local_48, 50f, -1, 0, 0);
			unk_0x015B50BC21C88C8C(iLocal_53, 1);
			unk_0x6C559FCFFD2365CB(&iLocal_53);
			func_48();
			if (!unk_0x769F0F6444C1ABE0(iLocal_54))
			{
				unk_0x4C47904AE69D7393(iLocal_54, 0);
				unk_0x07A44999F605B530(iLocal_54, Local_48, 50f, -1, 0, 0);
				unk_0x015B50BC21C88C8C(iLocal_54, 1);
				unk_0x6C559FCFFD2365CB(&iLocal_54);
				func_48();
			}
		}
	}
	else if (!unk_0x769F0F6444C1ABE0(iLocal_54))
	{
		unk_0x4C47904AE69D7393(iLocal_54, 0);
		unk_0x07A44999F605B530(iLocal_54, Local_48, 50f, -1, 0, 0);
		unk_0x015B50BC21C88C8C(iLocal_54, 1);
		unk_0x6C559FCFFD2365CB(&iLocal_54);
		func_48();
	}
	if (!unk_0x769F0F6444C1ABE0(iLocal_54))
	{
		if (unk_0xE8594BE97055E9A1(iLocal_54, unk_0x2A5EB8B0FE590B91(), 1))
		{
			if (unk_0x62F5757271CA0B05(iLocal_54))
			{
				unk_0x67E5DE1657F60AC6(iLocal_54, 0);
			}
		}
		else if (unk_0x62F5757271CA0B05(iLocal_54))
		{
			unk_0x4C47904AE69D7393(iLocal_54, 0);
			unk_0x07A44999F605B530(iLocal_54, Local_48, 50f, -1, 0, 0);
			unk_0x015B50BC21C88C8C(iLocal_54, 1);
			unk_0x6C559FCFFD2365CB(&iLocal_54);
			func_48();
			if (!unk_0x769F0F6444C1ABE0(iLocal_53))
			{
				unk_0x4C47904AE69D7393(iLocal_53, 0);
				unk_0x07A44999F605B530(iLocal_53, Local_48, 50f, -1, 0, 0);
				unk_0x015B50BC21C88C8C(iLocal_53, 1);
				unk_0x6C559FCFFD2365CB(&iLocal_53);
				func_48();
			}
		}
	}
	else if (!unk_0x769F0F6444C1ABE0(iLocal_53))
	{
		unk_0x4C47904AE69D7393(iLocal_53, 0);
		unk_0x07A44999F605B530(iLocal_53, Local_48, 50f, -1, 0, 0);
		unk_0x015B50BC21C88C8C(iLocal_53, 1);
		unk_0x6C559FCFFD2365CB(&iLocal_53);
		func_48();
	}
}

bool func_4()
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	Var1 = { 15f, 15f, 10f };
	Var4 = { -15f, -15f, -10f };
	if (!unk_0x769F0F6444C1ABE0(iLocal_53))
	{
		if (unk_0xD42AA0CF76AFB4D8(unk_0x585F703DF3E83B6E(iLocal_53, 31086, 0f, 0f, 0f), 15f, 1))
		{
			bVar0 = true;
		}
		Var1 = { Var1 + unk_0x585F703DF3E83B6E(iLocal_53, 31086, 0f, 0f, 0f) };
		Var4 = { Var4 + unk_0x585F703DF3E83B6E(iLocal_53, 31086, 0f, 0f, 0f) };
		if ((unk_0x2C29BD9A139568E2(Var4, Var1, joaat("weapon_smokegrenade"), 1) || unk_0x2C29BD9A139568E2(Var4, Var1, joaat("weapon_grenade"), 1)) || unk_0x2C29BD9A139568E2(Var4, Var1, joaat("weapon_stickybomb"), 1))
		{
			bLocal_98 = true;
			bVar0 = true;
		}
		if (unk_0x364674A3CEB1FCFC(-1, -90.68654f, 6411.883f, 36.00729f, -103.86f, 6398.848f, 30.19453f, 23f) || unk_0x4A40D388873A536C(-1, unk_0x585F703DF3E83B6E(iLocal_53, 31086, 0f, 0f, 0f), 20f))
		{
			bLocal_98 = true;
			bVar0 = true;
		}
		if (unk_0x74C3E52BCC6361BD(unk_0x585F703DF3E83B6E(iLocal_53, 31086, 0f, 0f, 0f), 6f))
		{
			bVar0 = true;
			bLocal_98 = true;
		}
	}
	if (!unk_0x769F0F6444C1ABE0(iLocal_54))
	{
		if (unk_0xE8594BE97055E9A1(iLocal_54, unk_0x2A5EB8B0FE590B91(), 1))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0xE40123A348A5FEDA(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_20();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x4FF1AD2B1A443280())
		{
			return 0;
		}
		if (func_19(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_18();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x507FE690B1271947(&Global_2313, 20);
			unk_0x507FE690B1271947(&Global_2314, 17);
			unk_0x507FE690B1271947(&Global_2315, 0);
			if (bParam2)
			{
				func_11();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (func_10())
				{
					return 0;
				}
				if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x508B126813F83326(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69800)
				{
					if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
					if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
				}
			}
			if (func_9())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
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
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
				{
					return 0;
				}
			}
			func_8();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_7();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_20();
	}
	return 0;
}

void func_7()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xE40123A348A5FEDA(0);
	Global_15745 = 1;
}

void func_8()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x507FE690B1271947(&Global_2314, 16);
}

int func_9()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	int iVar0;
	int iVar1;
	
	if (Global_69800)
	{
		iVar0 = 0;
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar1, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x522AAFC27F0E320D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
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

void func_11()
{
	if (func_17(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_12();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

int func_12()
{
	func_13();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_13()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_16(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_15(unk_0x2A5EB8B0FE590B91());
			if (func_14(iVar0) && (!func_17(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_14(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_14(int iParam0)
{
	return iParam0 < 3;
}

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)
{
	if (func_14(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_17(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_18()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_19(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

void func_20()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if ((unk_0x3813EBE69CF8CAD2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

void func_22()
{
	unk_0x03D9764FF0074A2E(unk_0x0FFED3E94261A832());
	func_46();
	func_26(-1, 0);
	func_23();
	func_157();
}

void func_23()
{
	func_24();
}

int func_24()
{
	if (func_25(0))
	{
		return 0;
	}
	if (Global_91816.f_8)
	{
		if (Global_91816.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91816.f_10 > 1)
	{
		return 0;
	}
	Global_91816.f_10++;
	return 1;
}

bool func_25(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

void func_26(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_43(iParam0))
	{
		func_42(iParam0, iParam1);
		if (!func_41(51))
		{
			func_37("RE_REWARD", 1, 0, 4000, 10000, func_40(), 0, 138, 0);
			func_36(51);
		}
		if (func_35(iParam0))
		{
			Global_103236.f_24776.f_2 = 3;
		}
		if (func_34(iParam0, iParam1) != 322)
		{
			func_28(func_34(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_103224 = iParam1;
		if (Global_103222 == 0)
		{
			if (((Global_103225 == 1 || Global_103225 == 5) || Global_103225 == 11) || Global_103225 == 25)
			{
				func_27(2);
			}
			else if ((Global_103225 == 26 || Global_103225 == 8) || Global_103225 == 17)
			{
				func_27(7);
			}
			else
			{
				func_27(1);
			}
		}
	}
}

void func_27(int iParam0)
{
	Global_103222 = iParam0;
}

void func_28(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_32((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_103236.f_9975[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_103236.f_9975[iParam0 /*12*/].f_6 == 11 || Global_103236.f_9975[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_103236.f_9975[iParam0 /*12*/].f_5 = 1;
		Global_103236.f_9975[iParam0 /*12*/].f_10 = uParam1;
		Global_103236.f_9975[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x19AA4F8D57E34A69(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_29();
	}
}

void func_29()
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
	int iVar9;
	
	iVar0 = 0;
	Global_102972 = 0;
	Global_102973 = 0;
	Global_102974 = 0;
	Global_102975 = 0;
	Global_102976 = 0;
	Global_102977 = 0;
	Global_102978 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_103236.f_9975.f_3853;
	Global_103236.f_9975.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_103236.f_9975[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_103236.f_9975[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_102972++;
					fVar1 = (fVar1 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_102973++;
					fVar2 = (fVar2 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_102974++;
					fVar3 = (fVar3 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_102975++;
					fVar4 = (fVar4 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_102976++;
					fVar5 = (fVar5 + (Global_103236.f_9975[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_102977++;
					fVar6 = (fVar6 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_102978++;
					fVar7 = (fVar7 + Global_103236.f_9975[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_102955 > 0)
	{
		if (Global_102972 == Global_102955)
		{
			fVar1 = 55f;
		}
	}
	if (Global_102956 > 0)
	{
		if (Global_102973 == Global_102956)
		{
			fVar2 = 10f;
		}
	}
	if (Global_102957 > 0)
	{
		if (Global_102974 == Global_102957)
		{
			fVar3 = 0f;
		}
	}
	if (Global_102958 > 0)
	{
		if (Global_102975 == Global_102958)
		{
			fVar4 = 10f;
		}
	}
	if (Global_102959 > 0)
	{
		if (((Global_102976 == Global_102959 || (Global_102959 * 10 / Global_102976) < 41) || Global_102976 > Global_102962) || Global_102976 == Global_102962)
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_103236.f_9975.f_3856, 14))
			{
				if (Global_102976 == Global_102959)
				{
					unk_0x19AA4F8D57E34A69(joaat("num_rndevents_completed"), Global_102959, 0);
					unk_0xF6082E2ADA1C795B(&(Global_103236.f_9975.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_102960 > 0)
	{
		if (Global_102977 == Global_102960)
		{
			fVar6 = 15f;
		}
	}
	if (Global_102961 > 0)
	{
		if (Global_102978 == Global_102961)
		{
			fVar7 = 5f;
		}
	}
	Global_103236.f_9975.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_102976 > Global_102962 || Global_102976 == Global_102962)
	{
		iVar9 = Global_102962;
	}
	else
	{
		iVar9 = Global_102976;
	}
	unk_0xC94674712BED1A82(joaat("num_missions_completed"), Global_102972, 1);
	unk_0xC94674712BED1A82(joaat("num_missions_available"), Global_102955, 1);
	unk_0xC94674712BED1A82(joaat("num_minigames_completed"), Global_102973, 1);
	unk_0xC94674712BED1A82(joaat("num_minigames_available"), Global_102956, 1);
	unk_0xC94674712BED1A82(joaat("num_oddjobs_completed"), Global_102974, 1);
	unk_0xC94674712BED1A82(joaat("num_oddjobs_available"), Global_102957, 1);
	unk_0xC94674712BED1A82(joaat("num_rndpeople_completed"), Global_102975, 1);
	unk_0xC94674712BED1A82(joaat("num_rndpeople_available"), Global_102958, 1);
	unk_0xC94674712BED1A82(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xC94674712BED1A82(joaat("num_rndevents_available"), Global_102962, 1);
	unk_0xC94674712BED1A82(joaat("num_misc_completed"), (Global_102978 + Global_102977), 1);
	unk_0xC94674712BED1A82(joaat("num_misc_available"), (Global_102961 + Global_102960), 1);
	Global_102979 = (Global_102972 * 100 / Global_102955);
	Global_102981 = ((Global_102974 + Global_102973) * 100 / (Global_102957 + Global_102956));
	Global_102980 = ((Global_102975 + iVar9) * 100 / (Global_102958 + Global_102962));
	Global_102982 = ((Global_102977 + Global_102978) * 100 / (Global_102960 + Global_102961));
	unk_0x24CB8183E6499C7F(joaat("total_progress_made"), Global_103236.f_9975.f_3853, 1);
	unk_0xC94674712BED1A82(joaat("percent_story_missions"), Global_102979, 1);
	unk_0xC94674712BED1A82(joaat("percent_ambient_missions"), Global_102980, 1);
	unk_0xC94674712BED1A82(joaat("percent_oddjobs"), Global_102981, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_103236.f_9975.f_3853))
	{
		func_31(13, unk_0xF34EE736CF047844(Global_103236.f_9975.f_3853));
	}
	if (!unk_0xA8A044A76B03FC4C())
	{
		if (!Global_69800)
		{
			if (func_30() == 2 == 0 && !unk_0x591AF4C50B46E014())
			{
				if (unk_0xD49DD4AB66A964B2())
				{
					Global_102970 = 0;
				}
				if (!Global_55854)
				{
					func_24();
				}
			}
		}
	}
}

int func_30()
{
	return Global_25222;
}

int func_31(int iParam0, int iParam1)
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
	iVar0 = unk_0x0C54585A239FF08F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB88BC822A9F5BED8(iParam0, iParam1);
	}
	return 0;
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	
	if (iParam2 == -1)
	{
		iParam2 = func_33();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar15, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_33()
{
	return Global_1312735;
}

int func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_36(int iParam0)
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
		unk_0xF6082E2ADA1C795B(&(Global_103236.f_20191.f_150[iVar1]), iVar0);
	}
}

void func_37(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_38(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_38(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x35302CD5A5D37EED(sParam0, ""))
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
	while (iVar0 < Global_103236.f_20191.f_145)
	{
		if (unk_0x35302CD5A5D37EED(&(Global_103236.f_20191[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_103236.f_20191.f_145 < 9)
	{
		StringCopy(&(Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_4), sParam1, 16);
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_8 = (unk_0x3732B96D7A1859B4() + iParam3);
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_9 = iParam5;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_11 = iParam6;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_12 = uParam2;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_13 = iParam7;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_14 = iParam8;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_10 = ((unk_0x3732B96D7A1859B4() + iParam3) + iParam4);
		}
		else
		{
			Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_10 = -1;
		}
		Global_103236.f_20191.f_145++;
		func_39();
	}
}

void func_39()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_103236.f_20191.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_103236.f_20191.f_145)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 0))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[0])
			{
				Global_103236.f_20191.f_146[0] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 1))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[1])
			{
				Global_103236.f_20191.f_146[1] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 2))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[2])
			{
				Global_103236.f_20191.f_146[2] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_40()
{
	func_13();
	switch (Global_103236.f_2164.f_539.f_4301)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_41(int iParam0)
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
		return unk_0xAA4F14DA15DB0B51(Global_103236.f_20191.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_42(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_103236.f_24776.f_8[iParam0]), iParam1);
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_44()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0xFABF5258A318B1DC(), 64);
	uVar16 = func_45(Var0);
	return uVar16;
}

int func_45(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xCAEDBF30E3EA14FC(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_46()
{
	return 1;
}

int func_47()
{
	if (!iLocal_81)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x769F0F6444C1ABE0(iLocal_53))
		{
			if (iLocal_68 == -1)
			{
				unk_0xDC7A31134115BFF0(iLocal_53, 0);
				unk_0xA40CBAB1923B2D9F(5, 0.5f);
				unk_0x3CF46CA72B595C27(5, 1f);
				unk_0x0DF7E87E7EF43CCC(iLocal_53, 1);
				unk_0xB5FB8AA9DCCAC75B(iLocal_53, 1);
				unk_0xF1C3427BFED79E6B(iLocal_53, sLocal_267, "girl_villian_shot", 8f, -2f, -1, 10, 0, 0, 0, 0);
				iLocal_68 = unk_0x6D46C949A32B8D73(Local_70, Local_73, 2);
				if (!unk_0x769F0F6444C1ABE0(iLocal_54))
				{
					unk_0x3C030E241A3543D2(iLocal_54, uLocal_59);
					if (!unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, 1, 0))
					{
						unk_0x5F778B8D6D7DF47B(iLocal_54, iLocal_68, sLocal_267, "bystander_villian_shot", 1000f, -2f, 5, 0, 1148846080, 0);
					}
					else
					{
						unk_0x4C47904AE69D7393(iLocal_54, 0);
					}
				}
				unk_0x5F778B8D6D7DF47B(iLocal_53, iLocal_68, sLocal_267, "girl_villian_shot", 1000f, -2f, 5, 0, 1148846080, 0);
			}
			else if (unk_0x354ACA1BAED67927(iLocal_68))
			{
				if (unk_0x58DF249E321EAB8E(iLocal_68) > 0.1f)
				{
					func_3();
				}
				if (!iLocal_78)
				{
					if (bLocal_87)
					{
						if (unk_0x58DF249E321EAB8E(iLocal_68) > 0.5f)
						{
							if (func_5(&Local_101, "RERHOAU", "RERHO_SAINT", 4, iLocal_266, 0, 0))
							{
								iLocal_78 = 1;
							}
						}
					}
					else if (func_5(&Local_101, "RERHOAU", "RERHO_THANK", 4, iLocal_266, 0, 0))
					{
						iLocal_78 = 1;
					}
				}
				if (unk_0x58DF249E321EAB8E(iLocal_68) == 1f)
				{
					iLocal_68 = unk_0x6D46C949A32B8D73(Local_70, Local_73, 2);
					func_1(iLocal_53, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
					unk_0xA2218E1CAB0028A5(iLocal_68, 1);
					if (!unk_0x769F0F6444C1ABE0(iLocal_54))
					{
						if (bLocal_87)
						{
							unk_0x5F778B8D6D7DF47B(iLocal_54, iLocal_68, sLocal_267, "bystander_helping_girl_loop", 1000f, -2f, 5, 0, 1148846080, 0);
						}
						else
						{
							unk_0x219EE6A7B599E7DC(&uLocal_79);
							unk_0xEDF42871EAD55C9B(0, iLocal_53, -1, 1024, 2);
							unk_0x17DD40170243F0AB(0, iLocal_53, 20000, 3f, 1f, 1073741824, 0);
							unk_0xD605CAC9F8611B4D(0, -1);
							unk_0xBD718C5BA2122192(uLocal_79);
							unk_0x234E551BB8E8813B(iLocal_54, uLocal_79);
						}
						unk_0x015B50BC21C88C8C(iLocal_54, 1);
						unk_0x3C030E241A3543D2(iLocal_54, uLocal_61);
					}
					unk_0x5F778B8D6D7DF47B(iLocal_53, iLocal_68, sLocal_267, "girl_helping_girl_loop", 1000f, -2f, 5, 0, 1148846080, 0);
					unk_0x015B50BC21C88C8C(iLocal_53, 1);
					unk_0x3C030E241A3543D2(iLocal_53, uLocal_61);
					unk_0xDC7A31134115BFF0(iLocal_53, 1);
					unk_0xFBC4596E19752537(1f);
					iLocal_81 = 1;
				}
			}
		}
	}
	return iLocal_81;
}

void func_48()
{
	Global_14611 = 0;
	func_49();
}

void func_49()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
	}
}

void func_50(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_51()
{
	if (((((((((((unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, 1, 0) && unk_0x296AF7133305081C(iLocal_52, unk_0x2A5EB8B0FE590B91())) || (func_61(iLocal_52, &uLocal_62, &iLocal_63, 0, 0, 1077936128, 0) && unk_0x296AF7133305081C(iLocal_52, unk_0x2A5EB8B0FE590B91()))) || (func_60(1) && unk_0x296AF7133305081C(iLocal_52, unk_0x2A5EB8B0FE590B91()))) || func_58()) || func_57()) || func_4()) || func_56()) || unk_0x62F5757271CA0B05(iLocal_52)) || func_55()) || func_54()) || func_52(iLocal_52))
	{
		if (!unk_0x7D00F6C99487466F(unk_0x2A5EB8B0FE590B91()))
		{
			if (!unk_0x80877A927C73E67D(iLocal_52, joaat("weapon_stungun"), 0))
			{
				if (!unk_0x769F0F6444C1ABE0(iLocal_53))
				{
					if (!unk_0x62F5757271CA0B05(iLocal_52))
					{
						iLocal_67 = unk_0x6D46C949A32B8D73(Local_70, Local_73, 2);
						unk_0xA2218E1CAB0028A5(iLocal_67, 0);
						unk_0x5F778B8D6D7DF47B(iLocal_53, iLocal_67, sLocal_267, "girl_girl_shot", 4f, -4f, 5, 0, 1148846080, 0);
						unk_0x5F778B8D6D7DF47B(iLocal_52, iLocal_67, sLocal_267, "villian_girl_shot", 4f, -4f, 5, 0, 1148846080, 0);
						unk_0x015B50BC21C88C8C(iLocal_53, 1);
						unk_0xDC7A31134115BFF0(iLocal_53, 0);
					}
				}
				if (!unk_0x769F0F6444C1ABE0(iLocal_54))
				{
					unk_0xDC7A31134115BFF0(iLocal_54, 1);
				}
				bLocal_76 = true;
			}
			else
			{
				unk_0x67E5DE1657F60AC6(iLocal_52, 50);
			}
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 6000)
	{
		if ((unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), iLocal_52) && unk_0x296AF7133305081C(iLocal_52, unk_0x2A5EB8B0FE590B91())) || (unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), iLocal_52) && unk_0x296AF7133305081C(iLocal_52, unk_0x2A5EB8B0FE590B91())))
		{
			if (unk_0xBDD3EABACAB97D09(uLocal_57))
			{
				unk_0xE1E81CBB89115254(uLocal_57, 1);
			}
			if (!iLocal_80)
			{
				if (!unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, 1, 0))
				{
					if (func_5(&Local_101, "RERHOAU", sLocal_91, 4, 0, 0, 0))
					{
						iLocal_63 = 24000;
					}
					unk_0xC1B1E9A034A63A62(0);
					iLocal_80 = 1;
				}
			}
		}
		else if (unk_0x35302CD5A5D37EED(sLocal_92, "NULL"))
		{
			switch (unk_0x895FB9FE885E36ED(0, 10))
			{
				case 6:
				case 5:
				case 4:
				case 3:
				case 0:
				case 9:
				case 8:
				case 7:
				case 1:
					if (iLocal_97)
					{
						sLocal_92 = "RERHO_HELP";
						iLocal_97 = 0;
					}
					else
					{
						sLocal_92 = "RERHO_RANT";
						iLocal_97 = 1;
					}
					break;
				
				case 2:
					sLocal_92 = "RERHO_SCREAM";
					break;
			}
		}
		else if (func_5(&Local_101, "RERHOAU", sLocal_92, 4, iLocal_266, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else
	{
		sLocal_92 = "NULL";
	}
}

int func_52(int iParam0)
{
	var uVar0;
	bool bVar1;
	
	bVar1 = false;
	if (!unk_0x2137828D03306CAF(iParam0))
	{
		return 0;
	}
	if (unk_0x769F0F6444C1ABE0(iParam0))
	{
		return 0;
	}
	unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &uVar0, 1);
	if (unk_0x52E61FFA8B8AEA31(unk_0x2A5EB8B0FE590B91(), uVar0, joaat("component_at_ar_flsh")))
	{
		if (unk_0x10B351A5FEC4DF06(unk_0x2A5EB8B0FE590B91(), uVar0, joaat("component_at_ar_flsh")))
		{
			bVar1 = true;
		}
	}
	else if (unk_0x52E61FFA8B8AEA31(unk_0x2A5EB8B0FE590B91(), uVar0, joaat("component_at_pi_flsh")))
	{
		if (unk_0x10B351A5FEC4DF06(unk_0x2A5EB8B0FE590B91(), uVar0, joaat("component_at_pi_flsh")))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), iParam0) || unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(iParam0, 1), func_53(unk_0x0FFED3E94261A832())) < 8f)
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_53(var uParam0)
{
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(uParam0), 0);
}

int func_54()
{
	if (func_95())
	{
		if (unk_0x3732B96D7A1859B4() > (iLocal_99 + 60000))
		{
			bLocal_100 = true;
			return 1;
		}
	}
	else if (unk_0x3732B96D7A1859B4() > (iLocal_99 + 120000))
	{
		bLocal_100 = true;
		return 1;
	}
	return 0;
}

int func_55()
{
	float fVar0;
	var uVar1[32];
	int iVar34;
	int iVar35;
	int iVar36;
	var uVar37;
	
	fVar0 = 75f;
	iVar36 = unk_0x28853F6929258930(unk_0xD1EE0E9FCD74A37B(iLocal_52, 0), fVar0, fVar0, fVar0, -1);
	if (!unk_0x769F0F6444C1ABE0(iVar36))
	{
		if (unk_0xD3B21CE53AA7BE51(iVar36) == joaat("s_f_y_cop_01") || unk_0xD3B21CE53AA7BE51(iVar36) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	uVar37 = unk_0x4A60AEEC5C07D641(unk_0xD1EE0E9FCD74A37B(iLocal_52, 0), fVar0, 0, 66561);
	if (unk_0x7FAC45D56235AB39(uVar37, 0))
	{
		return 1;
	}
	iVar35 = unk_0x0C5DD04D80C0EC83(iLocal_52, &uVar1);
	if (iVar35 > 0)
	{
		iVar34 = 0;
		while (iVar34 < iVar35)
		{
			if (unk_0x7FAC45D56235AB39(uVar1[iVar34], 0))
			{
				if (((unk_0xD3B21CE53AA7BE51(uVar1[iVar34]) == joaat("police") || unk_0xD3B21CE53AA7BE51(uVar1[iVar34]) == joaat("pranger")) || unk_0xD3B21CE53AA7BE51(uVar1[iVar34]) == joaat("sheriff")) || unk_0xD3B21CE53AA7BE51(uVar1[iVar34]) == joaat("sheriff2"))
				{
					return 1;
				}
			}
			iVar34++;
		}
	}
	return 0;
}

int func_56()
{
	if (unk_0x2860DA9980AC4109(iLocal_52, unk_0x2A5EB8B0FE590B91(), 2f, 2f, 1.5f, 0, 1, 0))
	{
		if (unk_0xD7AC8A8028A7ECC8(unk_0x0FFED3E94261A832(), iLocal_52))
		{
			return 1;
		}
	}
	return 0;
}

bool func_57()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)) == joaat("bulldozer"))
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_54))
			{
				if (unk_0xB588E9EC60290D87(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), iLocal_54))
				{
					bVar0 = true;
				}
			}
			if (!unk_0x769F0F6444C1ABE0(iLocal_53))
			{
				if (unk_0xB588E9EC60290D87(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), iLocal_53))
				{
					bVar0 = true;
				}
			}
			if (!unk_0x769F0F6444C1ABE0(iLocal_52))
			{
				if (unk_0xB588E9EC60290D87(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), iLocal_52))
				{
					bVar0 = true;
				}
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_58()
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	var uVar5;
	struct<2> Var8;
	float fVar11;
	float fVar12;
	var uVar13;
	var uVar14;
	
	bVar0 = false;
	bVar1 = false;
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0xDE3E0D9E2E663E9A(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)), &uVar5, &Var8);
		fVar12 = Var8.f_1;
		if (unk_0xE8592B93875DBF28(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)))
		{
			if (unk_0xFF8C24E64D6E24F2(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), &uVar14))
			{
				unk_0xDE3E0D9E2E663E9A(unk_0xD3B21CE53AA7BE51(uVar14), &uVar5, &Var8);
				fVar12 = (fVar12 + Var8.f_1);
				fVar12 = (fVar12 + 3f);
			}
		}
		if (unk_0xD2660BAC03EB7433(unk_0x2A5EB8B0FE590B91()) > 15f)
		{
			if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_52, (fVar12 + 17f), (fVar12 + 17f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
		else if (unk_0xD2660BAC03EB7433(unk_0x2A5EB8B0FE590B91()) > 10f)
		{
			if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_52, (fVar12 + 12f), (fVar12 + 12f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
		else if (unk_0xD2660BAC03EB7433(unk_0x2A5EB8B0FE590B91()) > 5f)
		{
			if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_52, (fVar12 + 8f), (fVar12 + 8f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
	}
	if (bVar1)
	{
		Var2 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) - Local_48 };
		fVar11 = unk_0x2410C2F4DC01A40D(Var2.f_0, Var2.f_1);
		if (func_59(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), fVar11, 15f))
		{
			bVar0 = true;
		}
		Var2 = { Local_48 - unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
		fVar11 = unk_0x2410C2F4DC01A40D(Var2.f_0, Var2.f_1);
		if (func_59(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), fVar11, 15f))
		{
			bVar0 = true;
		}
	}
	uVar13 = unk_0x19D9DFABC3C7D219();
	if (unk_0x2137828D03306CAF(uVar13))
	{
		if (unk_0x9A46207BB68ED2F0(iVar13, -91.56341f, 6391.747f, 30.6397f, -101.2611f, 6401.7f, 32.45449f, 7.5f, 0, 1, 0))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_59(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0x7FAC45D56235AB39(uParam0, 0))
	{
		fVar0 = unk_0x6DAB28241B34DEED(uParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!unk_0xA9A04898798AE9E6(uParam0, 0) && !bParam4)
	{
		if (unk_0xC212BF73836863E3(uParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!unk_0xA9A04898798AE9E6(uParam0, 0) && !bParam4)
		{
			Var3 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			Var6 = { unk_0xD1EE0E9FCD74A37B(uParam0, 1) };
			fVar9 = unk_0x2A488C176D52CCA5(Var3, Var6);
			if (!unk_0xAA4F14DA15DB0B51(iParam3, 3))
			{
				if (func_67(iParam0, iParam6))
				{
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_65(iParam0);
					return 1;
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0xD42AA0CF76AFB4D8(Var6, fParam5, 1))
				{
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_65(iParam0);
					return 1;
				}
				if (unk_0x05A9C36EF40B6941(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_65(iParam0);
					return 1;
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iParam3, 2))
			{
				fVar0 = unk_0xDFEB40F63EF94D71(unk_0x2A5EB8B0FE590B91());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x09A26025E0F821B1(unk_0x2A5EB8B0FE590B91(), 6))
				{
					if (unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), iParam0) || unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (unk_0x2FF6D1D6A0790F5A(iParam0, unk_0x2A5EB8B0FE590B91(), 17))
							{
								func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_66("	aggro Ped knows player is pointing gun\n");
								func_62("		lockOnTimer = ", *iParam2);
								func_66("\n");
								func_62("		time since not LockedOn = ", (unk_0x3732B96D7A1859B4() - iLocal_2));
								func_66("\n");
								bVar2 = true;
								if (unk_0x3732B96D7A1859B4() > (iLocal_2 + *iParam2))
								{
									func_66("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_65(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iParam3, 0))
			{
				if (unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
				{
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_65(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_2 = unk_0x3732B96D7A1859B4();
	}
	return 0;
}

void func_62(char* sParam0, int iParam1)
{
	func_64(sParam0);
	func_63(iParam1);
}

void func_63(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_64(char* sParam0)
{
	if (unk_0x35302CD5A5D37EED(uParam0, uParam0))
	{
	}
}

void func_65(var uParam0)
{
	unk_0x0308BFFF4E651039(uParam0);
}

void func_66(char* sParam0)
{
	func_64(sParam0);
}

int func_67(int iParam0, int iParam1)
{
	if (unk_0xC212BF73836863E3(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xE8594BE97055E9A1(uParam0, unk_0x2A5EB8B0FE590B91(), 1))
		{
			return 1;
		}
	}
	else if (unk_0xE8594BE97055E9A1(iParam0, unk_0x2A5EB8B0FE590B91(), 1))
	{
		if ((unk_0xADC57D202AF0BDF7(iParam0) - unk_0xE86A53C202B21FAB(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_68()
{
	if (((unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), -62.6571f, 6447.08f, 40.49928f, -153.6411f, 6354.579f, 23.99063f, 144.25f, 0, 1, 0) || unk_0x14CEA5D3B9541B99(Local_48, 15f)) || bLocal_76) || func_4())
	{
		uLocal_57 = func_79(iLocal_52, 1, 0);
		if (unk_0xBDD3EABACAB97D09(uLocal_57))
		{
			unk_0xE1E81CBB89115254(uLocal_57, 0);
		}
		func_69(1);
		iLocal_99 = unk_0x3732B96D7A1859B4();
		unk_0xFA96CEABD6118DCF(0);
	}
	else
	{
		func_51();
	}
}

int func_69(int iParam0)
{
	if (func_73())
	{
		Global_103226 = 1;
		Global_103223 = unk_0x3732B96D7A1859B4();
		if (func_35(Global_103225))
		{
			func_70(0);
		}
		unk_0x016711C6F4D08FCE(1, "RE_TITLE");
		if (iParam0 && func_35(Global_103225))
		{
			unk_0x847E5C2DF89423C1();
		}
		return 1;
	}
	return 0;
}

void func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_103236.f_24776.f_2 < 3)
			{
				if (!unk_0x95DEB8EF4440F5EC())
				{
					func_71(func_72(iParam0), -1);
					Global_103236.f_24776.f_2++;
					unk_0xF6082E2ADA1C795B(&Global_103232, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xAA4F14DA15DB0B51(Global_103232, 1))
			{
				if (!unk_0x95DEB8EF4440F5EC())
				{
					func_71(func_72(iParam0), -1);
					Global_103236.f_24776.f_3++;
					unk_0xF6082E2ADA1C795B(&Global_103232, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xAA4F14DA15DB0B51(Global_103232, 2))
			{
				if (!unk_0x95DEB8EF4440F5EC())
				{
					func_71(func_72(iParam0), -1);
					Global_103236.f_24776.f_4++;
					unk_0xF6082E2ADA1C795B(&Global_103232, 2);
				}
			}
			break;
	}
}

void func_71(var uParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(uParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

char* func_72(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_73()
{
	switch (func_74(&Global_25281, 0, 5, 0, unk_0xFF09208EC90C94CB()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_74(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89400.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_78(0))
		{
			return 0;
		}
		Global_35777++;
		*uParam0 = Global_35777;
		unk_0x1EF72C87138AD63D(unk_0x8A41C463063AFC8E(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA6A11DD53643C828(8);
		}
		Global_35813 = iParam2;
		Global_35775 = *uParam0;
		Global_35776 = iParam4;
		Global_35774 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35774 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35774)
			{
				if (Global_35780[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35775 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_76(iParam2))
		{
			return 0;
		}
		if (Global_35774 == 8)
		{
			return 0;
		}
		Global_35777++;
		*uParam0 = Global_35777;
		Global_35780[Global_35774 /*4*/] = Global_35777;
		Global_35780[Global_35774 /*4*/].f_1 = iParam1;
		Global_35780[Global_35774 /*4*/].f_2 = iParam2;
		Global_35780[Global_35774 /*4*/].f_3 = 0;
		Global_35774++;
		if (iParam4 != 0)
		{
			func_75(uParam0, iParam4);
		}
	}
	return 2;
}

void func_75(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35774 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35774)
	{
		if (Global_35780[iVar0 /*4*/] == *uParam0)
		{
			Global_35780[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_76(int iParam0)
{
	return func_77(iParam0, Global_35813);
}

int func_77(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_78(int iParam0)
{
	if (Global_35813 == 15)
	{
		return 0;
	}
	if (func_76(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_79(var uParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_80(uParam0, bParam1, 145);
}

var func_80(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_81(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xBDD3EABACAB97D09(uVar0)) && unk_0x9418F0AE636D9770(&(Global_103236.f_27831[iParam2 /*29*/].f_3)))
	{
		unk_0xA6B842B66643C116(uVar0, &(Global_103236.f_27831[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_81(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x2137828D03306CAF(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x9E3A324AB806771E(iParam0);
	if (unk_0x82DF3B947FC3E281(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_82(unk_0x591AF4C50B46E014(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
		}
		else
		{
			unk_0xEB5D36079067EBA5(uVar0, 2);
		}
	}
	else if (unk_0xEE46DE31F43DCAF1(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_82(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
		unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
	}
	else if (unk_0xD277B6800A356CC0(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_82(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_82(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_83()
{
	if (!func_76(5))
	{
		return 1;
	}
	if (func_91())
	{
		return 1;
	}
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x759F285D4B31C388(unk_0x2A5EB8B0FE590B91())) > 1369f && !func_90())
		{
			return 0;
		}
	}
	if (func_84(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_84(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (func_14(func_12()))
		{
			iVar36 = func_40();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xAA4F14DA15DB0B51(Global_103236.f_18355[iVar32 /*6*/], 2) && !unk_0xAA4F14DA15DB0B51(Global_103236.f_18355[iVar32 /*6*/], 3))
				{
					func_85(iVar32, &Var0);
					fVar35 = unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_85(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_86(uParam1, "Abigail1", func_88(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 1:
			func_86(uParam1, "Abigail2", func_88(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 2:
			func_86(uParam1, "Barry1", func_88(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 3:
			func_86(uParam1, "Barry2", func_88(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 4:
			func_86(uParam1, "Barry3", func_88(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 5:
			func_86(uParam1, "Barry3A", func_88(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 6:
			func_86(uParam1, "Barry3C", func_88(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 7:
			func_86(uParam1, "Barry4", func_88(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_87(iParam0), 0, 0);
			break;
		
		case 8:
			func_86(uParam1, "Dreyfuss1", func_88(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 9:
			func_86(uParam1, "Epsilon1", func_88(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 10:
			func_86(uParam1, "Epsilon2", func_88(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 11:
			func_86(uParam1, "Epsilon3", func_88(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 12:
			func_86(uParam1, "Epsilon4", func_88(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 13:
			func_86(uParam1, "Epsilon5", func_88(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 14:
			func_86(uParam1, "Epsilon6", func_88(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 15:
			func_86(uParam1, "Epsilon7", func_88(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 16:
			func_86(uParam1, "Epsilon8", func_88(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 17:
			func_86(uParam1, "Extreme1", func_88(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 18:
			func_86(uParam1, "Extreme2", func_88(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 19:
			func_86(uParam1, "Extreme3", func_88(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 20:
			func_86(uParam1, "Extreme4", func_88(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 21:
			func_86(uParam1, "Fanatic1", func_88(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_87(iParam0), 1, 0);
			break;
		
		case 22:
			func_86(uParam1, "Fanatic2", func_88(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_87(iParam0), 1, 0);
			break;
		
		case 23:
			func_86(uParam1, "Fanatic3", func_88(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_87(iParam0), 0, 1);
			break;
		
		case 24:
			func_86(uParam1, "Hao1", func_88(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_87(iParam0), 0, 1);
			break;
		
		case 25:
			func_86(uParam1, "Hunting1", func_88(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 26:
			func_86(uParam1, "Hunting2", func_88(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 27:
			func_86(uParam1, "Josh1", func_88(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 28:
			func_86(uParam1, "Josh2", func_88(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 29:
			func_86(uParam1, "Josh3", func_88(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 30:
			func_86(uParam1, "Josh4", func_88(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 31:
			func_86(uParam1, "Maude1", func_88(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 32:
			func_86(uParam1, "Minute1", func_88(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 33:
			func_86(uParam1, "Minute2", func_88(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 34:
			func_86(uParam1, "Minute3", func_88(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 35:
			func_86(uParam1, "MrsPhilips1", func_88(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 36:
			func_86(uParam1, "MrsPhilips2", func_88(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 37:
			func_86(uParam1, "Nigel1", func_88(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 38:
			func_86(uParam1, "Nigel1A", func_88(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 39:
			func_86(uParam1, "Nigel1B", func_88(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_87(iParam0), 1, 1);
			break;
		
		case 40:
			func_86(uParam1, "Nigel1C", func_88(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_87(iParam0), 1, 1);
			break;
		
		case 41:
			func_86(uParam1, "Nigel1D", func_88(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_87(iParam0), 1, 1);
			break;
		
		case 42:
			func_86(uParam1, "Nigel2", func_88(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 43:
			func_86(uParam1, "Nigel3", func_88(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 44:
			func_86(uParam1, "Omega1", func_88(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 45:
			func_86(uParam1, "Omega2", func_88(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 46:
			func_86(uParam1, "Paparazzo1", func_88(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 47:
			func_86(uParam1, "Paparazzo2", func_88(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 48:
			func_86(uParam1, "Paparazzo3", func_88(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 49:
			func_86(uParam1, "Paparazzo3A", func_88(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 50:
			func_86(uParam1, "Paparazzo3B", func_88(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 51:
			func_86(uParam1, "Paparazzo4", func_88(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 52:
			func_86(uParam1, "Rampage1", func_88(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 54:
			func_86(uParam1, "Rampage3", func_88(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 55:
			func_86(uParam1, "Rampage4", func_88(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 56:
			func_86(uParam1, "Rampage5", func_88(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 53:
			func_86(uParam1, "Rampage2", func_88(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 57:
			func_86(uParam1, "TheLastOne", func_88(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 58:
			func_86(uParam1, "Tonya1", func_88(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 59:
			func_86(uParam1, "Tonya2", func_88(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 60:
			func_86(uParam1, "Tonya3", func_88(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 61:
			func_86(uParam1, "Tonya4", func_88(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 62:
			func_86(uParam1, "Tonya5", func_88(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_86(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_87(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_88(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_89(iParam0) };
	if (unk_0x58478145CAF8429C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_89(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_90()
{
	if (unk_0x5018862FF5D9F844())
	{
		if (unk_0x693458AABD7F18D7() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_91()
{
	if (func_94() && !func_90())
	{
		return 1;
	}
	if (func_93() && func_92())
	{
		return 1;
	}
	return 0;
}

bool func_92()
{
	return Global_102954 > 0;
}

int func_93()
{
	if (Global_88844 != -1)
	{
		return 1;
	}
	return 0;
}

int func_94()
{
	if (Global_88844 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_82710[Global_88844 /*34*/].f_15, 20);
	}
	return 0;
}

int func_95()
{
	if ((Global_103225 == func_44() && unk_0x0EF1484C8ECA32F8()) && Global_103226)
	{
		return 1;
	}
	return 0;
}

void func_96()
{
	if (unk_0xBDD3EABACAB97D09(uLocal_57))
	{
		unk_0xE1E81CBB89115254(uLocal_57, 1);
	}
	if (!unk_0x769F0F6444C1ABE0(iLocal_52))
	{
		unk_0x3EFE40733EFB6649(iLocal_52, 156, 1);
		if (unk_0x354ACA1BAED67927(iLocal_67))
		{
			if (unk_0x58DF249E321EAB8E(iLocal_67) > 0.1f)
			{
				if (!iLocal_82)
				{
					if (!unk_0x769F0F6444C1ABE0(iLocal_53))
					{
						unk_0x9AFAF0E3E32231C7(iLocal_52, unk_0x585F703DF3E83B6E(iLocal_53, 31086, 0f, 0f, -0.1f), 0);
					}
					iLocal_82 = 1;
					iLocal_80 = 1;
					func_97();
				}
			}
		}
		else if (!unk_0x769F0F6444C1ABE0(iLocal_53))
		{
			unk_0xDC7A31134115BFF0(iLocal_53, 1);
			unk_0x67E5DE1657F60AC6(iLocal_53, 0);
		}
		if (unk_0x354ACA1BAED67927(iLocal_67))
		{
			if (unk_0x58DF249E321EAB8E(iLocal_67) > 0.6f)
			{
				func_97();
			}
		}
		else if (!unk_0x769F0F6444C1ABE0(iLocal_53))
		{
			unk_0xDC7A31134115BFF0(iLocal_53, 1);
			unk_0x67E5DE1657F60AC6(iLocal_53, 0);
		}
		if (unk_0x354ACA1BAED67927(iLocal_67))
		{
			if (unk_0x58DF249E321EAB8E(iLocal_67) == 1f)
			{
				if (!unk_0x769F0F6444C1ABE0(iLocal_53))
				{
					unk_0xDC7A31134115BFF0(iLocal_53, 1);
					unk_0x67E5DE1657F60AC6(iLocal_53, 0);
				}
			}
		}
		else
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_53))
			{
				unk_0xDC7A31134115BFF0(iLocal_53, 1);
				unk_0x67E5DE1657F60AC6(iLocal_53, 0);
			}
			func_97();
		}
	}
}

void func_97()
{
	if (!iLocal_83)
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_52))
		{
			unk_0x654FFF4D16298AC5(iLocal_52);
			unk_0x3A8EFBE4AB457FE2(5, uLocal_60, uLocal_59);
			unk_0x3A8EFBE4AB457FE2(5, uLocal_59, uLocal_60);
			unk_0x3A8EFBE4AB457FE2(0, uLocal_61, uLocal_59);
			unk_0x3A8EFBE4AB457FE2(2, uLocal_61, uLocal_60);
			unk_0x3A8EFBE4AB457FE2(2, uLocal_60, uLocal_61);
			if (unk_0x2860DA9980AC4109(iLocal_52, unk_0x2A5EB8B0FE590B91(), 50f, 50f, 50f, 0, 1, 0))
			{
				unk_0xDD0413EAB0ADDE6A(iLocal_52, unk_0x2A5EB8B0FE590B91(), 0, 16);
				unk_0x0E05C8E294DD31A1(iLocal_52, 1);
			}
			else
			{
				unk_0xCD6FB688ED8B6284(iLocal_52, unk_0x2A5EB8B0FE590B91(), 200f, -1, 0, 0);
			}
			unk_0x015B50BC21C88C8C(iLocal_52, 1);
			func_5(&Local_101, "RERHOAU", "RERHO_DIE", 4, 0, 0, 0);
			iLocal_83 = 1;
		}
	}
}

void func_98()
{
	if (bLocal_98)
	{
		unk_0x4C47904AE69D7393(iLocal_54, 0);
		unk_0x07A44999F605B530(iLocal_54, Local_48, 50f, -1, 0, 0);
		unk_0x015B50BC21C88C8C(iLocal_54, 1);
		unk_0x6C559FCFFD2365CB(&iLocal_54);
		func_48();
	}
}

void func_99()
{
	if (Local_101[2 /*10*/].f_7)
	{
		func_50(&Local_101, 2);
	}
	func_102();
	unk_0x63687F63EE229D10(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), &Local_48, 1, 1077936128, 0);
	unk_0xA40CBAB1923B2D9F(1, 0.5f);
	unk_0x3CF46CA72B595C27(1, 1f);
	if (Local_101[1 /*10*/].f_7)
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_57))
		{
			unk_0x789C84F1B8496AD0(&uLocal_57);
		}
		func_50(&Local_101, 1);
	}
	if (iLocal_80)
	{
		if (!unk_0xE781FF266FA8648E(iLocal_54, joaat("weapon_pistol"), 0) && unk_0x769F0F6444C1ABE0(iLocal_52))
		{
			if (!bLocal_100)
			{
				iLocal_47 = 2;
			}
			else if (func_101(&Local_101, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_266, 0))
			{
				iLocal_47 = 2;
			}
		}
		else
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_54))
			{
				if (!unk_0x769F0F6444C1ABE0(iLocal_52))
				{
					unk_0xCD6FB688ED8B6284(iLocal_54, iLocal_52, 100f, -1, 0, 0);
				}
				else
				{
					unk_0xCD6FB688ED8B6284(iLocal_54, unk_0x2A5EB8B0FE590B91(), 100f, -1, 0, 0);
				}
				unk_0x015B50BC21C88C8C(iLocal_54, 1);
				if (!bLocal_100)
				{
					if (func_101(&Local_101, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_266, 0))
					{
					}
					else
					{
						func_100(iLocal_54, "GENERIC_SHOCKED_HIGH", 24);
					}
				}
				else
				{
					func_100(iLocal_54, "GENERIC_SHOCKED_HIGH", 24);
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xFBC4596E19752537(1f);
			unk_0xFA96CEABD6118DCF(1);
			iLocal_47 = 2;
		}
	}
	else
	{
		func_157();
	}
}

void func_100(int iParam0, char* sParam1, int iParam2)
{
	unk_0x430053236FA97FB8(iParam0, sParam1, func_2(iParam2), 1);
}

bool func_101(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 1;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_102()
{
	if (func_4())
	{
		bLocal_98 = true;
	}
	if (bLocal_98 == 0)
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_54) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (iLocal_80)
			{
				unk_0x219EE6A7B599E7DC(&uLocal_79);
				unk_0x17DD40170243F0AB(0, unk_0x2A5EB8B0FE590B91(), 20000, 5f, 1073741824, 1073741824, 0);
				unk_0xEDF42871EAD55C9B(0, unk_0x2A5EB8B0FE590B91(), -1, 2048, 2);
				unk_0xF1C3427BFED79E6B(0, sLocal_267, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, 0, 0, 0);
				unk_0xCD6FB688ED8B6284(0, unk_0x2A5EB8B0FE590B91(), 150f, -1, 0, 0);
				unk_0xBD718C5BA2122192(uLocal_79);
				unk_0x234E551BB8E8813B(iLocal_54, uLocal_79);
				unk_0xEDD36C58DDE03C8F(&uLocal_79);
				unk_0x015B50BC21C88C8C(iLocal_54, 1);
			}
			else
			{
				unk_0x219EE6A7B599E7DC(&uLocal_79);
				unk_0xEB6893E20118DD4D(0, Local_48, 1f, 20000, 1193033728, 1056964608);
				unk_0x6B823DB6B46BB1F2(0, Local_48, -1, 2048, 2);
				unk_0xF1C3427BFED79E6B(0, sLocal_267, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, 0, 0, 0);
				unk_0xBD718C5BA2122192(uLocal_79);
				unk_0x234E551BB8E8813B(iLocal_54, uLocal_79);
				unk_0xEDD36C58DDE03C8F(&uLocal_79);
				unk_0x015B50BC21C88C8C(iLocal_54, 1);
			}
		}
	}
}

void func_103()
{
	if (unk_0xE8594BE97055E9A1(iLocal_53, unk_0x2A5EB8B0FE590B91(), 1))
	{
		if (!unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 2))
		{
			unk_0x3406B7CA9E05661E(unk_0x0FFED3E94261A832(), 2, 0);
			unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
		}
		unk_0xDC7A31134115BFF0(iLocal_53, 1);
		unk_0x67E5DE1657F60AC6(iLocal_53, 0);
		bLocal_76 = true;
		iLocal_80 = 1;
		func_97();
	}
	else if (!unk_0x7C8D4D8A617D31D0(iLocal_53))
	{
		unk_0x78F0842D5D2B0BBD(iLocal_53, 4, 0, 0);
	}
}

void func_104()
{
	if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_48, 50f, 50f, 25f, 0, 1, 0))
	{
		iLocal_266 = 0;
	}
	else
	{
		iLocal_266 = 1;
	}
}

int func_105()
{
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x759F285D4B31C388(unk_0x2A5EB8B0FE590B91())) > 1369f && !func_90())
		{
			return 0;
		}
	}
	if (func_91())
	{
		return 1;
	}
	if (func_84(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_106()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	Local_48 = { -96.4f, 6398.201f, 30.4542f };
	fLocal_51 = 0f;
	iVar0 = joaat("a_m_m_hillbilly_02");
	iVar1 = joaat("a_m_m_business_01");
	iVar2 = joaat("a_f_m_tourist_01");
	sVar3 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
	unk_0x0F39DF6675B2333E(iVar0);
	unk_0x0F39DF6675B2333E(iVar2);
	unk_0x0F39DF6675B2333E(iVar1);
	unk_0xA7C81DED990D3418(sLocal_267);
	if (((unk_0xA1FC9D7AEA164881(iVar0) && unk_0xA1FC9D7AEA164881(iVar2)) && unk_0xA1FC9D7AEA164881(iVar1)) && unk_0x45834D6C20FFF689(sLocal_267))
	{
		unk_0x333EF04F1A5ADEB5(Local_48, 5f, 1, 1, 0, 0);
		iLocal_53 = unk_0xD00B79C0E206E082(5, iVar2, Local_48, fLocal_51, 1, 1);
		unk_0xB5FB8AA9DCCAC75B(iLocal_53, 1);
		unk_0x28AB07F44A348EFC(iLocal_53, sVar3);
		unk_0x31AC59B7C21A2047(iLocal_53, 20, 1);
		iLocal_52 = unk_0xD00B79C0E206E082(22, iVar0, Local_48, fLocal_51, 1, 1);
		unk_0x67E5DE1657F60AC6(iLocal_52, 125);
		unk_0x387C4FCA8456755D(iLocal_52, 125);
		unk_0xAE833788DEAB23CA(iLocal_52, 128, 1);
		unk_0xB5FB8AA9DCCAC75B(iLocal_52, 1);
		unk_0x31AC59B7C21A2047(iLocal_52, 42, 1);
		unk_0x19C48DF4EEAACE35(iLocal_52, 1.5f);
		unk_0xCAEEADF5FA40352F(iLocal_52, 1);
		unk_0x65648841F3329FD6(iLocal_52, 40f);
		unk_0x31AC59B7C21A2047(iLocal_52, 20, 1);
		unk_0x4AE41ACC506F68A1(iLocal_52, fLocal_93);
		unk_0x1F441E7F164B3048(iLocal_52, fLocal_94);
		unk_0xD137C6D50D9EAB83(iLocal_52, fLocal_95);
		unk_0x5CB885FF4E3F4FBD(iLocal_52, fLocal_96);
		iLocal_54 = unk_0xD00B79C0E206E082(4, iVar1, -98.113f, 6405.354f, 30.6005f, fLocal_51, 1, 1);
		unk_0xC3F6AB4725FE6F81(Vector(31.64024f, 6405.058f, -98.41389f) - Vector(5f, 5f, 5f), Vector(31.64024f, 6405.058f, -98.41389f) + Vector(5f, 5f, 5f), 0, 0, 1, 0);
		uLocal_65 = unk_0x25118499AB6F447B(Vector(31.64024f, 6405.058f, -98.41389f) - Vector(40f, 40f, 40f), Vector(31.64024f, 6405.058f, -98.41389f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
		unk_0x2725C3746060DA66(iLocal_54, 0);
		unk_0xCAEEADF5FA40352F(iLocal_54, 1);
		Local_48.f_2 = (Local_48.f_2 + 1f);
		Local_70 = { Local_48 };
		Local_73 = { 0f, 0f, fLocal_51 };
		iLocal_67 = unk_0x6D46C949A32B8D73(Local_70, Local_73, 2);
		unk_0xA2218E1CAB0028A5(iLocal_67, 1);
		unk_0x5F778B8D6D7DF47B(iLocal_52, iLocal_67, sLocal_267, "villian_struggle_loop", 1000f, -4f, 5, 0, 1148846080, 0);
		unk_0x5F778B8D6D7DF47B(iLocal_53, iLocal_67, sLocal_267, "girl_struggle_loop", 1000f, -4f, 5, 0, 1148846080, 0);
		uLocal_69 = unk_0x6D46C949A32B8D73(Local_70, Local_73, 2);
		unk_0xA2218E1CAB0028A5(uLocal_69, 1);
		unk_0x5F778B8D6D7DF47B(iLocal_54, iLocal_69, sLocal_267, "bystander_taking_cover", 1000f, -1.5f, 5, 0, 1148846080, 0);
		unk_0x31AC59B7C21A2047(iLocal_54, 185, 1);
		unk_0x0013D519C885E60B(iLocal_52, joaat("weapon_pistol"), -1, 1, 1);
		unk_0x0E9E5456339F425B(iLocal_52, 1);
		unk_0xEE8231F61ED038B0("re_rescuehostage relManager", &uLocal_61);
		unk_0xEE8231F61ED038B0("re_rescuehostage relBadGuy", &uLocal_60);
		uLocal_59 = unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91());
		unk_0x3A8EFBE4AB457FE2(5, uLocal_60, uLocal_59);
		unk_0x3A8EFBE4AB457FE2(5, uLocal_59, uLocal_60);
		unk_0x3C030E241A3543D2(iLocal_54, uLocal_61);
		unk_0x3C030E241A3543D2(iLocal_52, uLocal_60);
		unk_0x4C47904AE69D7393(iLocal_53, 1);
		unk_0x4C47904AE69D7393(iLocal_54, 1);
		unk_0x4C47904AE69D7393(iLocal_52, 1);
		unk_0x89AEA58335779997(iLocal_54, 11, 1);
		unk_0x89AEA58335779997(iLocal_54, 17, 1);
		unk_0x89AEA58335779997(iLocal_54, 13, 0);
		unk_0x89AEA58335779997(iLocal_54, 5, 0);
		unk_0xD7DFE610ED2BF500(iLocal_54, 0);
		unk_0x89AEA58335779997(iLocal_53, 11, 1);
		unk_0xD7DFE610ED2BF500(iLocal_53, 0);
		unk_0x89AEA58335779997(iLocal_53, 13, 0);
		unk_0x89AEA58335779997(iLocal_53, 5, 0);
		func_108(&Local_101, 0, unk_0x2A5EB8B0FE590B91(), sLocal_90, 0, 1);
		func_108(&Local_101, 1, iLocal_52, "RHCriminal", 0, 1);
		func_108(&Local_101, 2, iLocal_53, "RHHostage", 0, 1);
		func_108(&Local_101, 3, iLocal_54, "RHBystander", 0, 1);
		unk_0xFA96CEABD6118DCF(0);
		unk_0xFBC4596E19752537(0f);
		func_107(1);
		unk_0x4FF1902E8A10F154(-89f, 6392f, 32f, 3f, 2);
		unk_0xC1B1E9A034A63A62(8000);
		return 1;
	}
	return 0;
}

void func_107(bool bParam0)
{
	if (bParam0)
	{
		Global_25452 = 1;
	}
	else
	{
		Global_25452 = 0;
	}
}

void func_108(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(iParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(iParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(iParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(iParam2, 1);
			}
		}
	}
}

void func_109()
{
}

void func_110()
{
}

void func_111()
{
	switch (func_12())
	{
		case 0:
			sLocal_90 = "MICHAEL";
			sLocal_91 = "RERHO_MDOWN";
			break;
		
		case 1:
			sLocal_90 = "FRANKLIN";
			sLocal_91 = "RERHO_FDOWN";
			break;
		
		case 2:
			sLocal_90 = "TREVOR";
			sLocal_91 = "RERHO_TDOWN";
			break;
	}
}

void func_112(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_114(iParam0);
	unk_0x2D47D0FBCE479E9D(0);
	unk_0x0A397D1B8C0E7CF0(1);
	Global_103222 = 0;
	func_113();
}

void func_113()
{
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			unk_0x02E663D7DDAE8202(unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)), 1);
		}
		unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 32, 0);
	}
}

void func_114(int iParam0)
{
	Global_103225 = iParam0;
}

int func_115(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_141282)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_44();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_156())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x759F285D4B31C388(unk_0x2A5EB8B0FE590B91())) > 1369f && !func_90())
			{
				return 0;
			}
		}
		if (!Global_103236.f_8866)
		{
			return 0;
		}
		if (func_25(0))
		{
			return 0;
		}
		if (func_91())
		{
			return 0;
		}
		if (func_155())
		{
			return 0;
		}
		if (Global_103225 != -1)
		{
			return 0;
		}
		if (func_14(func_12()))
		{
			if (func_84(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_154(iParam3))
		{
			return 0;
		}
		if (func_14(func_12()))
		{
			if (func_153(func_12()) == 4 || func_153(func_12()) == 5)
			{
				return 0;
			}
		}
		if (func_14(func_12()))
		{
			if (!func_152(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_151(Global_103236.f_24776.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x3732B96D7A1859B4() - Global_103227) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_150())
		{
			return 0;
		}
		if (unk_0xB2F8D1B7C533483C())
		{
			return 0;
		}
		if (unk_0x0EF1484C8ECA32F8())
		{
			return 0;
		}
		if (!func_141(4))
		{
			return 0;
		}
		if (!func_76(5))
		{
			return 0;
		}
		if (func_140(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xA419466089F321B4(unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91())))
		{
			if ((unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()) == unk_0x65B447E36C1ED4C2(377.153f, -717.567f, 10.0536f) || unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()) == unk_0x65B447E36C1ED4C2(320.9934f, 265.2515f, 82.1221f)) || unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91()) == unk_0x65B447E36C1ED4C2(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_140(0, 0))
		{
			return 0;
		}
		if (Global_25368)
		{
			return 0;
		}
		if (func_154(30) && !func_140(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_14(func_12()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_103236.f_2164.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_103236.f_2164.f_539.f_2276[iVar4];
				if (func_139(iVar8))
				{
					if (func_117(iVar4))
					{
						if (!func_116(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Var5) < (210f * 210f))
							{
								if (func_12() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_116(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_103236.f_2164.f_539.f_2276[iParam0];
	return func_118(iVar0);
}

int func_118(int iParam0)
{
	return func_119(iParam0, 1);
}

int func_119(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_139(iParam0))
	{
		return 0;
	}
	func_120(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_120(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_121(func_132(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_121(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_131(iParam0, iParam1))
	{
		iVar0 = func_130(iParam1);
		iVar1 = func_128(iParam0);
		iVar2 = (func_128(iParam0) - func_128(iParam1));
		iVar3 = (func_130(iParam0) - func_130(iParam1));
		iVar4 = (func_127(iParam0) - func_127(iParam1));
		iVar5 = (func_126(iParam0) - func_126(iParam1));
		iVar6 = (func_125(iParam0) - func_125(iParam1));
		iVar7 = (func_124(iParam0) - func_124(iParam1));
	}
	else
	{
		iVar0 = func_130(iParam0);
		iVar1 = func_128(iParam1);
		iVar2 = (func_128(iParam1) - func_128(iParam0));
		iVar3 = (func_130(iParam1) - func_130(iParam0));
		iVar4 = (func_127(iParam1) - func_127(iParam0));
		iVar5 = (func_126(iParam1) - func_126(iParam0));
		iVar6 = (func_125(iParam1) - func_125(iParam0));
		iVar7 = (func_124(iParam1) - func_124(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_123(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_122(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_122(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_123(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_124(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_125(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_126(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_127(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_128(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_129(unk_0xAA4F14DA15DB0B51(iParam0, 31), -1, 1)) + 2011;
}

int func_129(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_130(int iParam0)
{
	return iParam0 & 15;
}

int func_131(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_139(iParam1) || !func_139(iParam0))
	{
		return 1;
	}
	iVar0 = func_128(iParam0);
	iVar1 = func_128(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	iVar1 = func_130(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_127(iParam0);
	iVar1 = func_127(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_126(iParam0);
	iVar1 = func_126(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_125(iParam0);
	iVar1 = func_125(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_124(iParam0);
	iVar1 = func_124(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_132()
{
	var uVar0;
	
	func_138(&uVar0, unk_0xD887411BD4A4A92D());
	func_137(&uVar0, unk_0xA4EAAF8247A3A69E());
	func_136(&uVar0, unk_0xDA870B7547A455EA());
	func_135(&uVar0, unk_0x56E76B9CA4BBAA18());
	func_134(&uVar0, unk_0x0FD588FC21950895());
	func_133(&uVar0, unk_0x15C180E135C728D1());
	return uVar0;
}

void func_133(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_134(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_135(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_130(*uParam0);
	iVar1 = func_128(*uParam0);
	if (iParam1 < 1 || iParam1 > func_123(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_136(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_137(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_138(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_124(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_125(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_126(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_128(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_130(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_127(iParam0);
	if (iVar5 < 1 || iVar5 > func_123(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_140(int iParam0, int iParam1)
{
	if (unk_0xAA4F14DA15DB0B51(Global_103236.f_24776.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0)
{
	int iVar0;
	
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				iVar0 = func_12();
				if (!func_14(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_149()) || Global_102283) || Global_25224) || func_148()) || func_19(8, -1)) || func_147()) || func_146()) || func_145()) || func_144()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1) || func_149()) || Global_25224) || func_148()) || func_19(8, -1)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_149()) || Global_102283) || Global_25224) || func_148()) || func_19(8, -1)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_103236.f_7469.f_919[iVar0] == 5) || Global_36360 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0)) || func_149()) || Global_102283) || Global_25224) || func_148()) || func_19(8, -1)) || func_147()) || func_146()) || func_144()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_149() || unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0) || func_19(8, -1)) || func_144()) || func_143()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_19(8, -1) || func_147()) || func_146()) || func_143()) || func_142())
						{
							return 0;
						}
						if ((unk_0x0AFBA1AD6DC1C540() && unk_0xD7037D74D866BD7D() != 3) && unk_0xE858C2EA240D3C68() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
						{
							if ((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || func_149()) || Global_25224) || func_148()) || func_19(8, -1)) || func_146()) || func_145()) || func_144()) || Global_103236.f_7469.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || !unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832())) || !unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832())) || !unk_0x0B21CC5276C2CE1B()) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || func_149()) || func_146()) || Global_102283) || Global_25224) || func_148()) || Global_36944) || func_19(8, -1)) || func_145()) || func_143()) || func_144()) || Global_103236.f_7469.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xC567CF20FD312AC1(unk_0x2A5EB8B0FE590B91(), 0) || !unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832())) || !unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832())) || !unk_0x0B21CC5276C2CE1B()) || unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0)) || unk_0xB54451B05F280358(unk_0x2A5EB8B0FE590B91())) || unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1)) || unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91())) || unk_0x4A9CF3B18638900F(unk_0x2A5EB8B0FE590B91())) || unk_0x9D4B91509A1B375B(unk_0x2A5EB8B0FE590B91())) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 1)) || unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832())) || func_149()) || Global_102283) || Global_25224) || func_148()) || func_19(8, -1)) || func_145()) || func_143()) || func_147()) || func_146()) || func_144())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_142()
{
	return Global_91816.f_1;
}

int func_143()
{
	if (Global_88844 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_82710[Global_88844 /*34*/].f_15, 13);
	}
	return 0;
}

int func_144()
{
	if (unk_0x09952BA662A7629B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	if (Global_70060)
	{
		return 1;
	}
	else if (Global_55848 && !Global_55854)
	{
		return 1;
	}
	return 0;
}

bool func_146()
{
	return Global_91829.f_310 > 0;
}

bool func_147()
{
	return Global_91829.f_309 > 0;
}

var func_148()
{
	return Global_1312852;
}

int func_149()
{
	if (!unk_0x591AF4C50B46E014())
	{
		return Global_89400.f_44 == 1;
	}
	return 0;
}

int func_150()
{
	func_11();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_151(int iParam0)
{
	return func_131(func_132(), iParam0);
}

int func_152(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_12();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
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
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_153(int iParam0)
{
	if (!func_14(iParam0))
	{
		return 7;
	}
	return Global_103236.f_7469.f_919[iParam0];
}

bool func_154(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_156())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xAA4F14DA15DB0B51(Global_103236.f_24776, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xAA4F14DA15DB0B51(Global_103236.f_24776.f_1, iVar0);
	}
	return bVar1;
}

int func_155()
{
	var uVar0;
	
	if (Global_25372)
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			uVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (unk_0x7FAC45D56235AB39(uVar0, 0))
			{
				if (!unk_0x769F0F6444C1ABE0(unk_0x8F8E5C33266ED978(uVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_156()
{
	var uVar0;
	
	if (unk_0x473DD4DAC8F55B34())
	{
		if (unk_0x5D806CF6D2796CC3())
		{
			if (unk_0x103C975BDE64E3C6())
			{
				unk_0xC225A90A8DE0D96B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF6082E2ADA1C795B(&uVar0, 2);
				unk_0xF6082E2ADA1C795B(&uVar0, 4);
				unk_0xF6082E2ADA1C795B(&uVar0, 6);
				unk_0xF6082E2ADA1C795B(&Global_25, 2);
				unk_0xF6082E2ADA1C795B(&Global_25, 4);
				unk_0xF6082E2ADA1C795B(&Global_25, 6);
				unk_0xC94674712BED1A82(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x4ED4E0D471EA6680())
				{
					iVar0 = unk_0x29B06605BA5CF280(866);
					unk_0xF6082E2ADA1C795B(&iVar0, 0);
					unk_0x01D51AAE02B320BA(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_141537 == 2)
	{
		return 1;
	}
	else if (Global_141537 == 3)
	{
		return 0;
	}
	if (unk_0x4ED4E0D471EA6680())
	{
		if (unk_0xAA4F14DA15DB0B51(unk_0x29B06605BA5CF280(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_157()
{
	if (func_95())
	{
		unk_0xFBC4596E19752537(1f);
		unk_0xFA96CEABD6118DCF(1);
	}
	if (iLocal_47 != 0)
	{
		unk_0x28BD561DA3E207B1(uLocal_60);
		unk_0x28BD561DA3E207B1(uLocal_61);
		unk_0x8E8E9C74B87B9F11(20000);
		unk_0x6790C1CEA32DA629(uLocal_65, 0);
		unk_0x945CEEA33F8631DD(iLocal_64);
		func_107(0);
	}
	if (!unk_0x769F0F6444C1ABE0(iLocal_52) && !unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0xCD6FB688ED8B6284(iLocal_52, unk_0x2A5EB8B0FE590B91(), 100f, -1, 0, 0);
		unk_0x015B50BC21C88C8C(iLocal_52, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	func_158(-1);
	unk_0xA232817B0B36F2E5();
}

void func_158(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_95())
	{
		func_162(iParam0);
		unk_0x016711C6F4D08FCE(0, 0);
		Global_103227 = unk_0x3732B96D7A1859B4();
		func_161(30000);
		StringCopy(&cVar0, func_160(Global_103225, 1), 64);
		if (func_43(Global_103225) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_103224, 64);
		}
		unk_0xFB2DC910C33320E0(&cVar0, Global_103222, (unk_0x3732B96D7A1859B4() - Global_103223), 0);
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_103232, 0) && Global_103236.f_24776.f_2 < 3)
	{
		unk_0x507FE690B1271947(&Global_103232, 0);
	}
	func_159(&Global_25281);
	Global_103226 = 0;
	func_114(-1);
}

void func_159(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35775)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35774 = 0;
	Global_35776 = 0;
	Global_35813 = 15;
	Global_55851 = 0;
	Global_55852 = 0;
}

char* func_160(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_161(int iParam0)
{
	Global_36364 = (unk_0x3732B96D7A1859B4() + iParam0);
}

void func_162(int iParam0)
{
	func_163(iParam0, 0, func_168(iParam0));
}

void func_163(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_132();
	func_166(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_165(iParam0, &uVar0);
	Var1 = { func_164(&uVar0) };
}

struct<16> func_164(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_126(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_125(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_124(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_127(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_130(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_128(*uParam0), 64);
	return Var0;
}

void func_165(int iParam0, var uParam1)
{
	Global_103236.f_24776.f_43[iParam0] = *uParam1;
}

void func_166(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_128(*uParam0);
	iVar1 = func_130(*uParam0);
	iVar2 = func_127(*uParam0);
	iVar3 = func_126(*uParam0);
	iVar4 = func_125(*uParam0);
	iVar5 = func_124(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_123(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_123(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_167(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_167(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_138(uParam0, iParam1);
	func_137(uParam0, iParam2);
	func_136(uParam0, iParam3);
	func_134(uParam0, iParam5);
	func_135(uParam0, iParam4);
	func_133(uParam0, iParam6);
}

int func_168(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

