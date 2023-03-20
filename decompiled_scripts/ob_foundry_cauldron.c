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
	
	if (unk_0x7547D7CF93115D6D(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xFD68187442384158(uScriptParam_0))
		{
			if (unk_0xDBBE1D10A2F589A7(uScriptParam_0) && unk_0x25531002BCF0D968(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
						{
							uVar0 = unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD());
							if (unk_0x93AF5BB44F9A2E1B(uVar0))
							{
								if (unk_0xB5D4753FD7641AB7(uVar0))
								{
									if (unk_0x332341B01881B470())
									{
										unk_0x903BC66D86D2CC1E();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x09B3E74864C634DA())
						{
							if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
							{
								if (!unk_0xFD68187442384158(uLocal_4))
								{
									uLocal_4 = unk_0x78608A3628DF265E(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0xED36ED704A7BADAF(uLocal_3))
								{
									if (unk_0xFD68187442384158(uLocal_4))
									{
										uVar0 = unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD());
										if (unk_0x93AF5BB44F9A2E1B(uVar0))
										{
											if (unk_0xB5D4753FD7641AB7(uVar0))
											{
												if (unk_0x332341B01881B470())
												{
													uLocal_3 = unk_0xB9B1EE085AEABF71("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0xED36ED704A7BADAF(uLocal_3))
	{
		unk_0x9F5923D000431FF4(uLocal_3, 0);
	}
	if (unk_0xFD68187442384158(uLocal_4))
	{
		unk_0x05DADA1340CBB893(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x883793591E631A3B();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0xA858564DC37EED5E(uParam0, uParam0))
	{
	}
}

