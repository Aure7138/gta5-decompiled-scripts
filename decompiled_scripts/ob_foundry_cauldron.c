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
	
	if (unk_0xD63E63DFACCEB80E(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x746960881FB19A89(uScriptParam_0))
		{
			if (unk_0x65E80118D23AFB04(uScriptParam_0) && unk_0x7B47A371E2D93C2C(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
						{
							uVar0 = unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0());
							if (unk_0xF67FA89DDC5D0BDC(uVar0))
							{
								if (unk_0x7CE60248D6135E74(uVar0))
								{
									if (unk_0x5BB61188C2E01F20())
									{
										unk_0x21ED45FD62BE6E8D();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x3749C5550F0953F2())
						{
							if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
							{
								if (!unk_0x746960881FB19A89(uLocal_4))
								{
									uLocal_4 = unk_0x73A3AED255AF2667(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0x3C5A2499E52A9A94(uLocal_3))
								{
									if (unk_0x746960881FB19A89(uLocal_4))
									{
										uVar0 = unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0());
										if (unk_0xF67FA89DDC5D0BDC(uVar0))
										{
											if (unk_0x7CE60248D6135E74(uVar0))
											{
												if (unk_0x5BB61188C2E01F20())
												{
													uLocal_3 = unk_0x14B5563C7C3321EA("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0x3C5A2499E52A9A94(uLocal_3))
	{
		unk_0xF79214064B997EEA(uLocal_3, 0);
	}
	if (unk_0x746960881FB19A89(uLocal_4))
	{
		unk_0x8FCF30FFEAA1C4D4(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xE60DEFFB2A853900();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x6B08EC9A88700FBB(uParam0, uParam0))
	{
	}
}

