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
	
	if (unk_0x9CEB376419A71A96(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC1EDB61CE0A4B94E(uScriptParam_0))
		{
			if (unk_0xF956B5861E255755(uScriptParam_0) && unk_0x98934607F8D0FB03(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
						{
							uVar0 = unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E());
							if (unk_0x80B7B1E21DC40E6E(uVar0))
							{
								if (unk_0xD9A81E12D87866A2(uVar0))
								{
									if (unk_0x0600F9DF60DEFC93())
									{
										unk_0x400383B21251468A();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x137D26BF6B6827A1())
						{
							if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
							{
								if (!unk_0xC1EDB61CE0A4B94E(uLocal_4))
								{
									uLocal_4 = unk_0x8CF711709719C86E(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0x912912C4363CC45B(uLocal_3))
								{
									if (unk_0xC1EDB61CE0A4B94E(uLocal_4))
									{
										uVar0 = unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E());
										if (unk_0x80B7B1E21DC40E6E(uVar0))
										{
											if (unk_0xD9A81E12D87866A2(uVar0))
											{
												if (unk_0x0600F9DF60DEFC93())
												{
													uLocal_3 = unk_0x4C50CB12FD60B12E("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0x912912C4363CC45B(uLocal_3))
	{
		unk_0xD5B97BF018873ADD(uLocal_3, 0);
	}
	if (unk_0xC1EDB61CE0A4B94E(uLocal_4))
	{
		unk_0x61EEBF9B5AB9820D(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xF5DF8F3392CDD07B();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x2F6869889D97DFED(uParam0, uParam0))
	{
	}
}

