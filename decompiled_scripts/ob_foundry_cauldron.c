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
	
	if (unk_0xBCA819F9975BEDFA(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x23E9113C762466ED(uScriptParam_0))
		{
			if (unk_0x16281BACBF5409B8(uScriptParam_0) && unk_0x82F1A060D8F4583B(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
						{
							uVar0 = unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D());
							if (unk_0x623BDE1B17A9D9E3(uVar0))
							{
								if (unk_0x1F02DB541727C048(uVar0))
								{
									if (unk_0x7C78CD7E10D3835F())
									{
										unk_0xD250AE1AB37DC648();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xD181F97E98E28C18())
						{
							if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
							{
								if (!unk_0x23E9113C762466ED(uLocal_4))
								{
									uLocal_4 = unk_0x29280EF6724677F5(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0x97F2912BC85D905D(uLocal_3))
								{
									if (unk_0x23E9113C762466ED(uLocal_4))
									{
										uVar0 = unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D());
										if (unk_0x623BDE1B17A9D9E3(uVar0))
										{
											if (unk_0x1F02DB541727C048(uVar0))
											{
												if (unk_0x7C78CD7E10D3835F())
												{
													uLocal_3 = unk_0x4281F7DFB73874A8("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0x97F2912BC85D905D(uLocal_3))
	{
		unk_0x0A977DD607DA1424(uLocal_3, 0);
	}
	if (unk_0x23E9113C762466ED(uLocal_4))
	{
		unk_0x7572E8CAC3330ACE(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x921053BAF754303D();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x6A7B0D91FD88D9EE(uParam0, uParam0))
	{
	}
}

