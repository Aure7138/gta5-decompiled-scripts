#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	
	if (unk_0x76BF814AB8D4CAB8(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x31F12808DC47A9E5(uScriptParam_0))
		{
			if (unk_0x7F92B610D05B72B6(uScriptParam_0) && unk_0xE7FAF8E78F7D3A73(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
						{
							uVar0 = unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4());
							if (unk_0xB79050CDE709F080(uVar0))
							{
								if (unk_0x44057CDFA5C14B91(uVar0))
								{
									if (unk_0xFD45636C96407D04())
									{
										unk_0xF43D99776B580DA7();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x8851E7053F291F92())
						{
							if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
							{
								if (!unk_0x31F12808DC47A9E5(uLocal_4))
								{
									uLocal_4 = unk_0x7F058F004EA8664C(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0x91EBF69195E33B5E(uLocal_3))
								{
									if (unk_0x31F12808DC47A9E5(uLocal_4))
									{
										uVar0 = unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4());
										if (unk_0xB79050CDE709F080(uVar0))
										{
											if (unk_0x44057CDFA5C14B91(uVar0))
											{
												if (unk_0xFD45636C96407D04())
												{
													uLocal_3 = unk_0xB819E2CDF1D7AC76("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (unk_0x91EBF69195E33B5E(uLocal_3))
	{
		unk_0xD998AE20C27FA52C(uLocal_3, 0);
	}
	if (unk_0x31F12808DC47A9E5(uLocal_4))
	{
		unk_0xF0862FA354B164C4(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x810C5D6462DD69E6();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x9D39145AD645E383(uParam0, uParam0))
	{
	}
}

